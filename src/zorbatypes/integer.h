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
#ifndef ZORBA_INTEGER_H
#define ZORBA_INTEGER_H

#include <zorba/config.h>
#include "common/common.h"

#ifndef ZORBA_NO_BIGNUMBERS
#include "zorbatypes/m_apm.h"
#endif

#include "zorbatypes/xqpstring.h"
#include "zorbatypes/zorbatypes_decl.h"

#include "zorbaserialization/serialization_engine.h"
#include "zorbautils/hashmap_str_obj.h"


namespace zorba {
#ifndef ZORBA_NO_BIGNUMBERS
  typedef MAPM    IMAPM;
#else
  typedef int     IMAPM;
  typedef double  MAPM;
#endif

// exported for testing only
  class ZORBA_DLL_PUBLIC Integer : public ::zorba::serialization::SerializeBaseClass
{
  friend class Decimal;
    
  template <typename Type> friend class FloatImpl;

  friend class NumConversions;

private:
  IMAPM theInteger;

  Integer(IMAPM aInteger) : theInteger(aInteger) { }
    
public:
  SERIALIZABLE_CLASS(Integer)
  SERIALIZABLE_CLASS_CONSTRUCTOR(Integer)
  void serialize(::zorba::serialization::Archiver &ar)
  {
    ar & theInteger;
  }
#ifdef ZORBA_NUMERIC_OPTIMIZATION
public:
  static  HashCharPtrObjPtrLimited<Integer>  parsed_integers;
#endif

public:
  Integer() : theInteger(0) { }
  Integer(const Integer& aInteger) : ::zorba::serialization::SerializeBaseClass(), theInteger(aInteger.theInteger) { }
  virtual ~Integer() {}

private:
  static MAPM 
  longlongToMAPM(long long);
      
  static IMAPM
  floatingToInteger(MAPM theFloating);
public:
  /**
   * @return integer that represents 0
   */
  static Integer& zero();
  
  /**
   * Parse string to Integer.
   * @param aStr String
   * @param aInteger Result
   * @return true if parsing succeed, else false
   */ 
  static bool parseString(const char* aStr, Integer& aInteger);

  /**
   * Parsing of string to unsigned integer. Zorba does not differ between
   * unsigned and signed Integer because unsigned Integer is never a result
   * of an numeric operation => The only places where the unsignedness must
   * be checked is the parsing.
   *
   * @param aStr String
   * @param aInteger result
   * @return true if parsing succeed, else false
   */
  static bool parseStringUnsigned(const char*, Integer&);
  
  /**
   * Parsing form double to Integer. Decimal places are cut of.
   */
  static bool parseDouble(const Double&, Integer&);

  /**
   * Parsing form float to Integer. Decimal places are cut of.
   */
  static bool parseFloat(const Float&, Integer&);

  /**
   * Parsing form Decimal to Integer. Decimal places are cut of.
   */
  static Integer
  parseDecimal(const Decimal&);
  
  static Integer
  parseLongLong(long long);

  static Integer
  parseULongLong(unsigned long long);

  static Integer
  parseInt(int32_t);

  static Integer
  parseUInt(uint32_t);

  static Integer
  parseLong(long aLong);

  static Integer
  parseULong(unsigned long);

  static Integer
  parseSizeT(size_t);

  Integer& 
  operator=(const Integer&);

  Integer 
  operator+(const Integer&) const;
      
  Decimal 
  operator+(const Decimal&) const;

  Integer& 
  operator+=(const Integer&);

  Integer
  operator-(const Integer&) const;
      
  Decimal 
  operator-(const Decimal&) const;

  Integer& operator-=(const Integer&);
      
  Integer 
  operator*(const Integer&) const;
      
  Decimal 
  operator*(const Decimal&) const;

  Integer& 
  operator*=(const Integer&);

  Integer 
  operator/(const Integer&) const;
     
  Decimal 
  operator/(const Decimal&) const;

  Integer& operator/=(const Integer&);
      
  Integer 
  operator%(const Integer&) const;
      
  Decimal 
  operator%(const Decimal&) const;

  Integer& 
  operator%=(const Integer&);

  Integer 
  operator-() const; 
      
  /** prefix */
  Integer& 
  operator++();
      
  /** postfix */
  Integer 
  operator++(int);
      
  /** prefix */
  Integer& 
  operator--();
      
  /** postfix */
  Integer 
  operator--(int);
      
  Integer 
  round(Integer aPrecision) const; 
      
  Integer 
  roundHalfToEven(Integer aPrecision) const;

  Integer sqrt() const;

  Double  pow(Integer p) const;

  bool
  operator==(const Integer& aInteger) const { return theInteger == aInteger.theInteger; } 
      
  bool
  operator!=(const Integer& aInteger) const { return theInteger != aInteger.theInteger; } 
      
  bool
  operator<(const Integer& aInteger) const { return theInteger < aInteger.theInteger; } 

  bool
  operator>(const Integer& aInteger) const 
  {
    return theInteger > aInteger.theInteger; 
  } 
      

  bool
  operator>=(const Integer& aInteger) const 
  {
    return theInteger >= aInteger.theInteger; 
  } 
  
  bool
  operator<=(const Integer& aInteger) const 
  {
    return theInteger <= aInteger.theInteger; 
  } 

  long compare(const Integer& aInteger) const
  {
#ifndef ZORBA_NO_BIGNUMBERS
    return theInteger.compare(aInteger.theInteger);
#else
    if(theInteger < aInteger.theInteger)
      return -1;
    else if(theInteger == aInteger.theInteger)
      return 0;
    else
      return 1;
#endif
  }

  bool
  operator==(const Decimal&) const;

  bool
  operator!=(const Decimal&) const;
      
  bool
  operator<(const Decimal&) const;

  bool
  operator<=(const Decimal&) const;

  bool
  operator>(const Decimal&) const;
      
  bool
  operator>=(const Decimal&) const;

  bool
  operator<=(const Double&) const;
      
  bool
  operator>=(const Double&) const;

  xqpString
  toString() const;

  uint32_t 
  hash() const;
}; // class Integer

   
std::ostream& operator<<(std::ostream& os, const Integer&);

} /* namespace zorba */
#endif // ZORBA_INTEGER_H
