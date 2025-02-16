/*
 * Copyright 2006-2016 zorba.io
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "stdafx.h"

#include <zorba/config.h>

#include "diagnostics/assert.h"
#include "diagnostics/util_macros.h"
#include "diagnostics/xquery_diagnostics.h"

#include "system/globalenv.h"

#include "compiler/expression/flwor_expr.h"
#include "compiler/expression/path_expr.h"
#include "compiler/expression/fo_expr.h"
#include "compiler/expression/script_exprs.h"
#include "compiler/expression/update_exprs.h"
#include "compiler/expression/var_expr.h"
#include "compiler/expression/expr.h"
#include "compiler/expression/expr_iter.h"
#include "compiler/expression/function_item_expr.h"

#include "compiler/api/compilercb.h"

#include "compiler/xqddf/collection_decl.h"

#include "functions/function.h"

#include "types/root_typemanager.h"
#include "types/typeops.h"

//#define THROW_XPST0005

namespace zorba
{


static xqtref_t create_axis_step_type(
    TypeManager* tm,
    store::StoreConsts::NodeKind nodekind,
    const store::Item_t& nodename,
    SequenceType::Quantifier quant,
    bool untyped);


static xqtref_t axis_step_type(
    static_context* sctx,
    const axis_step_expr* axisStep,
    const NodeXQType* inputType);


/*******************************************************************************

********************************************************************************/
xqtref_t expr::get_return_type()
{
  if (theType != NULL)
    return theType;

  compute_return_type(false, NULL);

  return theType;
}


