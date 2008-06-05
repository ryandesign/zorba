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
#ifndef ZORBA_SPECIFICATON
#define ZORBA_SPECIFICATON

#include <vector>
#include <string>
#include <cassert>
#include <iostream>
#include "common/common.h"

#include <boost/spirit.hpp>
#include <boost/bind.hpp>

class Variable 
{
public:
  bool        theInline;
  std::string theName;
  std::string theValue;

  Variable() : theInline(false) {}
};


/*******************************************************************************
  A State object stores the result of parsing a "State" declaration in a .spec
  file. A State declaration corresponds to one query and specifies the query
  name, its external variables, and its possible expected results. 

  For example, the /UseCases/PartsUpdates/parts-q1.spec file looks like this:

  State: parts-q1
  Args: -x part-tree=$UPDATE_SRC_DIR/Queries/w3c_update_testsuite/TestSources/part-tree.xml -d 2006-08-05
  State: parts-q1-test
  Args: -x part-tree=$UPDATE_SRC_DIR/Queries/w3c_update_testsuite/TestSources/part-tree.xml -d 2007-02-01
  Compare: parts-q1-results.xml Fragment

  Parsing this file will produce 2 State objects.
********************************************************************************/
class State 
{
public:
  enum CompareType {
    TEXT,
    FRAGMENT
  };

  static std::string compareTypeStr(CompareType aType) {
    switch(aType) {
    case TEXT:
      return "TEXT";
    case FRAGMENT:
      return "FRAGMENT";
    }
    assert(false);
  }

  std::string              theName;
  std::vector<Variable*>   theVars;
  bool                     hasDate;
  std::string              theDate;
  bool                     hasCompare;
  std::vector<std::string> theCompares;
  std::vector<CompareType> theCompareTypes;
  bool                     hasErrors;
  std::vector<std::string> theErrors;

  State() : hasDate(false), hasCompare(false), hasErrors(false)
  {}

  ~State() 
  {
    std::vector<Variable*>::iterator lIter = theVars.begin();
    std::vector<Variable*>::iterator lEnd =  theVars.end();
    for (;lIter != lEnd; ++lIter)
    {
      delete *lIter;
    }
    theVars.clear();
  }

  size_t varsSize() const
  {
    return theVars.size();
  }

  std::vector<Variable*>::const_iterator
  varsBegin() const
  {
    return theVars.begin();
  }


  std::vector<Variable*>::const_iterator
  varsEnd() const
  {
    return theVars.end();
  }
};


/*******************************************************************************
  A Specification object stores the result of parsing a .spec file. It consists
  of a vector of State objs.
********************************************************************************/
class Specification
{
  typedef char char_t;
  typedef boost::spirit::file_iterator <char_t> iterator_t;
  typedef boost::spirit::scanner<iterator_t> scanner_t;
  typedef boost::spirit::rule<scanner_t> rule_t;

public:
  std::vector<State*> theStates;

private:
  // Transient data members used during the parsing of the associated .spec file
  State     * theCurState;
  Variable  * theCurVar;

public:
  Specification() {}

  ~Specification() 
  {
    std::vector<State*>::iterator lIter = theStates.begin();
    std::vector<State*>::iterator lEnd =  theStates.end();
    for (;lIter != lEnd; ++lIter)
    {
      delete *lIter;
    }
    theStates.clear();
  }

  size_t statesSize() const
  {
    return theStates.size();
  }

  std::vector<State*>::const_iterator
  statesBegin() const
  {
    return theStates.begin();
  }

  std::vector<State*>::const_iterator
  statesEnd() const
  {
    return theStates.end();
  }

private:
  void addState(iterator_t str, iterator_t end) 
  {
    theCurState = new State();
    theCurState->theName = std::string(str, end);
  }

  void setDate(iterator_t str, iterator_t end) 
  {
    theCurState->hasDate = true;
    theCurState->theDate = std::string(str, end);
  }

  void addCompare(iterator_t str, iterator_t end) 
  {
    theCurState->hasCompare = true;
    theCurState->theCompares.push_back(std::string(str, end));
  }

  void addCompareType(iterator_t str, iterator_t end) 
  {
    std::string lCompareType = std::string(str, end);
    if (lCompareType.compare("Text") == 0) 
    {
      theCurState->theCompareTypes.push_back(State::TEXT);
    }
    else if (lCompareType.compare("Fragment") == 0) 
    {
      theCurState->theCompareTypes.push_back(State::FRAGMENT);
    }
    else 
    {
      assert(false);
    }
  }

  void addError(iterator_t str, iterator_t end) 
  {
    theCurState->hasErrors = true;
    std::string lError = std::string(str, end);
    theCurState->theErrors.push_back(lError);
  }

  void addQuery(iterator_t str, iterator_t end) 
  {
    theStates.push_back(theCurState);
    theCurState = 0;
  }

  void setVarName(iterator_t str, iterator_t end) 
  {
    theCurVar = new Variable();
    theCurVar->theName = std::string(str, end);
  }

  void setVarValue(iterator_t str, iterator_t end) 
  {
    theCurVar->theValue = std::string(str,end);
  }

