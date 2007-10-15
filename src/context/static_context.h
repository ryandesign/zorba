/**
 *
 * @copyright
 * ========================================================================
 *	Copyright 2007 FLWOR Foundation
 *
 *	Licensed under the Apache License, Version 2.0 (the "License");
 *	you may not use this file except in compliance with the License.
 *	You may obtain a copy of the License at
 *	
 *		http://www.apache.org/licenses/LICENSE-2.0
 *	
 *	Unless required by applicable law or agreed to in writing, software
 *	distributed under the License is distributed on an "AS IS" BASIS,
 *	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *	See the License for the specific language governing permissions and
 *	limitations under the License.
 * ========================================================================
 *
 * @author John Cowan,Paul Pedersen (pcp071098@yahoo.com)
 * @file context/static_context.h
 *
 */

#ifndef XQP_STATIC_CONTEXT_H
#define XQP_STATIC_CONTEXT_H

#include "common.h"
#include "context.h"
#include "errors/Error.h"
#include "../types/sequence_type.h"
#include "../store/api/item.h"
#include "../store/api/store.h"

// MS Visual Studio does not fully support throw(), and issues a warning
#ifndef _MSC_VER
#define THROW_XQP_EXCEPTION		throw(xqp_exception)
#else
#define THROW_XQP_EXCEPTION		
#endif


namespace xqp {

class namespace_node;

/*______________________________________________________________________
|  
|	XQuery 1.0 context
|	[http://www.w3.org/TR/xquery/#id-xq-context-components]
|_______________________________________________________________________*/

class static_context : public context
{
public:	// types
	enum construction_mode_t	 { cons_preserve, cons_strip };
	enum order_empty_mode_t		 { empty_greatest, empty_least };
	enum boundary_space_mode_t { preserve_space, strip_space };
	enum inherit_mode_t				 { inherit_ns, no_inherit_ns };
	enum preserve_mode_t			 { preserve_ns, no_preserve_ns };

protected:
	ItemFactory* itemFactory_p;
	//daniel: these serve as constant global keys
	static bool static_init;
	static qnamekey_t default_function_ns_key;
	static qnamekey_t default_collation_key;
	static qnamekey_t in_scope_schema_types_key;
	static qnamekey_t in_scope_element_decls_key;
	static qnamekey_t in_scope_attribute_decls_key;
	static qnamekey_t collations_key;
	static qnamekey_t construction_mode_key;
	static qnamekey_t order_empty_mode_key;
	static qnamekey_t boundary_space_mode_key;
	static qnamekey_t inherit_mode_key;
	static qnamekey_t preserve_mode_key;
	static qnamekey_t baseuri_key;
  
public:
	static void init(ItemFactory* _itemFactory_p);
  static_context(ItemFactory* _itemFactory_p, static_context *_parent = NULL)
		: context (_parent), itemFactory_p(_itemFactory_p) {}

	~static_context() {}

public:
	// XQuery 1.0 static context
	Iterator_t default_function_namespace() const;
	void set_default_function_namespace(const namespace_node*);

  Iterator_t namespaces() const;
	Iterator_t in_scope_schema_types() const;
	Iterator_t in_scope_element_decls() const;
	Iterator_t in_scope_attribute_decls() const;
	Iterator_t collations() const;

	enum construction_mode_t construction_mode() const;
	enum order_empty_mode_t order_empty_mode() const;
	enum boundary_space_mode_t boundary_space_mode() const;
	enum inherit_mode_t inherit_mode() const;
	enum preserve_mode_t preserve_mode() const;
	
	void set_construction_mode(enum construction_mode_t v);
	void set_order_empty_mode(enum order_empty_mode_t v);
	void set_boundary_space_mode(enum boundary_space_mode_t v);
	void set_inherit_mode(enum inherit_mode_t v);
	void set_preserve_mode(enum preserve_mode_t v);

	const Item& get_default_collation() const;
	void set_default_collation(const std::string&);

	std::string get_baseuri() const;
	void set_baseuri(const std::string&);
	
	sequence_type_t get_function_type(const Item*) 
		const THROW_XQP_EXCEPTION;
	sequence_type_t get_document_type(const std::string&) 
	  const THROW_XQP_EXCEPTION;
	sequence_type_t get_collection_type(const std::string&) 
	  const THROW_XQP_EXCEPTION;
	
};


}	/* namespace xqp */
#endif /*	XQP_STATIC_CONTEXT_H */