/*******************************************************************************

********************************************************************************/
void expr::compute_return_type(bool deep, bool* modified)
{
  if (deep)
  {
    ExprIterator iter(this);
    while (!iter.done())
    {
      (**iter)->compute_return_type(deep, modified);
      iter.next();
    }
  }

  TypeManager* tm = theSctx->get_typemanager();
  RootTypeManager& rtm = GENV_TYPESYSTEM;

  expr_kind_t kind = get_expr_kind();

  xqtref_t contentType;
  xqtref_t newType;

  switch (kind)
  {
  case if_expr_kind:
  {
    if_expr* e = static_cast<if_expr*>(this);

    newType = TypeOps::union_type(*e->theThenExpr->get_return_type(),
                                  *e->theElseExpr->get_return_type(),
                                  tm);
    break;
  }

  case validate_expr_kind:
  {
    theType = rtm.ANY_NODE_TYPE_ONE;
    return;
  }

  case flwor_expr_kind:
  {
    flwor_expr* e = static_cast<flwor_expr*>(this);

    SequenceType::Quantifier quant = SequenceType::QUANT_ONE;

    csize numClauses = e->num_clauses();

    for (csize i = 0; i < numClauses && quant != SequenceType::QUANT_STAR; ++i)
    {
      const flwor_clause* c = e->theClauses[i];

      switch (c->get_kind())
      {
      case flwor_clause::for_clause :
      {
        const for_clause* fc = static_cast<const for_clause *>(c);
        quant = TypeOps::union_quant(quant,
                                     fc->get_expr()->get_return_type()->get_quantifier());
        break;
      }
      case flwor_clause::window_clause :
      {
        quant = SequenceType::QUANT_STAR;
        break;
      }
      case flwor_clause::where_clause :
      {
        quant = TypeOps::union_quant(quant, SequenceType::QUANT_QUESTION);
        break;
      }
      default:
        break;
      }
    }

    newType = tm->create_type_x_quant(*e->theReturnExpr->get_return_type(),
                                      quant);

    break;
  }

  case var_expr_kind:
  {
    var_expr* e = static_cast<var_expr*>(this);
    var_expr::var_kind varKind = e->get_kind();

    xqtref_t derivedType;
    expr* domainExpr = NULL;

    // The translator has already set theDeclaredType of pos_vars, count_vars,
    // wincond_out_pos_vars, and wincond_in_pos_vars to xs:positiveInteger.
    switch (varKind)
    {
    case var_expr::pos_var:
    case var_expr::wincond_out_pos_var:
    case var_expr::wincond_in_pos_var:
    case var_expr::count_var:
    {
      newType = e->theDeclaredType;
      break;
    }
    case var_expr::for_var:
    case var_expr::let_var:
    case var_expr::win_var:
    case var_expr::wincond_in_var:
    case var_expr::wincond_out_var:
    case var_expr::groupby_var:
    case var_expr::non_groupby_var:
    case var_expr::copy_var:
    {
      domainExpr = e->get_domain_expr();
      ZORBA_ASSERT(domainExpr != NULL);

      xqtref_t domainType = domainExpr->get_return_type();

      if (varKind == var_expr::for_var)
      {
        if (domainType->type_kind() == XQType::EMPTY_KIND)
          derivedType = rtm.ITEM_TYPE_ONE;
        else
          derivedType = TypeOps::prime_type(tm, *domainType);

        if (e->get_forlet_clause()->is_allowing_empty())
        {
          derivedType = tm->create_type(*derivedType, SequenceType::QUANT_QUESTION);
        }
      }
      else if (varKind == var_expr::wincond_in_var ||
               varKind == var_expr::wincond_out_var)
      {
        // TODO: we can be a little more specific here: if the quantifier of the
        // domain type is PLUS or ONE, then the quantifier of the "current" cond
        // var is ONE.
        derivedType = tm->create_type(*domainType, SequenceType::QUANT_QUESTION);
      }
      else if (varKind == var_expr::non_groupby_var)
      {
        derivedType = tm->create_type(*domainType, SequenceType::QUANT_STAR);
      }
      else
      {
        derivedType = domainType;
      }

      break;
    }
    case var_expr::prolog_var:
    {
      // NOTE: For const global vars, their declared type is set to the
      // type of their init expr, if any. This is done in 
      // translator::end_visit(const GlobalVarDecl& v, void*)

      csize numSetExprs = e->num_set_exprs();

      if (e->get_ccb()->getPhase() == CompilerCB::OPTIMIZATION &&
          numSetExprs > 0 &&
          !e->is_external() &&
          !e->isInTypeCompute())
      {
        e->setInTypeCompute();

        var_set_expr* setExpr = e->get_set_expr(0);

        derivedType = setExpr->get_expr()->get_return_type();

        for (csize i = 1; i < numSetExprs; ++i)
        {
          if (derivedType == rtm.ITEM_TYPE_STAR)
            break;

          setExpr = e->get_set_expr(i);

          derivedType = TypeOps::union_type(*derivedType,
                                            *setExpr->get_expr()->get_return_type(),
                                            tm);
        }

        e->resetInTypeCompute();
      }

      break;
    }
    case var_expr::local_var: // TODO: compute derived type for const local vars.
    case var_expr::catch_var: // TODO
    case var_expr::arg_var:
    case var_expr::eval_var:
    {
      break;
    }
    default:
    {
      ZORBA_ASSERT(false);
    }
    }

    // NOTE: no derived type should be computed for mutable global/local vars.

    if (derivedType == NULL)
    {
      newType = (e->theDeclaredType == NULL ? rtm.ITEM_TYPE_STAR : e->theDeclaredType);
    }
    else
    {
      newType = (e->theDeclaredType == NULL ?
                 derivedType :
                 TypeOps::intersect_type(*derivedType, *e->theDeclaredType, tm));
    }
    break;
  }

  case relpath_expr_kind:
  {
    relpath_expr* e = static_cast<relpath_expr*>(this);

    if (e->size() == 0)
    {
      newType = rtm.EMPTY_TYPE;
    }
    else if (e->size() == 1)
    {
      newType = e->theSteps[0]->get_return_type();
    }
    else
    {
      xqtref_t sourceType = e->theSteps[0]->get_return_type();

      if (sourceType->is_empty() || sourceType->is_none())
      {
        newType = sourceType;
      }
      else if (sourceType->type_kind() == XQType::NODE_TYPE_KIND)
      {
        xqtref_t stepType = sourceType;

        for (csize i = 1; i < e->size(); ++i)
        {
          const axis_step_expr* axisStep = static_cast<axis_step_expr*>(e->theSteps[i]);

          stepType = axis_step_type(theSctx,
                                    axisStep,
                                    static_cast<const NodeXQType*>(stepType.getp()));

          if (stepType->is_empty() || stepType->is_none())
            break;
        }

        newType = stepType.getp();
      }
      else if (sourceType->type_kind() == XQType::ITEM_KIND)
      {
        // TODO: improve this
        newType = rtm.ANY_NODE_TYPE_STAR;
      }
      else
      {
        throw XQUERY_EXCEPTION(err::XPTY0020, ERROR_LOC(get_loc()));
      }
    }
    break;
  }

  case axis_step_expr_kind:
  {
    axis_step_expr* e = static_cast<axis_step_expr*>(this);

    newType = (e->theNodeTest == NULL ?
               rtm.ANY_NODE_TYPE_ONE :
               e->theNodeTest->get_return_type());
    break;
  }

  case match_expr_kind:
  {
    theType = rtm.ANY_NODE_TYPE_ONE;
    return;
  }

  case fo_expr_kind:
  {
    fo_expr* e = static_cast<fo_expr*>(this);

    /*
      const user_function* udf = static_cast<const user_function*>(func);

      if (udf != NULL)
      return udf->getUDFReturnType(sctx);
    */

    newType = e->theFunction->getReturnType(e);

    break;
  }

  case cast_expr_kind:
  {
    cast_expr* e = static_cast<cast_expr*>(this);

    xqtref_t argType = e->theInput->get_return_type();
    SequenceType::Quantifier argQuant = argType->get_quantifier();
    SequenceType::Quantifier targetQuant = e->theTargetType->get_quantifier();

    if (TypeOps::is_equal(tm, *argType, *rtm.EMPTY_TYPE, get_loc()))
    {
      if (targetQuant == SequenceType::QUANT_QUESTION ||
          targetQuant == SequenceType::QUANT_STAR)
        newType = rtm.EMPTY_TYPE;
      else
        newType = rtm.NONE_TYPE;
    }
    else if (e->theTargetType->isAtomicAny())
    {
      SequenceType::Quantifier q = TypeOps::intersect_quant(argQuant, targetQuant);

      newType = tm->create_type(*e->theTargetType, q);
    }
    else
    {
      ZORBA_ASSERT(e->theTargetType->type_kind() == XQType::USER_DEFINED_KIND);

      const UserDefinedXQType* targetType = 
      static_cast<const UserDefinedXQType*>(e->theTargetType.getp());

      if (targetType->isList())
      {
        newType = tm->create_type(*targetType->getListItemType(),
                                  SequenceType::QUANT_STAR);
      }
      else
      {
        assert(targetType->isAtomicAny() || targetType->isUnion());

        SequenceType::Quantifier q = TypeOps::intersect_quant(argQuant, targetQuant);

        newType = tm->create_type(*e->theTargetType, q);
      }
    }

    break;
  }

  case treat_expr_kind:
  {
    treat_expr* e = static_cast<treat_expr*>(this);

    xqtref_t input_type = e->get_input()->get_return_type();
    xqtref_t input_ptype = TypeOps::prime_type(tm, *input_type);
    xqtref_t target_ptype = TypeOps::prime_type(tm, *e->theTargetType);

    SequenceType::Quantifier q =
    TypeOps::intersect_quant(input_type->get_quantifier(),
                             e->theTargetType->get_quantifier());

    if (TypeOps::is_subtype(tm, *input_ptype, *target_ptype, get_loc()))
    {
      newType = tm->create_type(*input_ptype, q);
    }
    else
    {
      newType = tm->create_type(*target_ptype, q);
    }
    break;
  }

  case promote_expr_kind:
  {
    promote_expr* e = static_cast<promote_expr*>(this);

    xqtref_t in_type = e->theInput->get_return_type();
    xqtref_t in_ptype = TypeOps::prime_type(tm, *in_type);
    xqtref_t target_ptype = TypeOps::prime_type(tm, *e->theTargetType);

    SequenceType::Quantifier q =
    TypeOps::intersect_quant(in_type->get_quantifier(),
                             e->theTargetType->get_quantifier());

    if (TypeOps::is_subtype(tm, *in_ptype, *target_ptype, get_loc()))
    {
      newType = tm->create_type(*in_ptype, q);
    }
    else
    {
      // be liberal
      newType = tm->create_type(*target_ptype, q);
    }

#if 0
    // TODO: for nodes, the result would be none
    if (TypeOps::is_equal(tm, *in_ptype, *rtm.UNTYPED_ATOMIC_TYPE_ONE))
      return tm->create_type_x_quant(*target_ptype, q);

    // decimal --> float
    if (TypeOps::is_subtype(tm, *target_ptype, *rtm.FLOAT_TYPE_ONE))
    {
      if (TypeOps::is_subtype(tm, *in_ptype, *ts.DECIMAL_TYPE_ONE))
        return tm->create_type_x_quant(*target_ptype, q);
    }

    // decimal/float --> double
    if (TypeOps::is_subtype(tm, *target_ptype, *rtm.DOUBLE_TYPE_ONE))
    {
      if (TypeOps::is_subtype(tm, *in_ptype, *rtm.DECIMAL_TYPE_ONE) ||
          TypeOps::is_subtype(tm, *in_ptype, *rtm.FLOAT_TYPE_ONE))
        return tm->create_type_x_quant(*target_ptype, q);
    }

    // uri --> string
    if (TypeOps::is_subtype(tm, *target_ptype, *rtm.STRING_TYPE_ONE))
    {
      if (TypeOps::is_subtype(tm, *in_ptype, *rtm.ANY_URI_TYPE_ONE))
        return tm->create_type_x_quant(*target_ptype, q);
    }
#endif
    break;
  }

  case castable_expr_kind:
  case instanceof_expr_kind:
  {
    theType = rtm.BOOLEAN_TYPE_ONE;
    return;
  }

  case name_cast_expr_kind:
  {
    theType = rtm.QNAME_TYPE_ONE;
    return;
  }

  case doc_expr_kind:
  {
    contentType = (theSctx->construction_mode() == StaticContextConsts::cons_preserve ?
                   rtm.ANY_TYPE :
                   rtm.UNTYPED_TYPE);

    newType = tm->create_node_type(store::StoreConsts::documentNode,
                                   NULL,
                                   contentType,
                                   SequenceType::QUANT_ONE,
                                   false,
                                   false);
    break;
  }

  case elem_expr_kind:
  {
    contentType = (theSctx->construction_mode() == StaticContextConsts::cons_preserve ?
                   rtm.ANY_TYPE :
                   rtm.UNTYPED_TYPE);

    newType = tm->create_node_type(store::StoreConsts::elementNode,
                                   NULL,
                                   contentType,
                                   SequenceType::QUANT_ONE,
                                   false,
                                   false);
    break;
  }

  case attr_expr_kind:
  {
    newType = rtm.ATTRIBUTE_UNTYPED_TYPE_ONE;
    break;
  }

  case namespace_expr_kind:
  {
    newType = rtm.NAMESPACE_TYPE_ONE;
    break;
  }

  case text_expr_kind:
  {
    text_expr* e = static_cast<text_expr*>(this);

    store::StoreConsts::NodeKind nodeKind;

    SequenceType::Quantifier q = SequenceType::QUANT_ONE;

    switch (e->type)
    {
    case text_constructor:
    {
      xqtref_t t = e->get_text()->get_return_type();

      if (t->is_empty())
        newType = t;

      else if (t->min_card() == 0)
        q = SequenceType::QUANT_QUESTION;

      nodeKind = store::StoreConsts::textNode;
      break;
    }

    case comment_constructor:
      nodeKind = store::StoreConsts::commentNode;
      break;

    default:
      ZORBA_ASSERT(false);
      break;
    }

    if (newType == NULL)
      newType = tm->create_node_type(nodeKind,
                                     NULL,
                                     contentType,
                                     q,
                                     false,
                                     false);
    break;
  }

  case pi_expr_kind:
  {
    newType = tm->create_node_type(store::StoreConsts::piNode,
                                   NULL,
                                   contentType,
                                   SequenceType::QUANT_ONE,
                                   false,
                                   false);
    break;
  }

  case json_object_expr_kind:
  case json_direct_object_expr_kind:
  {
    newType = rtm.JSON_OBJECT_TYPE_ONE;
    break;
  }

  case json_array_expr_kind:
  {
    newType = rtm.JSON_ARRAY_TYPE_ONE;
    break;
  }

  case const_expr_kind:
  {
    const_expr* e = static_cast<const_expr*>(this);

    newType = tm->create_value_type(e->theValue.getp());
    break;
  }

  case extension_expr_kind:
  {
    theType = rtm.ITEM_TYPE_STAR; // TODO
    return;
  }

  case trycatch_expr_kind:
  {
    theType = rtm.ITEM_TYPE_STAR; // TODO
    return;
  }

  case dynamic_function_invocation_expr_kind:
  {    
    dynamic_function_invocation_expr* e =
    static_cast<dynamic_function_invocation_expr*>(this);

    xqtref_t fiType = e->theExpr->get_return_type();

    if (fiType->max_card() == 0)
    {
      newType = rtm.EMPTY_TYPE;
    }
    else if (fiType->type_kind() == XQType::FUNCTION_TYPE_KIND)
    {
      const FunctionXQType* funcType = static_cast<const FunctionXQType*>(fiType.getp());
      newType = funcType->get_return_type();
    }
    else
    {
      newType = rtm.ITEM_TYPE_STAR;
    }
    break;
  }

  case argument_placeholder_expr_kind:
  {
    theType = rtm.ITEM_TYPE_STAR;
    return;
  }

  case function_item_expr_kind:
  {
    theType = rtm.ANY_FUNCTION_TYPE_ONE;

    function_item_expr* fiExpr = static_cast<function_item_expr*>(this);

    if (fiExpr->get_function() != NULL)
    {
      const xqtref_t& retType = fiExpr->get_function()->getSignature().returnType();
      std::vector<xqtref_t> paramTypes;

      for (csize i = 0; i < fiExpr->get_function()->getSignature().paramCount(); ++i)
        paramTypes.push_back(fiExpr->get_function()->getSignature()[i]);

      theType = rtm.create_function_type(paramTypes, retType, SequenceType::QUANT_ONE);
    }
    return;
  }

  case delete_expr_kind:
  case insert_expr_kind:
  case rename_expr_kind:
  case replace_expr_kind:
  {
    theType = rtm.EMPTY_TYPE;
    return;
  }

  case transform_expr_kind:
  {
    transform_expr* e = static_cast<transform_expr*>(this);

    newType = e->theReturnExpr->get_return_type();
    break;
  }

  case block_expr_kind:
  {
    block_expr* e = static_cast<block_expr*>(this);

    if (!e->theArgs.empty())
    {
      newType = e->theArgs[e->theArgs.size() - 1]->get_return_type();
    }
    else
    {
      newType = rtm.EMPTY_TYPE;
    }
    break;
  }

  case apply_expr_kind:
  {
    apply_expr* e = static_cast<apply_expr*>(this);
    if (e->theDiscardXDM)
      newType = rtm.EMPTY_TYPE;
    else
      newType = e->theExpr->get_return_type();

    break;
  }

  case var_decl_expr_kind:
  {
    theType = rtm.EMPTY_TYPE;
    return;
  }

  case var_set_expr_kind:
  {
    theType = rtm.EMPTY_TYPE;
    return;
  }

  case exit_expr_kind:
  {
    theType = rtm.EMPTY_TYPE;
    return;
  }

  case exit_catcher_expr_kind:
  {
    exit_catcher_expr* e = static_cast<exit_catcher_expr*>(this);

    newType = e->theExpr->get_return_type();

    std::vector<expr*>::const_iterator ite = e->exitExprsBegin();
    std::vector<expr*>::const_iterator end = e->exitExprsEnd();

    for (; ite != end; ++ite)
    {
      exit_expr* e = static_cast<exit_expr*>(*ite);

      newType = TypeOps::union_type(*newType.getp(),
                                    *e->get_expr()->get_return_type(),
                                    tm);
    }

    break;
  }

  case flowctl_expr_kind:
  {
    theType = rtm.EMPTY_TYPE;
    return;
  }

  case while_expr_kind:
  {
#ifndef DEBUG
    //while_expr* e = static_cast<while_expr*>(this);
    //xqtref_t bodyType = e->get_body()->get_return_type();
    //assert(TypeOps::is_equal(tm, *bodyType, *rtm.EMPTY_TYPE));
#endif
    theType = rtm.EMPTY_TYPE;
    return;
  }

#ifndef ZORBA_NO_FULL_TEXT
  case ft_expr_kind:
  {
    theType = rtm.BOOLEAN_TYPE_ONE;
    return;
  }
#endif /* ZORBA_NO_FULL_TEXT */

  case eval_expr_kind:
  {
    theType = rtm.ITEM_TYPE_STAR; // TODO
    return;
  }

  case debugger_expr_kind:
  {
    theType = rtm.ITEM_TYPE_STAR; // TODO
    return;
  }

  case function_trace_expr_kind:
  {
    newType = static_cast<function_trace_expr*>(this)->theInput->get_return_type();
    break;
  }

  case order_expr_kind:
  {
    newType = static_cast<order_expr*>(this)->theInput->get_return_type();
    break;
  }

  case wrapper_expr_kind:
  {
    newType = static_cast<wrapper_expr*>(this)->theInput->get_return_type();
    break;
  }

  default:
  {
    ZORBA_ASSERT(false);
  }
  }

  assert(newType != NULL);

  if (modified != NULL &&
      (theType == NULL || !TypeOps::is_equal(tm, *newType, *theType, get_loc())))
  {
    *modified = true;
  }

  theType = newType;
}



