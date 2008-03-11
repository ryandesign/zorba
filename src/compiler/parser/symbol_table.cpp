/* -*- mode: c++; indent-tabs-mode: nil; tab-width: 2 -*-
 *
 *  $Id: symbol_table.cpp,v 1.1 2006/10/09 07:07:59 Paul Pedersen Exp $
 *
 *	Copyright 2006-2007 FLWOR Foundation.
 */

#include <zorbatypes/numconversions.h>

#include "compiler/parser/symbol_table.h"
#include "util/fx/fxcharheap.h"
#include "compiler/parser/util.h"

#include <stdlib.h>
#include <string>

using namespace std;
namespace zorba {

/**
 * Whitespace characters used in the functions below
 */
static const char* whitespace = " \t\r\n\f";

/**
 * The function will trim the whitespace from the begging of the string,
 * returning a pointer to the new starting character.
 *
 */
void trim_start(const char** s, uint32_t& len)
{
  int done = 0;

  while (! done && len > 0) {
    done = 1;
    for (const char *ws = whitespace; *ws != '\0'; ws++)
      if (**s == *ws) {
        ++*s; len--;
        done = 0;
        break;
      }
  }
}

/**
 * The function will trim the whitespace from the end of the string,
 * returning the new length.
 *
 */
void trim_end(char const* s, uint32_t& len)
{
  int done = 0;

  while (!done && len>0)
  {
    done = 1;
    for (unsigned int i=0; i<strlen(whitespace); i++)
      if (s[len-1] == whitespace[i])
      {
        len--;
        done = 0;
        break;
      }
  }
}

static bool decode_string (const char *yytext, uint32_t yyleng, string *result) {
  char delim = yytext [0];
  uint32_t i;
  for (i = 1; i + 1 < yyleng; i++) {
    char ch = yytext [i];
    if (ch == '&') {
      int d = decode_entity (yytext + i + 1, result);
      if (d < 0) return false;
      i += d;
    } else {
      *result += ch;
      if (ch == delim) ++i;
    }
  }
  return true;
}

symbol_table::symbol_table(uint32_t initial_heapsize)
:
	heap(initial_heapsize)
{
}

symbol_table::~symbol_table()
{
}

uint32_t symbol_table::size() const
{
	return (uint32_t)heap.size();
}

static void normalize_eol (const char *text, uint32_t length, string *out) {
  uint32_t i;
  out->reserve (length + 1);
  char lastCh = '\0';
  for (i = 0; i < length; i++) {
    char ch = text [i];
    if (ch == '\r')
      *out += '\n';
    else if (ch != '\n' || lastCh != '\r')
      *out += ch;
    lastCh = ch;
  }
}

off_t symbol_table::put(char const* text, uint32_t length, bool eolNorm)
{
  string normStr;
  if (eolNorm) {
    normalize_eol (text, length, &normStr);
    text = normStr.c_str ();
    length = normStr.size ();
  }
	return heap.put(text, 0, length);
}

off_t symbol_table::put_ncname(char const* text, uint32_t length)
{
	return heap.put(text, 0, length);
}

off_t symbol_table::put_qname(char const* text, uint32_t length, bool do_trim_start, bool do_trim_end)
{
  if (do_trim_start)
    trim_start(&text, length);
  
  if (do_trim_end)
    trim_end(text, length);
  
	return heap.put(text, 0, length);
}

off_t symbol_table::put_uri(char const* text, uint32_t length)
{
  string result;
  if (! decode_string (text, length, &result)) return -1;
  const char *result0 = result.c_str ();
  length = result.length ();
  trim_start (&result0, length);
  trim_end   ( result0, length);
  return heap.put (result0, 0, length);

#if 0
  if (do_trim_start_and_quotes)
  {
    trim_start(&text, length);

    if (text[0] == '\"')
    {
      text++;
      length--;
    }

    if (text[length-1] == '\"')
    {
      length--;
    }
  }
  
	return heap.put(text, 0, length);
#endif
}

off_t symbol_table::put_varname(char const* text, uint32_t length)
{
	return heap.put(text, 0, length);
}

off_t symbol_table::put_entityref(char const* text, uint32_t length)
{
  string result;
  if (decode_entity (text + 1, &result) < 0)
    return -1;
	return heap.put(result.c_str(), 0, result.size ());
}

off_t symbol_table::put_charref(char const* text, uint32_t length)
{
	return heap.put (text + 1, 0, length - 1);
}

off_t symbol_table::put_stringlit(char const* yytext, uint32_t yyleng)
{
  string eolNorm;
  normalize_eol (yytext, yyleng, &eolNorm);
  yytext = eolNorm.c_str (); yyleng = eolNorm.size ();
  string result;
  if (! decode_string (yytext, yyleng, &result)) return -1;
	return heap.put (result.c_str (), 0, result.length ());
}

xqp_decimal* symbol_table::decimalval(char const* text, uint32_t length)
{
  xqp_decimal lDecimal;
  NumConversions::starCharToDecimal(text, lDecimal);
  return new xqp_decimal(lDecimal);
}

xqp_double* symbol_table::doubleval(char const* text, uint32_t length)
{
  xqp_double lDouble;
  NumConversions::starCharToDouble(text, lDouble);
  return new xqp_double(lDouble);
}

xqp_integer* symbol_table::integerval(char const* text, uint32_t length)
{
  xqp_integer lInteger;
  NumConversions::starCharToInteger(text, lInteger);
  return new xqp_integer(lInteger);
}

std::string symbol_table::get(off_t id)
{
	uint32_t n = heap.get_length0(id);
	char *buf;
	buf = (char*)malloc(n+1);
	heap.get0(id, buf, 0, n+1);
	std::string retstr = string(buf, 0, n);
	free(buf);
	return retstr;
}


}	/* namespace zorba */
