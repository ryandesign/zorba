/*
 * Copyright 2006-2008 The FLWOR Foundation.
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

#include <vector>

#include "runtime/maths/maths.h"

#include "types/casting.h"
#include "types/typeconstants.h"
#include "types/typeops.h"

#include "system/globalenv.h"
#include "store/api/item_factory.h"
#include "store/api/item.h"

namespace zorba {

//math:sqrt
bool
SqrtIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  store::Item_t item;
  xqtref_t type;

  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, theChild.getp(), planState ))
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().sqrt());

    if ( consumeNext(item, theChild.getp(), planState ))
    {
      ZORBA_ERROR_LOC_DESC(XPTY0004, loc,
                           "fn:sqrt has a sequence longer than one as an operator.");
    }

    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:exp
bool
ExpIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, this->theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().exp());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:log
bool
LogIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, this->theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().log());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:sin
bool
SinIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, this->theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().sin());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:cos
bool
CosIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, this->theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().cos());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:tan
bool
TanIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, this->theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().tan());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:asin
bool
ArcSinIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, this->theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().asin());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:acos
bool
ArcCosIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, this->theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().acos());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:atan
bool
ArcTanIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, this->theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().atan());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:atan2
bool
Atan2Iterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  store::Item_t n0;
  store::Item_t n1;

  PlanIteratorState* state;
  DEFAULT_STACK_INIT(PlanIteratorState, state, planState);

  if (consumeNext(n0, this->theChild0.getp(), planState))
  {
    if (consumeNext(n1, this->theChild1.getp(), planState))
    {
      {
        xqp_double doub1 = n0->getDoubleValue();
        xqp_double doub2 = n1->getDoubleValue();

        GENV_ITEMFACTORY->createDouble(result, doub1.atan2(doub2));
      }

      if (consumeNext(n0, this->theChild0.getp(), planState) ||
          consumeNext(n1, this->theChild1.getp(), planState))
        ZORBA_ERROR_DESC(XPTY0004,
                         "Atan2 function has a sequence longer than one as an operand.");
      STACK_PUSH(true, state);
    }
  }

  STACK_END(state);
}

//math:cosh
bool
CoshIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().cosh());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:acosh
bool
AcoshIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().acosh());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//fmod
bool
FmodIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  store::Item_t n0;
  store::Item_t n1;

  PlanIteratorState* state;
  DEFAULT_STACK_INIT(PlanIteratorState, state, planState);

  if (consumeNext(n0, this->theChild0.getp(), planState))
  {
    if (consumeNext(n1, this->theChild1.getp(), planState))
    {
      {
        xqp_double doub1 = n0->getDoubleValue();
        xqp_double doub2 = n1->getDoubleValue();

        GENV_ITEMFACTORY->createDouble(result, doub1.fmod(doub2));
      }

      if (consumeNext(n0, this->theChild0.getp(), planState) ||
          consumeNext(n1, this->theChild1.getp(), planState))
        ZORBA_ERROR_DESC(XPTY0004,
                         "Fmod function has a sequence longer than one as an operand.");
      STACK_PUSH(true, state);
    }
  }

  STACK_END(state);
}

//math:ldexp
bool
LdexpIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  store::Item_t n0;
  store::Item_t n1;

  PlanIteratorState* state;
  DEFAULT_STACK_INIT(PlanIteratorState, state, planState);

  if (consumeNext(n0, this->theChild0.getp(), planState))
  {
    if (consumeNext(n1, this->theChild1.getp(), planState))
    {
      {
        xqp_integer integ = n1->getIntegerValue();
        xqp_double  doub = n0->getDoubleValue();
        xqp_integer integ_2 = Integer::parseInt(2);
        xqp_double doub_pow = integ_2.pow(integ);

        GENV_ITEMFACTORY->createDouble(result, doub * doub_pow);
      }

      if (consumeNext(n0, this->theChild0.getp(), planState) ||
          consumeNext(n1, this->theChild1.getp(), planState))
        ZORBA_ERROR_DESC(XPTY0004,
                         "Ldexp function has a sequence longer than one as an operand.");
      STACK_PUSH(true, state);
    }
  }

  STACK_END(state);
}

//math:log10
bool
Log10Iterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().log10());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:pow
bool
PowIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  store::Item_t n0;
  store::Item_t n1;

  PlanIteratorState* state;
  DEFAULT_STACK_INIT(PlanIteratorState, state, planState);

  if (consumeNext(n0, this->theChild0.getp(), planState))
  {
    if (consumeNext(n1, this->theChild1.getp(), planState))
    {
      {
        xqp_double doub1 = n0->getDoubleValue();
        xqp_double  doub2 = n1->getDoubleValue();

        GENV_ITEMFACTORY->createDouble(result, doub1.pow(doub2));
      }

      if (consumeNext(n0, this->theChild0.getp(), planState) ||
          consumeNext(n1, this->theChild1.getp(), planState))
        ZORBA_ERROR_DESC(XPTY0004,
                         "Pow function has a sequence longer than one as an operand.");
      STACK_PUSH(true, state);
    }
  }

  STACK_END(state);
}

//math:sinh
bool
SinhIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().sinh());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:asinh
bool
AsinhIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().asinh());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:tanh
bool
TanhIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().tanh());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:atanh
bool
AtanhIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createDouble(result, result->getDoubleValue().atanh());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:pi
bool
PiNumberIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  GENV_ITEMFACTORY->createDouble(result, 3.1415926535897932384626433832795);
  STACK_PUSH (true, state);

  STACK_END (state);
}

//math:isInf
bool
IsInfIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createBoolean(result, !result->getDoubleValue().isFinite());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:isNaN
bool
IsNaNIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  PlanIteratorState* state;
  DEFAULT_STACK_INIT ( PlanIteratorState, state, planState );

  if (consumeNext(result, theChild.getp(), planState )) 
  {
    GENV_ITEMFACTORY->createBoolean(result, result->getDoubleValue().isNaN());
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:modf
bool
ModfIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  ModfIteratorState* state;
  DEFAULT_STACK_INIT ( ModfIteratorState, state, planState );

  if (consumeNext(result, theChild.getp(), planState )) 
  {
    {
      xqp_double    doub = result->getDoubleValue();
      xqp_double    doub_fraction;
      doub.modf(doub_fraction, state->theDoubInteger);
      GENV_ITEMFACTORY->createDouble(result, doub_fraction);
    }
    STACK_PUSH (true, state);
    GENV_ITEMFACTORY->createDouble(result, state->theDoubInteger);
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}

//math:frexp
bool
FrexpIterator::nextImpl (store::Item_t& result, PlanState& planState) const
{
  FrexpIteratorState* state;
  DEFAULT_STACK_INIT ( FrexpIteratorState, state, planState );

  if (consumeNext(result, theChild.getp(), planState )) 
  {
    {
      xqp_double    doub = result->getDoubleValue();
      xqp_double    doub_mantissa;
      doub.frexp(doub_mantissa, state->theIntExponent);
      GENV_ITEMFACTORY->createDouble(result, doub_mantissa);
    }
    STACK_PUSH (true, state);
    GENV_ITEMFACTORY->createInteger(result, state->theIntExponent);
    STACK_PUSH (true, state);
  }
  STACK_END (state);
}
} /* namespace zorba */