/*******************************************************************************

********************************************************************************/
static xqtref_t axis_step_type(
    static_context* sctx,
    const axis_step_expr* axisStep,
    const NodeXQType* inputType)
{
  RootTypeManager& RTM = GENV_TYPESYSTEM;
  TypeManager* tm = sctx->get_typemanager();

  axis_kind_t axisKind = axisStep->getAxis();
  match_expr* nodeTest = axisStep->getTest();

  match_test_t testKind =  nodeTest->getTestKind();
  store::StoreConsts::NodeKind testNodeKind = nodeTest->getNodeKind();
  store::Item* testNodeName = nodeTest->getQName();
  match_wild_t wildKind = nodeTest->getWildKind();

  SequenceType::Quantifier inQuant = inputType->get_quantifier();
  store::StoreConsts::NodeKind inNodeKind = inputType->get_node_kind();
  xqtref_t inContentType = inputType->get_content_type();

  SequenceType::Quantifier star = SequenceType::QUANT_STAR;

  bool inUntyped = false;
  if (inContentType != NULL)
  {
    if (inContentType == RTM.UNTYPED_TYPE)
    {
      inUntyped = true;
    }
    else if (inNodeKind == store::StoreConsts::documentNode &&
             inContentType->type_kind() == XQType::NODE_TYPE_KIND)
    {
      const NodeXQType* rootElemType = reinterpret_cast<const NodeXQType*>(
                                       inContentType.getp());
      if (rootElemType->get_content_type() == RTM.UNTYPED_TYPE.getp())
        inUntyped = true;
    }
  }

#ifdef THROW_XPST0005
  const QueryLoc& loc = axisStep->get_loc();
  store::Item* testSchemaType = nodeTest->getTypeName();
  store::Item* inNodeName = inputType->get_node_name();

  if (inUntyped &&
      (axisKind == axis_kind_self ||
       axisKind == axis_kind_descendant_or_self ||
       axisKind == axis_kind_descendant ||
       axisKind == axis_kind_child ||
       axisKind == axis_kind_attribute))
  {
    if (testKind == match_attr_test &&
        testSchemaType != NULL &&
        ! testSchemaType->equals(RTM.XS_UNTYPED_ATOMIC_QNAME))
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }
    else if ((testKind == match_elem_test || testKind == match_doc_test) &&
             testSchemaType != NULL &&
             ! testSchemaType->equals(RTM.XS_UNTYPED_QNAME))
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }
  }