  void addVariable(iterator_t str, iterator_t end, bool aInline) 
  {
    theCurVar->theInline = aInline;
    theCurState->theVars.push_back(theCurVar);
    theCurVar = 0;
  }

public:
  bool
  parseFile(std::string str)
  {
    rule_t state
      = boost::spirit::str_p("State:")
      >> boost::spirit::blank_p
      >> (+boost::spirit::graph_p)[bind(&Specification::addState, this, _1, _2)]
      >> !boost::spirit::eol_p;

    rule_t propsInline
      = (+(boost::spirit::graph_p & ~boost::spirit::ch_p(':') & ~boost::spirit::ch_p('=')))[bind(&Specification::setVarName, this, _1, _2)]
      >> boost::spirit::str_p("=")
      >> (+boost::spirit::graph_p)[bind(&Specification::setVarValue, this, _1, _2)];

    rule_t props
      = (+(boost::spirit::graph_p & ~boost::spirit::ch_p(':') & ~boost::spirit::ch_p('=')))[bind(&Specification::setVarName, this, _1, _2)]
      >> boost::spirit::str_p(":=") 
      >> (+boost::spirit::graph_p)[bind(&Specification::setVarValue, this, _1, _2)];

    rule_t ext_var
      =  boost::spirit::blank_p
      >> boost::spirit::str_p("-x")
      >> boost::spirit::blank_p
      >> (
           propsInline[bind(&Specification::addVariable, this, _1, _2, true)]
         | props[bind(&Specification::addVariable, this, _1, _2, false)] 
         );

    rule_t date
      =  boost::spirit::blank_p
      >> boost::spirit::str_p("-d")
      >> boost::spirit::blank_p
      >> (+boost::spirit::graph_p)[bind(&Specification::setDate, this, _1, _2)];

    rule_t args 
      =  boost::spirit::str_p("Args:")
      >> *ext_var
      >> !date
      >> !boost::spirit::eol_p;

    rule_t compare
      =  boost::spirit::str_p("Compare:")
      >> boost::spirit::blank_p
      >> (+boost::spirit::graph_p)[bind(&Specification::addCompare, this, _1, _2)]
      >> boost::spirit::blank_p
      >> (+boost::spirit::graph_p)[bind(&Specification::addCompareType, this, _1, _2)]
      >> !boost::spirit::eol_p;


    rule_t error
      =  boost::spirit::str_p("Error:")
      >> boost::spirit::blank_p
      >> (+boost::spirit::graph_p)[bind(&Specification::addError, this, _1, _2)]
      >> !boost::spirit::eol_p;

    rule_t defs 
      =  
      *(
       (
           state 
        >> !args 
        >> !(+compare | +error)
       )[bind(&Specification::addQuery, this, _1, _2)]
      );

    iterator_t first(str.c_str());
    if (!first)
      return false;

    iterator_t last = first.make_end();

    return boost::spirit::parse(first, last, defs).full; 
  }

  void printContent() 
  {
    std::cout << "STATES (Size: " << statesSize() << ")" << std::endl;
    std::vector<State*>::const_iterator lIter = statesBegin();
    std::vector<State*>::const_iterator lEnd = statesEnd();

    for(;lIter!=lEnd;++lIter)
    {
      std::cout << "STATE" << std::endl;
      std::cout << "  Name: " << (*lIter)->theName << std::endl; 
      std::cout << "  HasDate: " << (*lIter)->hasDate << std::endl; 
      if ((*lIter)->hasDate) {
        std::cout << "  Date: " << (*lIter)->theDate << std::endl; 
      }

      std::cout << "  VARS (Size: " << (*lIter)->varsSize() << ")" << std::endl;
      std::vector<Variable*>::const_iterator lIter2 = (*lIter)->varsBegin();
      std::vector<Variable*>::const_iterator lEnd2 = (*lIter)->varsEnd();
      
      for(;lIter2!=lEnd2;++lIter2)
      {
        std::cout << "  VAR" << std::endl;
        std::cout << "    Inline: " << (*lIter2)->theInline << std::endl;
        std::cout << "    Name: " << (*lIter2)->theName << std::endl;
        std::cout << "    Value: " << (*lIter2)->theValue << std::endl;
      }

      std::cout << "  HasCompare: " << (*lIter)->hasCompare << std::endl; 
      if ((*lIter)->hasCompare) 
      {
        ulong numCompares = (*lIter)->theCompares.size();
        for (ulong i = 0; i < numCompares; i++)
        {
          std::cout << "  Compare: " << (*lIter)->theCompares[i] << std::endl; 
          std::cout << "  CompareType: " << State::compareTypeStr((*lIter)->theCompareTypes[i]) << std::endl; 
        }
      }

      std::cout << "  HasErrors: " << (*lIter)->hasErrors << std::endl;
      if ((*lIter)->hasErrors) {
        std::vector<std::string>::const_iterator lIter3 = (*lIter)->theErrors.begin();
        std::vector<std::string>::const_iterator lEnd3  = (*lIter)->theErrors.end();
        for(;lIter3!=lEnd3;++lIter3)
        {
          std::cout << "    Error: " << *lIter3 << std::endl;
        }
      }

    }
  }

};

#endif