#endif

  switch (axisKind)
  {
  case axis_kind_parent:
  {
#ifdef THROW_XPST0005
    // Doc nodes do not have parent
    if (inNodeKind == store::StoreConsts::documentNode)
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }

    // Only element or doc nodes are reachable via the parent axis.
    if (testNodeKind != store::StoreConsts::documentNode &&
        testNodeKind != store::StoreConsts::elementNode &&
        testNodeKind != store::StoreConsts::anyNode)
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }

    // Doc nodes cannot be parents of attribute nodes
    if (inNodeKind == store::StoreConsts::attributeNode &&
        testNodeKind == store::StoreConsts::documentNode)
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }
#endif

    return create_axis_step_type(tm, testNodeKind, testNodeName, inQuant, false);

    break;
  }

  case axis_kind_ancestor:
  {
#ifdef THROW_XPST0005
    // Doc nodes do not have ancestors
    if (inNodeKind == store::StoreConsts::documentNode)
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }

    // Only element or doc nodes are reachable via the ancestor axis.
    if (testNodeKind != store::StoreConsts::documentNode &&
        testNodeKind != store::StoreConsts::elementNode &&
        testNodeKind != store::StoreConsts::anyNode)
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }
#endif

    if (testNodeKind == store::StoreConsts::elementNode)
    {
      return RTM.ELEMENT_TYPE_STAR;
    }
    else if (testNodeKind == store::StoreConsts::documentNode)
    {
      return create_axis_step_type(tm, testNodeKind, testNodeName, inQuant, false);
    }
    else
    {
      assert(testKind == match_anykind_test);
      return RTM.ANY_NODE_TYPE_STAR;
    }

    break;
  }

  case axis_kind_ancestor_or_self:
  {
    if (testNodeKind == store::StoreConsts::elementNode)
    {
      return RTM.ELEMENT_TYPE_STAR;
    }
    else if (testNodeKind == store::StoreConsts::documentNode)
    {
      return create_axis_step_type(tm, testNodeKind, testNodeName, inQuant, false);
    }
    else if (testNodeKind == store::StoreConsts::anyNode)
    {
      return RTM.ANY_NODE_TYPE_STAR;
    }
    else
    {
      // We are looking for attribute, test, pi, or comment ancestor nodes. Only
      // the "self" node may qualify, so we jump to the axis_kind_self case.
      goto self;
    }

    break;
  }

  case axis_kind_self:
  {
self:
#ifdef THROW_XPST0005
    // The node kind of the self node must be compatible with the NodeTest.
    if (testNodeKind != store::StoreConsts::anyNode &&
        inNodeKind != store::StoreConsts::anyNode &&
        inNodeKind != testNodeKind)
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }

    if (testNodeName != NULL &&
        nodeTest->getWildKind() == match_no_wild &&
        inNodeName != NULL &&
        !inNodeName->equals(testNodeName))
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }
#endif

    switch (inNodeKind)
    {
    case store::StoreConsts::documentNode:
    case store::StoreConsts::elementNode:
    case store::StoreConsts::attributeNode:
      return create_axis_step_type(tm, inNodeKind, testNodeName, inQuant, inUntyped);

    case store::StoreConsts::textNode:
    case store::StoreConsts::piNode:
    case store::StoreConsts::commentNode:
    case store::StoreConsts::namespaceNode:
      return create_axis_step_type(tm, inNodeKind, testNodeName, inQuant, false);

    case store::StoreConsts::anyNode:
    {
      switch (testNodeKind)
      {
      case store::StoreConsts::anyNode:
      case store::StoreConsts::documentNode:
      case store::StoreConsts::elementNode:
      case store::StoreConsts::attributeNode:
        return create_axis_step_type(tm, testNodeKind, testNodeName, inQuant, inUntyped);

      case store::StoreConsts::textNode:
      case store::StoreConsts::piNode:
      case store::StoreConsts::commentNode:
      case store::StoreConsts::namespaceNode:
        return create_axis_step_type(tm, testNodeKind, testNodeName, inQuant, false);

      default:
        ZORBA_ASSERT(false);
      }

      break;
    }

    default:
      ZORBA_ASSERT(false);
    }

    break;
  }

  case axis_kind_descendant_or_self:
  {
    // If we are looking for descendants or self of attribute, test, pi, or
    // comment nodes, only the "self" node may qualify, so we jump to the
    // axis_kind_self case.
    if (inNodeKind == store::StoreConsts::attributeNode ||
        inNodeKind == store::StoreConsts::textNode ||
        inNodeKind == store::StoreConsts::piNode ||
        inNodeKind == store::StoreConsts::commentNode)
    {
      goto self;
    }

    // if we are looking for document or attribute descendants of a node, only
    // the "self" node may qualify, so we jump to the axis_kind_self case.
    if (testNodeKind == store::StoreConsts::documentNode ||
        testNodeKind == store::StoreConsts::attributeNode)
    {
      goto self;
    }

    switch (testNodeKind)
    {
    case store::StoreConsts::anyNode:
      return create_axis_step_type(tm, testNodeKind, testNodeName, star, inUntyped);

    case store::StoreConsts::elementNode:
      return create_axis_step_type(tm, testNodeKind, testNodeName, star, inUntyped);

    case store::StoreConsts::textNode:
      return RTM.TEXT_TYPE_STAR;

    case store::StoreConsts::piNode:
      return RTM.PI_TYPE_STAR;

    case store::StoreConsts::commentNode:
      return RTM.COMMENT_TYPE_STAR;

    default:
      ZORBA_ASSERT(false);
    }

    break;
  }

  case axis_kind_descendant:
  case axis_kind_child:
  {
#ifdef THROW_XPST0005
    if (inNodeKind == store::StoreConsts::attributeNode ||
        inNodeKind == store::StoreConsts::textNode ||
        inNodeKind == store::StoreConsts::piNode ||
        inNodeKind == store::StoreConsts::commentNode)
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }

    if (testNodeKind == store::StoreConsts::documentNode ||
        testNodeKind == store::StoreConsts::attributeNode)
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }
#endif

    switch (testNodeKind)
    {
    case store::StoreConsts::anyNode:
      return create_axis_step_type(tm, testNodeKind, testNodeName, star, inUntyped);

    case store::StoreConsts::elementNode:
      return create_axis_step_type(tm, testNodeKind, testNodeName, star, inUntyped);

    case store::StoreConsts::textNode:
      return RTM.TEXT_TYPE_STAR;

    case store::StoreConsts::piNode:
      return RTM.PI_TYPE_STAR;

    case store::StoreConsts::commentNode:
      return RTM.COMMENT_TYPE_STAR;

    case store::StoreConsts::attributeNode:
    case store::StoreConsts::documentNode:
      return RTM.EMPTY_TYPE;

    default:
      ZORBA_ASSERT(false);
    }

    break;
  }

  case axis_kind_attribute:
  {
#ifdef THROW_XPST0005
    // only element nodes have attributes.
    if (inNodeKind != store::StoreConsts::elementNode &&
        inNodeKind != store::StoreConsts::anyNode)
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }

    // only attribute nodes are reachable via the attribute axis.
    if (testKind != match_name_test &&
        testKind != match_anykind_test &&
        testKind != match_attr_test &&
        testKind != match_xs_attr_test)
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }
#endif

    if ((testKind == match_name_test && wildKind == match_no_wild) ||
        testKind == match_xs_attr_test)
    {
      return create_axis_step_type(tm,
                                   store::StoreConsts::attributeNode,
                                   testNodeName,
                                   inQuant,
                                   inUntyped);
    }
    else
    {
      return create_axis_step_type(tm,
                                   store::StoreConsts::attributeNode,
                                   testNodeName,
                                   star,
                                   inUntyped);
    }

    break;
  }

  case axis_kind_following_sibling:
  case axis_kind_preceding_sibling:
  case axis_kind_following:
  case axis_kind_preceding:
  {
#ifdef THROW_XPST0005
    if (inNodeKind == store::StoreConsts::documentNode ||
        testNodeKind == store::StoreConsts::documentNode)
    {
      throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
    }
#endif

    if ((axisKind == axis_kind_following_sibling ||
         axisKind == axis_kind_preceding_sibling) &&
        (inNodeKind == store::StoreConsts::attributeNode ||
         testNodeKind == store::StoreConsts::attributeNode))
    {
      //throw XQUERY_EXCEPTION(err::XPST0005, ERROR_LOC(loc));
      return RTM.EMPTY_TYPE;
    }

    switch (testNodeKind)
    {
    case store::StoreConsts::anyNode:
      return RTM.ANY_NODE_TYPE_STAR;

    case store::StoreConsts::elementNode:
      return RTM.ELEMENT_TYPE_STAR;

    case store::StoreConsts::attributeNode:
      return RTM.ATTRIBUTE_TYPE_STAR;

    case store::StoreConsts::textNode:
      return RTM.TEXT_TYPE_STAR;

    case store::StoreConsts::piNode:
      return RTM.PI_TYPE_STAR;

    case store::StoreConsts::commentNode:
      return RTM.COMMENT_TYPE_STAR;

    default:
      ZORBA_ASSERT(false);
    }

    break;
  }

  default:
  {
    ZORBA_ASSERT(false);
    return RTM.NONE_TYPE;
  }
  }

  ZORBA_ASSERT(false);
  return RTM.NONE_TYPE;
}


/*******************************************************************************

********************************************************************************/
static xqtref_t create_axis_step_type(
    TypeManager* tm,
    store::StoreConsts::NodeKind nodekind,
    const store::Item_t& nodename,
    SequenceType::Quantifier quant,
    bool untyped)
{
  RootTypeManager& RTM = GENV_TYPESYSTEM;

  if (untyped)
  {
    xqtref_t contentType;
    if (nodekind == store::StoreConsts::attributeNode)
      contentType = RTM.UNTYPED_ATOMIC_TYPE_ONE;
    else
      contentType = RTM.UNTYPED_TYPE;

    if (TypeOps::is_sub_quant(quant, SequenceType::QUANT_QUESTION))
    {
      return tm->create_node_type(nodekind,
                                  nodename,
                                  contentType,
                                  SequenceType::QUANT_QUESTION,
                                  false,
                                  false);
    }
    else
    {
      return tm->create_node_type(nodekind,
                                  nodename,
                                  contentType,
                                  SequenceType::QUANT_STAR,
                                  false,
                                  false);
    }
  }
  else
  {
    xqtref_t contentType;
    if (nodekind == store::StoreConsts::attributeNode)
      contentType = RTM.ANY_SIMPLE_TYPE;
    else
      contentType = RTM.ANY_TYPE;

    if (TypeOps::is_sub_quant(quant, SequenceType::QUANT_QUESTION))
    {
      return tm->create_node_type(nodekind,
                                  nodename,
                                  contentType,
                                  SequenceType::QUANT_QUESTION,
                                  false,
                                  false);
    }
    else
    {
      return tm->create_node_type(nodekind,
                                  nodename,
                                  contentType,
                                  SequenceType::QUANT_STAR,
                                  false,
                                  false);
    }
  }
}


} // namespace zorba
/* vim:set et sw=2 ts=2: */
