
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002, 2003, 2004, 2005, 2006, 2007, 2008 Free Software
   Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

// Take the name prefix into account.
#define yylex   zorbalex

/* First part of user declarations.  */

/* Line 311 of lalr1.cc  */
#line 59 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"


#include "common/common.h"

#ifdef _WIN32
#pragma warning(disable: 4786)
#endif

#include <string>

#include "compiler/parsetree/parsenodes.h"
#include "compiler/parser/parse_constants.h"
#include "compiler/api/compilercb.h"
#include "store/api/update_consts.h"

#define SYMTAB( n ) driver.symtab.get ((off_t) n)
#define SYMTAB_PUT( s ) driver.symtab.put (s)
#define LOC( p ) driver.createQueryLoc(p)

namespace zorba
{
namespace parser
{
  extern const char *the_tumbling, *the_sliding, *the_start, *the_end, *the_only_end, *the_ofor, *the_declare, *the_create;
}
}

#define YYDEBUG 1



/* Line 311 of lalr1.cc  */
#line 75 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"


#include "xquery_parser.hpp"

/* User implementation prologue.  */

/* Line 317 of lalr1.cc  */
#line 918 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"

#include "compiler/parser/xquery_driver.h"
#include "compiler/parser/xquery_scanner.h"
#undef yylex
#define yylex driver.lexer->lex


/* Line 317 of lalr1.cc  */
#line 92 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_REDUCE_PRINT(Rule)
# define YY_STACK_PRINT()

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


/* Line 380 of lalr1.cc  */
#line 1 "[Bison:b4_percent_define_default]"

namespace zorba {

/* Line 380 of lalr1.cc  */
#line 161 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
#if YYERROR_VERBOSE

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  xquery_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              /* Fall through.  */
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

#endif

  /// Build a parser object.
  xquery_parser::xquery_parser (xquery_driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {
  }

  xquery_parser::~xquery_parser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  xquery_parser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  xquery_parser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  xquery_parser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
        case 102: /* "\"'DECIMAL'\"" */

/* Line 480 of lalr1.cc  */
#line 802 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ delete (yyvaluep->decval); };

/* Line 480 of lalr1.cc  */
#line 268 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 114: /* "\"'DOUBLE'\"" */

/* Line 480 of lalr1.cc  */
#line 801 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ delete (yyvaluep->dval); };

/* Line 480 of lalr1.cc  */
#line 277 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 138: /* "\"'INTEGER'\"" */

/* Line 480 of lalr1.cc  */
#line 800 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ delete (yyvaluep->ival); };

/* Line 480 of lalr1.cc  */
#line 286 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 315: /* "VersionDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 295 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 316: /* "MainModule" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 304 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 317: /* "LibraryModule" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 313 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 318: /* "ModuleDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 322 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 319: /* "Prolog" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 331 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 320: /* "SIND_DeclList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 340 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 321: /* "VFO_DeclList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 349 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 322: /* "SIND_Decl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 358 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 323: /* "VFO_Decl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 367 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 324: /* "DecimalFormatDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 376 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 325: /* "DecimalFormatParamList" */

/* Line 480 of lalr1.cc  */
#line 814 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ delete (yyvaluep->pair_vector); };

/* Line 480 of lalr1.cc  */
#line 385 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 326: /* "DecimalFormatParam" */

/* Line 480 of lalr1.cc  */
#line 814 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ delete (yyvaluep->pair); };

/* Line 480 of lalr1.cc  */
#line 394 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 328: /* "Setter" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 403 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 329: /* "Import" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 412 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 330: /* "NamespaceDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 421 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 331: /* "BoundarySpaceDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 430 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 332: /* "DefaultNamespaceDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 439 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 333: /* "OptionDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 448 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 335: /* "OrderingModeDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 457 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 336: /* "EmptyOrderDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 466 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 337: /* "CopyNamespacesDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 475 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 338: /* "DefaultCollationDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 484 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 339: /* "BaseURIDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 493 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 340: /* "SchemaImport" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 502 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 341: /* "URILiteralList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 511 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 342: /* "SchemaPrefix" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 520 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 343: /* "ModuleImport" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 529 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 344: /* "CtxItemDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 538 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 345: /* "CtxItemDecl2" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 547 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 346: /* "CtxItemDecl3" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 556 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 347: /* "CtxItemDecl4" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 565 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 348: /* "VarNameAndType" */

/* Line 480 of lalr1.cc  */
#line 814 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ delete (yyvaluep->varnametype); };

/* Line 480 of lalr1.cc  */
#line 574 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 349: /* "VarDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 583 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 350: /* "DeclPropertyList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 592 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 351: /* "DeclProperty" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 601 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 352: /* "CollectionDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 610 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 354: /* "NodeModifier" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 619 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 355: /* "IndexDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 628 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 356: /* "IndexKeyList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 637 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 357: /* "IndexKeySpec" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 646 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 358: /* "IntegrityConstraintDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 655 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 359: /* "ConstructionDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 664 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 360: /* "FunctionSig" */

/* Line 480 of lalr1.cc  */
#line 814 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ delete (yyvaluep->fnsig); };

/* Line 480 of lalr1.cc  */
#line 673 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 361: /* "BlockExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 682 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 362: /* "Block" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 691 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 363: /* "BlockDecls" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 700 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 364: /* "BlockVarDeclList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 709 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 365: /* "BlockVarDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 718 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 366: /* "AssignExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 727 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 367: /* "ExitExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 736 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 368: /* "WhileExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 745 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 369: /* "FlowCtlStatement" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 754 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 370: /* "FunctionDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 763 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 371: /* "FunctionDecl2" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 772 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 372: /* "FunctionDecl3" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 781 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 373: /* "FunctionDecl4" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 790 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 374: /* "ParamList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 799 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 375: /* "Param" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 808 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 376: /* "EnclosedExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 817 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 377: /* "BracedExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 826 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 378: /* "QueryBody" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 835 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 379: /* "Expr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 844 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 380: /* "ApplyExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 853 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 381: /* "ConcatExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 862 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 382: /* "ExprSingle" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 871 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 383: /* "FLWORExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 880 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 384: /* "ReturnExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 889 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 387: /* "FLWORWinCond" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 898 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 388: /* "WindowClause" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 907 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 389: /* "CountClause" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 916 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 390: /* "ForLetWinClause" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 925 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 392: /* "FLWORClauseList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 934 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 394: /* "ForClause" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 943 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 395: /* "VarInDeclList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 952 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 396: /* "VarInDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 961 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 397: /* "PositionalVar" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 970 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 399: /* "LetClause" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 979 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 400: /* "VarGetsDeclList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 988 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 401: /* "EvalVarDeclList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 997 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 402: /* "VarGetsDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1006 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 403: /* "WindowVarDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1015 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 404: /* "WindowVars" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1024 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 405: /* "WindowVars3" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1033 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 406: /* "WindowVars2" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1042 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 407: /* "EvalVarDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1051 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 408: /* "WhereClause" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1060 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 409: /* "GroupByClause" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1069 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 410: /* "GroupSpecList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1078 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 411: /* "GroupSpec" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1087 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 412: /* "GroupCollationSpec" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1096 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 413: /* "OrderByClause" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1105 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 414: /* "OrderSpecList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1114 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 415: /* "OrderSpec" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1123 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 416: /* "OrderModifier" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1132 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 417: /* "OrderDirSpec" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1141 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 418: /* "OrderEmptySpec" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1150 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 419: /* "OrderCollationSpec" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1159 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 420: /* "QuantifiedExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1168 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 421: /* "QVarInDeclList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1177 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 422: /* "QVarInDecl" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1186 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 423: /* "TypeswitchExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1195 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 424: /* "CaseClauseList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1204 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 425: /* "CaseClause" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1213 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 426: /* "IfExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1222 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 427: /* "OrExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1231 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 428: /* "AndExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1240 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 429: /* "ComparisonExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1249 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 431: /* "FTContainsExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1258 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 432: /* "RangeExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1267 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 433: /* "AdditiveExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1276 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 434: /* "MultiplicativeExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1285 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 435: /* "UnionExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1294 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 436: /* "IntersectExceptExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1303 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 437: /* "InstanceofExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1312 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 438: /* "TreatExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1321 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 439: /* "CastableExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1330 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 440: /* "CastExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1339 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 441: /* "UnaryExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1348 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 442: /* "SignList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1357 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 443: /* "ValueExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1366 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 444: /* "ValueComp" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1375 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 445: /* "NodeComp" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1384 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 446: /* "ValidateExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1393 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 447: /* "ExtensionExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1402 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 448: /* "PragmaList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1411 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 449: /* "Pragma" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1420 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 450: /* "PathExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1429 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 452: /* "RelativePathExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1438 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 453: /* "StepExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1447 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 454: /* "AxisStep" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1456 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 455: /* "ForwardStep" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1465 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 456: /* "ForwardAxis" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1474 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 457: /* "AbbrevForwardStep" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1483 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 458: /* "ReverseStep" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1492 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 459: /* "ReverseAxis" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1501 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 460: /* "NodeTest" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1510 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 461: /* "NameTest" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1519 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 462: /* "Wildcard" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1528 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 463: /* "FilterExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1537 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 464: /* "PredicateList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1546 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 465: /* "Predicate" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1555 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 466: /* "PrimaryExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1564 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 467: /* "Literal" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1573 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 468: /* "NumericLiteral" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1582 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 469: /* "VarRef" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1591 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 470: /* "ParenthesizedExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1600 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 471: /* "ContextItemExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1609 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 472: /* "OrderedExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1618 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 473: /* "UnorderedExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1627 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 474: /* "FunctionCall" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1636 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 475: /* "ArgList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1645 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 476: /* "Constructor" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1654 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 477: /* "DirectConstructor" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1663 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 478: /* "DirElemConstructor" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1672 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 479: /* "DirElemContentList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1681 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 480: /* "DirAttributeList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1690 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 481: /* "DirAttr" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1699 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 483: /* "DirAttributeValue" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1708 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 484: /* "Opt_QuoteAttrContentList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1717 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 485: /* "QuoteAttrContentList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1726 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 486: /* "Opt_AposAttrContentList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1735 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 487: /* "AposAttrContentList" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1744 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 488: /* "QuoteAttrValueContent" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1753 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 489: /* "AposAttrValueContent" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1762 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 490: /* "DirElemContent" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1771 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 491: /* "CommonContent" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1780 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 492: /* "DirCommentConstructor" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1789 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 493: /* "DirPIConstructor" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1798 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 494: /* "CDataSection" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1807 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 495: /* "ComputedConstructor" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1816 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 496: /* "CompDocConstructor" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1825 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 497: /* "CompElemConstructor" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1834 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 498: /* "CompAttrConstructor" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1843 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 499: /* "CompTextConstructor" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1852 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 500: /* "CompCommentConstructor" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1861 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 501: /* "CompPIConstructor" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 1870 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 502: /* "SingleType" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1879 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 503: /* "TypeDeclaration" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1888 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 504: /* "SequenceType" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1897 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 505: /* "OccurrenceIndicator" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1906 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 506: /* "ItemType" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1915 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 507: /* "AtomicType" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1924 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 508: /* "KindTest" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1933 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 509: /* "AnyKindTest" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1942 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 510: /* "DocumentTest" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1951 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 511: /* "TextTest" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1960 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 512: /* "CommentTest" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1969 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 513: /* "PITest" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1978 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 514: /* "AttributeTest" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1987 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 515: /* "SchemaAttributeTest" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 1996 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 516: /* "ElementTest" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 2005 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 517: /* "SchemaElementTest" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 2014 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 518: /* "TypeName" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 2023 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 519: /* "TypeName_WITH_HOOK" */

/* Line 480 of lalr1.cc  */
#line 810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->node) != NULL) { RCHelper::addReference ((yyvaluep->node)); RCHelper::removeReference ((yyvaluep->node)); } };

/* Line 480 of lalr1.cc  */
#line 2032 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 520: /* "StringLiteral" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 2041 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 522: /* "InsertExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 2050 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 523: /* "DeleteExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 2059 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 524: /* "ReplaceExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 2068 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 525: /* "RenameExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 2077 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 526: /* "TransformExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 2086 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 527: /* "VarNameList" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 2095 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 528: /* "VarNameDecl" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 2104 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 529: /* "TryExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 2113 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 530: /* "CatchListExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 2122 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 531: /* "CatchExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 2131 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 532: /* "NameTestList" */

/* Line 480 of lalr1.cc  */
#line 814 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ delete (yyvaluep->name_test_list); };

/* Line 480 of lalr1.cc  */
#line 2140 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 535: /* "QNAME" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 2149 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;
      case 536: /* "EvalExpr" */

/* Line 480 of lalr1.cc  */
#line 812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
	{ if ((yyvaluep->expr) != NULL) { RCHelper::addReference ((yyvaluep->expr)); RCHelper::removeReference ((yyvaluep->expr)); } };

/* Line 480 of lalr1.cc  */
#line 2158 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	break;

	default:
	  break;
      }
  }

  void
  xquery_parser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  xquery_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  xquery_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  xquery_parser::debug_level_type
  xquery_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  xquery_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  int
  xquery_parser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    /* State.  */
    int yyn;
    int yylen = 0;
    int yystate = 0;

    /* Error handling.  */
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    semantic_type yylval;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[2];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    YYCDEBUG << "Starting parse" << std::endl;


    /* User initialization code.  */
    
/* Line 553 of lalr1.cc  */
#line 108 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
{
  yylloc.begin.filename = yylloc.end.filename = &(driver.theFilename);
}

/* Line 553 of lalr1.cc  */
#line 2243 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"

    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yyn == yypact_ninf_)
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
	YYCDEBUG << "Reading a token: ";
	yychar = yylex (&yylval, &yylloc);
      }


    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yyn == 0 || yyn == yytable_ninf_)
	goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
	  case 3:

/* Line 678 of lalr1.cc  */
#line 936 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = (yysemantic_stack_[(2) - (2)].node);
    }
    break;

  case 4:

/* Line 678 of lalr1.cc  */
#line 946 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
			driver.set_expr ((yyval.node));
		}
    break;

  case 5:

/* Line 678 of lalr1.cc  */
#line 951 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      dynamic_cast<MainModule *> ((yysemantic_stack_[(2) - (2)].node))->set_version_decl (static_cast<VersionDecl *> ((yysemantic_stack_[(2) - (1)].node)));
			(yyval.node) = (yysemantic_stack_[(2) - (2)].node);
			driver.set_expr ((yyval.node));
		}
    break;

  case 6:

/* Line 678 of lalr1.cc  */
#line 957 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
       driver.set_expr ((yyval.node));
		}
    break;

  case 7:

/* Line 678 of lalr1.cc  */
#line 962 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       dynamic_cast<LibraryModule *> ((yysemantic_stack_[(2) - (2)].node))->set_version_decl (static_cast<VersionDecl *> ((yysemantic_stack_[(2) - (1)].node)));
       (yyval.node) = (yysemantic_stack_[(2) - (2)].node);
       driver.set_expr ((yyval.node));
		}
    break;

  case 8:

/* Line 678 of lalr1.cc  */
#line 974 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       std::string encoding = "utf-8";
       (yyval.node) = new VersionDecl (LOC ((yyloc)), SYMTAB ((yysemantic_stack_[(4) - (3)].sval)), encoding);
		}
    break;

  case 9:

/* Line 678 of lalr1.cc  */
#line 979 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.node) = new VersionDecl (LOC ((yyloc)), SYMTAB ((yysemantic_stack_[(6) - (3)].sval)), SYMTAB ((yysemantic_stack_[(6) - (5)].sval)));
    }
    break;

  case 10:

/* Line 678 of lalr1.cc  */
#line 989 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new MainModule(LOC ((yyloc)),
								static_cast<QueryBody*>((yysemantic_stack_[(2) - (2)].expr)),
								static_cast<Prolog*>((yysemantic_stack_[(2) - (1)].node)));
		}
    break;

  case 11:

/* Line 678 of lalr1.cc  */
#line 996 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new MainModule(LOC ((yyloc)),
								static_cast<QueryBody*>((yysemantic_stack_[(1) - (1)].expr)),
                NULL);
		}
    break;

  case 12:

/* Line 678 of lalr1.cc  */
#line 1008 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new LibraryModule(LOC ((yyloc)),
                             static_cast<ModuleDecl*>((yysemantic_stack_[(1) - (1)].node)),
                             NULL);
    }
    break;

  case 13:

/* Line 678 of lalr1.cc  */
#line 1014 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new LibraryModule(LOC ((yyloc)),
								static_cast<ModuleDecl*>((yysemantic_stack_[(2) - (1)].node)),
								static_cast<Prolog*>((yysemantic_stack_[(2) - (2)].node)));
		}
    break;

  case 14:

/* Line 678 of lalr1.cc  */
#line 1026 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ModuleDecl(LOC ((yyloc)),
								SYMTAB ((yysemantic_stack_[(6) - (3)].sval)),
								SYMTAB ((yysemantic_stack_[(6) - (5)].sval)));
      dynamic_cast<ModuleDecl *>((yyval.node))->setComment(SYMTAB((yysemantic_stack_[(6) - (1)].sval)));
		}
    break;

  case 15:

/* Line 678 of lalr1.cc  */
#line 1039 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new Prolog(LOC((yyloc)), static_cast<SIND_DeclList*>((yysemantic_stack_[(2) - (1)].node)), NULL);
		}
    break;

  case 16:

/* Line 678 of lalr1.cc  */
#line 1043 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new Prolog(LOC((yyloc)), NULL, static_cast<VFO_DeclList*>((yysemantic_stack_[(2) - (1)].node)));
		}
    break;

  case 17:

/* Line 678 of lalr1.cc  */
#line 1047 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new Prolog(LOC((yyloc)),
                      static_cast<SIND_DeclList*>((yysemantic_stack_[(4) - (1)].node)),
                      static_cast<VFO_DeclList*>((yysemantic_stack_[(4) - (3)].node)));
		}
    break;

  case 18:

/* Line 678 of lalr1.cc  */
#line 1059 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			SIND_DeclList* sindList_p = new SIND_DeclList(LOC ((yyloc)));
			sindList_p->push_back((yysemantic_stack_[(1) - (1)].node));
			(yyval.node) = sindList_p;
		}
    break;

  case 19:

/* Line 678 of lalr1.cc  */
#line 1065 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			SIND_DeclList* sindList_p = static_cast<SIND_DeclList*>((yysemantic_stack_[(3) - (1)].node));
			if (sindList_p) {
				sindList_p->push_back((yysemantic_stack_[(3) - (3)].node));
			}
			(yyval.node) = (yysemantic_stack_[(3) - (1)].node);
		}
    break;

  case 20:

/* Line 678 of lalr1.cc  */
#line 1079 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			VFO_DeclList* vfoList_p = new VFO_DeclList(LOC ((yyloc)));
			vfoList_p->push_back((yysemantic_stack_[(1) - (1)].node));
			(yyval.node) = vfoList_p;
		}
    break;

  case 21:

/* Line 678 of lalr1.cc  */
#line 1085 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			VFO_DeclList* vfoList_p = dynamic_cast<VFO_DeclList*>((yysemantic_stack_[(3) - (1)].node));
			if (vfoList_p) {
				vfoList_p->push_back((yysemantic_stack_[(3) - (3)].node));
			}
			(yyval.node) = (yysemantic_stack_[(3) - (1)].node);
		}
    break;

  case 35:

/* Line 678 of lalr1.cc  */
#line 1131 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DecimalFormatNode(LOC((yyloc)), (yysemantic_stack_[(4) - (4)].pair_vector));
      delete (yysemantic_stack_[(4) - (4)].pair_vector);
    }
    break;

  case 36:

/* Line 678 of lalr1.cc  */
#line 1136 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DecimalFormatNode(LOC((yyloc)), static_cast<QName*>((yysemantic_stack_[(4) - (3)].expr))->get_qname(), (yysemantic_stack_[(4) - (4)].pair_vector));
      delete (yysemantic_stack_[(4) - (3)].expr);
      delete (yysemantic_stack_[(4) - (4)].pair_vector);
    }
    break;

  case 37:

/* Line 678 of lalr1.cc  */
#line 1145 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.pair_vector) = new std::vector<std::pair<std::string, std::string> > ();
      (yyval.pair_vector)->push_back(*(yysemantic_stack_[(1) - (1)].pair));
      delete (yysemantic_stack_[(1) - (1)].pair);
    }
    break;

  case 38:

/* Line 678 of lalr1.cc  */
#line 1151 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yysemantic_stack_[(2) - (1)].pair_vector)->push_back(*(yysemantic_stack_[(2) - (2)].pair));
      delete (yysemantic_stack_[(2) - (2)].pair);
      (yyval.pair_vector) = (yysemantic_stack_[(2) - (1)].pair_vector);
    }
    break;

  case 39:

/* Line 678 of lalr1.cc  */
#line 1160 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      StringLiteral *s = static_cast<StringLiteral *>((yysemantic_stack_[(3) - (3)].expr));
      (yyval.pair) = new std::pair<std::string, std::string>((yysemantic_stack_[(3) - (1)].strval), s->get_strval());
      delete s;
    }
    break;

  case 40:

/* Line 678 of lalr1.cc  */
#line 1168 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.strval) = "decimal-separator"; }
    break;

  case 41:

/* Line 678 of lalr1.cc  */
#line 1169 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.strval) = "grouping-separator"; }
    break;

  case 42:

/* Line 678 of lalr1.cc  */
#line 1170 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.strval) = "infinty"; }
    break;

  case 43:

/* Line 678 of lalr1.cc  */
#line 1171 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.strval) = "minus-sign"; }
    break;

  case 44:

/* Line 678 of lalr1.cc  */
#line 1172 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.strval) = "NaN"; }
    break;

  case 45:

/* Line 678 of lalr1.cc  */
#line 1173 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.strval) = "percent"; }
    break;

  case 46:

/* Line 678 of lalr1.cc  */
#line 1174 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.strval) = "per-mille"; }
    break;

  case 47:

/* Line 678 of lalr1.cc  */
#line 1175 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.strval) = "zero-digit"; }
    break;

  case 48:

/* Line 678 of lalr1.cc  */
#line 1176 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.strval) = "digit"; }
    break;

  case 49:

/* Line 678 of lalr1.cc  */
#line 1177 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.strval) = "pattern-separator"; }
    break;

  case 60:

/* Line 678 of lalr1.cc  */
#line 1214 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new NamespaceDecl(LOC ((yyloc)),
								SYMTAB ((yysemantic_stack_[(5) - (3)].sval)),
								SYMTAB ((yysemantic_stack_[(5) - (5)].sval)));
		}
    break;

  case 61:

/* Line 678 of lalr1.cc  */
#line 1226 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new BoundarySpaceDecl(LOC ((yyloc)),
								StaticContextConsts::preserve_space);
		}
    break;

  case 62:

/* Line 678 of lalr1.cc  */
#line 1231 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new BoundarySpaceDecl(LOC ((yyloc)),
								StaticContextConsts::strip_space);
		}
    break;

  case 63:

/* Line 678 of lalr1.cc  */
#line 1242 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new DefaultNamespaceDecl(LOC ((yyloc)),
								ParseConstants::ns_element_default,
								SYMTAB ((yysemantic_stack_[(5) - (5)].sval)));
		}
    break;

  case 64:

/* Line 678 of lalr1.cc  */
#line 1248 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new DefaultNamespaceDecl(LOC ((yyloc)),
								ParseConstants::ns_function_default,
								SYMTAB ((yysemantic_stack_[(5) - (5)].sval)));
		}
    break;

  case 65:

/* Line 678 of lalr1.cc  */
#line 1260 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OptionDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (3)].expr)),
								SYMTAB((yysemantic_stack_[(4) - (4)].sval)));
		}
    break;

  case 66:

/* Line 678 of lalr1.cc  */
#line 1273 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new FTOptionDecl(LOC ((yyloc)),
								(yysemantic_stack_[(3) - (3)].node));
		}
    break;

  case 67:

/* Line 678 of lalr1.cc  */
#line 1284 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderingModeDecl(LOC ((yyloc)),
								StaticContextConsts::ordered);
		}
    break;

  case 68:

/* Line 678 of lalr1.cc  */
#line 1289 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderingModeDecl(LOC ((yyloc)),
								StaticContextConsts::unordered);
		}
    break;

  case 69:

/* Line 678 of lalr1.cc  */
#line 1301 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new EmptyOrderDecl(LOC ((yyloc)),
								StaticContextConsts::empty_greatest);
		}
    break;

  case 70:

/* Line 678 of lalr1.cc  */
#line 1306 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new EmptyOrderDecl(LOC ((yyloc)),
								StaticContextConsts::empty_least);
		}
    break;

  case 71:

/* Line 678 of lalr1.cc  */
#line 1317 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new CopyNamespacesDecl(LOC ((yyloc)),
								StaticContextConsts::preserve_ns,
								StaticContextConsts::inherit_ns);
		}
    break;

  case 72:

/* Line 678 of lalr1.cc  */
#line 1323 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new CopyNamespacesDecl(LOC ((yyloc)),
								StaticContextConsts::preserve_ns,
								StaticContextConsts::no_inherit_ns);
		}
    break;

  case 73:

/* Line 678 of lalr1.cc  */
#line 1329 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new CopyNamespacesDecl(LOC ((yyloc)),
								StaticContextConsts::no_preserve_ns,
								StaticContextConsts::inherit_ns);
		}
    break;

  case 74:

/* Line 678 of lalr1.cc  */
#line 1335 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new CopyNamespacesDecl(LOC ((yyloc)),
								StaticContextConsts::no_preserve_ns,
								StaticContextConsts::no_inherit_ns);
		}
    break;

  case 75:

/* Line 678 of lalr1.cc  */
#line 1354 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new DefaultCollationDecl(LOC ((yyloc)),
								SYMTAB ((yysemantic_stack_[(4) - (4)].sval)));
		}
    break;

  case 76:

/* Line 678 of lalr1.cc  */
#line 1365 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new BaseURIDecl(LOC ((yyloc)),
								SYMTAB ((yysemantic_stack_[(3) - (3)].sval)));
		}
    break;

  case 77:

/* Line 678 of lalr1.cc  */
#line 1376 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SchemaImport(LOC ((yyloc)),
								NULL,
								SYMTAB ((yysemantic_stack_[(3) - (3)].sval)),
								NULL);
		}
    break;

  case 78:

/* Line 678 of lalr1.cc  */
#line 1383 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SchemaImport(LOC ((yyloc)),
								dynamic_cast<SchemaPrefix*>((yysemantic_stack_[(4) - (3)].node)),
								SYMTAB ((yysemantic_stack_[(4) - (4)].sval)),
								NULL);
		}
    break;

  case 79:

/* Line 678 of lalr1.cc  */
#line 1390 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SchemaImport(LOC ((yyloc)),
								NULL,
								SYMTAB ((yysemantic_stack_[(5) - (3)].sval)),
								dynamic_cast<URILiteralList*>((yysemantic_stack_[(5) - (5)].node)));
		}
    break;

  case 80:

/* Line 678 of lalr1.cc  */
#line 1397 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SchemaImport(LOC ((yyloc)),
								dynamic_cast<SchemaPrefix*>((yysemantic_stack_[(6) - (3)].node)),
								SYMTAB ((yysemantic_stack_[(6) - (4)].sval)),
								dynamic_cast<URILiteralList*>((yysemantic_stack_[(6) - (6)].node)));
		}
    break;

  case 81:

/* Line 678 of lalr1.cc  */
#line 1410 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			URILiteralList* uri_list_p = new URILiteralList(LOC ((yyloc)));
			uri_list_p->push_back(SYMTAB ((yysemantic_stack_[(1) - (1)].sval)));
			(yyval.node) = uri_list_p;
		}
    break;

  case 82:

/* Line 678 of lalr1.cc  */
#line 1416 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			URILiteralList* uri_list_p = dynamic_cast<URILiteralList*>((yysemantic_stack_[(3) - (1)].node));
			if (uri_list_p) {
				uri_list_p->push_back(SYMTAB ((yysemantic_stack_[(3) - (3)].sval)));
			}
			(yyval.node) = (yysemantic_stack_[(3) - (1)].node);
		}
    break;

  case 83:

/* Line 678 of lalr1.cc  */
#line 1431 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SchemaPrefix(LOC ((yyloc)), SYMTAB ((yysemantic_stack_[(3) - (2)].sval)));
		}
    break;

  case 84:

/* Line 678 of lalr1.cc  */
#line 1435 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SchemaPrefix(LOC ((yyloc)), true);
		}
    break;

  case 85:

/* Line 678 of lalr1.cc  */
#line 1445 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ModuleImport(LOC ((yyloc)), false,
								SYMTAB ((yysemantic_stack_[(3) - (3)].sval)),
								NULL);
      dynamic_cast<ModuleImport *>((yyval.node))->setComment(SYMTAB((yysemantic_stack_[(3) - (2)].sval)));
		}
    break;

  case 86:

/* Line 678 of lalr1.cc  */
#line 1452 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ModuleImport(LOC ((yyloc)), false,
								SYMTAB ((yysemantic_stack_[(6) - (4)].sval)),
								SYMTAB ((yysemantic_stack_[(6) - (6)].sval)),
								NULL);
      dynamic_cast<ModuleImport *>((yyval.node))->setComment(SYMTAB((yysemantic_stack_[(6) - (2)].sval)));
		}
    break;

  case 87:

/* Line 678 of lalr1.cc  */
#line 1460 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ModuleImport(LOC ((yyloc)), false,
								SYMTAB ((yysemantic_stack_[(5) - (3)].sval)),
								dynamic_cast<URILiteralList*>((yysemantic_stack_[(5) - (5)].node)));
      dynamic_cast<ModuleImport *>((yyval.node))->setComment(SYMTAB((yysemantic_stack_[(5) - (2)].sval)));
		}
    break;

  case 88:

/* Line 678 of lalr1.cc  */
#line 1467 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ModuleImport(LOC ((yyloc)), false,
								SYMTAB ((yysemantic_stack_[(8) - (4)].sval)),
								SYMTAB ((yysemantic_stack_[(8) - (6)].sval)),
								dynamic_cast<URILiteralList*>((yysemantic_stack_[(8) - (8)].node)));
      dynamic_cast<ModuleImport *>((yyval.node))->setComment(SYMTAB((yysemantic_stack_[(8) - (2)].sval)));
		}
    break;

  case 89:

/* Line 678 of lalr1.cc  */
#line 1480 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = (yysemantic_stack_[(4) - (4)].node);
    }
    break;

  case 90:

/* Line 678 of lalr1.cc  */
#line 1487 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      CtxItemDecl *d = dynamic_cast<CtxItemDecl *> ((yysemantic_stack_[(3) - (3)].node));
      d->type = (yysemantic_stack_[(3) - (2)].node);
      (yyval.node) = d;
    }
    break;

  case 91:

/* Line 678 of lalr1.cc  */
#line 1493 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
    }
    break;

  case 92:

/* Line 678 of lalr1.cc  */
#line 1500 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      CtxItemDecl *d = dynamic_cast<CtxItemDecl *> ((yysemantic_stack_[(1) - (1)].node));
      d->ext = false;
      (yyval.node) = d;
    }
    break;

  case 93:

/* Line 678 of lalr1.cc  */
#line 1506 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new CtxItemDecl (LOC ((yyloc)), NULL);
    }
    break;

  case 94:

/* Line 678 of lalr1.cc  */
#line 1510 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = (yysemantic_stack_[(2) - (2)].node);
    }
    break;

  case 95:

/* Line 678 of lalr1.cc  */
#line 1517 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new CtxItemDecl (LOC ((yyloc)), (yysemantic_stack_[(2) - (2)].expr));
    }
    break;

  case 96:

/* Line 678 of lalr1.cc  */
#line 1528 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.varnametype) = new VarNameAndType (static_cast<QName*>((yysemantic_stack_[(2) - (2)].expr))->get_qname(), NULL);
      delete (yysemantic_stack_[(2) - (2)].expr);
    }
    break;

  case 97:

/* Line 678 of lalr1.cc  */
#line 1533 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.varnametype) = new VarNameAndType (static_cast<QName*>((yysemantic_stack_[(3) - (2)].expr))->get_qname(),
                               dynamic_cast<SequenceType *> ((yysemantic_stack_[(3) - (3)].node)));
      delete (yysemantic_stack_[(3) - (2)].expr);
    }
    break;

  case 98:

/* Line 678 of lalr1.cc  */
#line 1542 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      std::auto_ptr<VarNameAndType> nt(dynamic_cast<VarNameAndType *>((yysemantic_stack_[(5) - (3)].varnametype)));
			(yyval.node) = new VarDecl(LOC ((yyloc)),
								nt->name,
								nt->type,
								(yysemantic_stack_[(5) - (5)].expr));
      dynamic_cast<VarDecl*>((yyval.node))->setComment(SYMTAB((yysemantic_stack_[(5) - (1)].sval)));
		}
    break;

  case 99:

/* Line 678 of lalr1.cc  */
#line 1551 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      std::auto_ptr<VarNameAndType> nt(dynamic_cast<VarNameAndType *>((yysemantic_stack_[(4) - (3)].varnametype)));
			(yyval.node) = new VarDecl(LOC ((yyloc)), nt->name, nt->type,
                       NULL, true);
      dynamic_cast<VarDecl*>((yyval.node))->setComment(SYMTAB((yysemantic_stack_[(4) - (1)].sval)));
		}
    break;

  case 100:

/* Line 678 of lalr1.cc  */
#line 1558 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      std::auto_ptr<VarNameAndType> nt(dynamic_cast<VarNameAndType *>((yysemantic_stack_[(6) - (3)].varnametype)));
			(yyval.node) = new VarDecl(LOC ((yyloc)), nt->name, nt->type,
                       (yysemantic_stack_[(6) - (6)].expr), true);
      dynamic_cast<VarDecl*>((yyval.node))->setComment(SYMTAB((yysemantic_stack_[(6) - (1)].sval)));
		}
    break;

  case 101:

/* Line 678 of lalr1.cc  */
#line 1568 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      DeclPropertyList* l = new DeclPropertyList(LOC((yyloc)));
      l->addProperty(dynamic_cast<DeclProperty*>((yysemantic_stack_[(1) - (1)].node)));
      (yyval.node) = l;
    }
    break;

  case 102:

/* Line 678 of lalr1.cc  */
#line 1574 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      dynamic_cast<DeclPropertyList*>((yysemantic_stack_[(2) - (1)].node))->addProperty(static_cast<DeclProperty*>((yysemantic_stack_[(2) - (2)].node)));
      (yyval.node) = (yysemantic_stack_[(2) - (1)].node);
    }
    break;

  case 103:

/* Line 678 of lalr1.cc  */
#line 1583 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DeclProperty(LOC((yyloc)), StaticContextConsts::decl_const);
    }
    break;

  case 104:

/* Line 678 of lalr1.cc  */
#line 1587 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DeclProperty(LOC((yyloc)), StaticContextConsts::decl_append_only);
    }
    break;

  case 105:

/* Line 678 of lalr1.cc  */
#line 1591 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DeclProperty(LOC((yyloc)), StaticContextConsts::decl_queue);
    }
    break;

  case 106:

/* Line 678 of lalr1.cc  */
#line 1595 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DeclProperty(LOC((yyloc)), StaticContextConsts::decl_mutable);
    }
    break;

  case 107:

/* Line 678 of lalr1.cc  */
#line 1599 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DeclProperty(LOC((yyloc)), StaticContextConsts::decl_ordered);
    }
    break;

  case 108:

/* Line 678 of lalr1.cc  */
#line 1603 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DeclProperty(LOC((yyloc)), StaticContextConsts::decl_unordered);
    }
    break;

  case 109:

/* Line 678 of lalr1.cc  */
#line 1607 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DeclProperty(LOC((yyloc)), StaticContextConsts::decl_value_equality);
    }
    break;

  case 110:

/* Line 678 of lalr1.cc  */
#line 1611 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DeclProperty(LOC((yyloc)), StaticContextConsts::decl_value_range);
    }
    break;

  case 111:

/* Line 678 of lalr1.cc  */
#line 1615 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DeclProperty(LOC((yyloc)), StaticContextConsts::decl_unique);
    }
    break;

  case 112:

/* Line 678 of lalr1.cc  */
#line 1619 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DeclProperty(LOC((yyloc)), StaticContextConsts::decl_non_unique);
    }
    break;

  case 113:

/* Line 678 of lalr1.cc  */
#line 1623 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DeclProperty(LOC((yyloc)), StaticContextConsts::decl_automatic);
    }
    break;

  case 114:

/* Line 678 of lalr1.cc  */
#line 1627 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new DeclProperty(LOC((yyloc)), StaticContextConsts::decl_manual);
    }
    break;

  case 115:

/* Line 678 of lalr1.cc  */
#line 1635 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new CollectionDecl(LOC((yyloc)),
                              static_cast<QName*>((yysemantic_stack_[(3) - (3)].expr)),
                              0, 
                              0, 
                              0);
    }
    break;

  case 116:

/* Line 678 of lalr1.cc  */
#line 1643 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new CollectionDecl(LOC((yyloc)),
                              static_cast<QName*>((yysemantic_stack_[(4) - (3)].expr)),
                              0, 
                              static_cast<NodeModifier*>((yysemantic_stack_[(4) - (4)].node)), 
                              0);
    }
    break;

  case 117:

/* Line 678 of lalr1.cc  */
#line 1651 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new CollectionDecl(LOC((yyloc)),
                              static_cast<QName*>((yysemantic_stack_[(5) - (3)].expr)),
                              0, 
                              0, 
                              static_cast<SequenceType*>((yysemantic_stack_[(5) - (5)].node)));
    }
    break;

  case 118:

/* Line 678 of lalr1.cc  */
#line 1659 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new CollectionDecl(LOC((yyloc)),
                              static_cast<QName*>((yysemantic_stack_[(6) - (3)].expr)),
                              0, 
                              static_cast<NodeModifier*>((yysemantic_stack_[(6) - (6)].node)), 
                              static_cast<SequenceType*>((yysemantic_stack_[(6) - (5)].node)));
    }
    break;

  case 119:

/* Line 678 of lalr1.cc  */
#line 1667 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new CollectionDecl( LOC((yyloc)),
                               static_cast<QName*>((yysemantic_stack_[(4) - (4)].expr)),
                               static_cast<DeclPropertyList*>((yysemantic_stack_[(4) - (2)].node)), 0, 0);
    }
    break;

  case 120:

/* Line 678 of lalr1.cc  */
#line 1673 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new CollectionDecl( LOC((yyloc)),
                               static_cast<QName*>((yysemantic_stack_[(5) - (4)].expr)),
                               static_cast<DeclPropertyList*>((yysemantic_stack_[(5) - (2)].node)), 
                               static_cast<NodeModifier*>((yysemantic_stack_[(5) - (5)].node)), 
                               0);
    }
    break;

  case 121:

/* Line 678 of lalr1.cc  */
#line 1681 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new CollectionDecl( LOC((yyloc)),
                               static_cast<QName*>((yysemantic_stack_[(6) - (4)].expr)),
                               static_cast<DeclPropertyList*>((yysemantic_stack_[(6) - (2)].node)), 
                               0, 
                               static_cast<SequenceType*>((yysemantic_stack_[(6) - (6)].node)));
    }
    break;

  case 122:

/* Line 678 of lalr1.cc  */
#line 1689 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new CollectionDecl( LOC((yyloc)),
                               static_cast<QName*>((yysemantic_stack_[(7) - (4)].expr)),
                               static_cast<DeclPropertyList*>((yysemantic_stack_[(7) - (2)].node)), 
                               static_cast<NodeModifier*>((yysemantic_stack_[(7) - (7)].node)), 
                               static_cast<SequenceType*>((yysemantic_stack_[(7) - (6)].node)));
    }
    break;

  case 123:

/* Line 678 of lalr1.cc  */
#line 1701 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = static_cast<parsenode*>(
           new SequenceType(LOC((yyloc)), (yysemantic_stack_[(1) - (1)].node), NULL));
    }
    break;

  case 124:

/* Line 678 of lalr1.cc  */
#line 1706 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = static_cast<parsenode*>(
           new SequenceType(LOC((yyloc)), (yysemantic_stack_[(2) - (1)].node), dynamic_cast<OccurrenceIndicator*>((yysemantic_stack_[(2) - (2)].node))));
    }
    break;

  case 125:

/* Line 678 of lalr1.cc  */
#line 1715 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new NodeModifier(LOC((yyloc)), StaticContextConsts::read_only);
    }
    break;

  case 126:

/* Line 678 of lalr1.cc  */
#line 1719 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new NodeModifier(LOC((yyloc)), StaticContextConsts::mutable_node);
    }
    break;

  case 127:

/* Line 678 of lalr1.cc  */
#line 1727 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new IndexDecl(LOC((yyloc)),
                         static_cast<QName*>((yysemantic_stack_[(8) - (3)].expr)),
                         (yysemantic_stack_[(8) - (6)].expr),
                         dynamic_cast<IndexKeyList*>((yysemantic_stack_[(8) - (8)].node)),
                         new DeclPropertyList(LOC((yyloc))));
    }
    break;

  case 128:

/* Line 678 of lalr1.cc  */
#line 1735 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new IndexDecl(LOC((yyloc)),
                         static_cast<QName*>((yysemantic_stack_[(9) - (4)].expr)),
                         (yysemantic_stack_[(9) - (7)].expr),
                         dynamic_cast<IndexKeyList*>((yysemantic_stack_[(9) - (9)].node)),
                         dynamic_cast<DeclPropertyList*>((yysemantic_stack_[(9) - (2)].node)));
    }
    break;

  case 129:

/* Line 678 of lalr1.cc  */
#line 1747 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      IndexKeyList* keyList = new IndexKeyList(LOC((yyloc)));
      keyList->addKeySpec(dynamic_cast<IndexKeySpec*>((yysemantic_stack_[(1) - (1)].node)));
      (yyval.node) = keyList;
    }
    break;

  case 130:

/* Line 678 of lalr1.cc  */
#line 1753 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      dynamic_cast<IndexKeyList*>((yysemantic_stack_[(3) - (1)].node))->addKeySpec(dynamic_cast<IndexKeySpec*>((yysemantic_stack_[(3) - (3)].node)));
      (yyval.node) = (yysemantic_stack_[(3) - (1)].node);
    }
    break;

  case 131:

/* Line 678 of lalr1.cc  */
#line 1762 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new IndexKeySpec(LOC((yyloc)),
                            (yysemantic_stack_[(3) - (1)].expr),
                            dynamic_cast<SingleType*>((yysemantic_stack_[(3) - (3)].node)),
                            NULL);
    }
    break;

  case 132:

/* Line 678 of lalr1.cc  */
#line 1769 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new IndexKeySpec(LOC((yyloc)),
                            (yysemantic_stack_[(4) - (1)].expr),
                            dynamic_cast<SingleType*>((yysemantic_stack_[(4) - (3)].node)),
                            dynamic_cast<OrderModifierPN*>((yysemantic_stack_[(4) - (4)].node)));
    }
    break;

  case 133:

/* Line 678 of lalr1.cc  */
#line 1781 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new ICCollSimpleCheck(LOC((yyloc)),
                                 static_cast<QName*>((yysemantic_stack_[(11) - (4)].expr)),
                                 static_cast<QName*>((yysemantic_stack_[(11) - (7)].expr)),
                                 static_cast<QName*>((yysemantic_stack_[(11) - (9)].expr)),
                                 (yysemantic_stack_[(11) - (11)].expr));
    }
    break;

  case 134:

/* Line 678 of lalr1.cc  */
#line 1791 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new ICCollUniqueKeyCheck(LOC((yyloc)),
                                    static_cast<QName*>((yysemantic_stack_[(13) - (4)].expr)),
                                    static_cast<QName*>((yysemantic_stack_[(13) - (7)].expr)),
                                    static_cast<QName*>((yysemantic_stack_[(13) - (9)].expr)),
                                    (yysemantic_stack_[(13) - (13)].expr));
    }
    break;

  case 135:

/* Line 678 of lalr1.cc  */
#line 1801 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new ICCollUniqueKeyCheck(LOC((yyloc)),
                                    static_cast<QName*>((yysemantic_stack_[(13) - (4)].expr)),
                                    static_cast<QName*>((yysemantic_stack_[(13) - (7)].expr)),
                                    static_cast<QName*>((yysemantic_stack_[(13) - (11)].expr)),
                                    (yysemantic_stack_[(13) - (13)].expr));
    }
    break;

  case 136:

/* Line 678 of lalr1.cc  */
#line 1812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new ICForeignKey(LOC((yyloc)),
                            static_cast<QName*>((yysemantic_stack_[(22) - (4)].expr)),
                            static_cast<QName*>((yysemantic_stack_[(22) - (9)].expr)),
                            static_cast<QName*>((yysemantic_stack_[(22) - (12)].expr)),
                            (yysemantic_stack_[(22) - (14)].expr),
                            static_cast<QName*>((yysemantic_stack_[(22) - (17)].expr)),
                            static_cast<QName*>((yysemantic_stack_[(22) - (20)].expr)),
                            (yysemantic_stack_[(22) - (22)].expr)); 
    }
    break;

  case 137:

/* Line 678 of lalr1.cc  */
#line 1829 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ConstructionDecl(LOC ((yyloc)),
								StaticContextConsts::cons_preserve);
		}
    break;

  case 138:

/* Line 678 of lalr1.cc  */
#line 1834 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ConstructionDecl(LOC ((yyloc)),
								StaticContextConsts::cons_strip);
		}
    break;

  case 139:

/* Line 678 of lalr1.cc  */
#line 1846 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.fnsig) = new FunctionSig (NULL);
    }
    break;

  case 140:

/* Line 678 of lalr1.cc  */
#line 1850 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.fnsig) = new FunctionSig (dynamic_cast<ParamList *> ((yysemantic_stack_[(3) - (2)].node)));
    }
    break;

  case 141:

/* Line 678 of lalr1.cc  */
#line 1854 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.fnsig) = new FunctionSig (NULL, dynamic_cast<SequenceType *> ((yysemantic_stack_[(4) - (4)].node)));
    }
    break;

  case 142:

/* Line 678 of lalr1.cc  */
#line 1858 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.fnsig) = new FunctionSig(dynamic_cast<ParamList *>((yysemantic_stack_[(5) - (2)].node)), dynamic_cast<SequenceType *>((yysemantic_stack_[(5) - (5)].node)));
    }
    break;

  case 143:

/* Line 678 of lalr1.cc  */
#line 1865 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = (yysemantic_stack_[(2) - (2)].expr);
    }
    break;

  case 144:

/* Line 678 of lalr1.cc  */
#line 1872 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      if ((yysemantic_stack_[(4) - (2)].node) == NULL)
      {
        (yyval.expr) = (yysemantic_stack_[(4) - (3)].expr);
      }
      else
      {
        BlockBody* b = dynamic_cast<BlockBody *>((yysemantic_stack_[(4) - (3)].expr));
        VFO_DeclList* vfo = dynamic_cast<VFO_DeclList *>((yysemantic_stack_[(4) - (2)].node));
        if (b == NULL)
        {
          b = new BlockBody((yysemantic_stack_[(4) - (3)].expr)->get_location(), vfo);
          b->add((yysemantic_stack_[(4) - (3)].expr));
        }
        else
        {
          b->set_decls(vfo);
        }

        (yyval.expr) = b;
      }
    }
    break;

  case 145:

/* Line 678 of lalr1.cc  */
#line 1898 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      VFO_DeclList *vfo = dynamic_cast<VFO_DeclList *> ((yysemantic_stack_[(3) - (1)].node));
      std::auto_ptr<VFO_DeclList> vfo2(dynamic_cast<VFO_DeclList *> ((yysemantic_stack_[(3) - (2)].node)));
      if ((yysemantic_stack_[(3) - (1)].node) == NULL)
        vfo = new VFO_DeclList (LOC ((yyloc)));
      vfo->push_back (*(vfo2.get()));
      (yyval.node) = vfo;
    }
    break;

  case 146:

/* Line 678 of lalr1.cc  */
#line 1907 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = NULL;
    }
    break;

  case 147:

/* Line 678 of lalr1.cc  */
#line 1914 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      VFO_DeclList *vfo = dynamic_cast<VFO_DeclList *> ((yysemantic_stack_[(3) - (1)].node));
      vfo->push_back ((yysemantic_stack_[(3) - (3)].node));
      (yyval.node) = vfo;
    }
    break;

  case 148:

/* Line 678 of lalr1.cc  */
#line 1920 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      VFO_DeclList *vfo = new VFO_DeclList (LOC ((yyloc)));
      vfo->push_back ((yysemantic_stack_[(2) - (2)].node));
      (yyval.node) = vfo;
    }
    break;

  case 149:

/* Line 678 of lalr1.cc  */
#line 1929 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      std::auto_ptr<VarNameAndType> nt(dynamic_cast<VarNameAndType *>((yysemantic_stack_[(1) - (1)].varnametype)));
      VarDecl *vd = new VarDecl(LOC ((yyloc)),
                       nt->name,
                       nt->type,
                       NULL);
      vd->set_global (false);
			(yyval.node) = vd;
    }
    break;

  case 150:

/* Line 678 of lalr1.cc  */
#line 1939 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      std::auto_ptr<VarNameAndType> nt(dynamic_cast<VarNameAndType *>((yysemantic_stack_[(3) - (1)].varnametype)));
      VarDecl *vd = new VarDecl(LOC ((yyloc)),
                       nt->name,
                       nt->type,
                       (yysemantic_stack_[(3) - (3)].expr));
      vd->set_global (false);
			(yyval.node) = vd;
    }
    break;

  case 151:

/* Line 678 of lalr1.cc  */
#line 1952 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = new AssignExpr (LOC ((yyloc)), static_cast<QName*>((yysemantic_stack_[(5) - (3)].expr))->get_qname(), (yysemantic_stack_[(5) - (5)].expr));
      delete (yysemantic_stack_[(5) - (3)].expr);
    }
    break;

  case 152:

/* Line 678 of lalr1.cc  */
#line 1960 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = new ExitExpr (LOC ((yyloc)), (yysemantic_stack_[(3) - (3)].expr));
    }
    break;

  case 153:

/* Line 678 of lalr1.cc  */
#line 1967 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      BlockBody* b = dynamic_cast<BlockBody *>((yysemantic_stack_[(5) - (5)].expr));
      if (b == NULL)
      {
        b = new BlockBody((yysemantic_stack_[(5) - (5)].expr)->get_location());
        b->add((yysemantic_stack_[(5) - (5)].expr));
      }

      (yyval.expr) = new WhileExpr(LOC((yyloc)), (yysemantic_stack_[(5) - (3)].expr), b);
    }
    break;

  case 154:

/* Line 678 of lalr1.cc  */
#line 1981 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = new FlowCtlStatement (LOC ((yyloc)), FlowCtlStatement::BREAK);
    }
    break;

  case 155:

/* Line 678 of lalr1.cc  */
#line 1985 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = new FlowCtlStatement (LOC ((yyloc)), FlowCtlStatement::CONTINUE);
    }
    break;

  case 156:

/* Line 678 of lalr1.cc  */
#line 1992 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      dynamic_cast<FunctionDecl *>((yysemantic_stack_[(2) - (2)].node))->setComment(SYMTAB((yysemantic_stack_[(2) - (1)].sval)));
      (yyval.node) = (yysemantic_stack_[(2) - (2)].node);
    }
    break;

  case 157:

/* Line 678 of lalr1.cc  */
#line 1997 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      FunctionDecl *d = dynamic_cast<FunctionDecl *> ((yysemantic_stack_[(3) - (3)].node));
      d->setComment(SYMTAB((yysemantic_stack_[(3) - (1)].sval)));
      d->deterministic = false;
      (yyval.node) = d;
    }
    break;

  case 158:

/* Line 678 of lalr1.cc  */
#line 2004 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      dynamic_cast<FunctionDecl *>((yysemantic_stack_[(3) - (3)].node))->setComment(SYMTAB((yysemantic_stack_[(3) - (1)].sval)));
      (yyval.node) = (yysemantic_stack_[(3) - (3)].node);
    }
    break;

  case 159:

/* Line 678 of lalr1.cc  */
#line 2012 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = (yysemantic_stack_[(1) - (1)].node);
    }
    break;

  case 160:

/* Line 678 of lalr1.cc  */
#line 2016 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = (yysemantic_stack_[(2) - (2)].node);
    }
    break;

  case 161:

/* Line 678 of lalr1.cc  */
#line 2020 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      FunctionDecl *d = dynamic_cast<FunctionDecl *> ((yysemantic_stack_[(2) - (2)].node));
      d->type = (d->type == ParseConstants::fn_extern)
        ? ParseConstants::fn_extern_update
        : ParseConstants::fn_update;
      (yyval.node) = d;
    }
    break;

  case 162:

/* Line 678 of lalr1.cc  */
#line 2028 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = (yysemantic_stack_[(2) - (2)].node);
    }
    break;

  case 163:

/* Line 678 of lalr1.cc  */
#line 2035 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new FunctionDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (2)].expr)),
                &* (yysemantic_stack_[(4) - (3)].fnsig)->param, &* (yysemantic_stack_[(4) - (3)].fnsig)->ret,
								(yysemantic_stack_[(4) - (4)].expr),
								ParseConstants::fn_read);
      delete (yysemantic_stack_[(4) - (3)].fnsig);
    }
    break;

  case 164:

/* Line 678 of lalr1.cc  */
#line 2044 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new FunctionDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (2)].expr)),
                &* (yysemantic_stack_[(4) - (3)].fnsig)->param, &* (yysemantic_stack_[(4) - (3)].fnsig)->ret,
								NULL,
								ParseConstants::fn_extern);
      delete (yysemantic_stack_[(4) - (3)].fnsig);
    }
    break;

  case 165:

/* Line 678 of lalr1.cc  */
#line 2056 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new FunctionDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (2)].expr)),
                &* (yysemantic_stack_[(4) - (3)].fnsig)->param, &* (yysemantic_stack_[(4) - (3)].fnsig)->ret,
								(yysemantic_stack_[(4) - (4)].expr),
								ParseConstants::fn_sequential);
      delete (yysemantic_stack_[(4) - (3)].fnsig);
    }
    break;

  case 166:

/* Line 678 of lalr1.cc  */
#line 2065 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new FunctionDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (2)].expr)),
                &* (yysemantic_stack_[(4) - (3)].fnsig)->param, &* (yysemantic_stack_[(4) - (3)].fnsig)->ret,
								NULL,
								ParseConstants::fn_extern_sequential);
    }
    break;

  case 167:

/* Line 678 of lalr1.cc  */
#line 2078 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			ParamList* plist_p = new ParamList(LOC ((yyloc)));
			if (plist_p) {
				plist_p->push_back(dynamic_cast<Param*>((yysemantic_stack_[(1) - (1)].node)));
			}
			(yyval.node) = plist_p;
		}
    break;

  case 168:

/* Line 678 of lalr1.cc  */
#line 2086 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			ParamList* plist_p = dynamic_cast<ParamList*>((yysemantic_stack_[(3) - (1)].node));
			if (plist_p) {
				plist_p->push_back(dynamic_cast<Param*>((yysemantic_stack_[(3) - (3)].node)));
			}
			(yyval.node) = (yysemantic_stack_[(3) - (1)].node);
		}
    break;

  case 169:

/* Line 678 of lalr1.cc  */
#line 2100 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new Param(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(2) - (2)].expr))->get_qname(),
								NULL);
      delete (yysemantic_stack_[(2) - (2)].expr);
		}
    break;

  case 170:

/* Line 678 of lalr1.cc  */
#line 2107 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new Param(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(3) - (2)].expr))->get_qname(),
								dynamic_cast<SequenceType *>((yysemantic_stack_[(3) - (3)].node)));
      delete (yysemantic_stack_[(3) - (2)].expr);
		}
    break;

  case 171:

/* Line 678 of lalr1.cc  */
#line 2120 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new EnclosedExpr(LOC ((yyloc)),
								(yysemantic_stack_[(3) - (2)].expr));
		}
    break;

  case 172:

/* Line 678 of lalr1.cc  */
#line 2128 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(3) - (2)].expr);
		}
    break;

  case 173:

/* Line 678 of lalr1.cc  */
#line 2139 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new QueryBody(LOC ((yyloc)), (yysemantic_stack_[(1) - (1)].expr));
		}
    break;

  case 174:

/* Line 678 of lalr1.cc  */
#line 2154 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
    }
    break;

  case 175:

/* Line 678 of lalr1.cc  */
#line 2158 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      std::auto_ptr<BlockBody> blk(dynamic_cast<BlockBody *>((yysemantic_stack_[(2) - (2)].expr)));

      BlockBody* blk2 = new BlockBody(LOC((yyloc)));

      blk2->add((yysemantic_stack_[(2) - (1)].expr));

      for (int i = 0; i < blk->size(); ++i)
        blk2->add((*blk)[i]);

      (yyval.expr) = blk2;
    }
    break;

  case 176:

/* Line 678 of lalr1.cc  */
#line 2174 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = new BlockBody (LOC ((yyloc)));
    }
    break;

  case 177:

/* Line 678 of lalr1.cc  */
#line 2178 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      BlockBody* blk = dynamic_cast<BlockBody *>((yysemantic_stack_[(3) - (1)].expr));
      blk->add((yysemantic_stack_[(3) - (2)].expr));
      (yyval.expr) = blk;
    }
    break;

  case 178:

/* Line 678 of lalr1.cc  */
#line 2187 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 179:

/* Line 678 of lalr1.cc  */
#line 2191 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			Expr* expr_p = dynamic_cast<Expr*>((yysemantic_stack_[(3) - (1)].expr));
			if (expr_p == NULL)
      {
        expr_p = new Expr(LOC((yyloc)));
        expr_p->push_back((yysemantic_stack_[(3) - (1)].expr));
      }
      expr_p->push_back((yysemantic_stack_[(3) - (3)].expr));
			(yyval.expr) = expr_p;
		}
    break;

  case 197:

/* Line 678 of lalr1.cc  */
#line 2236 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      ReturnExpr* lReturnExpr = dynamic_cast<ReturnExpr*>((yysemantic_stack_[(2) - (2)].expr));
      (yyval.expr) = new FLWORExpr(LOC((yyloc)),
                         dynamic_cast<FLWORClauseList*>((yysemantic_stack_[(2) - (1)].node)),
                         lReturnExpr->get_return_val(),
                         lReturnExpr->get_location(),
                         driver.theCompilerCB->theConfig.force_gflwor);
      delete (yysemantic_stack_[(2) - (2)].expr);
    }
    break;

  case 198:

/* Line 678 of lalr1.cc  */
#line 2249 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = new ReturnExpr(LOC((yyloc)), (yysemantic_stack_[(2) - (2)].expr));
    }
    break;

  case 199:

/* Line 678 of lalr1.cc  */
#line 2256 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.strval) = parser::the_sliding;
    }
    break;

  case 200:

/* Line 678 of lalr1.cc  */
#line 2260 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.strval) = parser::the_tumbling;
    }
    break;

  case 201:

/* Line 678 of lalr1.cc  */
#line 2268 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.strval) = parser::the_start;
    }
    break;

  case 202:

/* Line 678 of lalr1.cc  */
#line 2272 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.strval) = parser::the_end;
    }
    break;

  case 203:

/* Line 678 of lalr1.cc  */
#line 2276 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.strval) = parser::the_only_end;
    }
    break;

  case 204:

/* Line 678 of lalr1.cc  */
#line 2283 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new FLWORWinCond (LOC ((yyloc)), dynamic_cast<WindowVars *> ((yysemantic_stack_[(4) - (2)].node)), (yysemantic_stack_[(4) - (4)].expr), (yysemantic_stack_[(4) - (1)].strval) == parser::the_start, (yysemantic_stack_[(4) - (1)].strval) == parser::the_only_end);
    }
    break;

  case 205:

/* Line 678 of lalr1.cc  */
#line 2287 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new FLWORWinCond (LOC ((yyloc)), NULL, (yysemantic_stack_[(3) - (3)].expr), (yysemantic_stack_[(3) - (1)].strval) == parser::the_start, (yysemantic_stack_[(3) - (1)].strval) == parser::the_only_end);
    }
    break;

  case 206:

/* Line 678 of lalr1.cc  */
#line 2294 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new WindowClause (LOC ((yyloc)),
                             ((yysemantic_stack_[(5) - (2)].strval) == parser::the_tumbling) ? WindowClause::tumbling_window : WindowClause::sliding_window,
                             dynamic_cast<WindowVarDecl *> ((yysemantic_stack_[(5) - (3)].node)),
                             dynamic_cast<FLWORWinCond *> ((yysemantic_stack_[(5) - (4)].node)),
                             dynamic_cast<FLWORWinCond *> ((yysemantic_stack_[(5) - (5)].node)));
    }
    break;

  case 207:

/* Line 678 of lalr1.cc  */
#line 2302 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new WindowClause (LOC ((yyloc)),
                             ((yysemantic_stack_[(4) - (2)].strval) == parser::the_tumbling) ? WindowClause::tumbling_window : WindowClause::sliding_window,
                             dynamic_cast<WindowVarDecl *> ((yysemantic_stack_[(4) - (3)].node)),
                             dynamic_cast<FLWORWinCond *> ((yysemantic_stack_[(4) - (4)].node)), NULL);
    }
    break;

  case 208:

/* Line 678 of lalr1.cc  */
#line 2313 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new CountClause (LOC ((yyloc)), static_cast<QName*>((yysemantic_stack_[(3) - (3)].expr))->get_qname());
      delete (yysemantic_stack_[(3) - (3)].expr);
    }
    break;

  case 217:

/* Line 678 of lalr1.cc  */
#line 2332 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      FLWORClauseList *l = new FLWORClauseList (LOC ((yyloc)));
      l->push_back (dynamic_cast<FLWORClause *> ((yysemantic_stack_[(1) - (1)].node)));
      (yyval.node) = l;
    }
    break;

  case 218:

/* Line 678 of lalr1.cc  */
#line 2338 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      FLWORClauseList *l = dynamic_cast<FLWORClauseList *> ((yysemantic_stack_[(2) - (1)].node));
      l->push_back (dynamic_cast<FLWORClause *> ((yysemantic_stack_[(2) - (2)].node)));
      (yyval.node) = l;
    }
    break;

  case 219:

/* Line 678 of lalr1.cc  */
#line 2347 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.strval) = NULL;
    }
    break;

  case 220:

/* Line 678 of lalr1.cc  */
#line 2351 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.strval) = parser::the_ofor;
    }
    break;

  case 221:

/* Line 678 of lalr1.cc  */
#line 2361 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ForClause(LOC ((yyloc)),
                         dynamic_cast<VarInDeclList*>((yysemantic_stack_[(2) - (2)].node)), (yysemantic_stack_[(2) - (1)].strval) != NULL);
		}
    break;

  case 222:

/* Line 678 of lalr1.cc  */
#line 2372 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			VarInDeclList* vardecl_list_p = new VarInDeclList(LOC ((yyloc)));
			vardecl_list_p->push_back(dynamic_cast<VarInDecl*>((yysemantic_stack_[(1) - (1)].node)));
			(yyval.node) = vardecl_list_p;
		}
    break;

  case 223:

/* Line 678 of lalr1.cc  */
#line 2378 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			VarInDeclList* vardecl_list_p = dynamic_cast<VarInDeclList*>((yysemantic_stack_[(4) - (1)].node));
			if (vardecl_list_p) {
				vardecl_list_p->push_back(dynamic_cast<VarInDecl*>((yysemantic_stack_[(4) - (4)].node)));
			}
			(yyval.node) = (yysemantic_stack_[(4) - (1)].node);
		}
    break;

  case 224:

/* Line 678 of lalr1.cc  */
#line 2392 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new VarInDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(3) - (1)].expr))->get_qname(),
								NULL,NULL,NULL,
								(yysemantic_stack_[(3) - (3)].expr));
      delete (yysemantic_stack_[(3) - (1)].expr);
		}
    break;

  case 225:

/* Line 678 of lalr1.cc  */
#line 2400 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new VarInDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (1)].expr))->get_qname(),
								dynamic_cast<SequenceType *>((yysemantic_stack_[(4) - (2)].node)),
								NULL,NULL,
								(yysemantic_stack_[(4) - (4)].expr));
      delete (yysemantic_stack_[(4) - (1)].expr);
		}
    break;

  case 226:

/* Line 678 of lalr1.cc  */
#line 2409 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new VarInDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (1)].expr))->get_qname(),
								NULL,
								dynamic_cast<PositionalVar*>((yysemantic_stack_[(4) - (2)].node)),
								NULL,
								(yysemantic_stack_[(4) - (4)].expr));
      delete (yysemantic_stack_[(4) - (1)].expr);
		}
    break;

  case 227:

/* Line 678 of lalr1.cc  */
#line 2419 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new VarInDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(5) - (1)].expr))->get_qname(),
								dynamic_cast<SequenceType *>((yysemantic_stack_[(5) - (2)].node)),
								dynamic_cast<PositionalVar*>((yysemantic_stack_[(5) - (3)].node)),
								NULL,
								(yysemantic_stack_[(5) - (5)].expr));
      delete (yysemantic_stack_[(5) - (1)].expr);
		}
    break;

  case 228:

/* Line 678 of lalr1.cc  */
#line 2430 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new VarInDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (1)].expr))->get_qname(),
								NULL,NULL,
								dynamic_cast<FTScoreVar*>((yysemantic_stack_[(4) - (2)].node)),
								(yysemantic_stack_[(4) - (4)].expr));
      delete (yysemantic_stack_[(4) - (1)].expr);
		}
    break;

  case 229:

/* Line 678 of lalr1.cc  */
#line 2439 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new VarInDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(5) - (1)].expr))->get_qname(),
								dynamic_cast<SequenceType *>((yysemantic_stack_[(5) - (2)].node)),
								NULL,
								dynamic_cast<FTScoreVar*>((yysemantic_stack_[(5) - (3)].node)),
								(yysemantic_stack_[(5) - (5)].expr));
      delete (yysemantic_stack_[(5) - (1)].expr);
		}
    break;

  case 230:

/* Line 678 of lalr1.cc  */
#line 2449 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new VarInDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(5) - (1)].expr))->get_qname(),
								NULL,
								dynamic_cast<PositionalVar*>((yysemantic_stack_[(5) - (2)].node)),
								dynamic_cast<FTScoreVar*>((yysemantic_stack_[(5) - (3)].node)),
								(yysemantic_stack_[(5) - (5)].expr));
      delete (yysemantic_stack_[(5) - (1)].expr);
		}
    break;

  case 231:

/* Line 678 of lalr1.cc  */
#line 2459 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new VarInDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(6) - (1)].expr))->get_qname(),
								dynamic_cast<SequenceType *>((yysemantic_stack_[(6) - (2)].node)),
								dynamic_cast<PositionalVar*>((yysemantic_stack_[(6) - (3)].node)),
								dynamic_cast<FTScoreVar*>((yysemantic_stack_[(6) - (4)].node)),
								(yysemantic_stack_[(6) - (6)].expr));
      delete (yysemantic_stack_[(6) - (1)].expr);
		}
    break;

  case 232:

/* Line 678 of lalr1.cc  */
#line 2475 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new PositionalVar(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(3) - (3)].expr))->get_qname());
      delete (yysemantic_stack_[(3) - (3)].expr);
		}
    break;

  case 233:

/* Line 678 of lalr1.cc  */
#line 2488 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new FTScoreVar(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(3) - (3)].expr))->get_qname());
      delete (yysemantic_stack_[(3) - (3)].expr);
		}
    break;

  case 234:

/* Line 678 of lalr1.cc  */
#line 2500 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new LetClause(LOC ((yyloc)),
								dynamic_cast<VarGetsDeclList*>((yysemantic_stack_[(3) - (3)].node)));

		}
    break;

  case 235:

/* Line 678 of lalr1.cc  */
#line 2512 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			VarGetsDeclList* vgdl_p = new VarGetsDeclList(LOC ((yyloc)));
			vgdl_p->push_back(dynamic_cast<VarGetsDecl*>((yysemantic_stack_[(1) - (1)].node)));
			(yyval.node) = vgdl_p;
		}
    break;

  case 236:

/* Line 678 of lalr1.cc  */
#line 2518 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			VarGetsDeclList* vgdl_p = dynamic_cast<VarGetsDeclList*>((yysemantic_stack_[(4) - (1)].node));
			if (vgdl_p) {
				vgdl_p->push_back(dynamic_cast<VarGetsDecl*>((yysemantic_stack_[(4) - (4)].node)));
			}
			(yyval.node) = (yysemantic_stack_[(4) - (1)].node);
		}
    break;

  case 237:

/* Line 678 of lalr1.cc  */
#line 2530 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			VarGetsDeclList* vgdl_p = new VarGetsDeclList(LOC ((yyloc)));
			vgdl_p->push_back(dynamic_cast<VarGetsDecl*>((yysemantic_stack_[(1) - (1)].node)));
			(yyval.node) = vgdl_p;
		}
    break;

  case 238:

/* Line 678 of lalr1.cc  */
#line 2536 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			VarGetsDeclList* vgdl_p = dynamic_cast<VarGetsDeclList*>((yysemantic_stack_[(4) - (1)].node));
			if (vgdl_p) {
				vgdl_p->push_back(dynamic_cast<VarGetsDecl*>((yysemantic_stack_[(4) - (4)].node)));
			}
			(yyval.node) = (yysemantic_stack_[(4) - (1)].node);
		}
    break;

  case 239:

/* Line 678 of lalr1.cc  */
#line 2550 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new VarGetsDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(3) - (1)].expr))->get_qname(),
								NULL,
								NULL,
								(yysemantic_stack_[(3) - (3)].expr));
      delete (yysemantic_stack_[(3) - (1)].expr);
		}
    break;

  case 240:

/* Line 678 of lalr1.cc  */
#line 2559 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new VarGetsDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (1)].expr))->get_qname(),
								dynamic_cast<SequenceType *>((yysemantic_stack_[(4) - (2)].node)),
								NULL,
								(yysemantic_stack_[(4) - (4)].expr));
      delete (yysemantic_stack_[(4) - (1)].expr);
		}
    break;

  case 241:

/* Line 678 of lalr1.cc  */
#line 2569 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new VarGetsDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (1)].expr))->get_qname(),
								NULL,
								dynamic_cast<FTScoreVar*>((yysemantic_stack_[(4) - (2)].node)),
								(yysemantic_stack_[(4) - (4)].expr));
      delete (yysemantic_stack_[(4) - (1)].expr);
		}
    break;

  case 242:

/* Line 678 of lalr1.cc  */
#line 2578 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new VarGetsDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(5) - (1)].expr))->get_qname(),
								dynamic_cast<SequenceType *>((yysemantic_stack_[(5) - (2)].node)),
								dynamic_cast<FTScoreVar*>((yysemantic_stack_[(5) - (3)].node)),
								(yysemantic_stack_[(5) - (5)].expr));
      delete (yysemantic_stack_[(5) - (1)].expr);
		}
    break;

  case 243:

/* Line 678 of lalr1.cc  */
#line 2591 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new WindowVarDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (2)].expr))->get_qname(),
								NULL, (yysemantic_stack_[(4) - (4)].expr));
      delete (yysemantic_stack_[(4) - (2)].expr);
		}
    break;

  case 244:

/* Line 678 of lalr1.cc  */
#line 2598 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new WindowVarDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(5) - (2)].expr))->get_qname(),
								dynamic_cast<SequenceType *>((yysemantic_stack_[(5) - (3)].node)),
								(yysemantic_stack_[(5) - (5)].expr));
      delete (yysemantic_stack_[(5) - (2)].expr);
		}
    break;

  case 246:

/* Line 678 of lalr1.cc  */
#line 2610 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new WindowVars (LOC ((yyloc)), NULL, static_cast<QName*>((yysemantic_stack_[(2) - (2)].expr))->get_qname(), "", "");
      delete (yysemantic_stack_[(2) - (2)].expr);
    }
    break;

  case 247:

/* Line 678 of lalr1.cc  */
#line 2615 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = (yysemantic_stack_[(3) - (3)].node);
      dynamic_cast<WindowVars *> ((yyval.node))->set_curr (static_cast<QName*>((yysemantic_stack_[(3) - (2)].expr))->get_qname());
      delete (yysemantic_stack_[(3) - (2)].expr);
    }
    break;

  case 248:

/* Line 678 of lalr1.cc  */
#line 2624 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new WindowVars (LOC ((yyloc)), dynamic_cast<PositionalVar *> ((yysemantic_stack_[(1) - (1)].node)), "", "", "");
    }
    break;

  case 249:

/* Line 678 of lalr1.cc  */
#line 2628 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = (yysemantic_stack_[(2) - (2)].node);
      dynamic_cast<WindowVars *> ((yyval.node))->set_posvar (dynamic_cast<PositionalVar *> ((yysemantic_stack_[(2) - (1)].node)));
    }
    break;

  case 251:

/* Line 678 of lalr1.cc  */
#line 2637 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new WindowVars (LOC ((yyloc)), NULL, "", static_cast<QName*>((yysemantic_stack_[(6) - (3)].expr))->get_qname(), static_cast<QName*>((yysemantic_stack_[(6) - (6)].expr))->get_qname());
      delete (yysemantic_stack_[(6) - (3)].expr);
      delete (yysemantic_stack_[(6) - (6)].expr);
    }
    break;

  case 252:

/* Line 678 of lalr1.cc  */
#line 2643 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new WindowVars (LOC ((yyloc)), NULL, "", "", static_cast<QName*>((yysemantic_stack_[(3) - (3)].expr))->get_qname());
      delete (yysemantic_stack_[(3) - (3)].expr);
    }
    break;

  case 253:

/* Line 678 of lalr1.cc  */
#line 2648 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new WindowVars (LOC ((yyloc)), NULL, "", static_cast<QName*>((yysemantic_stack_[(3) - (3)].expr))->get_qname(), "");
      delete (yysemantic_stack_[(3) - (3)].expr);
    }
    break;

  case 254:

/* Line 678 of lalr1.cc  */
#line 2656 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      std::string name = static_cast<QName*>((yysemantic_stack_[(1) - (1)].expr))->get_qname();
      (yyval.node) = new VarGetsDecl(LOC ((yyloc)),
                           name, NULL, NULL,
                           new VarRef (LOC ((yyloc)), name),
                           VarGetsDecl::eval_var);
      delete (yysemantic_stack_[(1) - (1)].expr);

    }
    break;

  case 255:

/* Line 678 of lalr1.cc  */
#line 2672 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new WhereClause(LOC ((yyloc)),
								(yysemantic_stack_[(2) - (2)].expr));
		}
    break;

  case 256:

/* Line 678 of lalr1.cc  */
#line 2680 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new GroupByClause(LOC((yyloc)), dynamic_cast<GroupSpecList*>((yysemantic_stack_[(3) - (3)].node)));
    }
    break;

  case 257:

/* Line 678 of lalr1.cc  */
#line 2687 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      GroupSpecList* gsl_p = new GroupSpecList(LOC((yyloc)));
      gsl_p->push_back(dynamic_cast<GroupSpec*>((yysemantic_stack_[(1) - (1)].node)));
      (yyval.node) = gsl_p;
    }
    break;

  case 258:

/* Line 678 of lalr1.cc  */
#line 2693 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      GroupSpecList* gsl_p = dynamic_cast<GroupSpecList*>((yysemantic_stack_[(3) - (1)].node));
      if (gsl_p) {
        gsl_p->push_back(dynamic_cast<GroupSpec*>((yysemantic_stack_[(3) - (3)].node)));
      }
      (yyval.node) = gsl_p;
    }
    break;

  case 259:

/* Line 678 of lalr1.cc  */
#line 2704 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new GroupSpec(LOC((yyloc)),
                 static_cast<QName*>((yysemantic_stack_[(2) - (2)].expr))->get_qname(),
                 NULL);
      delete (yysemantic_stack_[(2) - (2)].expr);
    }
    break;

  case 260:

/* Line 678 of lalr1.cc  */
#line 2711 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new GroupSpec(LOC((yyloc)),
                 static_cast<QName*>((yysemantic_stack_[(3) - (2)].expr))->get_qname(),
                 dynamic_cast<GroupCollationSpec*>((yysemantic_stack_[(3) - (3)].node)));
      delete (yysemantic_stack_[(3) - (2)].expr);
    }
    break;

  case 261:

/* Line 678 of lalr1.cc  */
#line 2721 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new GroupCollationSpec(LOC((yyloc)), SYMTAB ((yysemantic_stack_[(2) - (2)].sval)));
    }
    break;

  case 262:

/* Line 678 of lalr1.cc  */
#line 2731 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderByClause(LOC ((yyloc)),
								dynamic_cast<OrderSpecList*>((yysemantic_stack_[(3) - (3)].node)));
		}
    break;

  case 263:

/* Line 678 of lalr1.cc  */
#line 2736 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderByClause(LOC ((yyloc)),
								dynamic_cast<OrderSpecList*>((yysemantic_stack_[(4) - (4)].node)),
								true);
		}
    break;

  case 264:

/* Line 678 of lalr1.cc  */
#line 2748 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			OrderSpecList* osl_p = new OrderSpecList(LOC ((yyloc)));
			osl_p->push_back(dynamic_cast<OrderSpec*>((yysemantic_stack_[(1) - (1)].node)));
			(yyval.node) = osl_p;
		}
    break;

  case 265:

/* Line 678 of lalr1.cc  */
#line 2754 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			OrderSpecList* osl_p = dynamic_cast<OrderSpecList*>((yysemantic_stack_[(3) - (1)].node));
			if (osl_p) {
				osl_p->push_back(dynamic_cast<OrderSpec*>((yysemantic_stack_[(3) - (3)].node)));
			}
			(yyval.node) = (yysemantic_stack_[(3) - (1)].node);
		}
    break;

  case 266:

/* Line 678 of lalr1.cc  */
#line 2768 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderSpec(LOC ((yyloc)),
								(yysemantic_stack_[(1) - (1)].expr),
								NULL);
		}
    break;

  case 267:

/* Line 678 of lalr1.cc  */
#line 2774 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderSpec(LOC ((yyloc)),
                         (yysemantic_stack_[(2) - (1)].expr),
                         dynamic_cast<OrderModifierPN*>((yysemantic_stack_[(2) - (2)].node)));
		}
    break;

  case 268:

/* Line 678 of lalr1.cc  */
#line 2786 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderModifierPN(LOC((yyloc)),
                               dynamic_cast<OrderDirSpec*>((yysemantic_stack_[(1) - (1)].node)),
                               NULL,
                               NULL);
		}
    break;

  case 269:

/* Line 678 of lalr1.cc  */
#line 2793 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderModifierPN(LOC((yyloc)),
                               NULL,
                               dynamic_cast<OrderEmptySpec*>((yysemantic_stack_[(1) - (1)].node)),
                               NULL);
		}
    break;

  case 270:

/* Line 678 of lalr1.cc  */
#line 2800 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderModifierPN(LOC((yyloc)),
                               NULL,
                               NULL,
                               dynamic_cast<OrderCollationSpec*>((yysemantic_stack_[(1) - (1)].node)));
		}
    break;

  case 271:

/* Line 678 of lalr1.cc  */
#line 2807 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderModifierPN(LOC((yyloc)),
                               dynamic_cast<OrderDirSpec*>((yysemantic_stack_[(2) - (1)].node)),
                               dynamic_cast<OrderEmptySpec*>((yysemantic_stack_[(2) - (2)].node)),
                               NULL);
		}
    break;

  case 272:

/* Line 678 of lalr1.cc  */
#line 2814 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderModifierPN(LOC((yyloc)),
                               dynamic_cast<OrderDirSpec*>((yysemantic_stack_[(2) - (1)].node)),
                               NULL,
                               dynamic_cast<OrderCollationSpec*>((yysemantic_stack_[(2) - (2)].node)));
		}
    break;

  case 273:

/* Line 678 of lalr1.cc  */
#line 2821 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderModifierPN(LOC((yyloc)),
                               NULL,
                               dynamic_cast<OrderEmptySpec*>((yysemantic_stack_[(2) - (1)].node)),
                               dynamic_cast<OrderCollationSpec*>((yysemantic_stack_[(2) - (2)].node)));
		}
    break;

  case 274:

/* Line 678 of lalr1.cc  */
#line 2828 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderModifierPN(LOC((yyloc)),
                               dynamic_cast<OrderDirSpec*>((yysemantic_stack_[(3) - (1)].node)),
                               dynamic_cast<OrderEmptySpec*>((yysemantic_stack_[(3) - (2)].node)),
                               dynamic_cast<OrderCollationSpec*>((yysemantic_stack_[(3) - (3)].node)));
		}
    break;

  case 275:

/* Line 678 of lalr1.cc  */
#line 2841 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderDirSpec(LOC ((yyloc)), ParseConstants::dir_ascending);
		}
    break;

  case 276:

/* Line 678 of lalr1.cc  */
#line 2845 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderDirSpec(LOC ((yyloc)), ParseConstants::dir_descending);
		}
    break;

  case 277:

/* Line 678 of lalr1.cc  */
#line 2855 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderEmptySpec(LOC((yyloc)), StaticContextConsts::empty_greatest);
		}
    break;

  case 278:

/* Line 678 of lalr1.cc  */
#line 2859 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderEmptySpec(LOC((yyloc)), StaticContextConsts::empty_least);
		}
    break;

  case 279:

/* Line 678 of lalr1.cc  */
#line 2869 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OrderCollationSpec(LOC ((yyloc)),
								SYMTAB ((yysemantic_stack_[(2) - (2)].sval)));
		}
    break;

  case 280:

/* Line 678 of lalr1.cc  */
#line 2880 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new QuantifiedExpr(LOC ((yyloc)),
								ParseConstants::quant_some,
								dynamic_cast<QVarInDeclList*>((yysemantic_stack_[(5) - (3)].node)),
								(yysemantic_stack_[(5) - (5)].expr));
		}
    break;

  case 281:

/* Line 678 of lalr1.cc  */
#line 2887 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new QuantifiedExpr(LOC ((yyloc)),
								ParseConstants::quant_every,
								dynamic_cast<QVarInDeclList*>((yysemantic_stack_[(5) - (3)].node)),
								(yysemantic_stack_[(5) - (5)].expr));
		}
    break;

  case 282:

/* Line 678 of lalr1.cc  */
#line 2900 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			QVarInDeclList* qvid_list_p = new QVarInDeclList(LOC ((yyloc)));
			qvid_list_p->push_back(dynamic_cast<QVarInDecl*>((yysemantic_stack_[(1) - (1)].node)));
			(yyval.node) = qvid_list_p;

		}
    break;

  case 283:

/* Line 678 of lalr1.cc  */
#line 2907 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			QVarInDeclList* qvid_list_p = dynamic_cast<QVarInDeclList*>((yysemantic_stack_[(4) - (1)].node));
            qvid_list_p->push_back(dynamic_cast<QVarInDecl*>((yysemantic_stack_[(4) - (4)].node)));
			(yyval.node) = (yysemantic_stack_[(4) - (1)].node);
		}
    break;

  case 284:

/* Line 678 of lalr1.cc  */
#line 2919 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new QVarInDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(3) - (1)].expr))->get_qname(),
								(yysemantic_stack_[(3) - (3)].expr));
      delete (yysemantic_stack_[(3) - (1)].expr);
		}
    break;

  case 285:

/* Line 678 of lalr1.cc  */
#line 2926 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new QVarInDecl(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (1)].expr))->get_qname(),
								dynamic_cast<SequenceType *>((yysemantic_stack_[(4) - (2)].node)),
								(yysemantic_stack_[(4) - (4)].expr));
      delete (yysemantic_stack_[(4) - (1)].expr);
		}
    break;

  case 286:

/* Line 678 of lalr1.cc  */
#line 2940 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new TypeswitchExpr(LOC ((yyloc)),
								(yysemantic_stack_[(8) - (3)].expr),
								dynamic_cast<CaseClauseList*>((yysemantic_stack_[(8) - (5)].node)),
								(yysemantic_stack_[(8) - (8)].expr));
		}
    break;

  case 287:

/* Line 678 of lalr1.cc  */
#line 2947 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new TypeswitchExpr(LOC ((yyloc)),
								(yysemantic_stack_[(10) - (3)].expr),
								dynamic_cast<CaseClauseList*>((yysemantic_stack_[(10) - (5)].node)),
								static_cast<QName*>((yysemantic_stack_[(10) - (8)].expr))->get_qname(),
								(yysemantic_stack_[(10) - (10)].expr));
      delete (yysemantic_stack_[(10) - (8)].expr);
		}
    break;

  case 288:

/* Line 678 of lalr1.cc  */
#line 2962 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			CaseClauseList* cc_list_p = new CaseClauseList(LOC ((yyloc)));
			cc_list_p->push_back(dynamic_cast<CaseClause*>((yysemantic_stack_[(1) - (1)].node)));
			(yyval.node) = cc_list_p;
		}
    break;

  case 289:

/* Line 678 of lalr1.cc  */
#line 2968 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			CaseClauseList* cc_list_p = dynamic_cast<CaseClauseList*>((yysemantic_stack_[(2) - (1)].node));
			cc_list_p->push_back(dynamic_cast<CaseClause*>((yysemantic_stack_[(2) - (2)].node)));
			(yyval.node) = (yysemantic_stack_[(2) - (1)].node);
		}
    break;

  case 290:

/* Line 678 of lalr1.cc  */
#line 2980 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new CaseClause(LOC ((yyloc)),
								dynamic_cast<SequenceType*>((yysemantic_stack_[(4) - (2)].node)),
								(yysemantic_stack_[(4) - (4)].expr));
		}
    break;

  case 291:

/* Line 678 of lalr1.cc  */
#line 2986 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new CaseClause(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(7) - (3)].expr))->get_qname(),
								dynamic_cast<SequenceType*>((yysemantic_stack_[(7) - (5)].node)),
								(yysemantic_stack_[(7) - (7)].expr));
      delete (yysemantic_stack_[(7) - (3)].expr);
		}
    break;

  case 292:

/* Line 678 of lalr1.cc  */
#line 3000 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new IfExpr(LOC ((yyloc)),
								(yysemantic_stack_[(8) - (3)].expr), (yysemantic_stack_[(8) - (6)].expr), (yysemantic_stack_[(8) - (8)].expr));
		}
    break;

  case 293:

/* Line 678 of lalr1.cc  */
#line 3011 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 294:

/* Line 678 of lalr1.cc  */
#line 3015 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new OrExpr(LOC ((yyloc)),
								(yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 295:

/* Line 678 of lalr1.cc  */
#line 3026 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 296:

/* Line 678 of lalr1.cc  */
#line 3030 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new AndExpr(LOC ((yyloc)),
								(yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 297:

/* Line 678 of lalr1.cc  */
#line 3049 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 298:

/* Line 678 of lalr1.cc  */
#line 3053 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			/*  ::=  "eq" | "ne" | "lt" | "le" | "gt" | "ge" */
			(yyval.expr) = new ComparisonExpr(LOC ((yyloc)),
								dynamic_cast<ValueComp*>((yysemantic_stack_[(3) - (2)].node)),
								(yysemantic_stack_[(3) - (1)].expr),
								(yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 299:

/* Line 678 of lalr1.cc  */
#line 3061 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      /*  ::=  "is" | "<<" | ">>" */
      (yyval.expr) = new ComparisonExpr(LOC ((yyloc)),
                dynamic_cast<NodeComp*>((yysemantic_stack_[(3) - (2)].node)),
                (yysemantic_stack_[(3) - (1)].expr),
                (yysemantic_stack_[(3) - (3)].expr));
    }
    break;

  case 300:

/* Line 678 of lalr1.cc  */
#line 3069 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			/* ::=  "=" | "!=" | "<" | "<=" | ">" | ">=" */
			(yyval.expr) = new ComparisonExpr(LOC ((yyloc)),
								new GeneralComp(LOC ((yyloc)), ParseConstants::op_eq),
								(yysemantic_stack_[(3) - (1)].expr),
								(yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 301:

/* Line 678 of lalr1.cc  */
#line 3077 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      /* ::=  "=" | "!=" | "<" | "<=" | ">" | ">=" */
      (yyval.expr) = new ComparisonExpr(LOC ((yyloc)),
                new GeneralComp(LOC ((yyloc)), ParseConstants::op_ne),
                (yysemantic_stack_[(3) - (1)].expr),
                (yysemantic_stack_[(3) - (3)].expr));
    }
    break;

  case 302:

/* Line 678 of lalr1.cc  */
#line 3084 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { /* this call is needed */  driver.lexer->interpretAsLessThan(); }
    break;

  case 303:

/* Line 678 of lalr1.cc  */
#line 3085 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      /* ::=  "=" | "!=" | "<" | "<=" | ">" | ">=" */
      (yyval.expr) = new ComparisonExpr(LOC ((yyloc)),
                new GeneralComp(LOC ((yyloc)), ParseConstants::op_lt),
                (yysemantic_stack_[(4) - (1)].expr),
                (yysemantic_stack_[(4) - (4)].expr));
    }
    break;

  case 304:

/* Line 678 of lalr1.cc  */
#line 3093 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      /* ::=  "=" | "!=" | "<" | "<=" | ">" | ">=" */
      (yyval.expr) = new ComparisonExpr(LOC ((yyloc)),
                new GeneralComp(LOC ((yyloc)), ParseConstants::op_le),
                (yysemantic_stack_[(3) - (1)].expr),
                (yysemantic_stack_[(3) - (3)].expr));
    }
    break;

  case 305:

/* Line 678 of lalr1.cc  */
#line 3101 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      /* ::=  "=" | "!=" | "<" | "<=" | ">" | ">=" */
      (yyval.expr) = new ComparisonExpr(LOC ((yyloc)),
                new GeneralComp(LOC ((yyloc)), ParseConstants::op_gt),
                (yysemantic_stack_[(3) - (1)].expr),
                (yysemantic_stack_[(3) - (3)].expr));
    }
    break;

  case 306:

/* Line 678 of lalr1.cc  */
#line 3109 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      /* ::=  "=" | "!=" | "<" | "<=" | ">" | ">=" */
      (yyval.expr) = new ComparisonExpr(LOC ((yyloc)),
                new GeneralComp(LOC ((yyloc)), ParseConstants::op_ge),
                (yysemantic_stack_[(3) - (1)].expr),
                (yysemantic_stack_[(3) - (3)].expr));
    }
    break;

  case 307:

/* Line 678 of lalr1.cc  */
#line 3123 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 308:

/* Line 678 of lalr1.cc  */
#line 3127 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new FTContainsExpr(LOC ((yyloc)),
								(yysemantic_stack_[(3) - (1)].expr),
								dynamic_cast<FTSelection*>((yysemantic_stack_[(3) - (3)].node)),
								NULL);
		}
    break;

  case 309:

/* Line 678 of lalr1.cc  */
#line 3134 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new FTContainsExpr(LOC ((yyloc)),
								(yysemantic_stack_[(4) - (1)].expr),
								dynamic_cast<FTSelection*>((yysemantic_stack_[(4) - (3)].node)),
								dynamic_cast<FTIgnoreOption*>((yysemantic_stack_[(4) - (4)].node)));
		}
    break;

  case 310:

/* Line 678 of lalr1.cc  */
#line 3147 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 311:

/* Line 678 of lalr1.cc  */
#line 3151 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new RangeExpr(LOC ((yyloc)),
								(yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 312:

/* Line 678 of lalr1.cc  */
#line 3162 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 313:

/* Line 678 of lalr1.cc  */
#line 3166 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new AdditiveExpr(LOC ((yyloc)), ParseConstants::op_plus, (yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 314:

/* Line 678 of lalr1.cc  */
#line 3170 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new AdditiveExpr(LOC ((yyloc)), ParseConstants::op_minus, (yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 315:

/* Line 678 of lalr1.cc  */
#line 3180 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 316:

/* Line 678 of lalr1.cc  */
#line 3184 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new MultiplicativeExpr(LOC ((yyloc)), ParseConstants::op_mul, (yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 317:

/* Line 678 of lalr1.cc  */
#line 3188 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new MultiplicativeExpr(LOC ((yyloc)), ParseConstants::op_div, (yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 318:

/* Line 678 of lalr1.cc  */
#line 3192 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new MultiplicativeExpr(LOC ((yyloc)), ParseConstants::op_idiv, (yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 319:

/* Line 678 of lalr1.cc  */
#line 3196 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new MultiplicativeExpr(LOC ((yyloc)), ParseConstants::op_mod, (yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 320:

/* Line 678 of lalr1.cc  */
#line 3206 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 321:

/* Line 678 of lalr1.cc  */
#line 3210 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new UnionExpr(LOC ((yyloc)),
								(yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 322:

/* Line 678 of lalr1.cc  */
#line 3215 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new UnionExpr(LOC ((yyloc)),
								(yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 323:

/* Line 678 of lalr1.cc  */
#line 3226 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 324:

/* Line 678 of lalr1.cc  */
#line 3230 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new IntersectExceptExpr(LOC ((yyloc)), ParseConstants::op_intersect, (yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 325:

/* Line 678 of lalr1.cc  */
#line 3234 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new IntersectExceptExpr(LOC ((yyloc)), ParseConstants::op_except, (yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 326:

/* Line 678 of lalr1.cc  */
#line 3244 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 327:

/* Line 678 of lalr1.cc  */
#line 3248 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new InstanceofExpr(LOC ((yyloc)),
								(yysemantic_stack_[(4) - (1)].expr),
								dynamic_cast<SequenceType*>((yysemantic_stack_[(4) - (4)].node)));
		}
    break;

  case 328:

/* Line 678 of lalr1.cc  */
#line 3260 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 329:

/* Line 678 of lalr1.cc  */
#line 3264 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new TreatExpr(LOC ((yyloc)),
								(yysemantic_stack_[(4) - (1)].expr),
								dynamic_cast<SequenceType*>((yysemantic_stack_[(4) - (4)].node)));
		}
    break;

  case 330:

/* Line 678 of lalr1.cc  */
#line 3276 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 331:

/* Line 678 of lalr1.cc  */
#line 3280 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CastableExpr(LOC ((yyloc)),
								(yysemantic_stack_[(4) - (1)].expr),
								dynamic_cast<SingleType*>((yysemantic_stack_[(4) - (4)].node)));
		}
    break;

  case 332:

/* Line 678 of lalr1.cc  */
#line 3292 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 333:

/* Line 678 of lalr1.cc  */
#line 3296 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CastExpr(LOC ((yyloc)),
								(yysemantic_stack_[(4) - (1)].expr),
								dynamic_cast<SingleType*>((yysemantic_stack_[(4) - (4)].node)));
		}
    break;

  case 334:

/* Line 678 of lalr1.cc  */
#line 3308 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 335:

/* Line 678 of lalr1.cc  */
#line 3312 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new UnaryExpr(LOC ((yyloc)),
								dynamic_cast<SignList*>((yysemantic_stack_[(2) - (1)].node)),
								(yysemantic_stack_[(2) - (2)].expr));
		}
    break;

  case 336:

/* Line 678 of lalr1.cc  */
#line 3324 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SignList(LOC ((yyloc)), true);
		}
    break;

  case 337:

/* Line 678 of lalr1.cc  */
#line 3328 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SignList(LOC ((yyloc)), false);
		}
    break;

  case 338:

/* Line 678 of lalr1.cc  */
#line 3332 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(2) - (1)].node);
		}
    break;

  case 339:

/* Line 678 of lalr1.cc  */
#line 3336 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			SignList* slist_p = dynamic_cast<SignList*>((yysemantic_stack_[(2) - (1)].node));
			if (slist_p) slist_p->negate();
			(yyval.node) = (yysemantic_stack_[(2) - (1)].node);
		}
    break;

  case 340:

/* Line 678 of lalr1.cc  */
#line 3348 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 341:

/* Line 678 of lalr1.cc  */
#line 3352 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 342:

/* Line 678 of lalr1.cc  */
#line 3356 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 343:

/* Line 678 of lalr1.cc  */
#line 3366 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ValueComp(LOC ((yyloc)), ParseConstants::op_val_eq);
		}
    break;

  case 344:

/* Line 678 of lalr1.cc  */
#line 3370 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ValueComp(LOC ((yyloc)), ParseConstants::op_val_ne);
		}
    break;

  case 345:

/* Line 678 of lalr1.cc  */
#line 3374 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ValueComp(LOC ((yyloc)), ParseConstants::op_val_lt);
		}
    break;

  case 346:

/* Line 678 of lalr1.cc  */
#line 3378 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ValueComp(LOC ((yyloc)), ParseConstants::op_val_le);
		}
    break;

  case 347:

/* Line 678 of lalr1.cc  */
#line 3382 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ValueComp(LOC ((yyloc)), ParseConstants::op_val_gt);
		}
    break;

  case 348:

/* Line 678 of lalr1.cc  */
#line 3386 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ValueComp(LOC ((yyloc)), ParseConstants::op_val_ge);
		}
    break;

  case 349:

/* Line 678 of lalr1.cc  */
#line 3396 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new NodeComp(LOC ((yyloc)), ParseConstants::op_is);
		}
    break;

  case 350:

/* Line 678 of lalr1.cc  */
#line 3400 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new NodeComp(LOC ((yyloc)), ParseConstants::op_precedes);
		}
    break;

  case 351:

/* Line 678 of lalr1.cc  */
#line 3404 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new NodeComp(LOC ((yyloc)), ParseConstants::op_follows);
		}
    break;

  case 352:

/* Line 678 of lalr1.cc  */
#line 3414 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new ValidateExpr(LOC ((yyloc)), "strict", (yysemantic_stack_[(4) - (3)].expr));
		}
    break;

  case 353:

/* Line 678 of lalr1.cc  */
#line 3418 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = new ValidateExpr(LOC ((yyloc)), "lax", (yysemantic_stack_[(5) - (4)].expr));
    }
    break;

  case 354:

/* Line 678 of lalr1.cc  */
#line 3422 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = new ValidateExpr(LOC ((yyloc)), "strict", (yysemantic_stack_[(5) - (4)].expr));
    }
    break;

  case 355:

/* Line 678 of lalr1.cc  */
#line 3426 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = new ValidateExpr(LOC ((yyloc)),
                            dynamic_cast<TypeName*>((yysemantic_stack_[(6) - (3)].node))->get_name(),
                            (yysemantic_stack_[(6) - (5)].expr));
    }
    break;

  case 356:

/* Line 678 of lalr1.cc  */
#line 3438 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new ExtensionExpr(LOC ((yyloc)),
								dynamic_cast<PragmaList*>((yysemantic_stack_[(3) - (1)].node)),
								NULL);
		}
    break;

  case 357:

/* Line 678 of lalr1.cc  */
#line 3444 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new ExtensionExpr(LOC ((yyloc)),
								dynamic_cast<PragmaList*>((yysemantic_stack_[(4) - (1)].node)),
								(yysemantic_stack_[(4) - (3)].expr));
		}
    break;

  case 358:

/* Line 678 of lalr1.cc  */
#line 3456 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			PragmaList* pragma_list_p = new PragmaList(LOC ((yyloc)));
			pragma_list_p->push_back(dynamic_cast<Pragma*>((yysemantic_stack_[(1) - (1)].node)));
			(yyval.node) = pragma_list_p;
		}
    break;

  case 359:

/* Line 678 of lalr1.cc  */
#line 3462 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			PragmaList* pragma_list_p = dynamic_cast<PragmaList*>((yysemantic_stack_[(2) - (1)].node));
			if (pragma_list_p) {
				pragma_list_p->push_back(dynamic_cast<Pragma*>((yysemantic_stack_[(2) - (2)].node)));
			}
			(yyval.node) = (yysemantic_stack_[(2) - (1)].node);
		}
    break;

  case 360:

/* Line 678 of lalr1.cc  */
#line 3476 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new Pragma(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(3) - (2)].expr)),
								SYMTAB ((yysemantic_stack_[(3) - (3)].sval)));

		}
    break;

  case 361:

/* Line 678 of lalr1.cc  */
#line 3482 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new Pragma(LOC ((yyloc)),
								new QName(LOC ((yyloc)), SYMTAB((yysemantic_stack_[(2) - (2)].sval))),
								"");
    }
    break;

  case 362:

/* Line 678 of lalr1.cc  */
#line 3524 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new PathExpr(LOC ((yyloc)), ParseConstants::path_leading_lone_slash, NULL);
		}
    break;

  case 363:

/* Line 678 of lalr1.cc  */
#line 3528 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new PathExpr(LOC ((yyloc)), ParseConstants::path_leading_slash, (yysemantic_stack_[(2) - (2)].expr));
		}
    break;

  case 364:

/* Line 678 of lalr1.cc  */
#line 3532 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new PathExpr(LOC ((yyloc)), ParseConstants::path_leading_slashslash, (yysemantic_stack_[(2) - (2)].expr));
		}
    break;

  case 365:

/* Line 678 of lalr1.cc  */
#line 3536 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       RelativePathExpr *rpe = dynamic_cast<RelativePathExpr *>((yysemantic_stack_[(1) - (1)].expr));
       (yyval.expr) = (rpe == NULL ?
             (yysemantic_stack_[(1) - (1)].expr) :
             new PathExpr(LOC((yyloc)), ParseConstants::path_relative, (yysemantic_stack_[(1) - (1)].expr)));
		}
    break;

  case 366:

/* Line 678 of lalr1.cc  */
#line 3548 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = NULL;
    }
    break;

  case 367:

/* Line 678 of lalr1.cc  */
#line 3558 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       AxisStep *as = dynamic_cast<AxisStep *>((yysemantic_stack_[(1) - (1)].expr));
       (yyval.expr) = (as != NULL ?
             new RelativePathExpr(LOC ((yyloc)),
                                  ParseConstants::st_slash,
                                  new ContextItemExpr(LOC((yyloc)), true),
                                  (yysemantic_stack_[(1) - (1)].expr)) :
             (yysemantic_stack_[(1) - (1)].expr));
		}
    break;

  case 368:

/* Line 678 of lalr1.cc  */
#line 3569 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new RelativePathExpr(LOC((yyloc)), ParseConstants::st_slash, (yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 369:

/* Line 678 of lalr1.cc  */
#line 3574 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new RelativePathExpr(LOC((yyloc)), ParseConstants::st_slashslash, (yysemantic_stack_[(3) - (1)].expr), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 370:

/* Line 678 of lalr1.cc  */
#line 3584 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 371:

/* Line 678 of lalr1.cc  */
#line 3588 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 372:

/* Line 678 of lalr1.cc  */
#line 3598 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new AxisStep(LOC ((yyloc)),
								dynamic_cast<ForwardStep*>((yysemantic_stack_[(1) - (1)].node)),
								NULL);
		}
    break;

  case 373:

/* Line 678 of lalr1.cc  */
#line 3604 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new AxisStep(LOC ((yyloc)),
								dynamic_cast<ForwardStep*>((yysemantic_stack_[(2) - (1)].node)),
								dynamic_cast<PredicateList*>((yysemantic_stack_[(2) - (2)].node)));
		}
    break;

  case 374:

/* Line 678 of lalr1.cc  */
#line 3610 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new AxisStep(LOC ((yyloc)),
								dynamic_cast<ReverseStep*>((yysemantic_stack_[(1) - (1)].node)),
								NULL);
		}
    break;

  case 375:

/* Line 678 of lalr1.cc  */
#line 3616 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new AxisStep(LOC ((yyloc)),
								dynamic_cast<ReverseStep*>((yysemantic_stack_[(2) - (1)].node)),
								dynamic_cast<PredicateList*>((yysemantic_stack_[(2) - (2)].node)));
		}
    break;

  case 376:

/* Line 678 of lalr1.cc  */
#line 3628 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ForwardStep(LOC ((yyloc)),
								dynamic_cast<ForwardAxis*>((yysemantic_stack_[(2) - (1)].node)),
								(yysemantic_stack_[(2) - (2)].node));
		}
    break;

  case 377:

/* Line 678 of lalr1.cc  */
#line 3634 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ForwardStep(LOC ((yyloc)),
								dynamic_cast<AbbrevForwardStep*>((yysemantic_stack_[(1) - (1)].node)));
		}
    break;

  case 378:

/* Line 678 of lalr1.cc  */
#line 3645 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ForwardAxis(LOC ((yyloc)), ParseConstants::axis_child);
		}
    break;

  case 379:

/* Line 678 of lalr1.cc  */
#line 3649 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ForwardAxis(LOC ((yyloc)), ParseConstants::axis_descendant);
		}
    break;

  case 380:

/* Line 678 of lalr1.cc  */
#line 3653 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ForwardAxis(LOC ((yyloc)), ParseConstants::axis_attribute);
		}
    break;

  case 381:

/* Line 678 of lalr1.cc  */
#line 3657 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ForwardAxis(LOC ((yyloc)), ParseConstants::axis_self);
		}
    break;

  case 382:

/* Line 678 of lalr1.cc  */
#line 3661 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ForwardAxis(LOC ((yyloc)), ParseConstants::axis_descendant_or_self);
		}
    break;

  case 383:

/* Line 678 of lalr1.cc  */
#line 3665 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ForwardAxis(LOC ((yyloc)), ParseConstants::axis_following_sibling);
		}
    break;

  case 384:

/* Line 678 of lalr1.cc  */
#line 3669 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ForwardAxis(LOC ((yyloc)), ParseConstants::axis_following);
		}
    break;

  case 385:

/* Line 678 of lalr1.cc  */
#line 3679 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new AbbrevForwardStep(LOC ((yyloc)), (yysemantic_stack_[(1) - (1)].node), false);
		}
    break;

  case 386:

/* Line 678 of lalr1.cc  */
#line 3683 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new AbbrevForwardStep(LOC ((yyloc)), (yysemantic_stack_[(2) - (2)].node), true);
		}
    break;

  case 387:

/* Line 678 of lalr1.cc  */
#line 3693 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ReverseStep(LOC((yyloc)), dynamic_cast<ReverseAxis*>((yysemantic_stack_[(2) - (1)].node)), (yysemantic_stack_[(2) - (2)].node));
		}
    break;

  case 388:

/* Line 678 of lalr1.cc  */
#line 3697 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			ReverseAxis* rev_p = new ReverseAxis(LOC ((yyloc)), ParseConstants::axis_parent);
			(yyval.node) = new ReverseStep(LOC((yyloc)), rev_p, NULL);
		}
    break;

  case 389:

/* Line 678 of lalr1.cc  */
#line 3708 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ReverseAxis(LOC ((yyloc)), ParseConstants::axis_parent);
		}
    break;

  case 390:

/* Line 678 of lalr1.cc  */
#line 3712 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ReverseAxis(LOC ((yyloc)), ParseConstants::axis_ancestor);
		}
    break;

  case 391:

/* Line 678 of lalr1.cc  */
#line 3716 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ReverseAxis(LOC ((yyloc)), ParseConstants::axis_preceding_sibling);
		}
    break;

  case 392:

/* Line 678 of lalr1.cc  */
#line 3720 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ReverseAxis(LOC ((yyloc)), ParseConstants::axis_preceding);
		}
    break;

  case 393:

/* Line 678 of lalr1.cc  */
#line 3724 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ReverseAxis(LOC ((yyloc)), ParseConstants::axis_ancestor_or_self);
		}
    break;

  case 394:

/* Line 678 of lalr1.cc  */
#line 3739 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 395:

/* Line 678 of lalr1.cc  */
#line 3743 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 396:

/* Line 678 of lalr1.cc  */
#line 3753 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new NameTest(LOC ((yyloc)), static_cast<QName*>((yysemantic_stack_[(1) - (1)].expr)));
		}
    break;

  case 397:

/* Line 678 of lalr1.cc  */
#line 3757 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new NameTest(LOC ((yyloc)), dynamic_cast<Wildcard*>((yysemantic_stack_[(1) - (1)].node)));
		}
    break;

  case 398:

/* Line 678 of lalr1.cc  */
#line 3767 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new Wildcard(LOC ((yyloc)),
                        "",
                        "",
                        ParseConstants::wild_all);
		}
    break;

  case 399:

/* Line 678 of lalr1.cc  */
#line 3774 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new Wildcard(LOC ((yyloc)),
                        SYMTAB ((yysemantic_stack_[(1) - (1)].sval)),
                        "",
                        ParseConstants::wild_elem);
		}
    break;

  case 400:

/* Line 678 of lalr1.cc  */
#line 3781 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new Wildcard(LOC ((yyloc)),
                        "",
                        SYMTAB ((yysemantic_stack_[(1) - (1)].sval)),
                        ParseConstants::wild_prefix);
		}
    break;

  case 401:

/* Line 678 of lalr1.cc  */
#line 3794 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 402:

/* Line 678 of lalr1.cc  */
#line 3798 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new FilterExpr(LOC ((yyloc)),
                          (yysemantic_stack_[(2) - (1)].expr),
                          dynamic_cast<PredicateList*>((yysemantic_stack_[(2) - (2)].node)));
		}
    break;

  case 403:

/* Line 678 of lalr1.cc  */
#line 3810 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			PredicateList* pred_list_p = new PredicateList(LOC ((yyloc)));
			pred_list_p->push_back(dynamic_cast<exprnode*>((yysemantic_stack_[(1) - (1)].expr)));
			(yyval.node) = pred_list_p;
		}
    break;

  case 404:

/* Line 678 of lalr1.cc  */
#line 3816 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			PredicateList* pred_list_p = dynamic_cast<PredicateList*>((yysemantic_stack_[(2) - (1)].node));
			if (pred_list_p) {
				pred_list_p->push_back(dynamic_cast<exprnode*>((yysemantic_stack_[(2) - (2)].expr)));
			}
			(yyval.node) = (yysemantic_stack_[(2) - (1)].node);
		}
    break;

  case 405:

/* Line 678 of lalr1.cc  */
#line 3830 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(3) - (2)].expr);
		}
    break;

  case 406:

/* Line 678 of lalr1.cc  */
#line 3841 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 407:

/* Line 678 of lalr1.cc  */
#line 3845 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 408:

/* Line 678 of lalr1.cc  */
#line 3849 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 409:

/* Line 678 of lalr1.cc  */
#line 3853 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 410:

/* Line 678 of lalr1.cc  */
#line 3857 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 411:

/* Line 678 of lalr1.cc  */
#line 3861 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 412:

/* Line 678 of lalr1.cc  */
#line 3865 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 413:

/* Line 678 of lalr1.cc  */
#line 3869 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 414:

/* Line 678 of lalr1.cc  */
#line 3879 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 415:

/* Line 678 of lalr1.cc  */
#line 3883 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 416:

/* Line 678 of lalr1.cc  */
#line 3893 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = NumericLiteral::new_literal(LOC ((yyloc)), ParseConstants::num_decimal, *(yysemantic_stack_[(1) - (1)].decval));
      delete yylval.decval;
		}
    break;

  case 417:

/* Line 678 of lalr1.cc  */
#line 3898 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = NumericLiteral::new_literal(LOC ((yyloc)), ParseConstants::num_integer, *(yysemantic_stack_[(1) - (1)].ival));
      delete yylval.ival;
		}
    break;

  case 418:

/* Line 678 of lalr1.cc  */
#line 3903 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = NumericLiteral::new_literal(LOC ((yyloc)), ParseConstants::num_double, *(yysemantic_stack_[(1) - (1)].dval));
      delete yylval.dval;
		}
    break;

  case 419:

/* Line 678 of lalr1.cc  */
#line 3914 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new VarRef(LOC ((yyloc)), static_cast<QName*>((yysemantic_stack_[(2) - (2)].expr))->get_qname());
      delete (yysemantic_stack_[(2) - (2)].expr);
		}
    break;

  case 420:

/* Line 678 of lalr1.cc  */
#line 3925 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new ParenthesizedExpr(LOC ((yyloc)), NULL);
		}
    break;

  case 421:

/* Line 678 of lalr1.cc  */
#line 3929 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new ParenthesizedExpr(LOC ((yyloc)),
								(yysemantic_stack_[(3) - (2)].expr));
		}
    break;

  case 422:

/* Line 678 of lalr1.cc  */
#line 3940 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new ContextItemExpr(LOC ((yyloc)));
		}
    break;

  case 423:

/* Line 678 of lalr1.cc  */
#line 3950 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new OrderedExpr(LOC ((yyloc)),
								(yysemantic_stack_[(4) - (3)].expr));
		}
    break;

  case 424:

/* Line 678 of lalr1.cc  */
#line 3961 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new UnorderedExpr(LOC ((yyloc)),
								(yysemantic_stack_[(4) - (3)].expr));
		}
    break;

  case 425:

/* Line 678 of lalr1.cc  */
#line 4017 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new FunctionCall(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(3) - (1)].expr)),
								NULL);
		}
    break;

  case 426:

/* Line 678 of lalr1.cc  */
#line 4023 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new FunctionCall(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (1)].expr)),
								dynamic_cast<ArgList*>((yysemantic_stack_[(4) - (3)].node)));
		}
    break;

  case 427:

/* Line 678 of lalr1.cc  */
#line 4035 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			ArgList* a_list_p = new ArgList(LOC ((yyloc)));
			a_list_p->push_back((yysemantic_stack_[(1) - (1)].expr));
			(yyval.node) = a_list_p;
		}
    break;

  case 428:

/* Line 678 of lalr1.cc  */
#line 4041 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			ArgList* a_list_p = dynamic_cast<ArgList*>((yysemantic_stack_[(3) - (1)].node));
			if (a_list_p) a_list_p->push_back((yysemantic_stack_[(3) - (3)].expr));
			(yyval.node) = (yysemantic_stack_[(3) - (1)].node);
		}
    break;

  case 429:

/* Line 678 of lalr1.cc  */
#line 4053 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 430:

/* Line 678 of lalr1.cc  */
#line 4057 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 431:

/* Line 678 of lalr1.cc  */
#line 4067 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 432:

/* Line 678 of lalr1.cc  */
#line 4071 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 433:

/* Line 678 of lalr1.cc  */
#line 4075 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 434:

/* Line 678 of lalr1.cc  */
#line 4085 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new DirElemConstructor(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (2)].expr)),
								NULL,
								NULL,
								NULL);
		}
    break;

  case 435:

/* Line 678 of lalr1.cc  */
#line 4093 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new DirElemConstructor(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(5) - (2)].expr)),
								NULL,
								dynamic_cast<DirAttributeList*>((yysemantic_stack_[(5) - (3)].node)),
								NULL);
		}
    break;

  case 436:

/* Line 678 of lalr1.cc  */
#line 4101 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new DirElemConstructor(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(8) - (2)].expr)),
								static_cast<QName*>((yysemantic_stack_[(8) - (6)].expr)),
								NULL,
								NULL);
		}
    break;

  case 437:

/* Line 678 of lalr1.cc  */
#line 4109 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new DirElemConstructor(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(9) - (2)].expr)),
								static_cast<QName*>((yysemantic_stack_[(9) - (7)].expr)),
								NULL,
								dynamic_cast<DirElemContentList*>((yysemantic_stack_[(9) - (5)].node)));
		}
    break;

  case 438:

/* Line 678 of lalr1.cc  */
#line 4117 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new DirElemConstructor(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(9) - (2)].expr)),
								static_cast<QName*>((yysemantic_stack_[(9) - (7)].expr)),
								dynamic_cast<DirAttributeList*>((yysemantic_stack_[(9) - (3)].node)),
								NULL);
		}
    break;

  case 439:

/* Line 678 of lalr1.cc  */
#line 4125 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new DirElemConstructor(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(10) - (2)].expr)),
								static_cast<QName*>((yysemantic_stack_[(10) - (8)].expr)),
								dynamic_cast<DirAttributeList*>((yysemantic_stack_[(10) - (3)].node)),
								dynamic_cast<DirElemContentList*>((yysemantic_stack_[(10) - (6)].node)));
		}
    break;

  case 440:

/* Line 678 of lalr1.cc  */
#line 4140 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			DirElemContentList* elem_content_list_p = new DirElemContentList(LOC ((yyloc)));
			elem_content_list_p->push_back(dynamic_cast<DirElemContent*>((yysemantic_stack_[(1) - (1)].expr)));
			(yyval.node) = elem_content_list_p;
		}
    break;

  case 441:

/* Line 678 of lalr1.cc  */
#line 4146 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			DirElemContentList* elem_content_list_p = dynamic_cast<DirElemContentList*>((yysemantic_stack_[(2) - (1)].node));
			if (elem_content_list_p) elem_content_list_p->push_back(dynamic_cast<DirElemContent*>((yysemantic_stack_[(2) - (2)].expr)));
			(yyval.node) = (yysemantic_stack_[(2) - (1)].node);
		}
    break;

  case 442:

/* Line 678 of lalr1.cc  */
#line 4158 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			DirAttributeList* at_list_p = new DirAttributeList(LOC ((yyloc)));
			at_list_p->push_back(dynamic_cast<DirAttr*>((yysemantic_stack_[(1) - (1)].node)));
			(yyval.node) = at_list_p;
		}
    break;

  case 443:

/* Line 678 of lalr1.cc  */
#line 4164 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			DirAttributeList* at_list_p = dynamic_cast<DirAttributeList*>((yysemantic_stack_[(2) - (1)].node));
			if (at_list_p) {
				at_list_p->push_back(dynamic_cast<DirAttr*>((yysemantic_stack_[(2) - (2)].node)));
			}
			(yyval.node) = (yysemantic_stack_[(2) - (1)].node);
		}
    break;

  case 444:

/* Line 678 of lalr1.cc  */
#line 4177 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new DirAttr(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(6) - (2)].expr)),
								dynamic_cast<DirAttributeValue*>((yysemantic_stack_[(6) - (6)].node)));
		}
    break;

  case 447:

/* Line 678 of lalr1.cc  */
#line 4194 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new DirAttributeValue(LOC ((yyloc)),
								dynamic_cast<QuoteAttrContentList*>((yysemantic_stack_[(3) - (2)].node)));
		}
    break;

  case 448:

/* Line 678 of lalr1.cc  */
#line 4199 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new DirAttributeValue(LOC ((yyloc)),
								dynamic_cast<AposAttrContentList*>((yysemantic_stack_[(3) - (2)].node)));
		}
    break;

  case 449:

/* Line 678 of lalr1.cc  */
#line 4210 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new QuoteAttrContentList(LOC ((yyloc)));
		}
    break;

  case 450:

/* Line 678 of lalr1.cc  */
#line 4214 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 451:

/* Line 678 of lalr1.cc  */
#line 4221 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			QuoteAttrContentList* qo_list_p = new QuoteAttrContentList(LOC ((yyloc)));
			qo_list_p->push_back(new QuoteAttrValueContent(LOC ((yyloc)),std::string("\"")));
			(yyval.node) = qo_list_p;
		}
    break;

  case 452:

/* Line 678 of lalr1.cc  */
#line 4227 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			QuoteAttrContentList* qo_list_p = new QuoteAttrContentList(LOC ((yyloc)));
			qo_list_p->push_back(dynamic_cast<QuoteAttrValueContent*>((yysemantic_stack_[(1) - (1)].node)));
			(yyval.node) = qo_list_p;
		}
    break;

  case 453:

/* Line 678 of lalr1.cc  */
#line 4233 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			QuoteAttrContentList* qo_list_p = dynamic_cast<QuoteAttrContentList*>((yysemantic_stack_[(2) - (1)].node));
			if (qo_list_p) {
				qo_list_p->push_back(new QuoteAttrValueContent(LOC ((yyloc)),std::string("\"")));
			}
			(yyval.node) = (yysemantic_stack_[(2) - (1)].node);
		}
    break;

  case 454:

/* Line 678 of lalr1.cc  */
#line 4241 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			QuoteAttrContentList* qo_list_p = dynamic_cast<QuoteAttrContentList*>((yysemantic_stack_[(2) - (1)].node));
			if (qo_list_p) {
				qo_list_p->push_back(dynamic_cast<QuoteAttrValueContent*>((yysemantic_stack_[(2) - (2)].node)));
			}
			(yyval.node) = (yysemantic_stack_[(2) - (1)].node);
		}
    break;

  case 455:

/* Line 678 of lalr1.cc  */
#line 4255 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new AposAttrContentList(LOC ((yyloc)));
		}
    break;

  case 456:

/* Line 678 of lalr1.cc  */
#line 4259 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 457:

/* Line 678 of lalr1.cc  */
#line 4266 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			AposAttrContentList* at_list_p = new AposAttrContentList(LOC ((yyloc)));
			at_list_p->push_back(new AposAttrValueContent(LOC ((yyloc)),"'"));
			(yyval.node) = at_list_p;
		}
    break;

  case 458:

/* Line 678 of lalr1.cc  */
#line 4272 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			AposAttrContentList* at_list_p = new AposAttrContentList(LOC ((yyloc)));
			at_list_p->push_back(dynamic_cast<AposAttrValueContent*>((yysemantic_stack_[(1) - (1)].node)));
			(yyval.node) = at_list_p;
		}
    break;

  case 459:

/* Line 678 of lalr1.cc  */
#line 4278 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			AposAttrContentList* at_list_p = dynamic_cast<AposAttrContentList*>((yysemantic_stack_[(2) - (1)].node));
			if (at_list_p) {
				at_list_p->push_back(new AposAttrValueContent(LOC ((yyloc)),"'"));
			}
			(yyval.node) = (yysemantic_stack_[(2) - (1)].node);
		}
    break;

  case 460:

/* Line 678 of lalr1.cc  */
#line 4286 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			AposAttrContentList* at_list_p = dynamic_cast<AposAttrContentList*>((yysemantic_stack_[(2) - (1)].node));
			if (at_list_p) {
				at_list_p->push_back(dynamic_cast<AposAttrValueContent*>((yysemantic_stack_[(2) - (2)].node)));
			}
			(yyval.node) = (yysemantic_stack_[(2) - (1)].node);
		}
    break;

  case 461:

/* Line 678 of lalr1.cc  */
#line 4300 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new QuoteAttrValueContent(LOC ((yyloc)),
								SYMTAB ((yysemantic_stack_[(1) - (1)].sval)));
		}
    break;

  case 462:

/* Line 678 of lalr1.cc  */
#line 4305 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new QuoteAttrValueContent(LOC ((yyloc)),
								dynamic_cast<CommonContent*>((yysemantic_stack_[(1) - (1)].expr)));
		}
    break;

  case 463:

/* Line 678 of lalr1.cc  */
#line 4316 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new AposAttrValueContent(LOC ((yyloc)),
								SYMTAB ((yysemantic_stack_[(1) - (1)].sval)));
		}
    break;

  case 464:

/* Line 678 of lalr1.cc  */
#line 4321 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new AposAttrValueContent(LOC ((yyloc)),
								dynamic_cast<CommonContent*>((yysemantic_stack_[(1) - (1)].expr)));
		}
    break;

  case 465:

/* Line 678 of lalr1.cc  */
#line 4332 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new DirElemContent(LOC ((yyloc)),
								(yysemantic_stack_[(1) - (1)].expr));
		}
    break;

  case 466:

/* Line 678 of lalr1.cc  */
#line 4337 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new DirElemContent(LOC ((yyloc)),
								SYMTAB ((yysemantic_stack_[(1) - (1)].sval)));
		}
    break;

  case 467:

/* Line 678 of lalr1.cc  */
#line 4342 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			rchandle<CDataSection> cdata_h = dynamic_cast<CDataSection*>((yysemantic_stack_[(1) - (1)].expr));
			(yyval.expr) = new DirElemContent(LOC ((yyloc)),
								cdata_h);
		}
    break;

  case 468:

/* Line 678 of lalr1.cc  */
#line 4348 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			rchandle<CommonContent> cont_h = dynamic_cast<CommonContent*>((yysemantic_stack_[(1) - (1)].expr));
			(yyval.expr) = new DirElemContent(LOC ((yyloc)),
								cont_h);
		}
    break;

  case 469:

/* Line 678 of lalr1.cc  */
#line 4360 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CommonContent(LOC ((yyloc)),
                ParseConstants::cont_charref,
								SYMTAB ((yysemantic_stack_[(1) - (1)].sval)));
		}
    break;

  case 470:

/* Line 678 of lalr1.cc  */
#line 4366 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CommonContent(LOC ((yyloc)),
								ParseConstants::cont_escape_lbrace);
		}
    break;

  case 471:

/* Line 678 of lalr1.cc  */
#line 4371 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CommonContent(LOC ((yyloc)),
								ParseConstants::cont_escape_rbrace);
		}
    break;

  case 472:

/* Line 678 of lalr1.cc  */
#line 4376 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CommonContent(LOC ((yyloc)),
								dynamic_cast<EnclosedExpr*>((yysemantic_stack_[(1) - (1)].expr)));
		}
    break;

  case 473:

/* Line 678 of lalr1.cc  */
#line 4387 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new DirCommentConstructor(LOC ((yyloc)),
								SYMTAB ((yysemantic_stack_[(3) - (2)].sval)));
		}
    break;

  case 474:

/* Line 678 of lalr1.cc  */
#line 4392 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = new DirCommentConstructor(LOC ((yyloc)), "");
    }
    break;

  case 475:

/* Line 678 of lalr1.cc  */
#line 4407 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new DirPIConstructor(LOC ((yyloc)),
								SYMTAB ((yysemantic_stack_[(3) - (2)].sval)));
		}
    break;

  case 476:

/* Line 678 of lalr1.cc  */
#line 4412 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new DirPIConstructor(LOC ((yyloc)),
								SYMTAB ((yysemantic_stack_[(3) - (2)].sval)),
								SYMTAB ((yysemantic_stack_[(3) - (3)].sval)));
		}
    break;

  case 477:

/* Line 678 of lalr1.cc  */
#line 4429 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CDataSection(LOC ((yyloc)),SYMTAB ((yysemantic_stack_[(2) - (2)].sval)));
		}
    break;

  case 478:

/* Line 678 of lalr1.cc  */
#line 4444 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 479:

/* Line 678 of lalr1.cc  */
#line 4448 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 480:

/* Line 678 of lalr1.cc  */
#line 4452 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 481:

/* Line 678 of lalr1.cc  */
#line 4456 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 482:

/* Line 678 of lalr1.cc  */
#line 4460 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 483:

/* Line 678 of lalr1.cc  */
#line 4464 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = (yysemantic_stack_[(1) - (1)].expr);
		}
    break;

  case 484:

/* Line 678 of lalr1.cc  */
#line 4474 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompDocConstructor(LOC ((yyloc)),
								(yysemantic_stack_[(4) - (3)].expr));
		}
    break;

  case 485:

/* Line 678 of lalr1.cc  */
#line 4485 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompElemConstructor(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (2)].expr)),
								NULL);
		}
    break;

  case 486:

/* Line 678 of lalr1.cc  */
#line 4491 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompElemConstructor(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(5) - (2)].expr)),
								(yysemantic_stack_[(5) - (4)].expr));
		}
    break;

  case 487:

/* Line 678 of lalr1.cc  */
#line 4497 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompElemConstructor(LOC ((yyloc)),
								(yysemantic_stack_[(6) - (3)].expr), NULL);
		}
    break;

  case 488:

/* Line 678 of lalr1.cc  */
#line 4502 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompElemConstructor(LOC ((yyloc)),
								(yysemantic_stack_[(7) - (3)].expr), (yysemantic_stack_[(7) - (6)].expr));
		}
    break;

  case 489:

/* Line 678 of lalr1.cc  */
#line 4524 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompAttrConstructor(LOC ((yyloc)),
								(yysemantic_stack_[(4) - (2)].expr),
								NULL);
		}
    break;

  case 490:

/* Line 678 of lalr1.cc  */
#line 4530 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompAttrConstructor(LOC ((yyloc)),
								(yysemantic_stack_[(5) - (2)].expr),
								(yysemantic_stack_[(5) - (4)].expr));
		}
    break;

  case 491:

/* Line 678 of lalr1.cc  */
#line 4536 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompAttrConstructor(LOC ((yyloc)),
								(yysemantic_stack_[(6) - (3)].expr), NULL);
		}
    break;

  case 492:

/* Line 678 of lalr1.cc  */
#line 4541 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompAttrConstructor(LOC ((yyloc)),
								(yysemantic_stack_[(7) - (3)].expr), (yysemantic_stack_[(7) - (6)].expr));
		}
    break;

  case 493:

/* Line 678 of lalr1.cc  */
#line 4552 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompTextConstructor(LOC ((yyloc)), (yysemantic_stack_[(4) - (3)].expr));
		}
    break;

  case 494:

/* Line 678 of lalr1.cc  */
#line 4562 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompCommentConstructor(LOC ((yyloc)), (yysemantic_stack_[(4) - (3)].expr));
		}
    break;

  case 495:

/* Line 678 of lalr1.cc  */
#line 4572 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompPIConstructor(LOC ((yyloc)),
								SYMTAB ((yysemantic_stack_[(4) - (2)].sval)),
								NULL);
		}
    break;

  case 496:

/* Line 678 of lalr1.cc  */
#line 4578 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompPIConstructor(LOC ((yyloc)),
								SYMTAB ((yysemantic_stack_[(5) - (2)].sval)),
								(yysemantic_stack_[(5) - (4)].expr));
		}
    break;

  case 497:

/* Line 678 of lalr1.cc  */
#line 4584 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompPIConstructor(LOC ((yyloc)),
								(yysemantic_stack_[(6) - (3)].expr), NULL);
		}
    break;

  case 498:

/* Line 678 of lalr1.cc  */
#line 4589 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new CompPIConstructor(LOC((yyloc)), (yysemantic_stack_[(7) - (3)].expr), (yysemantic_stack_[(7) - (6)].expr));
		}
    break;

  case 499:

/* Line 678 of lalr1.cc  */
#line 4599 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SingleType(LOC((yyloc)), dynamic_cast<AtomicType*>((yysemantic_stack_[(1) - (1)].node)), false);
		}
    break;

  case 500:

/* Line 678 of lalr1.cc  */
#line 4603 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SingleType(LOC((yyloc)), dynamic_cast<AtomicType*>((yysemantic_stack_[(2) - (1)].node)), true);
		}
    break;

  case 501:

/* Line 678 of lalr1.cc  */
#line 4613 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(2) - (2)].node);
		}
    break;

  case 502:

/* Line 678 of lalr1.cc  */
#line 4624 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SequenceType(LOC((yyloc)), (yysemantic_stack_[(1) - (1)].node), NULL);
		}
    break;

  case 503:

/* Line 678 of lalr1.cc  */
#line 4628 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SequenceType(LOC((yyloc)), (yysemantic_stack_[(2) - (1)].node), dynamic_cast<OccurrenceIndicator*>((yysemantic_stack_[(2) - (2)].node)));
		}
    break;

  case 504:

/* Line 678 of lalr1.cc  */
#line 4632 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SequenceType(LOC((yyloc)), NULL, NULL);
		}
    break;

  case 505:

/* Line 678 of lalr1.cc  */
#line 4669 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OccurrenceIndicator(LOC((yyloc)), ParseConstants::occurs_optionally);
		}
    break;

  case 506:

/* Line 678 of lalr1.cc  */
#line 4673 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OccurrenceIndicator(LOC((yyloc)),	ParseConstants::occurs_zero_or_more);
		}
    break;

  case 507:

/* Line 678 of lalr1.cc  */
#line 4677 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new OccurrenceIndicator(LOC((yyloc)), ParseConstants::occurs_one_or_more);
		}
    break;

  case 508:

/* Line 678 of lalr1.cc  */
#line 4687 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 509:

/* Line 678 of lalr1.cc  */
#line 4691 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 510:

/* Line 678 of lalr1.cc  */
#line 4695 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ItemType(LOC ((yyloc)),true);
		}
    break;

  case 511:

/* Line 678 of lalr1.cc  */
#line 4705 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new AtomicType(LOC((yyloc)), static_cast<QName*>((yysemantic_stack_[(1) - (1)].expr)));
		}
    break;

  case 512:

/* Line 678 of lalr1.cc  */
#line 4715 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 513:

/* Line 678 of lalr1.cc  */
#line 4719 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 514:

/* Line 678 of lalr1.cc  */
#line 4723 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 515:

/* Line 678 of lalr1.cc  */
#line 4727 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 516:

/* Line 678 of lalr1.cc  */
#line 4731 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 517:

/* Line 678 of lalr1.cc  */
#line 4735 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 518:

/* Line 678 of lalr1.cc  */
#line 4739 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 519:

/* Line 678 of lalr1.cc  */
#line 4743 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 520:

/* Line 678 of lalr1.cc  */
#line 4747 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 521:

/* Line 678 of lalr1.cc  */
#line 4757 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new AnyKindTest(LOC ((yyloc)));
		}
    break;

  case 522:

/* Line 678 of lalr1.cc  */
#line 4767 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new DocumentTest(LOC ((yyloc)));
		}
    break;

  case 523:

/* Line 678 of lalr1.cc  */
#line 4771 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new DocumentTest(LOC((yyloc)), dynamic_cast<ElementTest*>((yysemantic_stack_[(4) - (3)].node)));
		}
    break;

  case 524:

/* Line 678 of lalr1.cc  */
#line 4775 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new DocumentTest(LOC((yyloc)), dynamic_cast<SchemaElementTest*>((yysemantic_stack_[(4) - (3)].node)));
		}
    break;

  case 525:

/* Line 678 of lalr1.cc  */
#line 4785 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new TextTest(LOC ((yyloc)));
		}
    break;

  case 526:

/* Line 678 of lalr1.cc  */
#line 4795 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new CommentTest(LOC ((yyloc)));
		}
    break;

  case 527:

/* Line 678 of lalr1.cc  */
#line 4805 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new PITest(LOC ((yyloc)), "");
		}
    break;

  case 528:

/* Line 678 of lalr1.cc  */
#line 4809 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new PITest(LOC ((yyloc)), SYMTAB ((yysemantic_stack_[(4) - (3)].sval)));
		}
    break;

  case 529:

/* Line 678 of lalr1.cc  */
#line 4813 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new PITest(LOC ((yyloc)), SYMTAB ((yysemantic_stack_[(4) - (3)].sval)));
		}
    break;

  case 530:

/* Line 678 of lalr1.cc  */
#line 4823 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new AttributeTest(LOC ((yyloc)),
								NULL,
								NULL);
		}
    break;

  case 531:

/* Line 678 of lalr1.cc  */
#line 4829 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new AttributeTest(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(4) - (3)].expr)),
								NULL);
		}
    break;

  case 532:

/* Line 678 of lalr1.cc  */
#line 4835 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new AttributeTest(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(6) - (3)].expr)),
								dynamic_cast<TypeName*>((yysemantic_stack_[(6) - (5)].node)));
		}
    break;

  case 533:

/* Line 678 of lalr1.cc  */
#line 4841 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new AttributeTest(LOC ((yyloc)),
								NULL,
								NULL);
		}
    break;

  case 534:

/* Line 678 of lalr1.cc  */
#line 4847 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new AttributeTest(LOC ((yyloc)),
								NULL,
								dynamic_cast<TypeName*>((yysemantic_stack_[(6) - (5)].node)));
		}
    break;

  case 535:

/* Line 678 of lalr1.cc  */
#line 4859 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SchemaAttributeTest(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(3) - (2)].expr)));
		}
    break;

  case 536:

/* Line 678 of lalr1.cc  */
#line 4870 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ElementTest(LOC ((yyloc)),
                           NULL,
                           NULL,
                           true);
		}
    break;

  case 537:

/* Line 678 of lalr1.cc  */
#line 4877 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ElementTest(LOC ((yyloc)),
                           static_cast<QName*>((yysemantic_stack_[(4) - (3)].expr)),
                           NULL,
                           true);
		}
    break;

  case 538:

/* Line 678 of lalr1.cc  */
#line 4884 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ElementTest(LOC ((yyloc)),
                           static_cast<QName*>((yysemantic_stack_[(6) - (3)].expr)),
                           dynamic_cast<TypeName*>((yysemantic_stack_[(6) - (5)].node)),
                           false);
		}
    break;

  case 539:

/* Line 678 of lalr1.cc  */
#line 4891 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ElementTest(LOC ((yyloc)),
                           static_cast<QName*>((yysemantic_stack_[(6) - (3)].expr)),
                           dynamic_cast<TypeName*>((yysemantic_stack_[(6) - (5)].node)),
                           true);
		}
    break;

  case 540:

/* Line 678 of lalr1.cc  */
#line 4898 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ElementTest(LOC ((yyloc)),
									NULL,
									NULL,
									true);
		}
    break;

  case 541:

/* Line 678 of lalr1.cc  */
#line 4905 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ElementTest(LOC ((yyloc)),
									NULL,
									dynamic_cast<TypeName*>((yysemantic_stack_[(6) - (5)].node)),
									false);
		}
    break;

  case 542:

/* Line 678 of lalr1.cc  */
#line 4912 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new ElementTest(LOC ((yyloc)),
									NULL,
									dynamic_cast<TypeName*>((yysemantic_stack_[(6) - (5)].node)),
									true);
		}
    break;

  case 543:

/* Line 678 of lalr1.cc  */
#line 4925 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new SchemaElementTest(LOC ((yyloc)),
									static_cast<QName*>((yysemantic_stack_[(4) - (3)].expr)));
		}
    break;

  case 544:

/* Line 678 of lalr1.cc  */
#line 4946 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new TypeName(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(1) - (1)].expr)));
		}
    break;

  case 545:

/* Line 678 of lalr1.cc  */
#line 4953 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = new TypeName(LOC ((yyloc)),
								static_cast<QName*>((yysemantic_stack_[(2) - (1)].expr)),
								true);
		}
    break;

  case 546:

/* Line 678 of lalr1.cc  */
#line 4973 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.expr) = new StringLiteral(LOC ((yyloc)), SYMTAB ((yysemantic_stack_[(1) - (1)].sval)));
		}
    break;

  case 547:

/* Line 678 of lalr1.cc  */
#line 5013 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new RevalidationDecl (LOC ((yyloc)), StaticContextConsts::strict_validation);
		}
    break;

  case 548:

/* Line 678 of lalr1.cc  */
#line 5017 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new RevalidationDecl (LOC ((yyloc)), StaticContextConsts::lax_validation);
    }
    break;

  case 549:

/* Line 678 of lalr1.cc  */
#line 5021 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new RevalidationDecl (LOC ((yyloc)), StaticContextConsts::skip_validation);
    }
    break;

  case 550:

/* Line 678 of lalr1.cc  */
#line 5030 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new InsertExpr(
                  LOC ((yyloc)),
                  store::UpdateConsts::INTO, (yysemantic_stack_[(5) - (3)].expr), (yysemantic_stack_[(5) - (5)].expr));
		}
    break;

  case 551:

/* Line 678 of lalr1.cc  */
#line 5036 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new InsertExpr(
                  LOC ((yyloc)),
                  store::UpdateConsts::AS_FIRST_INTO, (yysemantic_stack_[(7) - (3)].expr), (yysemantic_stack_[(7) - (7)].expr));
		}
    break;

  case 552:

/* Line 678 of lalr1.cc  */
#line 5042 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new InsertExpr(
                  LOC ((yyloc)),
                  store::UpdateConsts::AS_LAST_INTO, (yysemantic_stack_[(7) - (3)].expr), (yysemantic_stack_[(7) - (7)].expr));
		}
    break;

  case 553:

/* Line 678 of lalr1.cc  */
#line 5048 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new InsertExpr(
                  LOC ((yyloc)),
                  store::UpdateConsts::AFTER, (yysemantic_stack_[(5) - (3)].expr), (yysemantic_stack_[(5) - (5)].expr));
		}
    break;

  case 554:

/* Line 678 of lalr1.cc  */
#line 5054 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new InsertExpr(
                  LOC ((yyloc)),
                  store::UpdateConsts::BEFORE, (yysemantic_stack_[(5) - (3)].expr), (yysemantic_stack_[(5) - (5)].expr));
		}
    break;

  case 555:

/* Line 678 of lalr1.cc  */
#line 5061 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new InsertExpr(
                  LOC ((yyloc)),
                  store::UpdateConsts::INTO, (yysemantic_stack_[(5) - (3)].expr), (yysemantic_stack_[(5) - (5)].expr));
		}
    break;

  case 556:

/* Line 678 of lalr1.cc  */
#line 5067 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new InsertExpr(
                  LOC ((yyloc)),
                  store::UpdateConsts::AS_FIRST_INTO, (yysemantic_stack_[(7) - (3)].expr), (yysemantic_stack_[(7) - (7)].expr));
		}
    break;

  case 557:

/* Line 678 of lalr1.cc  */
#line 5073 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new InsertExpr(
                  LOC ((yyloc)),
                  store::UpdateConsts::AS_LAST_INTO, (yysemantic_stack_[(7) - (3)].expr), (yysemantic_stack_[(7) - (7)].expr));
		}
    break;

  case 558:

/* Line 678 of lalr1.cc  */
#line 5079 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new InsertExpr(
                  LOC ((yyloc)),
                  store::UpdateConsts::AFTER, (yysemantic_stack_[(5) - (3)].expr), (yysemantic_stack_[(5) - (5)].expr));
		}
    break;

  case 559:

/* Line 678 of lalr1.cc  */
#line 5085 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new InsertExpr(
                  LOC ((yyloc)),
                  store::UpdateConsts::BEFORE, (yysemantic_stack_[(5) - (3)].expr), (yysemantic_stack_[(5) - (5)].expr));
		}
    break;

  case 560:

/* Line 678 of lalr1.cc  */
#line 5097 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new DeleteExpr( LOC ((yyloc)), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 561:

/* Line 678 of lalr1.cc  */
#line 5102 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new DeleteExpr( LOC ((yyloc)), (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 562:

/* Line 678 of lalr1.cc  */
#line 5112 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new ReplaceExpr(
                  LOC ((yyloc)),
                  store::UpdateConsts::NODE, (yysemantic_stack_[(5) - (3)].expr), (yysemantic_stack_[(5) - (5)].expr));
		}
    break;

  case 563:

/* Line 678 of lalr1.cc  */
#line 5118 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new ReplaceExpr(
                  LOC ((yyloc)),
                  store::UpdateConsts::VALUE_OF_NODE, (yysemantic_stack_[(7) - (5)].expr), (yysemantic_stack_[(7) - (7)].expr));
		}
    break;

  case 564:

/* Line 678 of lalr1.cc  */
#line 5130 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new RenameExpr(
                  LOC ((yyloc)), (yysemantic_stack_[(5) - (3)].expr), (yysemantic_stack_[(5) - (5)].expr));
		}
    break;

  case 565:

/* Line 678 of lalr1.cc  */
#line 5156 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      CopyVarList* lList = dynamic_cast<CopyVarList*>((yysemantic_stack_[(7) - (3)].expr));
      (yyval.expr) = new TransformExpr(LOC((yyloc)), lList, (yysemantic_stack_[(7) - (5)].expr), (yysemantic_stack_[(7) - (7)].expr));
		}
    break;

  case 566:

/* Line 678 of lalr1.cc  */
#line 5167 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       CopyVarList* lList = new CopyVarList(LOC((yyloc)));
       lList->push_back (dynamic_cast<VarBinding*> ((yysemantic_stack_[(1) - (1)].expr)));
       (yyval.expr) = lList;
		}
    break;

  case 567:

/* Line 678 of lalr1.cc  */
#line 5173 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       CopyVarList* lList = dynamic_cast<CopyVarList*>((yysemantic_stack_[(4) - (1)].expr));
       VarBinding* lBinding = dynamic_cast<VarBinding*>((yysemantic_stack_[(4) - (4)].expr));
       lList->push_back(lBinding);
       (yyval.expr) = lList;
		}
    break;

  case 568:

/* Line 678 of lalr1.cc  */
#line 5186 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new VarBinding(LOC((yyloc)), static_cast<QName*>((yysemantic_stack_[(3) - (1)].expr))->get_qname(), (yysemantic_stack_[(3) - (3)].expr));
       delete (yysemantic_stack_[(3) - (1)].expr);
    }
    break;

  case 569:

/* Line 678 of lalr1.cc  */
#line 5202 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new TryExpr(LOC ((yyloc)),
								       (yysemantic_stack_[(5) - (3)].expr), (yysemantic_stack_[(5) - (5)].expr));
    }
    break;

  case 570:

/* Line 678 of lalr1.cc  */
#line 5209 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       CatchListExpr* aCatchListExpr = new CatchListExpr(LOC ((yyloc)));
       aCatchListExpr->push_back(static_cast<CatchExpr*>((yysemantic_stack_[(1) - (1)].expr)));
       (yyval.expr) = aCatchListExpr;
    }
    break;

  case 571:

/* Line 678 of lalr1.cc  */
#line 5215 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      CatchListExpr* aCatchListExpr = dynamic_cast<CatchListExpr*>((yysemantic_stack_[(2) - (1)].expr));
      if (aCatchListExpr) {
        aCatchListExpr->push_back(static_cast<CatchExpr*>((yysemantic_stack_[(2) - (2)].expr)));
      }
      (yyval.expr) = (yysemantic_stack_[(2) - (1)].expr);
    }
    break;

  case 572:

/* Line 678 of lalr1.cc  */
#line 5226 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new CatchExpr(LOC ((yyloc)),
                          *(yysemantic_stack_[(3) - (2)].name_test_list),
                          (yysemantic_stack_[(3) - (3)].expr));
       delete (yysemantic_stack_[(3) - (2)].name_test_list);
    }
    break;

  case 573:

/* Line 678 of lalr1.cc  */
#line 5233 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new CatchExpr(LOC ((yyloc)),
                          *(yysemantic_stack_[(7) - (2)].name_test_list),
                          static_cast<QName*>((yysemantic_stack_[(7) - (5)].expr))->get_qname(),
                          (yysemantic_stack_[(7) - (7)].expr));
       delete (yysemantic_stack_[(7) - (5)].expr);
       delete (yysemantic_stack_[(7) - (2)].name_test_list);
    }
    break;

  case 574:

/* Line 678 of lalr1.cc  */
#line 5243 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new CatchExpr(LOC ((yyloc)),
                          *(yysemantic_stack_[(10) - (2)].name_test_list),
                          static_cast<QName*>((yysemantic_stack_[(10) - (5)].expr))->get_qname(),
                          static_cast<QName*>((yysemantic_stack_[(10) - (8)].expr))->get_qname(),
                          (yysemantic_stack_[(10) - (10)].expr));
       delete (yysemantic_stack_[(10) - (5)].expr);
       delete (yysemantic_stack_[(10) - (8)].expr);
       delete (yysemantic_stack_[(10) - (2)].name_test_list);
    }
    break;

  case 575:

/* Line 678 of lalr1.cc  */
#line 5254 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new CatchExpr(LOC ((yyloc)),
                          *(yysemantic_stack_[(13) - (2)].name_test_list),
                          static_cast<QName*>((yysemantic_stack_[(13) - (5)].expr))->get_qname(),
                          static_cast<QName*>((yysemantic_stack_[(13) - (8)].expr))->get_qname(),
                          static_cast<QName*>((yysemantic_stack_[(13) - (11)].expr))->get_qname(),
                          (yysemantic_stack_[(13) - (13)].expr));
       delete (yysemantic_stack_[(13) - (5)].expr);
       delete (yysemantic_stack_[(13) - (8)].expr);
       delete (yysemantic_stack_[(13) - (11)].expr);
       delete (yysemantic_stack_[(13) - (2)].name_test_list);
    }
    break;

  case 576:

/* Line 678 of lalr1.cc  */
#line 5270 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      CatchExpr::NameTestList *name_test_list = new CatchExpr::NameTestList;
      name_test_list->push_back (static_cast<NameTest *> ((yysemantic_stack_[(1) - (1)].node)));
      (yyval.name_test_list) = name_test_list;
    }
    break;

  case 577:

/* Line 678 of lalr1.cc  */
#line 5276 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      CatchExpr::NameTestList *name_test_list =
        static_cast<CatchExpr::NameTestList *> ((yysemantic_stack_[(3) - (1)].name_test_list));
      name_test_list->push_back (static_cast<NameTest *> ((yysemantic_stack_[(3) - (3)].node)));
      (yyval.name_test_list) = name_test_list;
    }
    break;

  case 580:

/* Line 678 of lalr1.cc  */
#line 5296 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      std::auto_ptr<QName> lQName(static_cast<QName*>((yysemantic_stack_[(1) - (1)].expr)));
      std::string tmp = lQName->get_qname();
      if (tmp.find (':') != std::string::npos) {
        error((yylocation_stack_[(1) - (1)]), "A NCName is expected, found a QName");
        YYERROR;
      }
      (yyval.sval) = SYMTAB_PUT(tmp.c_str());
    }
    break;

  case 581:

/* Line 678 of lalr1.cc  */
#line 5314 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = new QName(LOC ((yyloc)),SYMTAB ((yysemantic_stack_[(1) - (1)].sval)));
    }
    break;

  case 582:

/* Line 678 of lalr1.cc  */
#line 5318 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = new QName(LOC ((yyloc)),SYMTAB ((yysemantic_stack_[(1) - (1)].sval)));
    }
    break;

  case 583:

/* Line 678 of lalr1.cc  */
#line 5331 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.expr) = new EvalExpr (LOC ((yyloc)),
                          dynamic_cast<VarGetsDeclList *> ((yysemantic_stack_[(7) - (3)].node)),
                          (yysemantic_stack_[(7) - (6)].expr));
    }
    break;

  case 584:

/* Line 678 of lalr1.cc  */
#line 5337 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.expr) = new EvalExpr (LOC ((yyloc)), new VarGetsDeclList (LOC ((yyloc))), (yysemantic_stack_[(4) - (3)].expr));
    }
    break;

  case 585:

/* Line 678 of lalr1.cc  */
#line 5344 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("xquery"); }
    break;

  case 586:

/* Line 678 of lalr1.cc  */
#line 5345 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("empty"); }
    break;

  case 587:

/* Line 678 of lalr1.cc  */
#line 5346 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("attribute"); }
    break;

  case 588:

/* Line 678 of lalr1.cc  */
#line 5347 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("comment"); }
    break;

  case 589:

/* Line 678 of lalr1.cc  */
#line 5348 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("document-node"); }
    break;

  case 590:

/* Line 678 of lalr1.cc  */
#line 5349 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("element"); }
    break;

  case 591:

/* Line 678 of lalr1.cc  */
#line 5350 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("item"); }
    break;

  case 592:

/* Line 678 of lalr1.cc  */
#line 5351 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("if"); }
    break;

  case 593:

/* Line 678 of lalr1.cc  */
#line 5352 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("node"); }
    break;

  case 594:

/* Line 678 of lalr1.cc  */
#line 5353 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("processing-instruction"); }
    break;

  case 595:

/* Line 678 of lalr1.cc  */
#line 5354 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("schema-attribute"); }
    break;

  case 596:

/* Line 678 of lalr1.cc  */
#line 5355 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("schema-element"); }
    break;

  case 597:

/* Line 678 of lalr1.cc  */
#line 5356 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("text"); }
    break;

  case 598:

/* Line 678 of lalr1.cc  */
#line 5357 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("typeswitch"); }
    break;

  case 599:

/* Line 678 of lalr1.cc  */
#line 5358 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("empty-sequence"); }
    break;

  case 600:

/* Line 678 of lalr1.cc  */
#line 5359 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("boundary-space"); }
    break;

  case 601:

/* Line 678 of lalr1.cc  */
#line 5360 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("ft-option"); }
    break;

  case 602:

/* Line 678 of lalr1.cc  */
#line 5361 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("base-uri"); }
    break;

  case 603:

/* Line 678 of lalr1.cc  */
#line 5362 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("lax"); }
    break;

  case 604:

/* Line 678 of lalr1.cc  */
#line 5363 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("strict"); }
    break;

  case 605:

/* Line 678 of lalr1.cc  */
#line 5364 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("idiv"); }
    break;

  case 606:

/* Line 678 of lalr1.cc  */
#line 5365 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("document"); }
    break;

  case 607:

/* Line 678 of lalr1.cc  */
#line 5366 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("not"); }
    break;

  case 608:

/* Line 678 of lalr1.cc  */
#line 5367 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("sensitive"); }
    break;

  case 609:

/* Line 678 of lalr1.cc  */
#line 5368 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("insensitive"); }
    break;

  case 610:

/* Line 678 of lalr1.cc  */
#line 5369 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("diacritics"); }
    break;

  case 611:

/* Line 678 of lalr1.cc  */
#line 5370 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("without"); }
    break;

  case 612:

/* Line 678 of lalr1.cc  */
#line 5371 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("stemming"); }
    break;

  case 613:

/* Line 678 of lalr1.cc  */
#line 5372 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("thesaurus"); }
    break;

  case 614:

/* Line 678 of lalr1.cc  */
#line 5373 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("stop"); }
    break;

  case 615:

/* Line 678 of lalr1.cc  */
#line 5374 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("wildcards"); }
    break;

  case 616:

/* Line 678 of lalr1.cc  */
#line 5375 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("entire"); }
    break;

  case 617:

/* Line 678 of lalr1.cc  */
#line 5376 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("content"); }
    break;

  case 618:

/* Line 678 of lalr1.cc  */
#line 5377 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("word"); }
    break;

  case 619:

/* Line 678 of lalr1.cc  */
#line 5378 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("start"); }
    break;

  case 620:

/* Line 678 of lalr1.cc  */
#line 5379 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("end"); }
    break;

  case 621:

/* Line 678 of lalr1.cc  */
#line 5380 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("most"); }
    break;

  case 622:

/* Line 678 of lalr1.cc  */
#line 5381 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("skip"); }
    break;

  case 623:

/* Line 678 of lalr1.cc  */
#line 5382 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("copy"); }
    break;

  case 624:

/* Line 678 of lalr1.cc  */
#line 5383 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("value"); }
    break;

  case 625:

/* Line 678 of lalr1.cc  */
#line 5384 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("eq"); }
    break;

  case 626:

/* Line 678 of lalr1.cc  */
#line 5385 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("ne"); }
    break;

  case 627:

/* Line 678 of lalr1.cc  */
#line 5386 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("lt"); }
    break;

  case 628:

/* Line 678 of lalr1.cc  */
#line 5387 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("le"); }
    break;

  case 629:

/* Line 678 of lalr1.cc  */
#line 5388 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("gt"); }
    break;

  case 630:

/* Line 678 of lalr1.cc  */
#line 5389 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("ge"); }
    break;

  case 631:

/* Line 678 of lalr1.cc  */
#line 5390 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("at"); }
    break;

  case 632:

/* Line 678 of lalr1.cc  */
#line 5391 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("context"); }
    break;

  case 633:

/* Line 678 of lalr1.cc  */
#line 5392 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("variable"); }
    break;

  case 634:

/* Line 678 of lalr1.cc  */
#line 5393 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("return"); }
    break;

  case 635:

/* Line 678 of lalr1.cc  */
#line 5394 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("for"); }
    break;

  case 636:

/* Line 678 of lalr1.cc  */
#line 5395 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("outer"); }
    break;

  case 637:

/* Line 678 of lalr1.cc  */
#line 5396 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("sliding"); }
    break;

  case 638:

/* Line 678 of lalr1.cc  */
#line 5397 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("tumbling"); }
    break;

  case 639:

/* Line 678 of lalr1.cc  */
#line 5398 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("previous"); }
    break;

  case 640:

/* Line 678 of lalr1.cc  */
#line 5399 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("next"); }
    break;

  case 641:

/* Line 678 of lalr1.cc  */
#line 5400 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("only"); }
    break;

  case 642:

/* Line 678 of lalr1.cc  */
#line 5401 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("when"); }
    break;

  case 643:

/* Line 678 of lalr1.cc  */
#line 5402 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("count"); }
    break;

  case 644:

/* Line 678 of lalr1.cc  */
#line 5403 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("in"); }
    break;

  case 645:

/* Line 678 of lalr1.cc  */
#line 5404 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("let"); }
    break;

  case 646:

/* Line 678 of lalr1.cc  */
#line 5405 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("where"); }
    break;

  case 647:

/* Line 678 of lalr1.cc  */
#line 5406 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("by"); }
    break;

  case 648:

/* Line 678 of lalr1.cc  */
#line 5407 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("group"); }
    break;

  case 649:

/* Line 678 of lalr1.cc  */
#line 5408 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("order"); }
    break;

  case 650:

/* Line 678 of lalr1.cc  */
#line 5409 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("stable"); }
    break;

  case 651:

/* Line 678 of lalr1.cc  */
#line 5410 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("ascending"); }
    break;

  case 652:

/* Line 678 of lalr1.cc  */
#line 5411 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("descending"); }
    break;

  case 653:

/* Line 678 of lalr1.cc  */
#line 5412 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("greatest"); }
    break;

  case 654:

/* Line 678 of lalr1.cc  */
#line 5413 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("least"); }
    break;

  case 655:

/* Line 678 of lalr1.cc  */
#line 5414 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("collation"); }
    break;

  case 656:

/* Line 678 of lalr1.cc  */
#line 5415 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("some"); }
    break;

  case 657:

/* Line 678 of lalr1.cc  */
#line 5416 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("every"); }
    break;

  case 658:

/* Line 678 of lalr1.cc  */
#line 5417 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("satisfies"); }
    break;

  case 659:

/* Line 678 of lalr1.cc  */
#line 5418 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("case"); }
    break;

  case 660:

/* Line 678 of lalr1.cc  */
#line 5419 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("as"); }
    break;

  case 661:

/* Line 678 of lalr1.cc  */
#line 5420 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("then"); }
    break;

  case 662:

/* Line 678 of lalr1.cc  */
#line 5421 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("else"); }
    break;

  case 663:

/* Line 678 of lalr1.cc  */
#line 5422 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("or"); }
    break;

  case 664:

/* Line 678 of lalr1.cc  */
#line 5423 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("and"); }
    break;

  case 665:

/* Line 678 of lalr1.cc  */
#line 5424 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("instance"); }
    break;

  case 666:

/* Line 678 of lalr1.cc  */
#line 5425 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("of"); }
    break;

  case 667:

/* Line 678 of lalr1.cc  */
#line 5426 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("castable"); }
    break;

  case 668:

/* Line 678 of lalr1.cc  */
#line 5427 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("to"); }
    break;

  case 669:

/* Line 678 of lalr1.cc  */
#line 5428 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("div"); }
    break;

  case 670:

/* Line 678 of lalr1.cc  */
#line 5429 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("mod"); }
    break;

  case 671:

/* Line 678 of lalr1.cc  */
#line 5430 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("union"); }
    break;

  case 672:

/* Line 678 of lalr1.cc  */
#line 5431 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("intersect"); }
    break;

  case 673:

/* Line 678 of lalr1.cc  */
#line 5432 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("except"); }
    break;

  case 674:

/* Line 678 of lalr1.cc  */
#line 5433 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("validate"); }
    break;

  case 675:

/* Line 678 of lalr1.cc  */
#line 5434 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("cast"); }
    break;

  case 676:

/* Line 678 of lalr1.cc  */
#line 5435 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("treat"); }
    break;

  case 677:

/* Line 678 of lalr1.cc  */
#line 5436 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("is"); }
    break;

  case 678:

/* Line 678 of lalr1.cc  */
#line 5437 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("preserve"); }
    break;

  case 679:

/* Line 678 of lalr1.cc  */
#line 5438 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("strip"); }
    break;

  case 680:

/* Line 678 of lalr1.cc  */
#line 5439 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("namespace"); }
    break;

  case 681:

/* Line 678 of lalr1.cc  */
#line 5440 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("external"); }
    break;

  case 682:

/* Line 678 of lalr1.cc  */
#line 5441 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("encoding"); }
    break;

  case 683:

/* Line 678 of lalr1.cc  */
#line 5442 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("no-preserve"); }
    break;

  case 684:

/* Line 678 of lalr1.cc  */
#line 5443 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("inherit"); }
    break;

  case 685:

/* Line 678 of lalr1.cc  */
#line 5444 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("no-inherit"); }
    break;

  case 686:

/* Line 678 of lalr1.cc  */
#line 5445 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("declare"); }
    break;

  case 687:

/* Line 678 of lalr1.cc  */
#line 5446 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("construction"); }
    break;

  case 688:

/* Line 678 of lalr1.cc  */
#line 5447 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("ordering"); }
    break;

  case 689:

/* Line 678 of lalr1.cc  */
#line 5448 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("default"); }
    break;

  case 690:

/* Line 678 of lalr1.cc  */
#line 5449 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("copy-namespaces"); }
    break;

  case 691:

/* Line 678 of lalr1.cc  */
#line 5450 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("option"); }
    break;

  case 692:

/* Line 678 of lalr1.cc  */
#line 5451 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("version"); }
    break;

  case 693:

/* Line 678 of lalr1.cc  */
#line 5452 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("import"); }
    break;

  case 694:

/* Line 678 of lalr1.cc  */
#line 5453 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("schema"); }
    break;

  case 695:

/* Line 678 of lalr1.cc  */
#line 5454 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("module"); }
    break;

  case 696:

/* Line 678 of lalr1.cc  */
#line 5455 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("function"); }
    break;

  case 697:

/* Line 678 of lalr1.cc  */
#line 5456 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("score"); }
    break;

  case 698:

/* Line 678 of lalr1.cc  */
#line 5457 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("ftcontains"); }
    break;

  case 699:

/* Line 678 of lalr1.cc  */
#line 5458 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("weight"); }
    break;

  case 700:

/* Line 678 of lalr1.cc  */
#line 5459 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("window"); }
    break;

  case 701:

/* Line 678 of lalr1.cc  */
#line 5460 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("distance"); }
    break;

  case 702:

/* Line 678 of lalr1.cc  */
#line 5461 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("occurs"); }
    break;

  case 703:

/* Line 678 of lalr1.cc  */
#line 5462 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("times"); }
    break;

  case 704:

/* Line 678 of lalr1.cc  */
#line 5463 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("same"); }
    break;

  case 705:

/* Line 678 of lalr1.cc  */
#line 5464 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("different"); }
    break;

  case 706:

/* Line 678 of lalr1.cc  */
#line 5465 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("lowercase"); }
    break;

  case 707:

/* Line 678 of lalr1.cc  */
#line 5466 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("uppercase"); }
    break;

  case 708:

/* Line 678 of lalr1.cc  */
#line 5467 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("relationship"); }
    break;

  case 709:

/* Line 678 of lalr1.cc  */
#line 5468 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("levels"); }
    break;

  case 710:

/* Line 678 of lalr1.cc  */
#line 5469 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("language"); }
    break;

  case 711:

/* Line 678 of lalr1.cc  */
#line 5470 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("any"); }
    break;

  case 712:

/* Line 678 of lalr1.cc  */
#line 5471 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("all"); }
    break;

  case 713:

/* Line 678 of lalr1.cc  */
#line 5472 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("phrase"); }
    break;

  case 714:

/* Line 678 of lalr1.cc  */
#line 5473 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("exactly"); }
    break;

  case 715:

/* Line 678 of lalr1.cc  */
#line 5474 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("from"); }
    break;

  case 716:

/* Line 678 of lalr1.cc  */
#line 5475 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("words"); }
    break;

  case 717:

/* Line 678 of lalr1.cc  */
#line 5476 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("sentences"); }
    break;

  case 718:

/* Line 678 of lalr1.cc  */
#line 5477 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("sentence"); }
    break;

  case 719:

/* Line 678 of lalr1.cc  */
#line 5478 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("paragraph"); }
    break;

  case 720:

/* Line 678 of lalr1.cc  */
#line 5479 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("replace"); }
    break;

  case 721:

/* Line 678 of lalr1.cc  */
#line 5480 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("modify"); }
    break;

  case 722:

/* Line 678 of lalr1.cc  */
#line 5481 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("first"); }
    break;

  case 723:

/* Line 678 of lalr1.cc  */
#line 5482 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("insert"); }
    break;

  case 724:

/* Line 678 of lalr1.cc  */
#line 5483 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("before"); }
    break;

  case 725:

/* Line 678 of lalr1.cc  */
#line 5484 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("after"); }
    break;

  case 726:

/* Line 678 of lalr1.cc  */
#line 5485 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("revalidation"); }
    break;

  case 727:

/* Line 678 of lalr1.cc  */
#line 5486 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("with"); }
    break;

  case 728:

/* Line 678 of lalr1.cc  */
#line 5487 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("nodes"); }
    break;

  case 729:

/* Line 678 of lalr1.cc  */
#line 5488 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("rename"); }
    break;

  case 730:

/* Line 678 of lalr1.cc  */
#line 5489 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("last"); }
    break;

  case 731:

/* Line 678 of lalr1.cc  */
#line 5490 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("delete"); }
    break;

  case 732:

/* Line 678 of lalr1.cc  */
#line 5491 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("into"); }
    break;

  case 733:

/* Line 678 of lalr1.cc  */
#line 5492 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("simple"); }
    break;

  case 734:

/* Line 678 of lalr1.cc  */
#line 5493 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("sequential"); }
    break;

  case 735:

/* Line 678 of lalr1.cc  */
#line 5494 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("updating"); }
    break;

  case 736:

/* Line 678 of lalr1.cc  */
#line 5495 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("deterministic"); }
    break;

  case 737:

/* Line 678 of lalr1.cc  */
#line 5496 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("nondeterministic"); }
    break;

  case 738:

/* Line 678 of lalr1.cc  */
#line 5497 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("ordered"); }
    break;

  case 739:

/* Line 678 of lalr1.cc  */
#line 5498 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("unordered"); }
    break;

  case 740:

/* Line 678 of lalr1.cc  */
#line 5499 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("returning"); }
    break;

  case 741:

/* Line 678 of lalr1.cc  */
#line 5500 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("block"); }
    break;

  case 742:

/* Line 678 of lalr1.cc  */
#line 5501 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("exit"); }
    break;

  case 743:

/* Line 678 of lalr1.cc  */
#line 5502 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("loop"); }
    break;

  case 744:

/* Line 678 of lalr1.cc  */
#line 5503 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("while"); }
    break;

  case 745:

/* Line 678 of lalr1.cc  */
#line 5504 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("break"); }
    break;

  case 746:

/* Line 678 of lalr1.cc  */
#line 5505 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("continue"); }
    break;

  case 747:

/* Line 678 of lalr1.cc  */
#line 5506 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("try"); }
    break;

  case 748:

/* Line 678 of lalr1.cc  */
#line 5507 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("catch"); }
    break;

  case 749:

/* Line 678 of lalr1.cc  */
#line 5508 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("eval"); }
    break;

  case 750:

/* Line 678 of lalr1.cc  */
#line 5509 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("using"); }
    break;

  case 751:

/* Line 678 of lalr1.cc  */
#line 5510 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("set"); }
    break;

  case 752:

/* Line 678 of lalr1.cc  */
#line 5511 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("index"); }
    break;

  case 753:

/* Line 678 of lalr1.cc  */
#line 5512 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("unique"); }
    break;

  case 754:

/* Line 678 of lalr1.cc  */
#line 5513 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("non"); }
    break;

  case 755:

/* Line 678 of lalr1.cc  */
#line 5514 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("on"); }
    break;

  case 756:

/* Line 678 of lalr1.cc  */
#line 5515 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("range"); }
    break;

  case 757:

/* Line 678 of lalr1.cc  */
#line 5516 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("equality"); }
    break;

  case 758:

/* Line 678 of lalr1.cc  */
#line 5517 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("manually"); }
    break;

  case 759:

/* Line 678 of lalr1.cc  */
#line 5518 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("automatically"); }
    break;

  case 760:

/* Line 678 of lalr1.cc  */
#line 5519 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("maintained"); }
    break;

  case 761:

/* Line 678 of lalr1.cc  */
#line 5520 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("decimal-format"); }
    break;

  case 762:

/* Line 678 of lalr1.cc  */
#line 5521 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("decimal-separator"); }
    break;

  case 763:

/* Line 678 of lalr1.cc  */
#line 5522 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("grouping-separator"); }
    break;

  case 764:

/* Line 678 of lalr1.cc  */
#line 5523 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("infinity"); }
    break;

  case 765:

/* Line 678 of lalr1.cc  */
#line 5524 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("minus-sign"); }
    break;

  case 766:

/* Line 678 of lalr1.cc  */
#line 5525 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("NaN"); }
    break;

  case 767:

/* Line 678 of lalr1.cc  */
#line 5526 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("percent"); }
    break;

  case 768:

/* Line 678 of lalr1.cc  */
#line 5527 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("per-mille"); }
    break;

  case 769:

/* Line 678 of lalr1.cc  */
#line 5528 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("zero-digit"); }
    break;

  case 770:

/* Line 678 of lalr1.cc  */
#line 5529 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("digit"); }
    break;

  case 771:

/* Line 678 of lalr1.cc  */
#line 5530 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("pattern-separator"); }
    break;

  case 772:

/* Line 678 of lalr1.cc  */
#line 5531 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("collection"); }
    break;

  case 773:

/* Line 678 of lalr1.cc  */
#line 5532 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("const"); }
    break;

  case 774:

/* Line 678 of lalr1.cc  */
#line 5533 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("append-only"); }
    break;

  case 775:

/* Line 678 of lalr1.cc  */
#line 5534 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("queue"); }
    break;

  case 776:

/* Line 678 of lalr1.cc  */
#line 5535 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("mutable"); }
    break;

  case 777:

/* Line 678 of lalr1.cc  */
#line 5536 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("read-only"); }
    break;

  case 778:

/* Line 678 of lalr1.cc  */
#line 5537 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("integrity"); }
    break;

  case 779:

/* Line 678 of lalr1.cc  */
#line 5538 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("constraint"); }
    break;

  case 780:

/* Line 678 of lalr1.cc  */
#line 5539 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("check"); }
    break;

  case 781:

/* Line 678 of lalr1.cc  */
#line 5540 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("key"); }
    break;

  case 782:

/* Line 678 of lalr1.cc  */
#line 5541 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("foreach"); }
    break;

  case 783:

/* Line 678 of lalr1.cc  */
#line 5542 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("foreign"); }
    break;

  case 784:

/* Line 678 of lalr1.cc  */
#line 5543 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    { (yyval.sval) = SYMTAB_PUT ("keys"); }
    break;

  case 785:

/* Line 678 of lalr1.cc  */
#line 5559 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new FTSelection (LOC ((yyloc)), static_cast<FTOr *> ((yysemantic_stack_[(1) - (1)].node)), NULL, NULL);
		}
    break;

  case 786:

/* Line 678 of lalr1.cc  */
#line 5563 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new FTSelection (LOC ((yyloc)), static_cast<FTOr *> ((yysemantic_stack_[(2) - (1)].node)), static_cast<FTMatchOptionProximityList *> ((yysemantic_stack_[(2) - (2)].node)), NULL);
		}
    break;

  case 787:

/* Line 678 of lalr1.cc  */
#line 5567 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new FTSelection (LOC ((yyloc)), static_cast<FTOr *> ((yysemantic_stack_[(3) - (1)].node)), NULL, static_cast<RangeExpr *> ((yysemantic_stack_[(3) - (3)].expr)));
		}
    break;

  case 788:

/* Line 678 of lalr1.cc  */
#line 5571 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new FTSelection (LOC ((yyloc)), static_cast<FTOr *> ((yysemantic_stack_[(4) - (1)].node)), static_cast<FTMatchOptionProximityList *> ((yysemantic_stack_[(4) - (2)].node)), static_cast<RangeExpr *> ((yysemantic_stack_[(4) - (4)].expr)));
		}
    break;

  case 789:

/* Line 678 of lalr1.cc  */
#line 5581 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 790:

/* Line 678 of lalr1.cc  */
#line 5584 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 791:

/* Line 678 of lalr1.cc  */
#line 5587 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 792:

/* Line 678 of lalr1.cc  */
#line 5590 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 793:

/* Line 678 of lalr1.cc  */
#line 5599 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 794:

/* Line 678 of lalr1.cc  */
#line 5602 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 795:

/* Line 678 of lalr1.cc  */
#line 5611 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 796:

/* Line 678 of lalr1.cc  */
#line 5614 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 797:

/* Line 678 of lalr1.cc  */
#line 5623 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 798:

/* Line 678 of lalr1.cc  */
#line 5626 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 799:

/* Line 678 of lalr1.cc  */
#line 5635 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 800:

/* Line 678 of lalr1.cc  */
#line 5638 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 801:

/* Line 678 of lalr1.cc  */
#line 5647 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 802:

/* Line 678 of lalr1.cc  */
#line 5650 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 803:

/* Line 678 of lalr1.cc  */
#line 5653 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 804:

/* Line 678 of lalr1.cc  */
#line 5662 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 805:

/* Line 678 of lalr1.cc  */
#line 5665 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 806:

/* Line 678 of lalr1.cc  */
#line 5674 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new FTWordsValue (LOC ((yyloc)), static_cast<StringLiteral *> ((yysemantic_stack_[(1) - (1)].expr)), NULL);
		}
    break;

  case 807:

/* Line 678 of lalr1.cc  */
#line 5678 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new FTWordsValue (LOC ((yyloc)), NULL, (yysemantic_stack_[(3) - (2)].expr));
		}
    break;

  case 808:

/* Line 678 of lalr1.cc  */
#line 5688 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 809:

/* Line 678 of lalr1.cc  */
#line 5691 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 810:

/* Line 678 of lalr1.cc  */
#line 5694 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 811:

/* Line 678 of lalr1.cc  */
#line 5697 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 812:

/* Line 678 of lalr1.cc  */
#line 5700 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 813:

/* Line 678 of lalr1.cc  */
#line 5709 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 814:

/* Line 678 of lalr1.cc  */
#line 5718 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 815:

/* Line 678 of lalr1.cc  */
#line 5722 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 816:

/* Line 678 of lalr1.cc  */
#line 5726 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 817:

/* Line 678 of lalr1.cc  */
#line 5730 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 818:

/* Line 678 of lalr1.cc  */
#line 5734 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 819:

/* Line 678 of lalr1.cc  */
#line 5738 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 820:

/* Line 678 of lalr1.cc  */
#line 5742 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
			(yyval.node) = (yysemantic_stack_[(1) - (1)].node);
		}
    break;

  case 821:

/* Line 678 of lalr1.cc  */
#line 5752 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 822:

/* Line 678 of lalr1.cc  */
#line 5755 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 823:

/* Line 678 of lalr1.cc  */
#line 5758 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 824:

/* Line 678 of lalr1.cc  */
#line 5761 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 825:

/* Line 678 of lalr1.cc  */
#line 5770 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 826:

/* Line 678 of lalr1.cc  */
#line 5773 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 827:

/* Line 678 of lalr1.cc  */
#line 5776 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 828:

/* Line 678 of lalr1.cc  */
#line 5779 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 829:

/* Line 678 of lalr1.cc  */
#line 5788 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 830:

/* Line 678 of lalr1.cc  */
#line 5791 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 831:

/* Line 678 of lalr1.cc  */
#line 5800 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 832:

/* Line 678 of lalr1.cc  */
#line 5803 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 833:

/* Line 678 of lalr1.cc  */
#line 5806 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 834:

/* Line 678 of lalr1.cc  */
#line 5809 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 835:

/* Line 678 of lalr1.cc  */
#line 5812 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 836:

/* Line 678 of lalr1.cc  */
#line 5815 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 837:

/* Line 678 of lalr1.cc  */
#line 5818 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 838:

/* Line 678 of lalr1.cc  */
#line 5827 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 839:

/* Line 678 of lalr1.cc  */
#line 5830 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 840:

/* Line 678 of lalr1.cc  */
#line 5839 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 841:

/* Line 678 of lalr1.cc  */
#line 5842 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 842:

/* Line 678 of lalr1.cc  */
#line 5845 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 843:

/* Line 678 of lalr1.cc  */
#line 5848 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 844:

/* Line 678 of lalr1.cc  */
#line 5857 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 845:

/* Line 678 of lalr1.cc  */
#line 5860 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 846:

/* Line 678 of lalr1.cc  */
#line 5863 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 847:

/* Line 678 of lalr1.cc  */
#line 5866 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 848:

/* Line 678 of lalr1.cc  */
#line 5869 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 849:

/* Line 678 of lalr1.cc  */
#line 5878 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 850:

/* Line 678 of lalr1.cc  */
#line 5881 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 851:

/* Line 678 of lalr1.cc  */
#line 5890 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 852:

/* Line 678 of lalr1.cc  */
#line 5893 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 853:

/* Line 678 of lalr1.cc  */
#line 5902 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 854:

/* Line 678 of lalr1.cc  */
#line 5905 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 855:

/* Line 678 of lalr1.cc  */
#line 5914 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 856:

/* Line 678 of lalr1.cc  */
#line 5917 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 857:

/* Line 678 of lalr1.cc  */
#line 5926 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 858:

/* Line 678 of lalr1.cc  */
#line 5935 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 859:

/* Line 678 of lalr1.cc  */
#line 5938 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 860:

/* Line 678 of lalr1.cc  */
#line 5947 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 861:

/* Line 678 of lalr1.cc  */
#line 5950 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 862:

/* Line 678 of lalr1.cc  */
#line 5953 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 863:

/* Line 678 of lalr1.cc  */
#line 5962 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 864:

/* Line 678 of lalr1.cc  */
#line 5965 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 865:

/* Line 678 of lalr1.cc  */
#line 5968 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 866:

/* Line 678 of lalr1.cc  */
#line 5971 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 867:

/* Line 678 of lalr1.cc  */
#line 5974 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 868:

/* Line 678 of lalr1.cc  */
#line 5983 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.node) = new FTRange (LOC ((yyloc)), FTRange::exactly, (yysemantic_stack_[(2) - (2)].expr));
		}
    break;

  case 869:

/* Line 678 of lalr1.cc  */
#line 5987 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.node) = new FTRange (LOC ((yyloc)), FTRange::at_least, (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 870:

/* Line 678 of lalr1.cc  */
#line 5991 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.node) = new FTRange (LOC ((yyloc)), FTRange::at_most, (yysemantic_stack_[(3) - (3)].expr));
		}
    break;

  case 871:

/* Line 678 of lalr1.cc  */
#line 5995 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
       (yyval.node) = new FTRange (LOC ((yyloc)), FTRange::from_to, (yysemantic_stack_[(4) - (2)].expr), (yysemantic_stack_[(4) - (4)].expr));
		}
    break;

  case 872:

/* Line 678 of lalr1.cc  */
#line 6005 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 873:

/* Line 678 of lalr1.cc  */
#line 6014 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new FTWindow (LOC ((yyloc)), static_cast<UnionExpr *> ((yysemantic_stack_[(3) - (2)].expr)), static_cast<FTUnit *> ((yysemantic_stack_[(3) - (3)].node)));
		}
    break;

  case 874:

/* Line 678 of lalr1.cc  */
#line 6024 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 875:

/* Line 678 of lalr1.cc  */
#line 6033 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 876:

/* Line 678 of lalr1.cc  */
#line 6036 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 877:

/* Line 678 of lalr1.cc  */
#line 6045 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 878:

/* Line 678 of lalr1.cc  */
#line 6048 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 879:

/* Line 678 of lalr1.cc  */
#line 6051 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 880:

/* Line 678 of lalr1.cc  */
#line 6060 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 881:

/* Line 678 of lalr1.cc  */
#line 6063 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
		}
    break;

  case 882:

/* Line 678 of lalr1.cc  */
#line 6072 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"
    {
      (yyval.node) = new FTIgnoreOption (LOC ((yyloc)), static_cast<UnionExpr *> ((yysemantic_stack_[(3) - (3)].expr)));
		}
    break;



/* Line 678 of lalr1.cc  */
#line 10142 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"
	default:
          break;
      }
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[0] = yylloc;
    if (yyerrstatus_ == 3)
      {
	/* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

	if (yychar <= yyeof_)
	  {
	  /* Return failure if at end of input.  */
	  if (yychar == yyeof_)
	    YYABORT;
	  }
	else
	  {
	    yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
	    yychar = yyempty_;
	  }
      }

    /* Else will try to reuse lookahead token after shifting the error
       token.  */
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;

    yyerror_range[0] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (yyn != yypact_ninf_)
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	YYABORT;

	yyerror_range[0] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[1] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval, &yylloc);

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (yystate_stack_.height () != 1)
      {
	yydestruct_ ("Cleanup: popping",
		   yystos_[yystate_stack_[0]],
		   &yysemantic_stack_[0],
		   &yylocation_stack_[0]);
	yypop_ ();
      }

    return yyresult;
  }

  // Generate an error message.
  std::string
  xquery_parser::yysyntax_error_ (int yystate, int tok)
  {
    std::string res;
    YYUSE (yystate);
#if YYERROR_VERBOSE
    int yyn = yypact_[yystate];
    if (yypact_ninf_ < yyn && yyn <= yylast_)
      {
	/* Start YYX at -YYN if negative to avoid negative indexes in
	   YYCHECK.  */
	int yyxbegin = yyn < 0 ? -yyn : 0;

	/* Stay within bounds of both yycheck and yytname.  */
	int yychecklim = yylast_ - yyn + 1;
	int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
	int count = 0;
	for (int x = yyxbegin; x < yyxend; ++x)
	  if (yycheck_[x + yyn] == x && x != yyterror_)
	    ++count;

	// FIXME: This method of building the message is not compatible
	// with internationalization.  It should work like yacc.c does it.
	// That is, first build a string that looks like this:
	// "syntax error, unexpected %s or %s or %s"
	// Then, invoke YY_ on this string.
	// Finally, use the string as a format to output
	// yytname_[tok], etc.
	// Until this gets fixed, this message appears in English only.
	res = "syntax error, unexpected ";
	res += yytnamerr_ (yytname_[tok]);
	if (count < 5)
	  {
	    count = 0;
	    for (int x = yyxbegin; x < yyxend; ++x)
	      if (yycheck_[x + yyn] == x && x != yyterror_)
		{
		  res += (!count++) ? ", expecting " : " or ";
		  res += yytnamerr_ (yytname_[x]);
		}
	  }
      }
    else
#endif
      res = YY_("syntax error");
    return res;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const short int xquery_parser::yypact_ninf_ = -1243;
  const short int
  xquery_parser::yypact_[] =
  {
      1468, -1243, -1243, -1243, -1243,   847,    85,    59,   -11,  8618,
     126,   377,   438, -1243, -1243, -1243, -1243, -1243, -1243,   156,
     311,  7492, -1243,   226, -1243, -1243, -1243, -1243,   322,   329,
   -1243,   275,    76,   411, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243,   339,   370, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243,  8897, -1243,  6922, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, 10571, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243,   415, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243,  1756, 10571, -1243, -1243, -1243, -1243, -1243,
   -1243,   403, -1243, -1243, -1243, -1243,  8058, -1243,  8339, -1243,
   -1243, -1243, -1243, -1243, 10571, -1243, -1243,  6635, -1243, -1243,
   -1243, -1243, -1243, -1243,   432, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243,    23,   399, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243,   276,   456,   352, -1243,   406,   146, -1243,
   -1243, -1243, -1243, -1243, -1243,   512, -1243, -1243,   483,   400,
     413, -1243,   416,   485,   506, -1243,   539, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243,  4339,   650, -1243,  4626, -1243,
   -1243,   103,  4913,   472,   473, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243,   -17, -1243, -1243, -1243,
   -1243,   138, 10571, -1243, -1243, -1243, -1243, -1243,   498,   572,
   -1243,   581,   407,   298,   306,   174,   397, -1243,   591,   476,
     567,   580,  5200, -1243, -1243, -1243,    -1, -1243, -1243,  6635,
   -1243,   277, -1243,   518,  6922, -1243,   518,  6922, -1243, -1243,
   -1243, -1243,   518, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243,   531, -1243, -1243, 10571,   643,   644,   507,   507,   643,
   10571,   244,   -27,   659,   -12,   316, 10571,   540,   577,   255,
    8058, -1243, -1243,   402,   263,    11, 10571, -1243, -1243, -1243,
   -1243, -1243,   408, 10571,   404,   405,   401,   514, -1243, -1243,
   -1243,  8058, 10571,  4913,   546,   551,  4913, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,  4913,  9176,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243,   554,  4913,  4913,   523,
    4913,   525,  4913,    63,   117, -1243,  4913,  7775,   559, -1243,
   10571, 10571, 10571,  4913,   445,   447, -1243,   595,   606, 10571,
      84,  4913,  9455,   576,   574,   578,   579,   583,   584, -1243,
   -1243, -1243, 10571, -1243,   547,   703,  4913,    32, -1243,   716,
     562, -1243,  4913,   532, -1243,   718,  4913,  4913,   564,  4913,
    4913,  4913,  4913,   520, 10571, -1243, -1243,  4913, -1243, -1243,
    4913,  4913, 10571, -1243, -1243, -1243, -1243,   847,   311, -1243,
   -1243,   103,   722,  4913, -1243,  4913,   593,   329,    76,   411,
     642,   594,   596,  4913,  4913, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243,   658, -1243,   -30,  5487,  5487,  5487, -1243,  5487,
    5487, -1243,  5487, -1243,  5487, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243,  5487,  5487,     8,  5487,  5487,  5487,  5487,  5487,
    5487,  5487,  5487,  5487,  5487,  5487,   538,   674,   677,   679,
   -1243, -1243, -1243,  2043, -1243, -1243,  6635,  6635,  4913,   518,
   -1243, -1243,   518, -1243,   518,  2330,   625, -1243, 10571, -1243,
   -1243, -1243, -1243,   751, -1243, -1243, -1243, -1243, -1243, -1243,
     680,   681, -1243, -1243,   482,   315, 10571,   437,   629,   632,
     482,   659,   669,   665, -1243, -1243, -1243, -1243, -1243,   351,
      13,   358,   768, -1243, -1243,   261, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243,   -24, -1243,   515, -1243, -1243, 10571,
   10571, 10571, -1243,   672,   662, -1243,   633,  4913,  4913,   626,
     634, -1243,   -14,    30,  2617,   635,   636, -1243,   637, -1243,
     638,  8058,   723,   780,  8058,   659,   724,   645,   640, -1243,
     641,  2904,     1, -1243,    39,   686,   720, -1243,   -39,   648,
   -1243, -1243, 10571,   -26, -1243,   646,   574,   339, -1243,   647,
     649,   653, -1243,   134,   175,  3191,    20, -1243, 10571,   703,
   -1243,    -4,   654, -1243, -1243, -1243, -1243,   655, -1243,   -37,
   -1243, -1243, -1243,    92,    99,   742,   603,   616,   -34, -1243,
     699,  5774, -1243,   657,   661,   218, -1243, -1243,   656, -1243,
     931, -1243, -1243,    -8,   675, 10571,  4913,   726, -1243, -1243,
     727, 10013,   728,  4913,   729,   -15,   704,   -38,   572, -1243,
   -1243, -1243, -1243, -1243,  5487, -1243, -1243, -1243,  4913,     8,
     237, -1243,   582,   441,   597,   589, -1243, -1243,   586,  -111,
     306,   306,   282,   174,   174,   174,   174,   397,   397, -1243,
   -1243, 10013, 10013, 10571, 10571, -1243,   673, -1243, -1243,   676,
   -1243, -1243, -1243,   205,   -16,   200,   625, -1243,   324,   342,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
     482, -1243,   730, 10292,   714,  4913, -1243, -1243, -1243,   762,
     721,  4913,   659,   659,   482, -1243,   487,   659, -1243, -1243,
     585, -1243, -1243,   588,   223, -1243, -1243, -1243, -1243, -1243,
   -1243,   590, -1243, -1243,    22,   330, -1243,   639,   140,   -18,
     570,   659,  4913, -1243,   682,   691,   766,   731, 10571, -1243,
   10571, -1243, -1243,   697, -1243, -1243, -1243,   688,   750,   659,
     738,   753,   788,   659,   735, -1243, -1243, -1243,   706,   769,
    4913,  4913,   744,  4913,   778,  4913,   757,   -89, -1243,   271,
     652, -1243, -1243,   379,   -26, -1243, -1243, -1243,   748, 10571,
   -1243, 10571, -1243, -1243,   719,  4913,   867, -1243,    -3, -1243,
      52, -1243, -1243,   875, -1243,   141,  4913,  4913,  4913,   363,
    4913,  4913,  4913,  4913,  4913,  4913,   786,  4913,  4913,   577,
      -7,   732,   483,   666,   761,   795,   722,   835, -1243,  4913,
   -1243,   410,   808, -1243, 10571,   809, -1243, 10571,   764,   767,
   -1243,   214, -1243, -1243, -1243, 10571, -1243, 10571,  4913,   777,
    4913,  4913,     0,   779, -1243,   747,   741, -1243,   678, -1243,
     127, -1243,   307,    43,   683,     8,   307,  5487,  5487,   500,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243,     8,   784,    43,
   -1243,   651,   874, -1243, -1243, -1243, -1243, -1243,   790, -1243,
   -1243, -1243,  4913, -1243, 10571,   836,   220, -1243, -1243,  4913,
   -1243,   227, -1243, -1243, -1243, -1243, -1243,   906,   450, -1243,
   -1243, -1243,  4913, -1243, -1243, -1243, -1243, -1243, -1243,   663,
     246,   907, -1243,    50, -1243, -1243,   578,   579,   583,   370,
     584,   456,   702,   214,   713,   715,  6348,   664,   660,    22,
   -1243,   717,   758,   770, -1243, -1243,  9734,   278, -1243,  3478,
     763,   765,   807,   771,   772, -1243,  4913,   659,   844, -1243,
   -1243, -1243,   659,   844,  3765, -1243, 10571, -1243, -1243,  4913,
   -1243, 10571, -1243,  4913,  4913,   812,  4913,   818, -1243,   845,
     849,  4913, 10571,   557,   899, -1243, -1243, -1243,  4052,   787,
     789, -1243, -1243, -1243,   839, -1243,    96, -1243, -1243,   957,
   -1243, -1243,  4913, 10571, -1243, -1243,   148, -1243, -1243, -1243,
     792,   752,   754, -1243, -1243, -1243,   756,   759, -1243, -1243,
   -1243, -1243, -1243,   746, 10571,   799, -1243,   843, -1243,   577,
   -1243, -1243, -1243,  7209,   666, -1243,  4913, 10571,   808, -1243,
     659, -1243,   499, -1243,    37,   881, -1243,  4913,   882,   726,
   -1243,   810,   811, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
    4913, -1243, -1243,  4913,   846,  4913, -1243, -1243,  5487, -1243,
   -1243, -1243, -1243, -1243,    47,  5487,  5487,   219, -1243,   597,
   -1243, -1243,   154,  5487, -1243, -1243,   589,     8,   725, -1243,
   -1243, -1243, -1243,   762, 10013,   873,   898,   815, -1243, -1243,
   -1243, -1243, -1243,    -2,   968,   969,    -2,   -21,   224,   225,
   -1243, -1243, -1243, -1243,   832, 10571,   743,   702,  6348, -1243,
   -1243, 10571,   819,   166, -1243, -1243,   822, -1243, -1243, -1243,
   -1243, -1243,   879,   909,   659,   844, -1243,   826, -1243, -1243,
   -1243, -1243, -1243,  4913, -1243,  4913, 10571, 10571, -1243,    81,
   -1243,  4913, -1243,   827, -1243, -1243,   867, 10571,   425, -1243,
     828,   867, 10571, -1243, -1243,  4913,  4913,  4913,  4913,  4913,
   -1243,  4913,  4913, -1243, -1243,   -22, -1243,   829, -1243, -1243,
   -1243, -1243,   881, -1243, -1243, -1243,   659, -1243, -1243, -1243,
   -1243, -1243, -1243,  4913, -1243,   174,  5487,  5487,   174,   350,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, 10013, -1243,   246,   246,    -2, -1243, -1243, -1243,    51,
      -2,   983,   755,   918, -1243,   918, -1243,  6348,   -73,   733,
   -1243,   850,   925,  4913, 10571,  4913, -1243,  4913,   659, -1243,
   -1243, -1243, -1243,   953, -1243, -1243, -1243, -1243,   -19,   867,
   10571, -1243,   830,   867, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243,   903,  7209, -1243, -1243, -1243, -1243, -1243,   174,   174,
    5487, -1243, -1243, -1243, -1243, -1243, -1243,    43, -1243,   230,
   -1243,   231,   915, -1243,   932, 10571,   803, 10571,  6348, 10013,
   -1243,   851, -1243, -1243,   844,   910,   180,    55, -1243,   834,
     867, -1243,   838, 10571, -1243,   174,   773,   918, -1243, -1243,
    6348, 10571,   734,   911,   813,   915,   855,  4913, 10571, -1243,
   -1243,   939,   274, -1243, -1243, -1243, -1243,   859,   232, -1243,
   -1243, -1243,   848, -1243,   236, -1243, -1243, -1243,   410,  6061,
   10571,   921,  4913, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243,   922,   897, -1243,   749, -1243,   760, 10571, -1243,
   10571, -1243,  6348,  4913,   774,   247, -1243, -1243,  6348,   930,
     897,   856, 10571, -1243,   775,   869, 10571,   897,   831, -1243,
     937, 10571,   776,  6348, -1243
  };

  /* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
     doesn't specify something else to do.  Zero means the default is an
     error.  */
  const unsigned short int
  xquery_parser::yydefact_[] =
  {
         0,   399,   400,   581,   546,   686,   695,   674,   598,   590,
     606,   597,   588,   696,   735,   734,   736,   737,   733,   592,
     693,   594,   621,   656,   650,   691,   618,   694,   751,   645,
     687,   749,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   688,   602,   596,   589,   690,   665,   595,   600,   761,
     762,   763,   764,   765,   766,   767,   768,   769,   770,   771,
     390,   393,   664,   660,   651,   631,   587,   380,     0,   659,
     667,   675,   378,   655,   416,   632,   633,   689,   379,   382,
     652,   669,     0,   422,   388,   418,   662,   586,   653,   654,
     682,   657,   673,   681,   384,   383,   605,   644,   684,   417,
     672,   677,   591,     0,     0,   337,   670,   680,   685,   683,
     663,   738,   649,   647,   648,   389,     0,   336,     0,   392,
     391,   678,   634,   658,     0,   381,   366,     0,   398,   679,
     661,   668,   676,   671,   739,   625,   630,   629,   628,   627,
     626,   599,   646,     0,   585,   692,   619,   725,   724,   726,
     604,   603,   622,   731,   593,   723,   728,   729,   720,   624,
     666,   722,   732,   730,   721,   623,   727,   740,   741,   742,
     745,   743,   746,   744,   747,   748,   750,   712,   711,   608,
     601,   610,   609,   705,   701,   616,   620,   617,   714,   715,
     698,   607,   710,   709,   706,   702,   719,   713,   708,   704,
     697,   718,   717,   703,   707,   699,   700,   611,   612,   614,
     716,   613,   615,   772,   773,   774,   775,   776,   777,   753,
     754,   752,   758,   759,   760,   755,   756,   757,   778,   779,
     780,   781,   782,   783,   784,     0,     0,     2,     0,     4,
       6,    12,     0,     0,     0,    18,    20,    34,    22,    23,
      24,    50,    25,    29,    30,    54,    55,    56,    51,    52,
      58,    59,    27,    26,    31,    32,    33,    53,   196,   195,
     192,   193,   194,    28,    11,   173,   174,   178,   180,   211,
     217,     0,     0,   209,   210,   181,   182,   183,   184,   293,
     295,   297,   307,   310,   312,   315,   320,   323,   326,   328,
     330,   332,     0,   334,   340,   342,     0,   358,   341,   362,
     365,   367,   370,   372,     0,   377,   374,     0,   385,   395,
     397,   371,   401,   406,   414,   407,   408,   409,   412,   413,
     410,   411,   429,   431,   432,   433,   430,   478,   479,   480,
     481,   482,   483,   394,   520,   512,   519,   518,   517,   514,
     516,   513,   515,   415,    57,   185,   186,   188,   187,   189,
     190,   396,   191,   582,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,     0,     0,     0,     0,   103,   104,   105,
     106,   111,     0,     0,     0,     0,     0,     0,   101,   156,
     159,     0,     0,     0,     0,     0,     0,   686,   695,   674,
     598,   590,   606,   597,   588,   592,   693,   594,   656,   751,
     645,   749,   635,   636,   596,   589,   587,   657,     0,     0,
     738,   739,   585,   731,   593,   723,   729,   720,   623,   741,
     742,   745,   746,   744,   747,   750,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   579,     0,     0,     0,   580,
       0,     0,     0,     0,     0,     0,   219,     0,     0,     0,
       0,     0,     0,     0,   590,   597,   588,   594,   587,   386,
     396,   419,     0,   420,     0,   445,     0,     0,   361,     0,
       0,   364,     0,     0,   474,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   146,   143,     0,   154,   155,
       0,     0,     0,     3,     1,     5,     7,     0,     0,    13,
      10,    15,    16,     0,   176,   175,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   197,   216,   212,   218,   213,
     215,   214,   221,   222,     0,     0,     0,     0,   351,     0,
       0,   349,     0,   302,     0,   350,   343,   348,   347,   346,
     345,   344,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     339,   338,   335,     0,   359,   363,     0,     0,     0,   373,
     403,   376,   375,   387,   402,     0,     0,   161,     0,   162,
     158,   157,   160,     0,   137,   138,    67,    68,   578,    76,
       0,     0,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   547,   548,   549,   110,   109,     0,
       0,     0,     0,   821,   822,     0,    66,   814,   815,   816,
     817,   818,   819,   820,   115,   112,     0,   114,   113,     0,
       0,     0,   102,     0,     0,   544,     0,     0,     0,     0,
       0,   536,     0,     0,     0,     0,     0,   525,     0,   526,
       0,     0,    85,     0,     0,     0,    77,     0,     0,   527,
       0,     0,     0,   282,     0,     0,   234,   235,     0,     0,
     199,   200,     0,     0,   220,     0,     0,     0,   522,     0,
       0,     0,   530,     0,     0,     0,     0,   421,   446,   445,
     442,     0,     0,   476,   475,   360,   535,     0,   473,     0,
     560,   561,   521,     0,     0,     0,     0,     0,     0,   566,
       0,     0,   152,     0,     0,     0,   237,   254,     0,    19,
       0,    21,   179,     0,     0,     0,     0,     0,   198,   255,
       0,     0,     0,     0,     0,     0,     0,     0,   294,   296,
     300,   306,   305,   304,     0,   301,   298,   299,     0,     0,
       0,   806,   308,   785,   793,   795,   797,   799,   801,   804,
     314,   313,   311,   317,   318,   319,   316,   321,   322,   325,
     324,     0,     0,     0,     0,   356,     0,   368,   369,     0,
     404,   425,   427,     0,     0,     0,     0,    65,     0,     0,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      36,    37,     0,     0,    93,     0,    89,    91,    92,    96,
      99,     0,     0,     0,    35,    75,     0,     0,   823,   824,
       0,   825,   829,     0,     0,   858,   827,   828,   857,   826,
     830,     0,   837,   859,     0,     0,   116,     0,     0,   119,
       0,     0,     0,   352,     0,     0,     0,     0,     0,   540,
       0,   537,   485,     0,   484,   493,   494,     0,     0,     0,
       0,     0,    78,     0,     0,   529,   528,   495,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   584,     0,
       0,   201,   202,     0,   207,   543,   523,   524,     0,     0,
     533,     0,   531,   489,     0,     0,   445,   443,     0,   434,
       0,   423,   424,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   686,
       0,     0,     0,     0,     0,     0,    17,     0,   177,     0,
     208,   266,   262,   264,     0,   256,   257,     0,   591,   599,
     501,   502,   508,   509,   511,     0,   224,     0,     0,     0,
       0,     0,     0,     0,   303,     0,     0,   800,     0,   309,
       0,   813,     0,     0,     0,     0,     0,     0,     0,   786,
     790,   808,   789,   812,   810,   809,   811,     0,     0,     0,
     802,   865,   863,   867,   805,   327,   329,   331,   499,   333,
     357,   405,     0,   426,     0,   139,     0,   167,   164,     0,
     163,     0,    73,    74,    71,    72,    38,     0,     0,    94,
      95,    97,     0,    98,    63,    64,    69,    70,    60,     0,
       0,     0,   832,     0,   831,   848,     0,     0,     0,     0,
       0,     0,   117,   123,     0,     0,     0,     0,     0,     0,
     120,     0,     0,     0,   354,   353,     0,     0,   288,     0,
       0,     0,   544,     0,     0,   486,     0,     0,    87,    81,
      84,    83,     0,    79,     0,   496,     0,   280,   284,     0,
     151,     0,   239,     0,     0,     0,     0,     0,   203,     0,
       0,     0,     0,   248,     0,   245,   250,   206,     0,     0,
       0,   490,   281,   446,     0,   435,     0,   469,   466,     0,
     470,   471,     0,     0,   472,   465,     0,   440,   468,   467,
       0,     0,     0,   553,   554,   550,     0,     0,   558,   559,
     555,   564,   562,     0,     0,     0,   568,   149,   148,     0,
     145,   144,   153,     0,   569,   570,     0,     0,   263,   275,
       0,   276,     0,   267,   268,   269,   270,     0,   259,     0,
     223,     0,     0,   505,   507,   506,   503,   232,   233,   226,
       0,   228,   225,     0,     0,     0,   807,   803,     0,   860,
     861,   881,   880,   876,     0,     0,     0,     0,   862,   794,
     875,   787,     0,     0,   792,   791,   796,     0,     0,   866,
     864,   500,   428,   169,     0,     0,   140,     0,   166,   165,
      39,    90,   100,   846,     0,     0,   844,   840,     0,     0,
     118,   124,   126,   125,     0,     0,     0,   121,     0,    14,
     355,     0,     0,     0,   289,   487,     0,   541,   542,   545,
     538,   539,     0,    86,     0,    80,   497,     0,   283,   285,
     236,   241,   240,     0,   243,     0,     0,     0,   205,   246,
     249,     0,   491,     0,   534,   532,   445,     0,     0,   477,
       0,   445,     0,   441,     9,     0,     0,     0,     0,     0,
     567,     0,     0,   147,   576,     0,   571,     0,   238,   279,
     277,   278,   271,   272,   273,   265,     0,   260,   258,   510,
     504,   230,   227,     0,   229,   882,     0,     0,   868,     0,
     879,   878,   877,   872,   873,   788,   798,   874,   170,   141,
     168,     0,   172,     0,     0,   847,   849,   851,   853,     0,
     845,     0,     0,     0,   835,     0,   833,     0,     0,     0,
     122,     0,     0,     0,     0,     0,   488,     0,     0,    82,
     498,   242,   244,   253,   252,   247,   204,   492,     0,   445,
       0,   171,     0,   445,   551,   552,   556,   557,   563,   565,
     150,     0,     0,   572,   583,   274,   261,   231,   870,   869,
       0,   142,   856,   855,   850,   854,   852,   841,   842,     0,
     838,     0,   127,   129,     0,     0,     0,     0,     0,     0,
     290,     0,   286,   292,    88,     0,   455,   449,   444,     0,
     445,   436,     0,     0,   577,   871,     0,     0,   836,   834,
       0,     0,     0,     0,     0,   128,     0,     0,     0,   463,
     457,     0,   456,   458,   464,   461,   451,     0,   450,   452,
     462,   438,     0,   437,     0,   843,   839,   130,   131,     0,
       0,     0,     0,   287,   251,   448,   459,   460,   447,   453,
     454,   439,     0,     0,   132,   753,   133,     0,     0,   291,
       0,   573,     0,     0,     0,     0,   134,   135,     0,     0,
       0,     0,     0,   574,     0,     0,     0,     0,     0,   575,
       0,     0,     0,     0,   136
  };

  /* YYPGOTO[NTERM-NUM].  */
  const short int
  xquery_parser::yypgoto_[] =
  {
     -1243, -1243,   814, -1243,   816,   817, -1243,   820, -1243,   527,
     530,  -502, -1243,   433,  -333, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,  -865,
   -1243, -1243, -1243, -1243,    31,   234,   685, -1243, -1243,   667,
   -1243,     6,  -834, -1243,  -341,  -362, -1243, -1243,   265, -1243,
    -870, -1243, -1243,   -80, -1243, -1243, -1243, -1243, -1243,   256,
      90, -1243, -1243,  -142, -1243, -1242,   833,   -62, -1243,   549,
    -421, -1243, -1243, -1243, -1243,   172, -1243, -1243,   797, -1243,
   -1243, -1243, -1243, -1243,   122,  -513,  -656, -1243, -1243, -1243,
     -10, -1243, -1243,  -189,   -20,   -72, -1243, -1243, -1243,   -85,
   -1243, -1243,   137,   -78,  -368, -1243,   -70, -1095, -1243,   609,
       9, -1243, -1243,    25, -1243, -1243,   552,   550, -1243,  -514,
    -958,   533,    67,  -567,    62,    64, -1243, -1243, -1243, -1243,
   -1243,   796, -1243, -1243, -1243, -1243, -1243,   793, -1032, -1243,
    -105, -1243, -1243, -1243, -1243, -1243, -1243, -1243,   -42, -1126,
   -1243, -1243,    86,   -13, -1243,  -554, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243,  -897, -1243,    -6, -1243,   392,
    -703, -1243, -1243, -1243, -1243, -1243,  -346,  -339, -1075,  -918,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
    -785,  -669,  -778,    53,   281,  -786,  -746, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243,   668,   670,  -445,   235,    80, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243,   -36, -1243, -1243,   -45,
   -1243,  -357,   -99,    -9, -1243, -1243,   343, -1243, -1243,   128,
     114,   -92,   346, -1243, -1243,   129, -1243,  -743, -1243, -1243,
   -1243, -1243,  -228,  -833, -1243,  -107,  -697, -1243,  -736, -1243,
   -1243, -1243, -1243,  -978, -1243, -1243, -1243, -1243,   -82,   147,
   -1243
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const short int
  xquery_parser::yydefgoto_[] =
  {
        -1,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   820,   821,   822,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,  1078,
     675,   261,   262,   826,   827,   828,  1147,   263,   397,   398,
     264,  1052,   856,   265,  1402,  1403,   266,   267,   805,   268,
     506,   731,   940,  1148,   269,   270,   271,   272,   273,   399,
     400,   599,  1016,  1017,  1124,  1020,   274,   275,   525,   276,
     277,   278,   535,   467,   903,   904,   279,   536,   280,   538,
     281,   282,   283,   542,   543,  1103,   756,   284,   686,   735,
     687,   693,  1104,  1105,  1106,   736,   539,   540,   955,   956,
    1307,   541,   952,   953,  1163,  1164,  1165,  1166,   285,   682,
     683,   286,  1067,  1068,   287,   288,   289,   290,   764,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   562,   563,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   589,   590,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   803,   331,   332,   333,  1126,   709,   710,
     711,  1418,  1447,  1448,  1441,  1442,  1449,  1443,  1127,  1128,
     334,   335,  1129,   336,   337,   338,   339,   340,   341,   342,
    1007,   757,   960,  1176,   961,   962,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   654,  1071,   353,   354,
     355,   356,   357,   358,   359,   728,   729,   360,  1154,  1155,
    1295,  1079,   458,   361,   362,   363,   772,   989,   773,   774,
     775,   776,   777,   778,   779,   990,   991,   636,   637,   638,
     639,   640,  1399,  1400,   641,  1335,  1226,  1339,  1336,   642,
     643,   993,  1004,  1197,   994,   995,  1000,   996,  1323,  1193,
     979
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If zero, do what YYDEFACT says.  */
  const signed char xquery_parser::yytable_ninf_ = -1;
  const unsigned short int
  xquery_parser::yytable_[] =
  {
       446,   783,   784,   785,   786,   963,   918,  1008,  1008,  1009,
     771,  1044,   459,  1005,  1006,   892,   609,   487,  1083,   897,
     741,  1208,   491,  1125,  1234,  1060,   479,  1294,     4,  1201,
     992,   755,   896,   760,   900,   761,   762,  1405,   763,   713,
     765,   484,   689,  1094,   493,   963,   963,   751,   766,   767,
     752,  1283,   696,  1383,  1046,  1047,   751,   473,   752,   480,
    1117,  1118,   854,  1117,  1048,   936,  1416,  1194,  1059,  1303,
    1304,  1395,  1152,   481,  1445,   720,   721,   963,   723,   724,
     725,   726,   523,   608,   923,   868,   732,   697,  1049,   733,
    1316,   523,  1149,   895,  1014,   485,   672,   676,   971,   969,
     889,   973,   742,   629,  1117,  1118,   753,   459,  1053,   489,
      74,  1050,   748,   749,   696,   490,   919,  1115,   840,   889,
    1019,   968,    85,  1381,  1333,   751,  1001,  1002,   517,   870,
     606,  1194,   464,   465,   406,  1160,  1183,   608,  1041,  1099,
    1100,   583,   924,   610,   518,   402,    99,  1119,  1003,   697,
     768,  1219,  1417,   769,  1162,  1228,  1117,  1118,   611,  1015,
    1031,   869,   524,   607,   118,  1120,  1317,  1121,  1120,   752,
    1121,   948,  1150,   754,   802,   891,  1382,   890,   925,  1446,
     901,   920,  1116,   526,  1439,   929,   466,  1334,  1117,   527,
     937,  1119,   528,   529,  1122,   714,   915,  1122,   104,   124,
     530,   403,   855,  1283,   585,   871,  1351,  1385,   855,  1120,
    1229,  1121,   671,  1114,   116,   771,   771,  1255,  1230,  1125,
     902,  1406,   673,   754,   754,   494,  1396,  1195,  1196,  1125,
    1097,  1481,   754,   909,   401,  1123,  1051,   630,  1122,  1341,
    1117,  1095,   104,  1119,   972,  1325,  1205,   754,  1493,  1342,
     974,  1445,   631,   143,   841,  1499,  1424,     4,   116,   698,
     770,  1120,   754,  1121,   835,   632,   674,   633,   447,   404,
     405,   944,   591,   544,   911,   593,  1354,   634,  1439,  1277,
     635,   623,  1117,   842,   843,   618,   844,   845,  1242,   619,
    1122,  1195,  1196,  1120,   104,  1121,   531,   143,   532,   926,
     927,   452,   653,  1440,  1012,   480,   930,   931,   480,   910,
     116,  1041,   533,  1053,   928,  1404,  1184,   945,   882,  1215,
     963,   932,  1122,  1343,  1345,   951,   620,  1018,  1042,  1427,
    1427,  1282,   966,  1189,  1224,  1472,   460,   453,   534,    74,
    1355,   656,  1019,   572,   659,  1120,  1489,  1121,  1173,   143,
     912,    85,   573,   621,  1218,   596,  1469,   751,   680,   454,
     502,   603,  1131,   572,  1132,   503,   660,   614,  1043,   505,
    1066,   459,   573,  1190,  1122,    99,  1404,   644,  1174,   768,
    1013,  1125,   769,  1243,   646,   665,   666,  1120,   668,  1121,
     670,  1225,   459,   655,   677,  1216,  1175,  1466,  1404,  1344,
    1346,   823,   592,  1350,  1030,  1428,  1429,  1096,   594,   701,
    1033,  1473,  1320,   622,   604,   568,  1122,   463,  1321,  1426,
     663,  1202,  1490,  1070,   712,  1073,  1322,  1057,   605,   565,
     717,   771,   461,  1117,  1118,  1058,  1329,  1099,  1100,   462,
    1101,   569,   824,   771,   741,   565,   566,   825,   459,   734,
    1486,   684,   685,   688,   570,   597,  1491,   586,   587,   602,
     695,  1022,   566,   704,  1109,   468,  1110,   752,   963,  1087,
    1088,  1504,  1090,   684,  1092,  1034,  1035,  1320,  1023,  1024,
    1038,   797,   798,  1321,   469,   567,   612,  1026,   571,  1102,
     496,  1322,   497,  1414,  1112,   730,  1025,  1159,  1444,  1450,
     613,  1026,   849,   737,  1062,  1133,  1134,  1135,  1160,  1138,
    1139,  1140,  1141,  1142,  1143,   470,  1145,  1146,  1161,   448,
    1119,   796,   449,   574,  1444,   482,   799,  1162,   951,   980,
    1450,   850,   851,   629,   852,   853,   575,  1390,  1120,   572,
    1121,   364,   365,   366,  1328,   486,   369,  1179,   573,  1181,
    1182,   627,   628,  1391,   810,   811,   812,   813,   814,   815,
     816,   817,   818,   819,   830,  1191,   499,  1122,   500,   831,
    1192,   104,   878,  1368,   492,   881,   800,   824,  1372,   800,
     450,   800,   825,   451,  1136,   963,  1137,   116,   980,   806,
     838,  1212,   629,   839,  1456,   864,   865,   846,   981,  1394,
     847,   498,   873,   495,  1394,  1036,  1037,   829,  1370,  1054,
    1055,  1222,   624,   625,   626,  1099,  1100,  1300,  1301,   888,
     501,  1315,   504,   600,   601,   505,   143,   507,  1318,  1319,
     510,  1436,   780,   781,   787,   788,  1392,  1393,   789,   790,
     858,   859,   860,   914,   508,  1008,  1458,   509,   511,   512,
     514,   521,   522,   771,   545,  1252,   546,   981,   564,   576,
     578,   588,   459,   963,   577,   459,  1419,   630,  1259,   941,
    1422,   381,  1261,  1262,   579,  1264,   595,   364,   598,   608,
    1268,   615,   631,   899,   982,   983,   984,   616,   657,   645,
     647,   648,   649,   658,   985,   632,   664,   633,   667,   916,
     669,   681,   986,   547,   382,   692,   975,   634,   987,   988,
     635,   548,   549,   690,   550,   691,   694,  1452,   705,   429,
    1253,   551,   707,   449,   451,   552,   630,   553,   457,   472,
     708,   715,   554,   384,   718,  1297,   950,   716,   719,   722,
     727,   631,   964,   982,   983,   984,   951,   740,   555,  1388,
    1389,   744,   745,   746,   632,   747,   633,   750,   791,  1311,
     792,   986,  1312,   793,  1314,   794,   634,  1203,   988,   635,
     804,   807,   556,   557,   558,   559,   560,   561,   832,   808,
     809,   833,   964,   964,   964,   964,   836,   837,   848,   650,
     387,   388,   389,   390,   861,   391,   392,   651,   394,   395,
    1063,   866,   857,  1299,   862,   863,   867,   874,   875,   876,
     880,   879,   883,   877,   964,   885,   886,   884,   893,   894,
     898,   905,   906,  1425,   907,   908,   921,   922,   933,   934,
     935,   938,   942,   943,   949,   946,   954,   957,   965,   967,
     970,   998,  1361,   999,  1362,  1010,   825,   997,   751,  1011,
    1366,   978,  1027,  1032,  1064,  1056,  1039,  1061,  1066,  1072,
    1040,  1072,  1045,  1065,  1374,  1375,  1376,  1377,  1378,  1075,
    1379,  1380,  1077,  1069,  1076,  1081,  1082,  1084,  1085,  1086,
    1089,   364,   365,   366,   367,   368,   369,  1080,  1091,  1093,
    1108,  1111,  1387,   370,  1113,  1130,  1144,  1359,  1098,   371,
     655,  1153,   655,  1156,  1151,  1157,   620,  1167,  1169,  1171,
     372,   373,  1172,  1180,   374,  1185,  1187,   375,   376,  1186,
    1207,  1210,  1214,  1209,  1211,  1188,     4,  1227,   855,  1232,
    1198,  1233,  1410,  1238,  1412,  1223,  1413,  1239,  1247,  1235,
    1248,  1249,  1240,  1254,  1263,  1168,  1250,  1251,   544,  1386,
     377,   378,   379,  1236,  1265,  1266,  1177,  1217,  1178,  1267,
    1271,  1276,  1274,  1279,  1275,   364,   365,   366,   367,   368,
     369,  1284,  1289,  1291,  1285,  1292,  1286,   370,  1287,  1160,
    1306,  1288,  1313,  1014,  1331,  1309,  1310,  1332,  1337,  1338,
    1327,  1347,  1349,  1353,  1356,  1357,   380,  1358,  1360,  1367,
    1371,  1384,   376,  1397,   381,  1213,  1041,  1246,  1407,  1408,
    1398,  1409,  1415,  1423,  1430,  1421,  1463,  1433,  1431,  1451,
    1438,  1460,  1257,  1453,  1465,  1437,  1459,  1461,  1455,  1462,
    1468,  1478,  1480,  1471,   377,   378,   947,   382,  1476,  1019,
    1492,  1479,  1482,  1494,  1497,  1500,  1273,  1501,   738,   513,
    1496,   739,  1483,   834,   515,   516,   383,   964,  1029,  1221,
    1280,   519,  1487,   617,   652,  1237,   384,  1435,  1457,  1293,
    1488,  1021,  1503,  1330,   743,   520,  1107,   684,   537,  1170,
    1365,  1260,   688,  1270,  1308,  1298,  1158,   385,   381,  1305,
    1474,   706,  1244,  1269,  1302,  1258,   759,   758,   582,   584,
     782,   917,  1470,  1467,  1028,  1074,  1231,  1220,  1290,  1296,
    1278,  1206,   976,  1199,  1281,  1326,   977,  1401,  1204,  1340,
    1324,   382,   386,   387,   388,   389,   390,     0,   391,   392,
     393,   394,   395,  1200,     0,   730,     0,   396,   699,     0,
     700,     0,     0,     0,   480,     0,     0,     0,   737,     0,
     384,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   385,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   964,   386,   387,   388,   389,
     390,     0,   391,   392,   393,   394,   395,     0,     0,     0,
       0,   396,     0,     0,     0,     0,  1348,     0,     0,     0,
       0,     0,  1352,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1363,  1364,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1369,     0,
       0,     0,     0,  1373,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   964,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1411,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1420,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   480,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1432,     0,  1434,     0,
     964,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1454,     0,     0,     0,     0,     0,
       0,     0,   964,     0,     0,     0,     0,     0,     0,  1464,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1477,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1484,
       0,  1485,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,  1495,     0,     2,     3,  1498,     4,     0,
       0,     0,  1502,     5,     6,     0,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    72,    73,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,     0,    85,     0,    86,    87,    88,    89,     0,    90,
       0,     0,     0,    91,    92,    93,    94,    95,     0,     0,
       0,     0,     0,    96,    97,    98,    99,   100,   101,   102,
       0,     0,     0,   103,   104,   105,   106,   107,     0,     0,
       0,     0,   108,   109,   110,   111,   112,   113,   114,   115,
     116,     0,   117,   118,     0,     0,   119,   120,   121,     0,
       0,     0,   122,     0,   123,   124,   125,     0,   126,   127,
     128,     0,   129,     0,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,     0,     0,   141,   142,   143,
       0,   144,   145,     0,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,   190,
     191,     0,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,     1,     0,     0,     0,
       0,     0,     0,     2,     3,     0,     4,     0,     0,     0,
       0,   407,   408,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   416,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,    72,    73,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      85,     0,    86,    87,    88,    89,     0,    90,     0,     0,
       0,    91,    92,    93,    94,    95,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,   101,   102,     0,     0,
       0,   103,   104,   105,   106,   107,     0,     0,     0,     0,
     108,   109,   110,   111,   112,   113,   114,   115,   116,     0,
     117,   118,     0,     0,   119,   120,   121,     0,     0,     0,
     122,   483,   123,   124,   125,     0,   126,   127,   128,     0,
     129,     0,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,     0,     0,   141,   142,   143,     0,   432,
     145,     0,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,     0,   190,   191,     0,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,     1,     0,     0,     0,     0,     0,     0,
       2,     3,     0,     4,     0,     0,     0,     0,   407,   408,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   416,    21,    22,    23,    24,    25,
      26,    27,     0,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     0,     0,
      72,    73,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,     0,    85,     0,    86,
      87,    88,    89,     0,    90,     0,     0,     0,    91,    92,
      93,    94,    95,     0,     0,     0,     0,     0,    96,    97,
      98,    99,   100,   101,   102,     0,     0,     0,   103,   104,
     105,   106,   107,     0,     0,     0,     0,   108,   109,   110,
     111,   112,   113,   114,   115,   116,     0,   117,   118,     0,
       0,   119,   120,   121,     0,   795,     0,   122,     0,   123,
     124,   125,     0,   126,   127,   128,     0,   129,     0,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
       0,     0,   141,   142,   143,     0,   432,   145,     0,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,     0,   190,   191,     0,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       1,     0,     0,     0,     0,     0,     0,     2,     3,     0,
       4,     0,     0,     0,     0,   407,   408,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   416,    21,    22,    23,    24,    25,    26,    27,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,    72,    73,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,     0,    85,     0,    86,    87,    88,    89,
       0,    90,     0,     0,     0,    91,    92,    93,    94,    95,
       0,     0,     0,     0,     0,    96,    97,    98,    99,   100,
     101,   102,     0,     0,     0,   103,   104,   105,   106,   107,
       0,     0,     0,     0,   108,   109,   110,   111,   112,   113,
     114,   115,   116,     0,   117,   118,     0,     0,   119,   120,
     121,     0,     0,     0,   122,   801,   123,   124,   125,     0,
     126,   127,   128,     0,   129,     0,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,     0,     0,   141,
     142,   143,     0,   432,   145,     0,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
       0,   190,   191,     0,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,     1,     0,     0,
       0,     0,     0,     0,     2,     3,     0,     4,     0,     0,
       0,     0,   407,   408,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   416,    21,
      22,    23,    24,    25,    26,    27,     0,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,    72,    73,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       0,    85,     0,    86,    87,    88,    89,     0,    90,     0,
       0,     0,    91,    92,    93,    94,    95,     0,     0,     0,
       0,     0,    96,    97,    98,    99,   100,   101,   102,     0,
       0,     0,   103,   104,   105,   106,   107,     0,     0,     0,
       0,   108,   109,   110,   111,   112,   113,   114,   115,   116,
       0,   117,   118,     0,     0,   119,   120,   121,     0,   872,
       0,   122,     0,   123,   124,   125,     0,   126,   127,   128,
       0,   129,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,     0,     0,   141,   142,   143,     0,
     432,   145,     0,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,     0,   190,   191,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,     1,     0,     0,     0,     0,     0,
       0,     2,     3,     0,     4,     0,     0,     0,     0,   407,
     408,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   416,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,    72,    73,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,     0,    85,     0,
      86,    87,    88,    89,     0,    90,     0,     0,     0,    91,
      92,    93,    94,    95,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,   101,   102,     0,     0,     0,   103,
     104,   105,   106,   107,     0,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,     0,   117,   118,
       0,     0,   119,   120,   121,     0,   887,     0,   122,     0,
     123,   124,   125,     0,   126,   127,   128,     0,   129,     0,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,     0,     0,   141,   142,   143,     0,   432,   145,     0,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,     0,   190,   191,     0,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,     1,     0,     0,     0,     0,     0,     0,     2,     3,
       0,     4,     0,     0,     0,     0,   407,   408,     0,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   416,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,     0,    72,    73,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,     0,    85,     0,    86,    87,    88,
      89,     0,    90,     0,     0,     0,    91,    92,    93,    94,
      95,     0,     0,     0,     0,     0,    96,    97,    98,    99,
     100,   101,   102,     0,     0,     0,   103,   104,   105,   106,
     107,     0,     0,     0,     0,   108,   109,   110,   111,   112,
     113,   114,   115,   116,     0,   117,   118,     0,     0,   119,
     120,   121,     0,   913,     0,   122,     0,   123,   124,   125,
       0,   126,   127,   128,     0,   129,     0,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,     0,     0,
     141,   142,   143,     0,   432,   145,     0,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,     0,   190,   191,     0,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,     1,     0,
       0,     0,     0,     0,     0,     2,     3,     0,     4,     0,
       0,     0,     0,   407,   408,     0,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   416,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    72,    73,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,     0,    85,     0,    86,    87,    88,    89,     0,    90,
       0,     0,     0,    91,    92,    93,    94,    95,     0,     0,
       0,     0,     0,    96,    97,    98,    99,   100,   101,   102,
       0,     0,     0,   103,   104,   105,   106,   107,     0,     0,
       0,     0,   108,   109,   110,   111,   112,   113,   114,   115,
     116,     0,   117,   118,     0,     0,   119,   120,   121,     0,
    1245,     0,   122,     0,   123,   124,   125,     0,   126,   127,
     128,     0,   129,     0,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,     0,     0,   141,   142,   143,
       0,   432,   145,     0,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,   190,
     191,     0,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     1,     0,     0,     0,     0,
       0,     0,     2,     3,     0,     4,     0,     0,     0,     0,
     407,   408,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   416,    21,    22,    23,
      24,    25,    26,    27,     0,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    72,    73,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,     0,    85,
       0,    86,    87,    88,    89,     0,    90,     0,     0,     0,
      91,    92,    93,    94,    95,     0,     0,     0,     0,     0,
      96,    97,    98,    99,   100,   101,   102,     0,     0,     0,
     103,   104,   105,   106,   107,     0,     0,     0,     0,   108,
     109,   110,   111,   112,   113,   114,   115,   116,     0,   117,
     118,     0,     0,   119,   120,   121,     0,  1256,     0,   122,
       0,   123,   124,   125,     0,   126,   127,   128,     0,   129,
       0,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,     0,     0,   141,   142,   143,     0,   432,   145,
       0,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,     0,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,     1,     0,     0,     0,     0,     0,     0,     2,
       3,     0,     4,     0,     0,     0,     0,   407,   408,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   416,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,    72,
      73,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,     0,    85,     0,    86,    87,
      88,    89,     0,    90,     0,     0,     0,    91,    92,    93,
      94,    95,     0,     0,     0,     0,     0,    96,    97,    98,
      99,   100,   101,   102,     0,     0,     0,   103,   104,   105,
     106,   107,     0,     0,     0,     0,   108,   109,   110,   111,
     112,   113,   114,   115,   116,     0,   117,   118,     0,     0,
     119,   120,   121,     0,  1272,     0,   122,     0,   123,   124,
     125,     0,   126,   127,   128,     0,   129,     0,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,     0,
       0,   141,   142,   143,     0,   432,   145,     0,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     0,   190,   191,     0,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,     1,
       0,     0,     0,     0,     0,     0,     2,     3,     0,     4,
       0,     0,     0,     0,     5,     6,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,    72,    73,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,     0,    85,     0,    86,    87,    88,    89,     0,
      90,     0,     0,     0,    91,    92,    93,    94,    95,     0,
       0,     0,     0,     0,    96,    97,    98,    99,   100,   101,
     102,     0,     0,     0,   103,   104,   105,   106,   107,     0,
       0,     0,     0,   108,   109,   110,   111,   112,   113,   114,
     115,   116,     0,   117,   118,     0,     0,   119,   120,   121,
       0,     0,     0,   122,     0,   123,   124,   125,     0,   126,
     127,   128,     0,   129,     0,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,     0,     0,   141,   142,
     143,     0,   144,   145,     0,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,     0,
     190,   191,     0,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,     1,     0,     0,     0,
       0,     0,     0,     2,     3,     0,     4,     0,     0,     0,
       0,     5,     6,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,    72,    73,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      85,     0,    86,    87,    88,    89,     0,    90,     0,     0,
       0,    91,    92,    93,    94,    95,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,   101,   102,     0,     0,
       0,   103,   104,   105,   106,   107,     0,     0,     0,     0,
     108,   109,   110,   111,   112,   113,   114,   115,   116,     0,
     117,   118,     0,     0,   119,   120,   121,     0,     0,     0,
     122,     0,   123,   124,   125,     0,   126,   127,   128,     0,
     129,     0,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,     0,     0,   141,   142,   143,     0,   432,
     145,     0,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,     0,   190,   191,     0,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,     1,     0,     0,     0,     0,     0,     0,
       2,     3,     0,     4,     0,     0,     0,     0,   407,   408,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   416,    21,    22,    23,    24,    25,
      26,    27,     0,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     0,     0,
      72,    73,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,     0,    85,     0,    86,
      87,    88,    89,     0,    90,     0,     0,     0,    91,    92,
      93,    94,    95,     0,     0,     0,     0,     0,    96,    97,
      98,    99,   100,   101,   102,     0,     0,     0,   103,   104,
     105,   106,   107,     0,     0,     0,     0,   108,   109,   110,
     111,   112,   113,   114,   115,   116,     0,   117,   118,     0,
       0,   119,   120,   121,     0,     0,     0,   122,     0,   123,
     124,   125,     0,   126,   127,   128,     0,   129,     0,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
       0,     0,   141,   142,   143,     0,   432,   145,     0,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,     0,   190,   191,     0,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       1,     0,     0,     0,     0,     0,     0,     2,     3,     0,
       4,     0,     0,     0,     0,   407,   408,     0,     7,   410,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     415,   416,    21,    22,   418,    24,    25,    26,    27,     0,
     419,   420,    30,   421,   422,   423,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,     0,    72,    73,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,     0,    85,     0,    86,    87,    88,    89,
       0,    90,     0,     0,     0,   427,    92,    93,    94,    95,
       0,     0,     0,     0,     0,    96,    97,    98,    99,   100,
     101,   102,     0,     0,     0,   103,   104,   580,   106,   107,
       0,     0,     0,     0,   108,   109,   110,   111,   112,   113,
     114,   115,   116,     0,   581,   118,     0,     0,   119,   120,
     121,     0,     0,     0,   122,     0,   123,   124,   125,     0,
     126,   127,   128,     0,   129,     0,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,     0,     0,   141,
     142,   143,     0,   432,   145,     0,   146,   147,   148,   149,
     150,   151,   152,   433,   154,   435,   156,   436,   437,   159,
     160,   161,   162,   163,   164,   438,   166,   167,   439,   440,
     441,   171,   442,   443,   444,   175,   445,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
       0,   190,   191,     0,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,     1,     0,     0,
       0,     0,     0,     0,     2,     3,     0,     4,     0,     0,
       0,     0,   407,   408,     0,     7,   410,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   415,   416,    21,
      22,   418,    24,    25,    26,    27,     0,   419,   420,    30,
     421,   422,   423,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,    72,    73,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       0,    85,     0,    86,    87,    88,    89,     0,    90,     0,
       0,     0,   427,    92,    93,    94,    95,     0,     0,     0,
       0,     0,    96,    97,    98,    99,   100,   101,   102,     0,
       0,     0,   103,   104,   105,   106,   107,     0,     0,     0,
       0,   108,   109,   110,   111,   112,   113,   114,   115,   116,
       0,   117,   118,     0,     0,   119,   120,   121,     0,     0,
       0,   122,     0,   123,   124,   125,     0,   126,   127,   128,
       0,   129,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,     0,     0,   141,   142,   143,     0,
     432,   145,     0,   146,   147,   148,   149,   150,   151,   152,
     433,   154,   435,   156,   436,   437,   159,   160,   161,   162,
     163,   164,   438,   166,   167,   439,   440,   441,   171,   442,
     443,   444,   175,   445,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,     0,   190,   191,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,     1,     0,     0,     0,     0,     0,
       0,     2,     3,     0,     4,     0,     0,     0,     0,   939,
     408,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   416,    21,    22,    23,    24,
      25,    26,    27,     0,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,    72,    73,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,     0,    85,     0,
      86,    87,    88,    89,     0,    90,     0,     0,     0,    91,
      92,    93,    94,    95,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,   101,   102,     0,     0,     0,   103,
     104,   105,   106,   107,     0,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,     0,   117,   118,
       0,     0,   119,   120,   121,     0,     0,     0,   122,     0,
     123,   124,   125,     0,   126,   127,   128,     0,   129,     0,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,     0,     0,   141,   142,   143,     0,   432,   145,     0,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,     0,   190,   191,     0,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,     1,     0,     0,     0,     0,     0,     0,     2,     3,
       0,     4,     0,     0,     0,     0,   407,   408,     0,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   416,    21,    22,    23,    24,    25,    26,    27,
       0,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,     0,    72,    73,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,     0,    85,     0,    86,    87,    88,
      89,     0,    90,     0,     0,     0,    91,    92,    93,    94,
      95,     0,     0,     0,     0,     0,    96,    97,    98,    99,
     100,   101,   102,     0,     0,     0,   103,   104,   105,   106,
     107,     0,     0,     0,     0,   108,   109,   110,   111,   112,
     113,   114,   115,   116,     0,   117,   118,     0,     0,   119,
     120,   121,     0,     0,     0,   122,     0,   123,   124,   125,
       0,   126,   127,   128,     0,   129,     0,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,     0,     0,
     141,   142,   143,     0,   432,   145,     0,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,     0,   190,   191,     0,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,  1475,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,     1,     0,
       0,     0,     0,     0,     0,     2,     3,     0,     4,     0,
       0,     0,     0,   407,   408,     0,   409,   410,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   415,   416,
      21,    22,   418,    24,    25,    26,    27,     0,   419,   420,
      30,   421,   422,   423,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,    72,    73,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,     0,    85,     0,    86,    87,    88,    89,     0,    90,
       0,     0,     0,   427,    92,    93,    94,    95,     0,     0,
       0,     0,     0,    96,    97,    98,    99,   100,   101,   102,
       0,     0,     0,   103,   104,     0,   106,   107,     0,     0,
       0,     0,   108,   109,   110,   111,   112,   113,   114,   115,
     116,     0,     0,     0,     0,     0,   119,   120,   121,     0,
       0,     0,   122,     0,   123,   124,   125,     0,   126,   127,
     128,     0,   129,     0,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,     0,     0,   141,   142,   143,
       0,   432,   145,     0,   146,   147,   148,   149,   150,   151,
     152,   433,   154,   435,   156,   436,   437,   159,   160,   161,
     162,   163,   164,   438,   166,   167,   439,   440,   441,   171,
     442,   443,   444,   175,   445,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,   190,
     191,     0,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     1,     0,     0,     0,     0,
       0,     0,     2,     3,     0,     4,     0,     0,     0,     0,
     407,   408,     0,   409,   410,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   415,   416,    21,    22,   418,
      24,    25,    26,    27,     0,   419,   420,    30,   421,   422,
     423,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    72,    73,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,     0,    85,
       0,    86,    87,    88,    89,     0,    90,     0,     0,     0,
     427,    92,    93,    94,    95,     0,     0,     0,     0,     0,
      96,    97,    98,    99,   100,   101,   102,     0,     0,     0,
     103,   104,     0,   106,   107,     0,     0,     0,     0,   108,
     109,   110,   111,   112,   113,   114,   115,   116,     0,     0,
       0,     0,     0,   119,   120,   121,     0,     0,     0,   122,
       0,   123,   124,   125,     0,     0,     0,   128,     0,   129,
       0,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,     0,     0,   141,   142,   143,     0,   432,   145,
       0,   146,   147,   148,   149,   150,   151,   152,   433,   154,
     435,   156,   436,   437,   159,   160,   161,   162,   163,   164,
     438,   166,   167,   439,   440,   441,   171,   442,   443,   444,
     175,   445,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,     0,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,     1,     0,     0,     0,     0,     0,     0,     2,
       3,     0,     0,     0,     0,     0,     0,   407,   408,     0,
     409,   410,   474,   412,   475,   476,    13,    14,    15,    16,
      17,    18,   415,   416,   477,    22,   418,    24,    25,    26,
      27,     0,   419,   420,    30,   421,   422,   423,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,     0,     0,    62,     0,    63,    64,
      65,   478,     0,     0,    69,    70,    71,     0,     0,     0,
      73,     0,     0,     0,     0,    75,    76,    77,     0,     0,
      80,    81,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,     0,    90,     0,     0,     0,   427,    92,    93,
       0,     0,     0,     0,     0,     0,     0,    96,    97,    98,
       0,   100,   101,   102,     0,     0,     0,     0,     0,     0,
     106,   107,     0,     0,     0,     0,   108,   109,   110,   430,
     112,   113,   114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,     0,   123,   124,
       0,     0,     0,     0,   128,     0,   129,     0,   130,   131,
     132,   133,   431,   135,   136,   137,   138,   139,   140,     0,
       0,   141,   142,     0,     0,   432,   145,     0,   146,   147,
     148,   149,   150,   151,   152,   433,   154,   435,   156,   436,
     437,   159,   160,   161,   162,   163,   164,   438,   166,   167,
     439,   440,   441,   171,   442,   443,   444,   175,   445,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     0,   190,   191,     0,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,     1,
       0,     0,     0,     0,     0,     0,     2,     3,     0,     0,
       0,     0,     0,     0,   407,   408,     0,   409,   410,   411,
     412,   413,   414,    13,    14,    15,    16,    17,    18,   415,
     416,   417,    22,   418,    24,    25,    26,    27,     0,   419,
     420,    30,   421,   422,   423,    34,    35,    36,    37,    38,
      39,    40,    41,    42,   424,   425,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,     0,     0,    62,     0,    63,    64,    65,   426,     0,
       0,    69,    70,    71,     0,     0,     0,    73,     0,     0,
       0,     0,    75,    76,    77,     0,     0,    80,    81,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,     0,
      90,     0,     0,     0,   427,    92,    93,     0,     0,     0,
       0,     0,     0,     0,    96,    97,    98,     0,   100,   101,
     102,     0,     0,     0,     0,     0,     0,   106,   107,     0,
       0,     0,     0,   108,   109,   110,   430,   112,   113,   114,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,     0,   123,     0,     0,     0,     0,
       0,   128,     0,   129,     0,   130,   131,   132,   133,   431,
     135,   136,   137,   138,   139,   140,     0,     0,   141,   142,
       0,     0,   432,   145,     0,   146,   147,   148,   149,   150,
     151,   152,   433,   434,   435,   156,   436,   437,   159,   160,
     161,   162,   163,   164,   438,   166,   167,   439,   440,   441,
     171,   442,   443,   444,   175,   445,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,     0,
     190,   191,     0,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   455,     0,     0,     0,
       3,     0,     0,     0,     0,     0,     0,   407,   408,     0,
     409,   410,   411,   412,   413,   414,    13,    14,    15,    16,
      17,    18,   415,   416,   417,    22,   418,    24,    25,    26,
      27,     0,   419,   420,    30,   421,   422,   423,    34,    35,
      36,    37,    38,    39,    40,    41,    42,   424,   425,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,     0,     0,    62,     0,    63,    64,
      65,   426,     0,     0,    69,    70,    71,     0,     0,     0,
      73,     0,     0,     0,     0,    75,    76,    77,     0,     0,
      80,    81,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,     0,    90,     0,     0,     0,   427,    92,    93,
       0,     0,     0,     0,     0,     0,     0,    96,    97,    98,
       0,   100,   101,   102,   456,     0,     0,   457,     0,     0,
     106,   107,     0,     0,     0,     0,   108,   109,   110,   430,
     112,   113,   114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,     0,   123,     0,
       0,     0,     0,     0,     0,     0,   129,     0,   130,   131,
     132,   133,   431,   135,   136,   137,   138,   139,   140,     0,
       0,   141,   142,     0,     0,   432,   145,     0,   146,   147,
     148,   149,   150,   151,   152,   433,   434,   435,   156,   436,
     437,   159,   160,   161,   162,   163,   164,   438,   166,   167,
     439,   440,   441,   171,   442,   443,   444,   175,   445,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     0,   190,   191,     0,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   455,
       0,     0,     0,     3,     0,   678,     0,     0,     0,     0,
     407,   408,     0,   409,   410,   411,   412,   413,   414,    13,
      14,    15,    16,    17,    18,   415,   416,   417,    22,   418,
      24,    25,    26,    27,     0,   419,   420,    30,   421,   422,
     423,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     424,   425,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,     0,     0,    62,
       0,    63,    64,    65,   426,     0,     0,    69,    70,    71,
       0,     0,     0,    73,     0,     0,     0,     0,    75,    76,
      77,     0,     0,    80,    81,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,     0,    90,     0,     0,     0,
     427,    92,    93,     0,     0,     0,     0,     0,     0,     0,
      96,    97,    98,     0,   100,   101,   102,     0,     0,     0,
       0,     0,     0,   106,   107,     0,     0,     0,     0,   108,
     109,   110,   430,   112,   113,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     679,   123,     0,     0,     0,     0,     0,     0,     0,   129,
       0,   130,   131,   132,   133,   431,   135,   136,   137,   138,
     139,   140,     0,     0,   141,   142,     0,     0,   432,   145,
       0,   146,   147,   148,   149,   150,   151,   152,   433,   434,
     435,   156,   436,   437,   159,   160,   161,   162,   163,   164,
     438,   166,   167,   439,   440,   441,   171,   442,   443,   444,
     175,   445,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,     0,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   455,     0,     0,     0,     3,     0,     0,     0,
       0,     0,     0,   407,   408,     0,   409,   410,   411,   412,
     413,   414,    13,    14,    15,    16,    17,    18,   415,   416,
     417,    22,   418,    24,    25,    26,    27,     0,   419,   420,
      30,   421,   422,   423,    34,    35,    36,    37,    38,    39,
      40,    41,    42,   424,   425,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
       0,     0,    62,     0,    63,    64,    65,   426,     0,     0,
      69,    70,    71,     0,     0,     0,    73,     0,     0,     0,
       0,    75,    76,    77,     0,     0,    80,    81,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,     0,    90,
       0,     0,     0,   427,    92,    93,     0,     0,     0,     0,
       0,     0,     0,    96,    97,    98,     0,   100,   101,   102,
       0,     0,     0,     0,     0,     0,   106,   107,     0,     0,
       0,     0,   108,   109,   110,   430,   112,   113,   114,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,     0,   123,     0,     0,     0,     0,     0,
       0,     0,   129,     0,   130,   131,   132,   133,   431,   135,
     136,   137,   138,   139,   140,     0,     0,   141,   142,     0,
       0,   432,   145,     0,   146,   147,   148,   149,   150,   151,
     152,   433,   434,   435,   156,   436,   437,   159,   160,   161,
     162,   163,   164,   438,   166,   167,   439,   440,   441,   171,
     442,   443,   444,   175,   445,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,   190,
     191,     0,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   488,     0,     3,     0,     0,
       0,     0,     0,     0,   407,   408,     0,   409,   410,   411,
     412,   413,   414,    13,    14,    15,    16,    17,    18,   415,
     416,   417,    22,   418,    24,    25,    26,    27,     0,   419,
     420,    30,   421,   422,   423,    34,    35,    36,    37,    38,
      39,    40,    41,    42,   424,   425,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,     0,     0,    62,     0,    63,    64,    65,   426,     0,
       0,    69,    70,    71,     0,     0,     0,    73,     0,     0,
       0,     0,    75,    76,    77,     0,     0,    80,    81,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,     0,
      90,     0,     0,     0,   427,    92,    93,     0,     0,     0,
       0,     0,     0,     0,    96,    97,    98,     0,   100,   101,
     102,     0,     0,     0,     0,     0,     0,   106,   107,     0,
       0,     0,     0,   108,   109,   110,   430,   112,   113,   114,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   122,     0,   123,     0,     0,     0,     0,
       0,     0,     0,   129,     0,   130,   131,   132,   133,   431,
     135,   136,   137,   138,   139,   140,     0,     0,   141,   142,
       0,     0,   432,   145,     0,   146,   147,   148,   149,   150,
     151,   152,   433,   434,   435,   156,   436,   437,   159,   160,
     161,   162,   163,   164,   438,   166,   167,   439,   440,   441,
     171,   442,   443,   444,   175,   445,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,     0,
     190,   191,     0,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,     3,     0,     0,     0,
       0,     0,     0,   407,   408,     0,   409,   410,   411,   412,
     413,   414,    13,    14,    15,    16,    17,    18,   415,   416,
     417,    22,   418,    24,    25,    26,    27,     0,   419,   420,
      30,   421,   422,   423,    34,    35,    36,    37,    38,    39,
      40,    41,    42,   424,   425,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
       0,     0,    62,     0,    63,    64,    65,   426,     0,     0,
      69,    70,    71,     0,     0,     0,    73,     0,     0,     0,
       0,    75,    76,    77,     0,     0,    80,    81,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,     0,    90,
       0,     0,     0,   427,    92,    93,     0,     0,     0,     0,
       0,     0,     0,    96,    97,    98,     0,   100,   101,   102,
     428,     0,     0,   429,     0,     0,   106,   107,     0,     0,
       0,     0,   108,   109,   110,   430,   112,   113,   114,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,   122,     0,   123,     0,     0,     0,     0,     0,
       0,     0,   129,     0,   130,   131,   132,   133,   431,   135,
     136,   137,   138,   139,   140,     0,     0,   141,   142,     0,
       0,   432,   145,     0,   146,   147,   148,   149,   150,   151,
     152,   433,   434,   435,   156,   436,   437,   159,   160,   161,
     162,   163,   164,   438,   166,   167,   439,   440,   441,   171,
     442,   443,   444,   175,   445,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,   190,
     191,     0,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,     3,     0,     0,     0,     0,
       0,     0,   407,   408,     0,   409,   410,   411,   412,   413,
     414,    13,    14,    15,    16,    17,    18,   415,   416,   417,
      22,   418,    24,    25,    26,    27,     0,   419,   420,    30,
     421,   422,   423,    34,    35,    36,    37,    38,    39,    40,
      41,    42,   424,   425,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,     0,
       0,    62,     0,    63,    64,    65,   426,     0,     0,    69,
      70,    71,     0,     0,     0,    73,     0,     0,     0,     0,
      75,    76,    77,     0,     0,    80,    81,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,     0,    90,     0,
       0,     0,   427,    92,    93,     0,     0,     0,     0,     0,
       0,     0,    96,    97,    98,     0,   100,   101,   102,   471,
       0,     0,   472,     0,     0,   106,   107,     0,     0,     0,
       0,   108,   109,   110,   430,   112,   113,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,   122,     0,   123,     0,     0,     0,     0,     0,     0,
       0,   129,     0,   130,   131,   132,   133,   431,   135,   136,
     137,   138,   139,   140,     0,     0,   141,   142,     0,     0,
     432,   145,     0,   146,   147,   148,   149,   150,   151,   152,
     433,   434,   435,   156,   436,   437,   159,   160,   161,   162,
     163,   164,   438,   166,   167,   439,   440,   441,   171,   442,
     443,   444,   175,   445,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,     0,   190,   191,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,     3,     0,     0,     0,     0,     0,
       0,   407,   408,     0,   409,   410,   411,   412,   413,   414,
      13,    14,    15,    16,    17,    18,   415,   416,   417,    22,
     418,    24,    25,    26,    27,     0,   419,   420,    30,   421,
     422,   423,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   424,   425,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,     0,     0,
      62,     0,    63,    64,    65,   426,     0,     0,    69,    70,
      71,     0,     0,     0,    73,     0,     0,     0,     0,    75,
      76,    77,     0,     0,    80,    81,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,     0,    90,     0,     0,
       0,   427,    92,    93,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,     0,   100,   101,   102,     0,     0,
       0,     0,     0,     0,   106,   107,     0,     0,     0,     0,
     108,   109,   110,   430,   112,   113,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
     122,   661,   123,     0,     0,     0,     0,     0,   662,     0,
     129,     0,   130,   131,   132,   133,   431,   135,   136,   137,
     138,   139,   140,     0,     0,   141,   142,     0,     0,   432,
     145,     0,   146,   147,   148,   149,   150,   151,   152,   433,
     434,   435,   156,   436,   437,   159,   160,   161,   162,   163,
     164,   438,   166,   167,   439,   440,   441,   171,   442,   443,
     444,   175,   445,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,     0,   190,   191,     0,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,     3,     0,     0,     0,     0,     0,     0,
     407,   408,     0,   409,   410,   411,   412,   413,   414,    13,
      14,    15,    16,    17,    18,   415,   416,   417,    22,   418,
      24,    25,    26,    27,     0,   419,   420,    30,   421,   422,
     423,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     424,   425,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,     0,     0,    62,
       0,    63,    64,    65,   426,     0,     0,    69,    70,    71,
       0,     0,     0,    73,     0,     0,     0,     0,    75,    76,
      77,     0,     0,    80,    81,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,     0,    90,     0,     0,     0,
     427,    92,    93,     0,     0,     0,     0,     0,     0,     0,
      96,    97,    98,     0,   100,   101,   102,     0,     0,     0,
       0,     0,     0,   106,   107,     0,     0,     0,     0,   108,
     109,   110,   430,   112,   113,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,   122,
     702,   123,     0,     0,     0,     0,     0,   703,     0,   129,
       0,   130,   131,   132,   133,   431,   135,   136,   137,   138,
     139,   140,     0,     0,   141,   142,     0,     0,   432,   145,
       0,   146,   147,   148,   149,   150,   151,   152,   433,   434,
     435,   156,   436,   437,   159,   160,   161,   162,   163,   164,
     438,   166,   167,   439,   440,   441,   171,   442,   443,   444,
     175,   445,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     0,   190,   191,     0,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,     3,     0,     0,     0,     0,     0,     0,   407,
     408,     0,   409,   410,   474,   412,   475,   476,    13,    14,
      15,    16,    17,    18,   415,   416,   477,    22,   418,    24,
      25,    26,    27,     0,   419,   420,    30,   421,   422,   423,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     0,     0,    62,     0,
      63,    64,    65,   478,     0,     0,    69,    70,    71,     0,
       0,     0,    73,     0,     0,     0,     0,    75,    76,    77,
       0,     0,    80,    81,  1241,     0,     0,     0,     0,     0,
      86,    87,    88,    89,     0,    90,     0,     0,     0,   427,
      92,    93,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    98,     0,   100,   101,   958,     0,     0,     0,     0,
       0,     0,   106,   107,     0,     0,     0,     0,   108,   109,
     110,   430,   112,   113,   114,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,   122,     0,
     123,   124,     0,     0,     0,     0,     0,     0,   129,     0,
     130,   131,   132,   133,   431,   135,   136,   137,   138,   139,
     140,     0,     0,   959,   142,     0,     0,   432,   145,     0,
     146,   147,   148,   149,   150,   151,   152,   433,   154,   435,
     156,   436,   437,   159,   160,   161,   162,   163,   164,   438,
     166,   167,   439,   440,   441,   171,   442,   443,   444,   175,
     445,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,     0,   190,   191,     0,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,     3,     0,     0,     0,     0,     0,     0,   407,   408,
       0,   409,   410,   474,   412,   475,   476,    13,    14,    15,
      16,    17,    18,   415,   416,   477,    22,   418,    24,    25,
      26,    27,     0,   419,   420,    30,   421,   422,   423,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,     0,     0,    62,     0,    63,
      64,    65,   478,     0,     0,    69,    70,    71,     0,     0,
       0,    73,     0,     0,     0,     0,    75,    76,    77,     0,
       0,    80,    81,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,     0,    90,     0,     0,     0,   427,    92,
      93,     0,     0,     0,     0,     0,     0,     0,    96,    97,
      98,     0,   100,   101,   958,     0,     0,     0,     0,     0,
       0,   106,   107,     0,     0,     0,     0,   108,   109,   110,
     430,   112,   113,   114,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   122,     0,   123,
     124,     0,     0,     0,     0,     0,     0,   129,     0,   130,
     131,   132,   133,   431,   135,   136,   137,   138,   139,   140,
       0,     0,   959,   142,     0,     0,   432,   145,     0,   146,
     147,   148,   149,   150,   151,   152,   433,   154,   435,   156,
     436,   437,   159,   160,   161,   162,   163,   164,   438,   166,
     167,   439,   440,   441,   171,   442,   443,   444,   175,   445,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,     0,   190,   191,     0,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
       3,     0,     0,     0,     0,     0,     0,   407,   408,     0,
     409,   410,   474,   412,   475,   476,    13,    14,    15,    16,
      17,    18,   415,   416,   477,    22,   418,    24,    25,    26,
      27,     0,   419,   420,    30,   421,   422,   423,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,     0,     0,    62,     0,    63,    64,
      65,   478,     0,     0,    69,    70,    71,     0,     0,     0,
      73,     0,     0,     0,     0,    75,    76,    77,     0,     0,
      80,    81,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,     0,    90,     0,     0,     0,   427,    92,    93,
       0,     0,     0,     0,     0,     0,     0,    96,    97,    98,
       0,   100,   101,   958,     0,     0,     0,     0,     0,     0,
     106,   107,     0,     0,     0,     0,   108,   109,   110,   430,
     112,   113,   114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,   122,     0,   123,   124,
       0,     0,     0,     0,     0,     0,   129,     0,   130,   131,
     132,   133,   431,   135,   136,   137,   138,   139,   140,     0,
       0,   141,   142,     0,     0,   432,   145,     0,   146,   147,
     148,   149,   150,   151,   152,   433,   154,   435,   156,   436,
     437,   159,   160,   161,   162,   163,   164,   438,   166,   167,
     439,   440,   441,   171,   442,   443,   444,   175,   445,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     0,   190,   191,     0,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,     3,
       0,     0,     0,     0,     0,     0,   407,   408,     0,   409,
     410,   411,   412,   413,   414,    13,    14,    15,    16,    17,
      18,   415,   416,   417,    22,   418,    24,    25,    26,    27,
       0,   419,   420,    30,   421,   422,   423,    34,    35,    36,
      37,    38,    39,    40,    41,    42,   424,   425,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     0,     0,    62,     0,    63,    64,    65,
     426,     0,     0,    69,    70,    71,     0,     0,     0,    73,
       0,     0,     0,     0,    75,    76,    77,     0,     0,    80,
      81,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,     0,    90,     0,     0,     0,   427,    92,    93,     0,
       0,     0,     0,     0,     0,     0,    96,    97,    98,     0,
     100,   101,   102,     0,     0,     0,     0,     0,     0,   106,
     107,     0,     0,     0,     0,   108,   109,   110,   430,   112,
     113,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   122,     0,   123,     0,     0,
       0,     0,     0,     0,     0,   129,     0,   130,   131,   132,
     133,   431,   135,   136,   137,   138,   139,   140,     0,     0,
     141,   142,     0,     0,   432,   145,     0,   146,   147,   148,
     149,   150,   151,   152,   433,   434,   435,   156,   436,   437,
     159,   160,   161,   162,   163,   164,   438,   166,   167,   439,
     440,   441,   171,   442,   443,   444,   175,   445,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,     0,   190,   191,     0,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234
  };

  /* YYCHECK.  */
  const short int
  xquery_parser::yycheck_[] =
  {
         9,   568,   569,   570,   571,   751,   709,   793,   794,   794,
     564,   844,    21,   791,   792,   684,   373,   116,   883,   688,
     522,   999,   127,   920,  1056,   859,    68,  1153,    20,   987,
     773,   544,   688,   547,    60,   549,   550,   110,   552,     7,
     554,   103,   463,   132,    21,   791,   792,    86,   562,   563,
      88,  1126,    30,  1295,    32,    33,    86,    66,    88,    68,
       8,     9,    86,     8,    42,    99,    85,    88,    86,  1164,
    1165,    20,   942,    82,    19,   496,   497,   823,   499,   500,
     501,   502,    99,    20,   121,    99,   507,    65,    66,   510,
      43,    99,    99,   132,   110,   104,   453,   454,   136,   755,
      99,   757,   523,    92,     8,     9,   136,   116,   854,   118,
     102,    89,   533,   534,    30,   124,   120,   120,   105,    99,
     142,   136,   114,   145,   126,    86,   237,   238,    25,    99,
     157,    88,    56,    57,   145,    98,   136,    20,    88,    58,
      59,   142,   179,   155,    41,    86,   138,    95,   259,    65,
     142,  1021,   171,   145,   117,   105,     8,     9,   170,   175,
     829,   175,   179,   190,   165,   113,   119,   115,   113,    88,
     115,   179,   179,   262,   595,   136,   198,   176,    86,   124,
     206,   185,   185,    45,     4,    86,   110,   189,     8,    51,
     224,    95,    54,    55,   142,   163,   176,   142,   146,   177,
      62,   142,   226,  1278,   309,   175,  1238,  1302,   226,   113,
    1043,   115,   149,   916,   162,   769,   770,  1082,  1052,  1116,
     246,   294,   105,   262,   262,   202,   175,   248,   249,  1126,
     899,  1473,   262,    99,   149,   183,   214,   226,   142,   260,
       8,   897,   146,    95,   757,  1203,   989,   262,  1490,  1227,
     764,    19,   241,   201,   241,  1497,  1382,    20,   162,   175,
     252,   113,   262,   115,   621,   254,   149,   256,   142,   210,
     211,    53,   314,   282,    99,   317,   110,   266,     4,   183,
     269,   380,     8,   270,   271,    30,   273,   274,  1066,    34,
     142,   248,   249,   113,   146,   115,   158,   201,   160,   207,
     208,   145,   401,   123,    99,   314,   207,   208,   317,   175,
     162,    88,   174,  1059,   222,  1347,   972,    99,   675,    99,
    1066,   222,   142,    99,    99,   746,    71,   127,   105,    99,
      99,   183,   753,   206,    88,    99,   110,    26,   200,   102,
     174,   403,   142,   189,   406,   113,    99,   115,   134,   201,
     175,   114,   198,    98,   127,   364,   124,    86,   457,    48,
     214,   370,   221,   189,   223,   219,   428,   376,   145,   142,
      92,   380,   198,   246,   142,   138,  1408,   386,   164,   142,
     175,  1278,   145,   105,   393,   447,   448,   113,   450,   115,
     452,   145,   401,   402,   456,   175,   182,   123,  1430,   175,
     175,    86,   316,  1237,   825,   175,   175,   136,   322,   471,
     831,   175,   258,   158,   170,   109,   142,   142,   264,  1397,
     429,   988,   175,   868,   486,   870,   272,   287,   184,   147,
     492,   985,   110,     8,     9,   295,  1214,    58,    59,   110,
      61,   135,   127,   997,   946,   147,   164,   132,   457,   511,
    1482,   460,   461,   462,   148,   365,  1488,   180,   181,   369,
     469,   137,   164,   472,   909,    54,   911,    88,  1214,   890,
     891,  1503,   893,   482,   895,   832,   833,   258,   154,   137,
     837,   586,   587,   264,   145,   187,   170,   820,   182,   110,
     214,   272,   216,  1358,   915,   504,   154,    87,  1416,  1417,
     184,   834,   241,   512,   861,   926,   927,   928,    98,   930,
     931,   932,   933,   934,   935,   145,   937,   938,   108,   142,
      95,   583,   145,   126,  1442,   110,   588,   117,   949,    88,
    1448,   270,   271,    92,   273,   274,   139,   187,   113,   189,
     115,    34,    35,    36,  1213,   142,    39,   968,   198,   970,
     971,   288,   289,  1331,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,   127,   258,   214,   142,   216,   132,
     263,   146,   671,  1276,   142,   674,   589,   127,  1281,   592,
     142,   594,   132,   145,   221,  1331,   223,   162,    88,   598,
     239,  1012,    92,   242,  1427,   657,   658,   239,   157,  1335,
     242,   145,   664,   204,  1340,   118,   119,   616,   183,   279,
     280,  1032,   210,   211,   212,    58,    59,   118,   119,   681,
     214,  1188,   110,   367,   368,   142,   201,   227,  1195,  1196,
     145,  1409,   565,   566,   572,   573,  1333,  1334,   574,   575,
     649,   650,   651,   705,   231,  1431,  1431,   231,   142,   110,
       0,   179,   179,  1207,   156,  1076,    84,   157,   251,    68,
      93,   143,   671,  1409,   188,   674,  1369,   226,  1089,   731,
    1373,   157,  1093,  1094,    94,  1096,   145,    34,    34,    20,
    1101,   141,   241,   692,   243,   244,   245,   110,   142,   281,
     286,   286,   291,   142,   253,   254,   142,   256,   175,   708,
     175,   142,   261,   122,   190,   110,   768,   266,   267,   268,
     269,   130,   131,   268,   133,   268,   110,  1420,   142,   145,
    1077,   140,   175,   145,   145,   144,   226,   146,   145,   145,
      27,    15,   151,   219,   202,  1156,   745,   175,    20,   175,
     220,   241,   751,   243,   244,   245,  1167,    25,   167,  1316,
    1317,   158,   110,   159,   254,   159,   256,    99,   220,  1180,
      86,   261,  1183,    86,  1185,    86,   266,   267,   268,   269,
     145,    20,   191,   192,   193,   194,   195,   196,   149,    99,
      99,   149,   791,   792,   793,   794,   117,   122,    20,   275,
     276,   277,   278,   279,   122,   281,   282,   283,   284,   285,
     862,   175,   287,  1160,   142,   172,   172,   172,   172,   172,
      30,    88,    88,   175,   823,   175,   175,   172,   132,    99,
     172,   175,   175,  1390,   175,   172,   172,   172,    86,   226,
     214,   132,   175,   172,   159,   179,   110,   110,   110,   110,
     136,   252,  1263,   257,  1265,   172,   132,   250,    86,   173,
    1271,   269,   122,   132,   172,   216,   271,   287,    92,   868,
     272,   870,   272,   172,  1285,  1286,  1287,  1288,  1289,   172,
    1291,  1292,   122,   142,   186,   122,    88,   142,   172,   110,
     136,    34,    35,    36,    37,    38,    39,   149,   110,   132,
     142,   172,  1313,    46,    27,    20,   110,  1254,   246,    52,
     909,   235,   911,   142,   172,   110,    71,    99,    99,   145,
      63,    64,   145,   136,    67,   136,   175,    70,    71,   172,
     136,    47,    86,   272,   134,   247,    20,    20,   226,   216,
     247,   216,  1353,   216,  1355,   272,  1357,   179,   175,   275,
     175,   134,   172,    99,   132,   954,   175,   175,   957,  1306,
     103,   104,   105,   293,   136,   110,   965,  1019,   967,   110,
      61,   122,   175,     6,   175,    34,    35,    36,    37,    38,
      39,   179,   226,   174,   222,   132,   222,    46,   222,    98,
      98,   222,   136,   110,    86,   175,   175,   172,    20,    20,
     265,   159,   249,   174,   172,   116,   149,    88,   172,   172,
     172,   172,    71,    20,   157,  1014,    88,  1069,   275,   159,
     255,    86,    59,   110,    99,   185,  1437,   214,    86,   185,
     110,   110,  1084,   185,    85,   174,   292,   214,   255,   174,
     171,   110,   110,   185,   103,   104,   105,   190,  1459,   142,
     110,  1462,   293,   187,   175,   214,  1108,   110,   521,   235,
     275,   521,   292,   620,   238,   238,   209,  1066,   824,  1028,
    1122,   241,  1483,   378,   397,  1059,   219,  1408,  1430,  1149,
     296,   806,   296,  1215,   525,   242,   904,  1086,   281,   957,
    1269,  1091,  1091,  1103,  1169,  1157,   949,   240,   157,  1167,
    1458,   482,  1067,  1102,  1164,  1086,   546,   545,   302,   306,
     567,   709,  1448,  1442,   823,   870,  1053,  1027,  1144,  1154,
    1116,   997,   769,   985,  1123,  1207,   770,  1345,   989,  1226,
    1202,   190,   275,   276,   277,   278,   279,    -1,   281,   282,
     283,   284,   285,   986,    -1,  1144,    -1,   290,   470,    -1,
     470,    -1,    -1,    -1,  1153,    -1,    -1,    -1,  1157,    -1,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1214,   275,   276,   277,   278,
     279,    -1,   281,   282,   283,   284,   285,    -1,    -1,    -1,
      -1,   290,    -1,    -1,    -1,    -1,  1235,    -1,    -1,    -1,
      -1,    -1,  1241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1266,  1267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1277,    -1,
      -1,    -1,    -1,  1282,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1331,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1354,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1370,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1382,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1405,    -1,  1407,    -1,
    1409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1423,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1431,    -1,    -1,    -1,    -1,    -1,    -1,  1438,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1460,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1478,
      -1,  1480,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    -1,  1492,    -1,    17,    18,  1496,    20,    -1,
      -1,    -1,  1501,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    97,    98,    -1,    -1,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    -1,   114,    -1,   116,   117,   118,   119,    -1,   121,
      -1,    -1,    -1,   125,   126,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,   140,   141,
      -1,    -1,    -1,   145,   146,   147,   148,   149,    -1,    -1,
      -1,    -1,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    -1,   164,   165,    -1,    -1,   168,   169,   170,    -1,
      -1,    -1,   174,    -1,   176,   177,   178,    -1,   180,   181,
     182,    -1,   184,    -1,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,    -1,    -1,   199,   200,   201,
      -1,   203,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
     252,    -1,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    97,    98,    -1,    -1,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
     114,    -1,   116,   117,   118,   119,    -1,   121,    -1,    -1,
      -1,   125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,   140,   141,    -1,    -1,
      -1,   145,   146,   147,   148,   149,    -1,    -1,    -1,    -1,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
     164,   165,    -1,    -1,   168,   169,   170,    -1,    -1,    -1,
     174,   175,   176,   177,   178,    -1,   180,   181,   182,    -1,
     184,    -1,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,   201,    -1,   203,
     204,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,   252,    -1,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    -1,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    -1,    -1,
      97,    98,    -1,    -1,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,   114,    -1,   116,
     117,   118,   119,    -1,   121,    -1,    -1,    -1,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,   140,   141,    -1,    -1,    -1,   145,   146,
     147,   148,   149,    -1,    -1,    -1,    -1,   154,   155,   156,
     157,   158,   159,   160,   161,   162,    -1,   164,   165,    -1,
      -1,   168,   169,   170,    -1,   172,    -1,   174,    -1,   176,
     177,   178,    -1,   180,   181,   182,    -1,   184,    -1,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
      -1,    -1,   199,   200,   201,    -1,   203,   204,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,   252,    -1,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    97,    98,    -1,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,   114,    -1,   116,   117,   118,   119,
      -1,   121,    -1,    -1,    -1,   125,   126,   127,   128,   129,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
     140,   141,    -1,    -1,    -1,   145,   146,   147,   148,   149,
      -1,    -1,    -1,    -1,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,    -1,    -1,   168,   169,
     170,    -1,    -1,    -1,   174,   175,   176,   177,   178,    -1,
     180,   181,   182,    -1,   184,    -1,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,    -1,    -1,   199,
     200,   201,    -1,   203,   204,    -1,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,   252,    -1,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    -1,    -1,    97,    98,    -1,    -1,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,   114,    -1,   116,   117,   118,   119,    -1,   121,    -1,
      -1,    -1,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,    -1,
      -1,    -1,   145,   146,   147,   148,   149,    -1,    -1,    -1,
      -1,   154,   155,   156,   157,   158,   159,   160,   161,   162,
      -1,   164,   165,    -1,    -1,   168,   169,   170,    -1,   172,
      -1,   174,    -1,   176,   177,   178,    -1,   180,   181,   182,
      -1,   184,    -1,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,    -1,    -1,   199,   200,   201,    -1,
     203,   204,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,   252,
      -1,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    -1,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    97,    98,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,   114,    -1,
     116,   117,   118,   119,    -1,   121,    -1,    -1,    -1,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,   140,   141,    -1,    -1,    -1,   145,
     146,   147,   148,   149,    -1,    -1,    -1,    -1,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
      -1,    -1,   168,   169,   170,    -1,   172,    -1,   174,    -1,
     176,   177,   178,    -1,   180,   181,   182,    -1,   184,    -1,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,    -1,    -1,   199,   200,   201,    -1,   203,   204,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,   252,    -1,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    -1,    -1,    97,    98,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,   114,    -1,   116,   117,   118,
     119,    -1,   121,    -1,    -1,    -1,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,    -1,    -1,    -1,   145,   146,   147,   148,
     149,    -1,    -1,    -1,    -1,   154,   155,   156,   157,   158,
     159,   160,   161,   162,    -1,   164,   165,    -1,    -1,   168,
     169,   170,    -1,   172,    -1,   174,    -1,   176,   177,   178,
      -1,   180,   181,   182,    -1,   184,    -1,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,    -1,    -1,
     199,   200,   201,    -1,   203,   204,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,   252,    -1,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    97,    98,    -1,    -1,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    -1,   114,    -1,   116,   117,   118,   119,    -1,   121,
      -1,    -1,    -1,   125,   126,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,   140,   141,
      -1,    -1,    -1,   145,   146,   147,   148,   149,    -1,    -1,
      -1,    -1,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    -1,   164,   165,    -1,    -1,   168,   169,   170,    -1,
     172,    -1,   174,    -1,   176,   177,   178,    -1,   180,   181,
     182,    -1,   184,    -1,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,    -1,    -1,   199,   200,   201,
      -1,   203,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
     252,    -1,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      -1,    -1,    97,    98,    -1,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,   114,
      -1,   116,   117,   118,   119,    -1,   121,    -1,    -1,    -1,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,    -1,    -1,    -1,
     145,   146,   147,   148,   149,    -1,    -1,    -1,    -1,   154,
     155,   156,   157,   158,   159,   160,   161,   162,    -1,   164,
     165,    -1,    -1,   168,   169,   170,    -1,   172,    -1,   174,
      -1,   176,   177,   178,    -1,   180,   181,   182,    -1,   184,
      -1,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,    -1,    -1,   199,   200,   201,    -1,   203,   204,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,   252,    -1,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    97,
      98,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    -1,   114,    -1,   116,   117,
     118,   119,    -1,   121,    -1,    -1,    -1,   125,   126,   127,
     128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,   140,   141,    -1,    -1,    -1,   145,   146,   147,
     148,   149,    -1,    -1,    -1,    -1,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    -1,   164,   165,    -1,    -1,
     168,   169,   170,    -1,   172,    -1,   174,    -1,   176,   177,
     178,    -1,   180,   181,   182,    -1,   184,    -1,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,    -1,
      -1,   199,   200,   201,    -1,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,   252,    -1,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    -1,    -1,    97,    98,    -1,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    -1,   114,    -1,   116,   117,   118,   119,    -1,
     121,    -1,    -1,    -1,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,   140,
     141,    -1,    -1,    -1,   145,   146,   147,   148,   149,    -1,
      -1,    -1,    -1,   154,   155,   156,   157,   158,   159,   160,
     161,   162,    -1,   164,   165,    -1,    -1,   168,   169,   170,
      -1,    -1,    -1,   174,    -1,   176,   177,   178,    -1,   180,
     181,   182,    -1,   184,    -1,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,    -1,    -1,   199,   200,
     201,    -1,   203,   204,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,   252,    -1,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    97,    98,    -1,    -1,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
     114,    -1,   116,   117,   118,   119,    -1,   121,    -1,    -1,
      -1,   125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,   140,   141,    -1,    -1,
      -1,   145,   146,   147,   148,   149,    -1,    -1,    -1,    -1,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
     164,   165,    -1,    -1,   168,   169,   170,    -1,    -1,    -1,
     174,    -1,   176,   177,   178,    -1,   180,   181,   182,    -1,
     184,    -1,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,   201,    -1,   203,
     204,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,   252,    -1,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    -1,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    -1,    -1,
      97,    98,    -1,    -1,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,   114,    -1,   116,
     117,   118,   119,    -1,   121,    -1,    -1,    -1,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,   138,   139,   140,   141,    -1,    -1,    -1,   145,   146,
     147,   148,   149,    -1,    -1,    -1,    -1,   154,   155,   156,
     157,   158,   159,   160,   161,   162,    -1,   164,   165,    -1,
      -1,   168,   169,   170,    -1,    -1,    -1,   174,    -1,   176,
     177,   178,    -1,   180,   181,   182,    -1,   184,    -1,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
      -1,    -1,   199,   200,   201,    -1,   203,   204,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,   252,    -1,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    97,    98,    -1,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,   114,    -1,   116,   117,   118,   119,
      -1,   121,    -1,    -1,    -1,   125,   126,   127,   128,   129,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
     140,   141,    -1,    -1,    -1,   145,   146,   147,   148,   149,
      -1,    -1,    -1,    -1,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,    -1,    -1,   168,   169,
     170,    -1,    -1,    -1,   174,    -1,   176,   177,   178,    -1,
     180,   181,   182,    -1,   184,    -1,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,    -1,    -1,   199,
     200,   201,    -1,   203,   204,    -1,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      -1,   251,   252,    -1,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    -1,    -1,    97,    98,    -1,    -1,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,   114,    -1,   116,   117,   118,   119,    -1,   121,    -1,
      -1,    -1,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,   138,   139,   140,   141,    -1,
      -1,    -1,   145,   146,   147,   148,   149,    -1,    -1,    -1,
      -1,   154,   155,   156,   157,   158,   159,   160,   161,   162,
      -1,   164,   165,    -1,    -1,   168,   169,   170,    -1,    -1,
      -1,   174,    -1,   176,   177,   178,    -1,   180,   181,   182,
      -1,   184,    -1,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,    -1,    -1,   199,   200,   201,    -1,
     203,   204,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,   252,
      -1,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    -1,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    97,    98,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,   114,    -1,
     116,   117,   118,   119,    -1,   121,    -1,    -1,    -1,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,   140,   141,    -1,    -1,    -1,   145,
     146,   147,   148,   149,    -1,    -1,    -1,    -1,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
      -1,    -1,   168,   169,   170,    -1,    -1,    -1,   174,    -1,
     176,   177,   178,    -1,   180,   181,   182,    -1,   184,    -1,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,    -1,    -1,   199,   200,   201,    -1,   203,   204,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,   252,    -1,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    -1,    -1,    97,    98,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,   114,    -1,   116,   117,   118,
     119,    -1,   121,    -1,    -1,    -1,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,    -1,    -1,    -1,   145,   146,   147,   148,
     149,    -1,    -1,    -1,    -1,   154,   155,   156,   157,   158,
     159,   160,   161,   162,    -1,   164,   165,    -1,    -1,   168,
     169,   170,    -1,    -1,    -1,   174,    -1,   176,   177,   178,
      -1,   180,   181,   182,    -1,   184,    -1,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,    -1,    -1,
     199,   200,   201,    -1,   203,   204,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,   252,    -1,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    97,    98,    -1,    -1,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    -1,   114,    -1,   116,   117,   118,   119,    -1,   121,
      -1,    -1,    -1,   125,   126,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,   140,   141,
      -1,    -1,    -1,   145,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,    -1,    -1,    -1,   168,   169,   170,    -1,
      -1,    -1,   174,    -1,   176,   177,   178,    -1,   180,   181,
     182,    -1,   184,    -1,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,    -1,    -1,   199,   200,   201,
      -1,   203,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
     252,    -1,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      -1,    -1,    97,    98,    -1,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,   114,
      -1,   116,   117,   118,   119,    -1,   121,    -1,    -1,    -1,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,    -1,    -1,    -1,
     145,   146,    -1,   148,   149,    -1,    -1,    -1,    -1,   154,
     155,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
      -1,    -1,    -1,   168,   169,   170,    -1,    -1,    -1,   174,
      -1,   176,   177,   178,    -1,    -1,    -1,   182,    -1,   184,
      -1,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,    -1,    -1,   199,   200,   201,    -1,   203,   204,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,   252,    -1,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    -1,    -1,    84,    -1,    86,    87,
      88,    89,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,   103,   104,   105,    -1,    -1,
     108,   109,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
     118,   119,    -1,   121,    -1,    -1,    -1,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
      -1,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,
     148,   149,    -1,    -1,    -1,    -1,   154,   155,   156,   157,
     158,   159,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    -1,    -1,    -1,   174,    -1,   176,   177,
      -1,    -1,    -1,    -1,   182,    -1,   184,    -1,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,    -1,
      -1,   199,   200,    -1,    -1,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,   252,    -1,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    84,    -1,    86,    87,    88,    89,    -1,
      -1,    92,    93,    94,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,   103,   104,   105,    -1,    -1,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,   118,   119,    -1,
     121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,    -1,   139,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,    -1,
      -1,    -1,    -1,   154,   155,   156,   157,   158,   159,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,
      -1,   182,    -1,   184,    -1,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,    -1,    -1,   199,   200,
      -1,    -1,   203,   204,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,   252,    -1,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,    14,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    -1,    -1,    84,    -1,    86,    87,
      88,    89,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,   103,   104,   105,    -1,    -1,
     108,   109,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
     118,   119,    -1,   121,    -1,    -1,    -1,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
      -1,   139,   140,   141,   142,    -1,    -1,   145,    -1,    -1,
     148,   149,    -1,    -1,    -1,    -1,   154,   155,   156,   157,
     158,   159,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    -1,    -1,    -1,   174,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,    -1,
      -1,   199,   200,    -1,    -1,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,   252,    -1,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,    14,
      -1,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    -1,    -1,    92,    93,    94,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,   103,   104,
     105,    -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,   118,   119,    -1,   121,    -1,    -1,    -1,
     125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,    -1,   139,   140,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,   154,
     155,   156,   157,   158,   159,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,   174,
     175,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,
      -1,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,    -1,    -1,   199,   200,    -1,    -1,   203,   204,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,   252,    -1,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    -1,    -1,
      92,    93,    94,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,   103,   104,   105,    -1,    -1,   108,   109,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,   118,   119,    -1,   121,
      -1,    -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,    -1,   139,   140,   141,
      -1,    -1,    -1,    -1,    -1,    -1,   148,   149,    -1,    -1,
      -1,    -1,   154,   155,   156,   157,   158,   159,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   184,    -1,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,    -1,    -1,   199,   200,    -1,
      -1,   203,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
     252,    -1,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,    16,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    84,    -1,    86,    87,    88,    89,    -1,
      -1,    92,    93,    94,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,   103,   104,   105,    -1,    -1,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,   118,   119,    -1,
     121,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,    -1,   139,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,    -1,
      -1,    -1,    -1,   154,   155,   156,   157,   158,   159,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   184,    -1,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,    -1,    -1,   199,   200,
      -1,    -1,   203,   204,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    -1,
     251,   252,    -1,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    -1,    -1,
      92,    93,    94,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,   103,   104,   105,    -1,    -1,   108,   109,    -1,    -1,
      -1,    -1,    -1,    -1,   116,   117,   118,   119,    -1,   121,
      -1,    -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,    -1,   139,   140,   141,
     142,    -1,    -1,   145,    -1,    -1,   148,   149,    -1,    -1,
      -1,    -1,   154,   155,   156,   157,   158,   159,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,   174,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   184,    -1,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,    -1,    -1,   199,   200,    -1,
      -1,   203,   204,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   251,
     252,    -1,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    84,    -1,    86,    87,    88,    89,    -1,    -1,    92,
      93,    94,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
     103,   104,   105,    -1,    -1,   108,   109,    -1,    -1,    -1,
      -1,    -1,    -1,   116,   117,   118,   119,    -1,   121,    -1,
      -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,    -1,   139,   140,   141,   142,
      -1,    -1,   145,    -1,    -1,   148,   149,    -1,    -1,    -1,
      -1,   154,   155,   156,   157,   158,   159,   160,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,   174,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   184,    -1,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,
     203,   204,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,    -1,   251,   252,
      -1,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    -1,    -1,    92,    93,
      94,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,   103,
     104,   105,    -1,    -1,   108,   109,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,   118,   119,    -1,   121,    -1,    -1,
      -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,    -1,   139,   140,   141,    -1,    -1,
      -1,    -1,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,
     154,   155,   156,   157,   158,   159,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,
     174,   175,   176,    -1,    -1,    -1,    -1,    -1,   182,    -1,
     184,    -1,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,   200,    -1,    -1,   203,
     204,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    -1,   251,   252,    -1,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    -1,    -1,    92,    93,    94,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,   103,   104,
     105,    -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,   118,   119,    -1,   121,    -1,    -1,    -1,
     125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,    -1,   139,   140,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,   154,
     155,   156,   157,   158,   159,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,   174,
     175,   176,    -1,    -1,    -1,    -1,    -1,   182,    -1,   184,
      -1,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,    -1,    -1,   199,   200,    -1,    -1,   203,   204,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,    -1,   251,   252,    -1,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    -1,    -1,    84,    -1,
      86,    87,    88,    89,    -1,    -1,    92,    93,    94,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,   103,   104,   105,
      -1,    -1,   108,   109,   110,    -1,    -1,    -1,    -1,    -1,
     116,   117,   118,   119,    -1,   121,    -1,    -1,    -1,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,    -1,   139,   140,   141,    -1,    -1,    -1,    -1,
      -1,    -1,   148,   149,    -1,    -1,    -1,    -1,   154,   155,
     156,   157,   158,   159,   160,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,   174,    -1,
     176,   177,    -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,    -1,    -1,   199,   200,    -1,    -1,   203,   204,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,   251,   252,    -1,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    -1,    86,
      87,    88,    89,    -1,    -1,    92,    93,    94,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,   103,   104,   105,    -1,
      -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,   116,
     117,   118,   119,    -1,   121,    -1,    -1,    -1,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,    -1,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,
      -1,   148,   149,    -1,    -1,    -1,    -1,   154,   155,   156,
     157,   158,   159,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,   174,    -1,   176,
     177,    -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
      -1,    -1,   199,   200,    -1,    -1,   203,   204,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    -1,   251,   252,    -1,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    -1,    -1,    84,    -1,    86,    87,
      88,    89,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,   103,   104,   105,    -1,    -1,
     108,   109,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
     118,   119,    -1,   121,    -1,    -1,    -1,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
      -1,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,
     148,   149,    -1,    -1,    -1,    -1,   154,   155,   156,   157,
     158,   159,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    -1,    -1,    -1,   174,    -1,   176,   177,
      -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,    -1,
      -1,   199,   200,    -1,    -1,   203,   204,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    -1,   251,   252,    -1,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    -1,    84,    -1,    86,    87,    88,
      89,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,   103,   104,   105,    -1,    -1,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,   118,
     119,    -1,   121,    -1,    -1,    -1,   125,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,
     139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
     149,    -1,    -1,    -1,    -1,   154,   155,   156,   157,   158,
     159,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,   174,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   184,    -1,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,    -1,    -1,
     199,   200,    -1,    -1,   203,   204,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   251,   252,    -1,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned short int
  xquery_parser::yystos_[] =
  {
         0,    10,    17,    18,    20,    25,    26,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    97,    98,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   114,   116,   117,   118,   119,
     121,   125,   126,   127,   128,   129,   135,   136,   137,   138,
     139,   140,   141,   145,   146,   147,   148,   149,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   164,   165,   168,
     169,   170,   174,   176,   177,   178,   180,   181,   182,   184,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   199,   200,   201,   203,   204,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     251,   252,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   343,   344,   349,   352,   355,   358,   359,   361,   366,
     367,   368,   369,   370,   378,   379,   381,   382,   383,   388,
     390,   392,   393,   394,   399,   420,   423,   426,   427,   428,
     429,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   476,   477,   478,   492,   493,   495,   496,   497,   498,
     499,   500,   501,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   520,   521,   522,   523,   524,   525,   526,
     529,   535,   536,   537,    34,    35,    36,    37,    38,    39,
      46,    52,    63,    64,    67,    70,    71,   103,   104,   105,
     149,   157,   190,   209,   219,   240,   275,   276,   277,   278,
     279,   281,   282,   283,   284,   285,   290,   350,   351,   371,
     372,   149,    86,   142,   210,   211,   145,    25,    26,    28,
      29,    30,    31,    32,    33,    40,    41,    42,    44,    50,
      51,    53,    54,    55,    65,    66,    89,   125,   142,   145,
     157,   190,   203,   213,   214,   215,   217,   218,   225,   228,
     229,   230,   232,   233,   234,   236,   535,   142,   142,   145,
     142,   145,   145,    26,    48,    14,   142,   145,   534,   535,
     110,   110,   110,   142,    56,    57,   110,   385,    54,   145,
     145,   142,   145,   535,    30,    32,    33,    42,    89,   460,
     535,   535,   110,   175,   379,   535,   142,   534,    16,   535,
     535,   452,   142,    21,   202,   204,   214,   216,   145,   214,
     216,   214,   214,   219,   110,   142,   362,   227,   231,   231,
     145,   142,   110,   314,     0,   316,   317,    25,    41,   319,
     378,   179,   179,    99,   179,   380,    45,    51,    54,    55,
      62,   158,   160,   174,   200,   384,   389,   390,   391,   408,
     409,   413,   395,   396,   535,   156,    84,   122,   130,   131,
     133,   140,   144,   146,   151,   167,   191,   192,   193,   194,
     195,   196,   444,   445,   251,   147,   164,   187,   109,   135,
     148,   182,   189,   198,   126,   139,    68,   188,    93,    94,
     147,   164,   443,   142,   449,   452,   180,   181,   143,   464,
     465,   460,   464,   460,   464,   145,   535,   372,    34,   373,
     371,   371,   372,   535,   170,   184,   157,   190,    20,   533,
     155,   170,   170,   184,   535,   141,   110,   348,    30,    34,
      71,    98,   158,   534,   210,   211,   212,   288,   289,    92,
     226,   241,   254,   256,   266,   269,   549,   550,   551,   552,
     553,   556,   561,   562,   535,   281,   535,   286,   286,   291,
     275,   283,   351,   534,   518,   535,   379,   142,   142,   379,
     379,   175,   182,   535,   142,   379,   379,   175,   379,   175,
     379,   149,   533,   105,   149,   342,   533,   379,    20,   175,
     534,   142,   421,   422,   535,   535,   400,   402,   535,   382,
     268,   268,   110,   403,   110,   535,    30,    65,   175,   516,
     517,   379,   175,   182,   535,   142,   421,   175,    27,   480,
     481,   482,   379,     7,   163,    15,   175,   379,   202,    20,
     382,   382,   175,   382,   382,   382,   382,   220,   527,   528,
     535,   363,   382,   382,   379,   401,   407,   535,   321,   322,
      25,   323,   382,   381,   158,   110,   159,   159,   382,   382,
      99,    86,    88,   136,   262,   397,   398,   503,   428,   429,
     431,   431,   431,   431,   430,   431,   431,   431,   142,   145,
     252,   467,   538,   540,   541,   542,   543,   544,   545,   546,
     434,   434,   433,   435,   435,   435,   435,   436,   436,   437,
     437,   220,    86,    86,    86,   172,   379,   452,   452,   379,
     465,   175,   382,   475,   145,   360,   535,    20,    99,    99,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
     325,   326,   327,    86,   127,   132,   345,   346,   347,   535,
     127,   132,   149,   149,   325,   533,   117,   122,   239,   242,
     105,   241,   270,   271,   273,   274,   239,   242,    20,   241,
     270,   271,   273,   274,    86,   226,   354,   287,   535,   535,
     535,   122,   142,   172,   379,   379,   175,   172,    99,   175,
      99,   175,   172,   379,   172,   172,   172,   175,   534,    88,
      30,   534,   533,    88,   172,   175,   175,   172,   379,    99,
     176,   136,   503,   132,    99,   132,   398,   503,   172,   535,
      60,   206,   246,   386,   387,   175,   175,   175,   172,    99,
     175,    99,   175,   172,   379,   176,   535,   481,   482,   120,
     185,   172,   172,   121,   179,    86,   207,   208,   222,    86,
     207,   208,   222,    86,   226,   214,    99,   224,   132,    25,
     364,   379,   175,   172,    53,    99,   179,   105,   179,   159,
     535,   382,   414,   415,   110,   410,   411,   110,   141,   199,
     504,   506,   507,   508,   535,   110,   382,   110,   136,   398,
     136,   136,   397,   398,   431,   379,   538,   544,   269,   572,
      88,   157,   243,   244,   245,   253,   261,   267,   268,   539,
     547,   548,   549,   563,   566,   567,   569,   250,   252,   257,
     568,   237,   238,   259,   564,   504,   504,   502,   507,   502,
     172,   173,    99,   175,   110,   175,   374,   375,   127,   142,
     377,   360,   137,   154,   137,   154,   326,   122,   506,   347,
     382,   503,   132,   382,   533,   533,   118,   119,   533,   271,
     272,    88,   105,   145,   555,   272,    32,    33,    42,    66,
      89,   214,   353,   508,   279,   280,   216,   287,   295,    86,
     354,   287,   533,   379,   172,   172,    92,   424,   425,   142,
     518,   519,   535,   518,   519,   172,   186,   122,   341,   533,
     149,   122,    88,   341,   142,   172,   110,   382,   382,   136,
     382,   110,   382,   132,   132,   398,   136,   503,   246,    58,
      59,    61,   110,   397,   404,   405,   406,   387,   142,   518,
     518,   172,   382,    27,   482,   120,   185,     8,     9,    95,
     113,   115,   142,   183,   376,   477,   479,   490,   491,   494,
      20,   221,   223,   382,   382,   382,   221,   223,   382,   382,
     382,   382,   382,   382,   110,   382,   382,   348,   365,    99,
     179,   172,   362,   235,   530,   531,   142,   110,   414,    87,
      98,   108,   117,   416,   417,   418,   419,    99,   535,    99,
     396,   145,   145,   134,   164,   182,   505,   535,   535,   382,
     136,   382,   382,   136,   398,   136,   172,   175,   247,   206,
     246,   258,   263,   571,    88,   248,   249,   565,   247,   541,
     571,   432,   435,   267,   547,   549,   542,   136,   565,   272,
      47,   134,   382,   535,    86,    99,   175,   379,   127,   362,
     520,   346,   382,   272,    88,   145,   558,    20,   105,   555,
     354,   505,   216,   216,   450,   275,   293,   353,   216,   179,
     172,   110,   504,   105,   425,   172,   379,   175,   175,   134,
     175,   175,   382,   533,    99,   341,   172,   379,   422,   382,
     402,   382,   382,   132,   382,   136,   110,   110,   382,   535,
     406,    61,   172,   379,   175,   175,   122,   183,   479,     6,
     379,   535,   183,   490,   179,   222,   222,   222,   222,   226,
     528,   174,   132,   365,   461,   532,   531,   382,   407,   533,
     118,   119,   418,   419,   419,   415,    98,   412,   411,   175,
     175,   382,   382,   136,   382,   435,    43,   119,   435,   435,
     258,   264,   272,   570,   570,   432,   543,   265,   503,   504,
     375,    86,   172,   126,   189,   557,   560,    20,    20,   559,
     557,   260,   565,    99,   175,    99,   175,   159,   535,   249,
     354,   450,   535,   174,   110,   174,   172,   116,    88,   533,
     172,   382,   382,   535,   535,   405,   382,   172,   482,   535,
     183,   172,   482,   535,   382,   382,   382,   382,   382,   382,
     382,   145,   198,   377,   172,   419,   533,   382,   435,   435,
     187,   504,   558,   558,   560,    20,   175,    20,   255,   554,
     555,   554,   356,   357,   450,   110,   294,   275,   159,    86,
     382,   535,   382,   382,   341,    59,    85,   171,   483,   482,
     535,   185,   482,   110,   461,   435,   565,    99,   175,   175,
      99,    86,   535,   214,   535,   356,   504,   174,   110,     4,
     123,   486,   487,   489,   491,    19,   124,   484,   485,   488,
     491,   185,   482,   185,   535,   255,   555,   357,   502,   292,
     110,   214,   174,   382,   535,    85,   123,   489,   171,   124,
     488,   185,    99,   175,   416,   281,   382,   535,   110,   382,
     110,   377,   293,   292,   535,   535,   450,   382,   296,    99,
     175,   450,   110,   377,   187,   535,   275,   175,   535,   377,
     214,   110,   535,   296,   450
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  xquery_parser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned short int
  xquery_parser::yyr1_[] =
  {
         0,   312,   313,   313,   314,   314,   314,   314,   315,   315,
     316,   316,   317,   317,   318,   319,   319,   319,   320,   320,
     321,   321,   322,   322,   322,   322,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   324,   324,   325,   325,   326,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     328,   328,   328,   328,   328,   328,   328,   328,   329,   329,
     330,   331,   331,   332,   332,   333,   334,   335,   335,   336,
     336,   337,   337,   337,   337,   338,   339,   340,   340,   340,
     340,   341,   341,   342,   342,   343,   343,   343,   343,   344,
     345,   345,   346,   346,   346,   347,   348,   348,   349,   349,
     349,   350,   350,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   352,   352,   352,   352,   352,
     352,   352,   352,   353,   353,   354,   354,   355,   355,   356,
     356,   357,   357,   358,   358,   358,   358,   359,   359,   360,
     360,   360,   360,   361,   362,   363,   363,   364,   364,   365,
     365,   366,   367,   368,   369,   369,   370,   370,   370,   371,
     371,   371,   371,   372,   372,   373,   373,   374,   374,   375,
     375,   376,   377,   378,   379,   379,   380,   380,   381,   381,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   383,   384,   385,
     385,   386,   386,   386,   387,   387,   388,   388,   389,   390,
     390,   390,   391,   391,   391,   391,   391,   392,   392,   393,
     393,   394,   395,   395,   396,   396,   396,   396,   396,   396,
     396,   396,   397,   398,   399,   400,   400,   401,   401,   402,
     402,   402,   402,   403,   403,   404,   404,   404,   405,   405,
     405,   406,   406,   406,   407,   408,   409,   410,   410,   411,
     411,   412,   413,   413,   414,   414,   415,   415,   416,   416,
     416,   416,   416,   416,   416,   417,   417,   418,   418,   419,
     420,   420,   421,   421,   422,   422,   423,   423,   424,   424,
     425,   425,   426,   427,   427,   428,   428,   429,   429,   429,
     429,   429,   430,   429,   429,   429,   429,   431,   431,   431,
     432,   432,   433,   433,   433,   434,   434,   434,   434,   434,
     435,   435,   435,   436,   436,   436,   437,   437,   438,   438,
     439,   439,   440,   440,   441,   441,   442,   442,   442,   442,
     443,   443,   443,   444,   444,   444,   444,   444,   444,   445,
     445,   445,   446,   446,   446,   446,   447,   447,   448,   448,
     449,   449,   450,   450,   450,   450,   451,   452,   452,   452,
     453,   453,   454,   454,   454,   454,   455,   455,   456,   456,
     456,   456,   456,   456,   456,   457,   457,   458,   458,   459,
     459,   459,   459,   459,   460,   460,   461,   461,   462,   462,
     462,   463,   463,   464,   464,   465,   466,   466,   466,   466,
     466,   466,   466,   466,   467,   467,   468,   468,   468,   469,
     470,   470,   471,   472,   473,   474,   474,   475,   475,   476,
     476,   477,   477,   477,   478,   478,   478,   478,   478,   478,
     479,   479,   480,   480,   481,   482,   482,   483,   483,   484,
     484,   485,   485,   485,   485,   486,   486,   487,   487,   487,
     487,   488,   488,   489,   489,   490,   490,   490,   490,   491,
     491,   491,   491,   492,   492,   493,   493,   494,   495,   495,
     495,   495,   495,   495,   496,   497,   497,   497,   497,   498,
     498,   498,   498,   499,   500,   501,   501,   501,   501,   502,
     502,   503,   504,   504,   504,   505,   505,   505,   506,   506,
     506,   507,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   509,   510,   510,   510,   511,   512,   513,   513,   513,
     514,   514,   514,   514,   514,   515,   516,   516,   516,   516,
     516,   516,   516,   517,   518,   519,   520,   521,   521,   521,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     523,   523,   524,   524,   525,   526,   527,   527,   528,   529,
     530,   530,   531,   531,   531,   531,   532,   532,   533,   534,
     534,   535,   535,   536,   536,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   538,   538,   538,   538,   539,
     539,   539,   539,   540,   540,   541,   541,   542,   542,   543,
     543,   544,   544,   544,   545,   545,   546,   546,   547,   547,
     547,   547,   547,   548,   549,   549,   549,   549,   549,   549,
     549,   550,   550,   550,   550,   551,   551,   551,   551,   552,
     552,   553,   553,   553,   553,   553,   553,   553,   554,   554,
     555,   555,   555,   555,   556,   556,   556,   556,   556,   557,
     557,   558,   558,   559,   559,   560,   560,   561,   562,   562,
     563,   563,   563,   564,   564,   564,   564,   564,   565,   565,
     565,   565,   566,   567,   568,   569,   569,   570,   570,   570,
     571,   571,   572
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  xquery_parser::yyr2_[] =
  {
         0,     2,     1,     2,     1,     2,     1,     2,     4,     6,
       2,     1,     1,     2,     6,     2,     2,     4,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     3,     3,     5,     5,     4,     3,     3,     3,     5,
       5,     5,     5,     5,     5,     4,     3,     3,     4,     5,
       6,     1,     3,     3,     3,     3,     6,     5,     8,     4,
       3,     1,     1,     1,     2,     2,     2,     3,     5,     4,
       6,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     2,     2,     2,     3,     4,     5,     6,     4,
       5,     6,     7,     1,     2,     3,     3,     8,     9,     1,
       3,     3,     4,    11,    13,    13,    22,     3,     3,     2,
       3,     4,     5,     2,     4,     3,     0,     3,     2,     1,
       3,     5,     3,     5,     2,     2,     2,     3,     3,     1,
       2,     2,     2,     4,     4,     4,     4,     1,     3,     2,
       3,     3,     3,     1,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     2,     4,     3,     5,     4,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     2,     1,     4,     3,     4,     4,     5,     4,     5,
       5,     6,     3,     3,     3,     1,     4,     1,     4,     3,
       4,     4,     5,     4,     5,     1,     2,     3,     1,     2,
       1,     6,     3,     3,     1,     2,     3,     1,     3,     2,
       3,     2,     3,     4,     1,     3,     1,     2,     1,     1,
       1,     2,     2,     2,     3,     1,     1,     2,     2,     2,
       5,     5,     1,     4,     3,     4,     8,    10,     1,     2,
       4,     7,     8,     1,     3,     1,     3,     1,     3,     3,
       3,     3,     0,     4,     3,     3,     3,     1,     3,     4,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     4,     1,     4,
       1,     4,     1,     4,     1,     2,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     5,     5,     6,     3,     4,     1,     2,
       3,     2,     1,     2,     2,     1,     1,     1,     3,     3,
       1,     1,     1,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     3,     1,     4,     4,     3,     4,     1,     3,     1,
       1,     1,     1,     1,     4,     5,     8,     9,     9,    10,
       1,     2,     1,     2,     6,     0,     1,     3,     3,     0,
       1,     1,     1,     2,     2,     0,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     3,     3,     2,     1,     1,
       1,     1,     1,     1,     4,     4,     5,     6,     7,     4,
       5,     6,     7,     4,     4,     4,     5,     6,     7,     1,
       2,     2,     1,     2,     3,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     4,     4,     3,     3,     3,     4,     4,
       3,     4,     6,     4,     6,     3,     3,     4,     6,     6,
       4,     6,     6,     4,     1,     2,     1,     3,     3,     3,
       5,     7,     7,     5,     5,     5,     7,     7,     5,     5,
       3,     3,     5,     7,     5,     7,     1,     4,     3,     5,
       1,     2,     3,     7,    10,    13,     1,     3,     1,     1,
       1,     1,     1,     7,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     4,     1,
       1,     2,     2,     1,     3,     1,     3,     1,     4,     1,
       2,     1,     2,     3,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     5,     7,     5,     7,     2,     1,     3,
       2,     4,     4,     6,     4,     5,     4,     5,     3,     1,
       2,     2,     3,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     1,     2,     1,     2,     3,
       3,     4,     3,     3,     3,     2,     2,     1,     1,     1,
       1,     1,     3
  };

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const xquery_parser::yytname_[] =
  {
    "\"end of file\"", "error", "$undefined", "\"'unrecognized'\"",
  "\"'apos attribute content'\"", "\"'char literal'\"",
  "\"'char literal]]>'\"", "\"'char literal and pi end'\"",
  "\"'#charref;'\"", "\"'element content'\"", "\"'pref:*'\"",
  "\"'&entity;'\"", "\"'comment literal'\"", "\"'pi <NCName {>'\"",
  "\"'NCName_sval'\"", "\"'pragma literal'\"", "\"'QName #)'\"",
  "\"'*:QName'\"", "\"'QName_sval'\"", "\"'quote attribute content'\"",
  "\"'STRING'\"", "\"'XML comment'\"", "\"'URI'\"", "\"'NCName'\"",
  "\"'KEYWORD'\"", "\"'declare'\"", "\"'module'\"", "\"<blank>\"",
  "\"'validate'\"", "\"'typeswitch'\"", "\"'element'\"", "\"'document'\"",
  "\"'text'\"", "\"'comment'\"", "\"'function'\"", "\"'updating'\"",
  "\"'sequential'\"", "\"'deterministic'\"", "\"'nondeterministic'\"",
  "\"'simple'\"", "\"'if'\"", "\"'import'\"",
  "\"'processing-instruction'\"", "\"'most'\"", "\"'some'\"",
  "\"'stable'\"", "\"'option'\"", "\"'word'\"", "\"'schema'\"",
  "\"'space'\"", "\"'set'\"", "\"'let'\"", "\"'construction'\"",
  "\"'eval'\"", "\"'for'\"", "\"'outer'\"", "\"'sliding'\"",
  "\"'tumbling'\"", "\"'previous'\"", "\"'next'\"", "\"'only'\"",
  "\"'when'\"", "\"'count'\"", "\"'ordering'\"", "\"'base-uri'\"",
  "\"'schema-element'\"", "\"'document-node'\"", "\"'copy-namespaces'\"",
  "\"'instance'\"", "\"'schema-attribute'\"", "\"'boundary-space'\"",
  "\"'decimal-format'\"", "\"'decimal-separator'\"",
  "\"'grouping-separator'\"", "\"'infinity'\"", "\"'minus-sign'\"",
  "\"'NaN'\"", "\"'percent'\"", "\"'per-mille'\"", "\"'zero-digit'\"",
  "\"'digit'\"", "\"'pattern-separator'\"", "\"'ancestor::'\"",
  "\"'ancestor-or-self::'\"", "\"'and'\"", "\"'''\"", "\"'as'\"",
  "\"'ascending'\"", "\"'at'\"", "\"'attribute'\"", "\"'attribute::'\"",
  "\"'@'\"", "\"'case'\"", "\"'castable'\"", "\"'cast'\"", "\"'CDATA[['\"",
  "\"']]'\"", "\"'child::'\"", "\"'collation'\"", "\"','\"", "\"'(:'\"",
  "\"':)'\"", "\"'DECIMAL'\"", "\"'context'\"", "\"'variable'\"",
  "\"'default'\"", "\"'descendant::'\"", "\"'descendant-or-self::'\"",
  "\"'descending'\"", "\"'div'\"", "\"'$'\"", "\"'.'\"", "\"'..'\"",
  "\"'{{'\"", "\"'DOUBLE'\"", "\"'<double {>'\"", "\"'else'\"",
  "\"'empty'\"", "\"'greatest'\"", "\"'least'\"", "\"'/>'\"",
  "\"'encoding'\"", "\"'='\"", "\"''''\"", "\"'\\\"\\\"'\"", "\"'every'\"",
  "\"'except'\"", "\"'external'\"", "\"'following::'\"",
  "\"'following-sibling::'\"", "\"'follows'\"", "\"'>='\"", "\"':='\"",
  "\"'>'\"", "\"'?'\"", "\"'idiv'\"", "\"'in'\"", "\"'inherit'\"",
  "\"'INTEGER'\"", "\"'intersect'\"", "\"'is'\"", "\"'item'\"", "\"'{'\"",
  "\"'['\"", "\"'<='\"", "\"'('\"", "\"'<'\"", "\"'-'\"", "\"'mod'\"",
  "\"'namespace'\"", "\"'nan'\"", "\"'!='\"", "\"'nodecomp'\"",
  "\"'?""?'\"", "\"'<no inherit>'\"", "\"'<no preserve>'\"", "\"'or'\"",
  "\"'ordered'\"", "\"'order'\"", "\"'by'\"", "\"'group'\"",
  "\"'parent::'\"", "\"'<?'\"", "\"'?>'\"", "\"'+'\"",
  "\"'PRAGMA BEGIN'\"", "\"'PRAGMA END'\"", "\"'<<'\"",
  "\"'preceding::'\"", "\"'preceding-sibling::'\"", "\"'preserve'\"",
  "\"'\\\"'\"", "\"'}'\"", "\"']'\"", "\"'return'\"", "\"')'\"",
  "\"'satisfies'\"", "\"'<schema attribute ('\"", "\"'self::'\"",
  "\"';'\"", "\"'/'\"", "\"'//'\"", "\"'*'\"", "\"</ (start tag end)\"",
  "\"'strip'\"", "\"> (tag end)\"", "\"'then'\"", "\"'to'\"",
  "\"'treat'\"", "\"'union'\"", "\"'unordered'\"", "\"'eq'\"", "\"'ge'\"",
  "\"'gt'\"", "\"'le'\"", "\"'lt'\"", "\"'ne'\"", "\"'VALUECOMP'\"",
  "\"'|'\"", "\"'empty-sequence'\"", "\"'where'\"", "\"'<!--'\"",
  "\"'-->'\"", "\"'xquery'\"", "\"'version'\"", "\"'#)'\"", "\"'start'\"",
  "\"'after'\"", "\"'before'\"", "\"'revalidation'\"", "\"'strict'\"",
  "\"'lax'\"", "\"'skip'\"", "\"'delete'\"", "\"'node'\"", "\"'insert'\"",
  "\"'nodes'\"", "\"'rename'\"", "\"'replace'\"", "\"'value'\"",
  "\"'of'\"", "\"'first'\"", "\"'into'\"", "\"'last'\"", "\"'modify'\"",
  "\"'copy'\"", "\"'with'\"", "\"'returning'\"", "\"'block'\"",
  "\"'exit'\"", "\"'break'\"", "\"'loop'\"", "\"'continue'\"",
  "\"'while'\"", "\"'try'\"", "\"'catch'\"", "\"'using'\"", "\"'all'\"",
  "\"'any'\"", "\"'casesensitive'\"", "\"'ft-option'\"",
  "\"'diacritics'\"", "\"'insensitive'\"", "\"'different'\"",
  "\"'distance'\"", "\"'entire'\"", "\"'end'\"", "\"'content'\"",
  "\"'exactly'\"", "\"'from'\"", "\"'&&'\"", "\"'ftcontains'\"",
  "\"'not'\"", "\"'||'\"", "\"'language'\"", "\"'levels'\"",
  "\"'lowercase'\"", "\"'occurs'\"", "\"'paragraph'\"", "\"'phrase'\"",
  "\"'relationship'\"", "\"'same'\"", "\"'score'\"", "\"'sentence'\"",
  "\"'sentences'\"", "\"'times'\"", "\"'uppercase'\"", "\"'weight'\"",
  "\"'window'\"", "\"'without'\"", "\"'stemming'\"", "\"'stop'\"",
  "\"'words'\"", "\"'thesaurus'\"", "\"'wildcards'\"", "\"'collection'\"",
  "\"'const'\"", "\"'append-only'\"", "\"'queue'\"", "\"'mutable'\"",
  "\"'read-only'\"", "\"'unique'\"", "\"'non'\"", "\"'index'\"",
  "\"'manually'\"", "\"'automatically'\"", "\"'maintained'\"", "\"'on'\"",
  "\"'range'\"", "\"'equality'\"", "\"'integrity'\"", "\"'constraint'\"",
  "\"'check'\"", "\"'key'\"", "\"'foreach'\"", "\"'foreign'\"",
  "\"'keys'\"", "\"'BOM_UTF8'\"", "FTCONTAINS_REDUCE", "RANGE_REDUCE",
  "ADDITIVE_REDUCE", "MULTIPLICATIVE_REDUCE", "UNION_REDUCE",
  "INTERSECT_EXCEPT_REDUCE", "QVARINDECLLIST_REDUCE", "COMMA_DOLLAR",
  "UNARY_PREC", "SEQUENCE_TYPE_REDUCE", "OCCURS_STAR", "OCCURS_PLUS",
  "OCCURS_HOOK", "STEP_REDUCE", "$accept", "Module", "ModuleWithoutBOM",
  "VersionDecl", "MainModule", "LibraryModule", "ModuleDecl", "Prolog",
  "SIND_DeclList", "VFO_DeclList", "SIND_Decl", "VFO_Decl",
  "DecimalFormatDecl", "DecimalFormatParamList", "DecimalFormatParam",
  "DecimalFormatParamName", "Setter", "Import", "NamespaceDecl",
  "BoundarySpaceDecl", "DefaultNamespaceDecl", "OptionDecl",
  "FTOptionDecl", "OrderingModeDecl", "EmptyOrderDecl",
  "CopyNamespacesDecl", "DefaultCollationDecl", "BaseURIDecl",
  "SchemaImport", "URILiteralList", "SchemaPrefix", "ModuleImport",
  "CtxItemDecl", "CtxItemDecl2", "CtxItemDecl3", "CtxItemDecl4",
  "VarNameAndType", "VarDecl", "DeclPropertyList", "DeclProperty",
  "CollectionDecl", "CollectionTypeDecl", "NodeModifier", "IndexDecl",
  "IndexKeyList", "IndexKeySpec", "IntegrityConstraintDecl",
  "ConstructionDecl", "FunctionSig", "BlockExpr", "Block", "BlockDecls",
  "BlockVarDeclList", "BlockVarDecl", "AssignExpr", "ExitExpr",
  "WhileExpr", "FlowCtlStatement", "FunctionDecl", "FunctionDecl2",
  "FunctionDecl3", "FunctionDecl4", "ParamList", "Param", "EnclosedExpr",
  "BracedExpr", "QueryBody", "Expr", "ApplyExpr", "ConcatExpr",
  "ExprSingle", "FLWORExpr", "ReturnExpr", "WindowType",
  "FLWORWinCondType", "FLWORWinCond", "WindowClause", "CountClause",
  "ForLetWinClause", "FLWORClause", "FLWORClauseList", "ForDollar",
  "ForClause", "VarInDeclList", "VarInDecl", "PositionalVar", "FTScoreVar",
  "LetClause", "VarGetsDeclList", "EvalVarDeclList", "VarGetsDecl",
  "WindowVarDecl", "WindowVars", "WindowVars3", "WindowVars2",
  "EvalVarDecl", "WhereClause", "GroupByClause", "GroupSpecList",
  "GroupSpec", "GroupCollationSpec", "OrderByClause", "OrderSpecList",
  "OrderSpec", "OrderModifier", "OrderDirSpec", "OrderEmptySpec",
  "OrderCollationSpec", "QuantifiedExpr", "QVarInDeclList", "QVarInDecl",
  "TypeswitchExpr", "CaseClauseList", "CaseClause", "IfExpr", "OrExpr",
  "AndExpr", "ComparisonExpr", "$@1", "FTContainsExpr", "RangeExpr",
  "AdditiveExpr", "MultiplicativeExpr", "UnionExpr", "IntersectExceptExpr",
  "InstanceofExpr", "TreatExpr", "CastableExpr", "CastExpr", "UnaryExpr",
  "SignList", "ValueExpr", "ValueComp", "NodeComp", "ValidateExpr",
  "ExtensionExpr", "PragmaList", "Pragma", "PathExpr", "LeadingSlash",
  "RelativePathExpr", "StepExpr", "AxisStep", "ForwardStep", "ForwardAxis",
  "AbbrevForwardStep", "ReverseStep", "ReverseAxis", "NodeTest",
  "NameTest", "Wildcard", "FilterExpr", "PredicateList", "Predicate",
  "PrimaryExpr", "Literal", "NumericLiteral", "VarRef",
  "ParenthesizedExpr", "ContextItemExpr", "OrderedExpr", "UnorderedExpr",
  "FunctionCall", "ArgList", "Constructor", "DirectConstructor",
  "DirElemConstructor", "DirElemContentList", "DirAttributeList",
  "DirAttr", "OptionalBlank", "DirAttributeValue",
  "Opt_QuoteAttrContentList", "QuoteAttrContentList",
  "Opt_AposAttrContentList", "AposAttrContentList",
  "QuoteAttrValueContent", "AposAttrValueContent", "DirElemContent",
  "CommonContent", "DirCommentConstructor", "DirPIConstructor",
  "CDataSection", "ComputedConstructor", "CompDocConstructor",
  "CompElemConstructor", "CompAttrConstructor", "CompTextConstructor",
  "CompCommentConstructor", "CompPIConstructor", "SingleType",
  "TypeDeclaration", "SequenceType", "OccurrenceIndicator", "ItemType",
  "AtomicType", "KindTest", "AnyKindTest", "DocumentTest", "TextTest",
  "CommentTest", "PITest", "AttributeTest", "SchemaAttributeTest",
  "ElementTest", "SchemaElementTest", "TypeName", "TypeName_WITH_HOOK",
  "StringLiteral", "RevalidationDecl", "InsertExpr", "DeleteExpr",
  "ReplaceExpr", "RenameExpr", "TransformExpr", "VarNameList",
  "VarNameDecl", "TryExpr", "CatchListExpr", "CatchExpr", "NameTestList",
  "URI_LITERAL", "NCNAME", "QNAME", "EvalExpr", "KEYWORD", "FTSelection",
  "FTMatchOptionProximityList", "FTOr", "FTAnd", "FTMildnot", "FTUnaryNot",
  "FTWordsSelection", "FTWords", "FTWordsValue", "FTProximity",
  "FTOrderedIndicator", "FTMatchOption", "FTCaseOption",
  "FTDiacriticsOption", "FTStemOption", "FTThesaurusOption",
  "FTThesaurusList", "FTThesaurusID", "FTStopwordOption",
  "FTInclExclStringLiteralList", "FTRefOrList", "FTStringLiteralList",
  "FTInclExclStringLiteral", "FTLanguageOption", "FTWildcardOption",
  "FTContent", "FTAnyallOption", "FTRange", "FTDistance", "FTWindow",
  "FTTimes", "FTScope", "FTUnit", "FTBigUnit", "FTIgnoreOption", 0
  };
#endif

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const xquery_parser::rhs_number_type
  xquery_parser::yyrhs_[] =
  {
       313,     0,    -1,   314,    -1,   297,   314,    -1,   316,    -1,
     315,   316,    -1,   317,    -1,   315,   317,    -1,   203,   204,
      20,   179,    -1,   203,   204,    20,   121,    20,   179,    -1,
     319,   378,    -1,   378,    -1,   318,    -1,   318,   319,    -1,
      26,   149,   534,   122,   533,   179,    -1,   320,   179,    -1,
     321,   179,    -1,   320,   179,   321,   179,    -1,   322,    -1,
     320,   179,   322,    -1,   323,    -1,   321,   179,   323,    -1,
     328,    -1,   329,    -1,   330,    -1,   332,    -1,   349,    -1,
     344,    -1,   370,    -1,   333,    -1,   334,    -1,   352,    -1,
     355,    -1,   358,    -1,   324,    -1,    25,   105,    71,   325,
      -1,    25,    71,   535,   325,    -1,   326,    -1,   325,   326,
      -1,   327,   122,   520,    -1,    72,    -1,    73,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,   331,    -1,   338,    -1,   339,
      -1,   359,    -1,   335,    -1,   336,    -1,   337,    -1,   521,
      -1,   340,    -1,   343,    -1,    25,   149,   534,   122,   533,
      -1,    25,    70,   170,    -1,    25,    70,   184,    -1,    25,
     105,    30,   149,   533,    -1,    25,   105,    34,   149,   533,
      -1,    25,    46,   535,    20,    -1,    25,   240,   549,    -1,
      25,    63,   157,    -1,    25,    63,   190,    -1,    25,   105,
     158,   117,   118,    -1,    25,   105,   158,   117,   119,    -1,
      25,    67,   170,    99,   137,    -1,    25,    67,   170,    99,
     154,    -1,    25,    67,   155,    99,   137,    -1,    25,    67,
     155,    99,   154,    -1,    25,   105,    98,   533,    -1,    25,
      64,   533,    -1,    41,    48,   533,    -1,    41,    48,   342,
     533,    -1,    41,    48,   533,    88,   341,    -1,    41,    48,
     342,   533,    88,   341,    -1,   533,    -1,   341,    99,   533,
      -1,   149,   534,   122,    -1,   105,    30,   149,    -1,    41,
      26,   533,    -1,    41,    26,   149,   534,   122,   533,    -1,
      41,    26,   533,    88,   341,    -1,    41,    26,   149,   534,
     122,   533,    88,   341,    -1,    25,   103,   141,   345,    -1,
      86,   506,   346,    -1,   346,    -1,   347,    -1,   127,    -1,
     127,   347,    -1,   132,   382,    -1,   110,   535,    -1,   110,
     535,   503,    -1,    25,   104,   348,   132,   382,    -1,    25,
     104,   348,   127,    -1,    25,   104,   348,   127,   132,   382,
      -1,   351,    -1,   350,   351,    -1,   276,    -1,   277,    -1,
     278,    -1,   279,    -1,   157,    -1,   190,    -1,   219,   289,
      -1,   219,   288,    -1,   281,    -1,   282,   281,    -1,   285,
     286,    -1,   284,   286,    -1,    25,   275,   535,    -1,    25,
     275,   535,   354,    -1,    25,   275,   535,    86,   353,    -1,
      25,   275,   535,    86,   353,   354,    -1,    25,   350,   275,
     535,    -1,    25,   350,   275,   535,   354,    -1,    25,   350,
     275,   535,    86,   353,    -1,    25,   350,   275,   535,    86,
     353,   354,    -1,   508,    -1,   508,   505,    -1,   226,   280,
     216,    -1,   226,   279,   216,    -1,    25,   283,   535,   287,
     216,   450,   159,   356,    -1,    25,   350,   283,   535,   287,
     216,   450,   159,   356,    -1,   357,    -1,   356,    99,   357,
      -1,   450,    86,   502,    -1,   450,    86,   502,   416,    -1,
      25,   290,   291,   535,   287,   275,   535,   110,   535,   292,
     382,    -1,    25,   290,   291,   535,   287,   275,   535,   110,
     535,   292,   281,   293,   450,    -1,    25,   290,   291,   535,
     287,   275,   535,   294,   214,   110,   535,   292,   382,    -1,
      25,   290,   291,   535,   295,   293,   249,   275,   535,   214,
     110,   535,   296,   450,   187,   275,   535,   214,   110,   535,
     296,   450,    -1,    25,    52,   170,    -1,    25,    52,   184,
      -1,   145,   175,    -1,   145,   374,   175,    -1,   145,   175,
      86,   504,    -1,   145,   374,   175,    86,   504,    -1,   228,
     362,    -1,   142,   363,   379,   172,    -1,   363,   364,   179,
      -1,    -1,   364,    99,   365,    -1,    25,   365,    -1,   348,
      -1,   348,   132,   382,    -1,    50,   110,   535,   132,   382,
      -1,   229,   227,   382,    -1,   233,   145,   382,   175,   362,
      -1,   230,   231,    -1,   232,   231,    -1,    25,   371,    -1,
      25,    38,   371,    -1,    25,    37,   371,    -1,   372,    -1,
      39,   372,    -1,    35,   372,    -1,    36,   373,    -1,    34,
     535,   360,   377,    -1,    34,   535,   360,   127,    -1,    34,
     535,   360,   362,    -1,    34,   535,   360,   127,    -1,   375,
      -1,   374,    99,   375,    -1,   110,   535,    -1,   110,   535,
     503,    -1,   142,   379,   172,    -1,   142,   379,   172,    -1,
     379,    -1,   381,    -1,   381,   380,    -1,   179,    -1,   380,
     381,   179,    -1,   382,    -1,   381,    99,   382,    -1,   383,
      -1,   420,    -1,   423,    -1,   426,    -1,   427,    -1,   522,
      -1,   523,    -1,   525,    -1,   524,    -1,   526,    -1,   529,
      -1,   536,    -1,   367,    -1,   368,    -1,   369,    -1,   366,
      -1,   361,    -1,   392,   384,    -1,   174,   382,    -1,    56,
     268,    -1,    57,   268,    -1,   206,    -1,   246,    -1,    60,
     246,    -1,   386,   404,    61,   382,    -1,   386,    61,   382,
      -1,    54,   385,   403,   387,   387,    -1,    54,   385,   403,
     387,    -1,    62,   110,   535,    -1,   394,    -1,   399,    -1,
     388,    -1,   390,    -1,   408,    -1,   413,    -1,   409,    -1,
     389,    -1,   390,    -1,   392,   391,    -1,    54,   110,    -1,
      55,    54,   110,    -1,   393,   395,    -1,   396,    -1,   395,
      99,   110,   396,    -1,   535,   136,   382,    -1,   535,   503,
     136,   382,    -1,   535,   397,   136,   382,    -1,   535,   503,
     397,   136,   382,    -1,   535,   398,   136,   382,    -1,   535,
     503,   398,   136,   382,    -1,   535,   397,   398,   136,   382,
      -1,   535,   503,   397,   398,   136,   382,    -1,    88,   110,
     535,    -1,   262,   110,   535,    -1,    51,   110,   400,    -1,
     402,    -1,   400,    99,   110,   402,    -1,   407,    -1,   401,
      99,   110,   407,    -1,   535,   132,   382,    -1,   535,   503,
     132,   382,    -1,   535,   398,   132,   382,    -1,   535,   503,
     398,   132,   382,    -1,   110,   535,   136,   382,    -1,   110,
     535,   503,   136,   382,    -1,   405,    -1,   110,   535,    -1,
     110,   535,   405,    -1,   397,    -1,   397,   406,    -1,   406,
      -1,    58,   110,   535,    59,   110,   535,    -1,    59,   110,
     535,    -1,    58,   110,   535,    -1,   535,    -1,   200,   382,
      -1,   160,   159,   410,    -1,   411,    -1,   410,    99,   411,
      -1,   110,   535,    -1,   110,   535,   412,    -1,    98,   533,
      -1,   158,   159,   414,    -1,    45,   158,   159,   414,    -1,
     415,    -1,   414,    99,   415,    -1,   382,    -1,   382,   416,
      -1,   417,    -1,   418,    -1,   419,    -1,   417,   418,    -1,
     417,   419,    -1,   418,   419,    -1,   417,   418,   419,    -1,
      87,    -1,   108,    -1,   117,   118,    -1,   117,   119,    -1,
      98,   533,    -1,    44,   110,   421,   176,   382,    -1,   125,
     110,   421,   176,   382,    -1,   422,    -1,   421,    99,   110,
     422,    -1,   535,   136,   382,    -1,   535,   503,   136,   382,
      -1,    29,   145,   379,   175,   424,   105,   174,   382,    -1,
      29,   145,   379,   175,   424,   105,   110,   535,   174,   382,
      -1,   425,    -1,   424,   425,    -1,    92,   504,   174,   382,
      -1,    92,   110,   535,    86,   504,   174,   382,    -1,    40,
     145,   379,   175,   186,   382,   116,   382,    -1,   428,    -1,
     427,   156,   428,    -1,   429,    -1,   428,    84,   429,    -1,
     431,    -1,   431,   444,   431,    -1,   431,   445,   431,    -1,
     431,   122,   431,    -1,   431,   151,   431,    -1,    -1,   431,
     146,   430,   431,    -1,   431,   144,   431,    -1,   431,   133,
     431,    -1,   431,   131,   431,    -1,   432,    -1,   432,   251,
     538,    -1,   432,   251,   538,   572,    -1,   433,    -1,   433,
     187,   433,    -1,   434,    -1,   433,   164,   434,    -1,   433,
     147,   434,    -1,   435,    -1,   434,   182,   435,    -1,   434,
     109,   435,    -1,   434,   135,   435,    -1,   434,   148,   435,
      -1,   436,    -1,   435,   189,   436,    -1,   435,   198,   436,
      -1,   437,    -1,   436,   139,   437,    -1,   436,   126,   437,
      -1,   438,    -1,   438,    68,   220,   504,    -1,   439,    -1,
     439,   188,    86,   504,    -1,   440,    -1,   440,    93,    86,
     502,    -1,   441,    -1,   441,    94,    86,   502,    -1,   443,
      -1,   442,   443,    -1,   164,    -1,   147,    -1,   442,   164,
      -1,   442,   147,    -1,   446,    -1,   450,    -1,   447,    -1,
     191,    -1,   196,    -1,   195,    -1,   194,    -1,   193,    -1,
     192,    -1,   140,    -1,   167,    -1,   130,    -1,    28,   142,
     379,   172,    -1,    28,   211,   142,   379,   172,    -1,    28,
     210,   142,   379,   172,    -1,    28,    86,   518,   142,   379,
     172,    -1,   448,   142,   172,    -1,   448,   142,   379,   172,
      -1,   449,    -1,   448,   449,    -1,   165,   535,    15,    -1,
     165,    16,    -1,   451,    -1,   451,   452,    -1,   181,   452,
      -1,   452,    -1,   180,    -1,   453,    -1,   453,   180,   452,
      -1,   453,   181,   452,    -1,   454,    -1,   463,    -1,   455,
      -1,   455,   464,    -1,   458,    -1,   458,   464,    -1,   456,
     460,    -1,   457,    -1,    97,    -1,   106,    -1,    90,    -1,
     178,    -1,   107,    -1,   129,    -1,   128,    -1,   460,    -1,
      91,   460,    -1,   459,   460,    -1,   112,    -1,   161,    -1,
      82,    -1,   169,    -1,   168,    -1,    83,    -1,   508,    -1,
     461,    -1,   535,    -1,   462,    -1,   182,    -1,    10,    -1,
      17,    -1,   466,    -1,   466,   464,    -1,   465,    -1,   464,
     465,    -1,   143,   379,   173,    -1,   467,    -1,   469,    -1,
     470,    -1,   471,    -1,   474,    -1,   476,    -1,   472,    -1,
     473,    -1,   468,    -1,   520,    -1,   102,    -1,   138,    -1,
     114,    -1,   110,   535,    -1,   145,   175,    -1,   145,   379,
     175,    -1,   111,    -1,   157,   142,   379,   172,    -1,   190,
     142,   379,   172,    -1,   535,   145,   175,    -1,   535,   145,
     475,   175,    -1,   382,    -1,   475,    99,   382,    -1,   477,
      -1,   495,    -1,   478,    -1,   492,    -1,   493,    -1,   146,
     535,   482,   120,    -1,   146,   535,   480,   482,   120,    -1,
     146,   535,   482,   185,   183,   535,   482,   185,    -1,   146,
     535,   482,   185,   479,   183,   535,   482,   185,    -1,   146,
     535,   480,   482,   185,   183,   535,   482,   185,    -1,   146,
     535,   480,   482,   185,   479,   183,   535,   482,   185,    -1,
     490,    -1,   479,   490,    -1,   481,    -1,   480,   481,    -1,
      27,   535,   482,   122,   482,   483,    -1,    -1,    27,    -1,
     171,   484,   171,    -1,    85,   486,    85,    -1,    -1,   485,
      -1,   124,    -1,   488,    -1,   485,   124,    -1,   485,   488,
      -1,    -1,   487,    -1,   123,    -1,   489,    -1,   487,   123,
      -1,   487,   489,    -1,    19,    -1,   491,    -1,     4,    -1,
     491,    -1,   477,    -1,     9,    -1,   494,    -1,   491,    -1,
       8,    -1,   113,    -1,   115,    -1,   376,    -1,   201,    21,
     202,    -1,   201,   202,    -1,   162,   534,   163,    -1,   162,
     534,     7,    -1,    95,     6,    -1,   496,    -1,   497,    -1,
     498,    -1,   499,    -1,   500,    -1,   501,    -1,    31,   142,
     379,   172,    -1,    30,   535,   142,   172,    -1,    30,   535,
     142,   379,   172,    -1,    30,   142,   379,   172,   142,   172,
      -1,    30,   142,   379,   172,   142,   379,   172,    -1,    89,
     535,   142,   172,    -1,    89,   535,   142,   379,   172,    -1,
      89,   142,   379,   172,   142,   172,    -1,    89,   142,   379,
     172,   142,   379,   172,    -1,    32,   142,   379,   172,    -1,
      33,   142,   379,   172,    -1,    42,   534,   142,   172,    -1,
      42,   534,   142,   379,   172,    -1,    42,   142,   379,   172,
     142,   172,    -1,    42,   142,   379,   172,   142,   379,   172,
      -1,   507,    -1,   507,   134,    -1,    86,   504,    -1,   506,
      -1,   506,   505,    -1,   199,   145,   175,    -1,   134,    -1,
     182,    -1,   164,    -1,   507,    -1,   508,    -1,   141,   145,
     175,    -1,   535,    -1,   510,    -1,   516,    -1,   514,    -1,
     517,    -1,   515,    -1,   513,    -1,   512,    -1,   511,    -1,
     509,    -1,   214,   145,   175,    -1,    66,   145,   175,    -1,
      66,   145,   516,   175,    -1,    66,   145,   517,   175,    -1,
      32,   145,   175,    -1,    33,   145,   175,    -1,    42,   145,
     175,    -1,    42,   145,   534,   175,    -1,    42,   145,    20,
     175,    -1,    89,   145,   175,    -1,    89,   145,   535,   175,
      -1,    89,   145,   535,    99,   518,   175,    -1,    89,   145,
     182,   175,    -1,    89,   145,   182,    99,   518,   175,    -1,
     177,   535,   175,    -1,    30,   145,   175,    -1,    30,   145,
     535,   175,    -1,    30,   145,   535,    99,   518,   175,    -1,
      30,   145,   535,    99,   519,   175,    -1,    30,   145,   182,
     175,    -1,    30,   145,   182,    99,   518,   175,    -1,    30,
     145,   182,    99,   519,   175,    -1,    65,   145,   535,   175,
      -1,   535,    -1,   535,   134,    -1,    20,    -1,    25,   209,
     210,    -1,    25,   209,   211,    -1,    25,   209,   212,    -1,
     215,   214,   382,   222,   382,    -1,   215,   214,   382,    86,
     221,   222,   382,    -1,   215,   214,   382,    86,   223,   222,
     382,    -1,   215,   214,   382,   207,   382,    -1,   215,   214,
     382,   208,   382,    -1,   215,   216,   382,   222,   382,    -1,
     215,   216,   382,    86,   221,   222,   382,    -1,   215,   216,
     382,    86,   223,   222,   382,    -1,   215,   216,   382,   207,
     382,    -1,   215,   216,   382,   208,   382,    -1,   213,   214,
     382,    -1,   213,   216,   382,    -1,   218,   214,   382,   226,
     382,    -1,   218,   219,   220,   214,   382,   226,   382,    -1,
     217,   214,   382,    86,   382,    -1,   225,   110,   527,   224,
     382,   174,   382,    -1,   528,    -1,   527,    99,   110,   528,
      -1,   535,   132,   382,    -1,   234,   142,   379,   172,   530,
      -1,   531,    -1,   530,   531,    -1,   235,   532,   377,    -1,
     235,   532,   145,   110,   535,   175,   377,    -1,   235,   532,
     145,   110,   535,    99,   110,   535,   175,   377,    -1,   235,
     532,   145,   110,   535,    99,   110,   535,    99,   110,   535,
     175,   377,    -1,   461,    -1,   532,   198,   461,    -1,    20,
      -1,    14,    -1,   535,    -1,    18,    -1,   537,    -1,   236,
     110,   401,    53,   142,   382,   172,    -1,    53,   142,   382,
     172,    -1,   203,    -1,   117,    -1,    89,    -1,    33,    -1,
      66,    -1,    30,    -1,   141,    -1,    40,    -1,   214,    -1,
      42,    -1,    69,    -1,    65,    -1,    32,    -1,    29,    -1,
     199,    -1,    70,    -1,   240,    -1,    64,    -1,   211,    -1,
     210,    -1,   135,    -1,    31,    -1,   252,    -1,   239,    -1,
     242,    -1,   241,    -1,   269,    -1,   270,    -1,   273,    -1,
     271,    -1,   274,    -1,   245,    -1,   247,    -1,    47,    -1,
     206,    -1,   246,    -1,    43,    -1,   212,    -1,   225,    -1,
     219,    -1,   191,    -1,   196,    -1,   195,    -1,   194,    -1,
     193,    -1,   192,    -1,    88,    -1,   103,    -1,   104,    -1,
     174,    -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,
      58,    -1,    59,    -1,    60,    -1,    61,    -1,    62,    -1,
     136,    -1,    51,    -1,   200,    -1,   159,    -1,   160,    -1,
     158,    -1,    45,    -1,    87,    -1,   108,    -1,   118,    -1,
     119,    -1,    98,    -1,    44,    -1,   125,    -1,   176,    -1,
      92,    -1,    86,    -1,   186,    -1,   116,    -1,   156,    -1,
      84,    -1,    68,    -1,   220,    -1,    93,    -1,   187,    -1,
     109,    -1,   148,    -1,   189,    -1,   139,    -1,   126,    -1,
      28,    -1,    94,    -1,   188,    -1,   140,    -1,   170,    -1,
     184,    -1,   149,    -1,   127,    -1,   121,    -1,   155,    -1,
     137,    -1,   154,    -1,    25,    -1,    52,    -1,    63,    -1,
     105,    -1,    67,    -1,    46,    -1,   204,    -1,    41,    -1,
      48,    -1,    26,    -1,    34,    -1,   262,    -1,   251,    -1,
     267,    -1,   268,    -1,   244,    -1,   257,    -1,   265,    -1,
     261,    -1,   243,    -1,   256,    -1,   266,    -1,   260,    -1,
     255,    -1,   254,    -1,   238,    -1,   237,    -1,   259,    -1,
     248,    -1,   249,    -1,   272,    -1,   264,    -1,   263,    -1,
     258,    -1,   218,    -1,   224,    -1,   221,    -1,   215,    -1,
     208,    -1,   207,    -1,   209,    -1,   226,    -1,   216,    -1,
     217,    -1,   223,    -1,   213,    -1,   222,    -1,    39,    -1,
      36,    -1,    35,    -1,    37,    -1,    38,    -1,   157,    -1,
     190,    -1,   227,    -1,   228,    -1,   229,    -1,   231,    -1,
     233,    -1,   230,    -1,   232,    -1,   234,    -1,   235,    -1,
      53,    -1,   236,    -1,    50,    -1,   283,    -1,   281,    -1,
     282,    -1,   287,    -1,   288,    -1,   289,    -1,   284,    -1,
     285,    -1,   286,    -1,    71,    -1,    72,    -1,    73,    -1,
      74,    -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,
      79,    -1,    80,    -1,    81,    -1,   275,    -1,   276,    -1,
     277,    -1,   278,    -1,   279,    -1,   280,    -1,   290,    -1,
     291,    -1,   292,    -1,   293,    -1,   294,    -1,   295,    -1,
     296,    -1,   540,    -1,   540,   539,    -1,   540,   267,   432,
      -1,   540,   539,   267,   432,    -1,   549,    -1,   547,    -1,
     539,   549,    -1,   539,   547,    -1,   541,    -1,   540,   253,
     541,    -1,   542,    -1,   541,   250,   542,    -1,   543,    -1,
     542,   252,   136,   543,    -1,   544,    -1,   252,   544,    -1,
     545,    -1,   545,   568,    -1,   145,   538,   175,    -1,   546,
      -1,   546,   564,    -1,   467,    -1,   142,   379,   172,    -1,
     548,    -1,   567,    -1,   566,    -1,   569,    -1,   563,    -1,
     157,    -1,   550,    -1,   551,    -1,   552,    -1,   553,    -1,
     556,    -1,   561,    -1,   562,    -1,   256,    -1,   266,    -1,
      92,   239,    -1,    92,   242,    -1,   226,   241,    -1,   269,
     241,    -1,   241,   239,    -1,   241,   242,    -1,   226,   270,
      -1,   269,   270,    -1,   226,   273,   555,    -1,   226,   273,
     105,    -1,   226,   273,   145,   555,   175,    -1,   226,   273,
     145,   555,    99,   554,   175,    -1,   226,   273,   145,   105,
     175,    -1,   226,   273,   145,   105,    99,   554,   175,    -1,
     269,   273,    -1,   555,    -1,   554,    99,   555,    -1,    88,
      20,    -1,    88,    20,   260,    20,    -1,    88,    20,   565,
     255,    -1,    88,    20,   260,    20,   565,   255,    -1,   226,
     271,   272,   558,    -1,   226,   271,   272,   558,   557,    -1,
     226,   105,   271,   272,    -1,   226,   105,   271,   272,   557,
      -1,   269,   271,   272,    -1,   560,    -1,   557,   560,    -1,
      88,    20,    -1,   145,   559,   175,    -1,    20,    -1,   559,
      20,    -1,   189,   558,    -1,   126,   558,    -1,   254,    20,
      -1,   226,   274,    -1,   269,   274,    -1,    88,   206,    -1,
      88,   246,    -1,   245,   247,    -1,   238,    -1,   238,    47,
      -1,   237,    -1,   237,   272,    -1,   259,    -1,   248,   435,
      -1,    88,   119,   435,    -1,    88,    43,   435,    -1,   249,
     435,   187,   435,    -1,   244,   565,   570,    -1,   268,   435,
     570,    -1,   257,   565,   265,    -1,   261,   571,    -1,   243,
     571,    -1,   272,    -1,   264,    -1,   258,    -1,   263,    -1,
     258,    -1,   269,   247,   435,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned short int
  xquery_parser::yyprhs_[] =
  {
         0,     0,     3,     5,     8,    10,    13,    15,    18,    23,
      30,    33,    35,    37,    40,    47,    50,    53,    58,    60,
      64,    66,    70,    72,    74,    76,    78,    80,    82,    84,
      86,    88,    90,    92,    94,    96,   101,   106,   108,   111,
     115,   117,   119,   121,   123,   125,   127,   129,   131,   133,
     135,   137,   139,   141,   143,   145,   147,   149,   151,   153,
     155,   161,   165,   169,   175,   181,   186,   190,   194,   198,
     204,   210,   216,   222,   228,   234,   239,   243,   247,   252,
     258,   265,   267,   271,   275,   279,   283,   290,   296,   305,
     310,   314,   316,   318,   320,   323,   326,   329,   333,   339,
     344,   351,   353,   356,   358,   360,   362,   364,   366,   368,
     371,   374,   376,   379,   382,   385,   389,   394,   400,   407,
     412,   418,   425,   433,   435,   438,   442,   446,   455,   465,
     467,   471,   475,   480,   492,   506,   520,   543,   547,   551,
     554,   558,   563,   569,   572,   577,   581,   582,   586,   589,
     591,   595,   601,   605,   611,   614,   617,   620,   624,   628,
     630,   633,   636,   639,   644,   649,   654,   659,   661,   665,
     668,   672,   676,   680,   682,   684,   687,   689,   693,   695,
     699,   701,   703,   705,   707,   709,   711,   713,   715,   717,
     719,   721,   723,   725,   727,   729,   731,   733,   736,   739,
     742,   745,   747,   749,   752,   757,   761,   767,   772,   776,
     778,   780,   782,   784,   786,   788,   790,   792,   794,   797,
     800,   804,   807,   809,   814,   818,   823,   828,   834,   839,
     845,   851,   858,   862,   866,   870,   872,   877,   879,   884,
     888,   893,   898,   904,   909,   915,   917,   920,   924,   926,
     929,   931,   938,   942,   946,   948,   951,   955,   957,   961,
     964,   968,   971,   975,   980,   982,   986,   988,   991,   993,
     995,   997,  1000,  1003,  1006,  1010,  1012,  1014,  1017,  1020,
    1023,  1029,  1035,  1037,  1042,  1046,  1051,  1060,  1071,  1073,
    1076,  1081,  1089,  1098,  1100,  1104,  1106,  1110,  1112,  1116,
    1120,  1124,  1128,  1129,  1134,  1138,  1142,  1146,  1148,  1152,
    1157,  1159,  1163,  1165,  1169,  1173,  1175,  1179,  1183,  1187,
    1191,  1193,  1197,  1201,  1203,  1207,  1211,  1213,  1218,  1220,
    1225,  1227,  1232,  1234,  1239,  1241,  1244,  1246,  1248,  1251,
    1254,  1256,  1258,  1260,  1262,  1264,  1266,  1268,  1270,  1272,
    1274,  1276,  1278,  1283,  1289,  1295,  1302,  1306,  1311,  1313,
    1316,  1320,  1323,  1325,  1328,  1331,  1333,  1335,  1337,  1341,
    1345,  1347,  1349,  1351,  1354,  1356,  1359,  1362,  1364,  1366,
    1368,  1370,  1372,  1374,  1376,  1378,  1380,  1383,  1386,  1388,
    1390,  1392,  1394,  1396,  1398,  1400,  1402,  1404,  1406,  1408,
    1410,  1412,  1414,  1417,  1419,  1422,  1426,  1428,  1430,  1432,
    1434,  1436,  1438,  1440,  1442,  1444,  1446,  1448,  1450,  1452,
    1455,  1458,  1462,  1464,  1469,  1474,  1478,  1483,  1485,  1489,
    1491,  1493,  1495,  1497,  1499,  1504,  1510,  1519,  1529,  1539,
    1550,  1552,  1555,  1557,  1560,  1567,  1568,  1570,  1574,  1578,
    1579,  1581,  1583,  1585,  1588,  1591,  1592,  1594,  1596,  1598,
    1601,  1604,  1606,  1608,  1610,  1612,  1614,  1616,  1618,  1620,
    1622,  1624,  1626,  1628,  1632,  1635,  1639,  1643,  1646,  1648,
    1650,  1652,  1654,  1656,  1658,  1663,  1668,  1674,  1681,  1689,
    1694,  1700,  1707,  1715,  1720,  1725,  1730,  1736,  1743,  1751,
    1753,  1756,  1759,  1761,  1764,  1768,  1770,  1772,  1774,  1776,
    1778,  1782,  1784,  1786,  1788,  1790,  1792,  1794,  1796,  1798,
    1800,  1802,  1806,  1810,  1815,  1820,  1824,  1828,  1832,  1837,
    1842,  1846,  1851,  1858,  1863,  1870,  1874,  1878,  1883,  1890,
    1897,  1902,  1909,  1916,  1921,  1923,  1926,  1928,  1932,  1936,
    1940,  1946,  1954,  1962,  1968,  1974,  1980,  1988,  1996,  2002,
    2008,  2012,  2016,  2022,  2030,  2036,  2044,  2046,  2051,  2055,
    2061,  2063,  2066,  2070,  2078,  2089,  2103,  2105,  2109,  2111,
    2113,  2115,  2117,  2119,  2127,  2132,  2134,  2136,  2138,  2140,
    2142,  2144,  2146,  2148,  2150,  2152,  2154,  2156,  2158,  2160,
    2162,  2164,  2166,  2168,  2170,  2172,  2174,  2176,  2178,  2180,
    2182,  2184,  2186,  2188,  2190,  2192,  2194,  2196,  2198,  2200,
    2202,  2204,  2206,  2208,  2210,  2212,  2214,  2216,  2218,  2220,
    2222,  2224,  2226,  2228,  2230,  2232,  2234,  2236,  2238,  2240,
    2242,  2244,  2246,  2248,  2250,  2252,  2254,  2256,  2258,  2260,
    2262,  2264,  2266,  2268,  2270,  2272,  2274,  2276,  2278,  2280,
    2282,  2284,  2286,  2288,  2290,  2292,  2294,  2296,  2298,  2300,
    2302,  2304,  2306,  2308,  2310,  2312,  2314,  2316,  2318,  2320,
    2322,  2324,  2326,  2328,  2330,  2332,  2334,  2336,  2338,  2340,
    2342,  2344,  2346,  2348,  2350,  2352,  2354,  2356,  2358,  2360,
    2362,  2364,  2366,  2368,  2370,  2372,  2374,  2376,  2378,  2380,
    2382,  2384,  2386,  2388,  2390,  2392,  2394,  2396,  2398,  2400,
    2402,  2404,  2406,  2408,  2410,  2412,  2414,  2416,  2418,  2420,
    2422,  2424,  2426,  2428,  2430,  2432,  2434,  2436,  2438,  2440,
    2442,  2444,  2446,  2448,  2450,  2452,  2454,  2456,  2458,  2460,
    2462,  2464,  2466,  2468,  2470,  2472,  2474,  2476,  2478,  2480,
    2482,  2484,  2486,  2488,  2490,  2492,  2494,  2496,  2498,  2500,
    2502,  2504,  2506,  2508,  2510,  2512,  2514,  2516,  2518,  2520,
    2522,  2524,  2526,  2528,  2530,  2532,  2534,  2537,  2541,  2546,
    2548,  2550,  2553,  2556,  2558,  2562,  2564,  2568,  2570,  2575,
    2577,  2580,  2582,  2585,  2589,  2591,  2594,  2596,  2600,  2602,
    2604,  2606,  2608,  2610,  2612,  2614,  2616,  2618,  2620,  2622,
    2624,  2626,  2628,  2630,  2633,  2636,  2639,  2642,  2645,  2648,
    2651,  2654,  2658,  2662,  2668,  2676,  2682,  2690,  2693,  2695,
    2699,  2702,  2707,  2712,  2719,  2724,  2730,  2735,  2741,  2745,
    2747,  2750,  2753,  2757,  2759,  2762,  2765,  2768,  2771,  2774,
    2777,  2780,  2783,  2786,  2788,  2791,  2793,  2796,  2798,  2801,
    2805,  2809,  2814,  2818,  2822,  2826,  2829,  2832,  2834,  2836,
    2838,  2840,  2842
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  xquery_parser::yyrline_[] =
  {
         0,   934,   934,   935,   945,   950,   956,   961,   973,   978,
     988,   995,  1007,  1013,  1025,  1038,  1042,  1046,  1058,  1064,
    1078,  1084,  1098,  1099,  1100,  1101,  1107,  1108,  1109,  1110,
    1113,  1116,  1119,  1122,  1124,  1130,  1135,  1144,  1150,  1159,
    1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,
    1184,  1185,  1186,  1187,  1188,  1189,  1190,  1193,  1200,  1201,
    1213,  1225,  1230,  1241,  1247,  1259,  1272,  1283,  1288,  1300,
    1305,  1316,  1322,  1328,  1334,  1353,  1364,  1375,  1382,  1389,
    1396,  1409,  1415,  1430,  1434,  1444,  1451,  1459,  1466,  1479,
    1486,  1492,  1499,  1505,  1509,  1516,  1527,  1532,  1541,  1550,
    1557,  1567,  1573,  1582,  1586,  1590,  1594,  1598,  1602,  1606,
    1610,  1614,  1618,  1622,  1626,  1634,  1642,  1650,  1658,  1666,
    1672,  1680,  1688,  1700,  1705,  1714,  1718,  1726,  1734,  1746,
    1752,  1761,  1768,  1779,  1789,  1799,  1809,  1828,  1833,  1845,
    1849,  1853,  1857,  1864,  1871,  1897,  1907,  1913,  1919,  1928,
    1938,  1951,  1959,  1966,  1980,  1984,  1991,  1996,  2003,  2011,
    2015,  2019,  2027,  2034,  2043,  2055,  2064,  2077,  2085,  2099,
    2106,  2119,  2127,  2138,  2153,  2157,  2173,  2177,  2186,  2190,
    2207,  2208,  2209,  2210,  2211,  2214,  2215,  2216,  2217,  2218,
    2220,  2221,  2224,  2225,  2226,  2227,  2228,  2235,  2248,  2255,
    2259,  2267,  2271,  2275,  2282,  2286,  2293,  2301,  2312,  2322,
    2323,  2324,  2328,  2328,  2328,  2328,  2328,  2331,  2337,  2346,
    2350,  2360,  2371,  2377,  2391,  2399,  2408,  2418,  2429,  2438,
    2448,  2458,  2474,  2487,  2499,  2511,  2517,  2529,  2535,  2549,
    2558,  2568,  2577,  2590,  2597,  2608,  2609,  2614,  2623,  2627,
    2632,  2636,  2642,  2647,  2655,  2671,  2679,  2686,  2692,  2703,
    2710,  2720,  2730,  2735,  2747,  2753,  2767,  2773,  2785,  2792,
    2799,  2806,  2813,  2820,  2827,  2840,  2844,  2854,  2858,  2868,
    2879,  2886,  2899,  2906,  2918,  2925,  2939,  2946,  2961,  2967,
    2979,  2985,  2999,  3010,  3014,  3025,  3029,  3048,  3052,  3060,
    3068,  3076,  3084,  3084,  3092,  3100,  3108,  3122,  3126,  3133,
    3146,  3150,  3161,  3165,  3169,  3179,  3183,  3187,  3191,  3195,
    3205,  3209,  3214,  3225,  3229,  3233,  3243,  3247,  3259,  3263,
    3275,  3279,  3291,  3295,  3307,  3311,  3323,  3327,  3331,  3335,
    3347,  3351,  3355,  3365,  3369,  3373,  3377,  3381,  3385,  3395,
    3399,  3403,  3413,  3417,  3421,  3425,  3437,  3443,  3455,  3461,
    3475,  3482,  3523,  3527,  3531,  3535,  3547,  3557,  3568,  3573,
    3583,  3587,  3597,  3603,  3609,  3615,  3627,  3633,  3644,  3648,
    3652,  3656,  3660,  3664,  3668,  3678,  3682,  3692,  3696,  3707,
    3711,  3715,  3719,  3723,  3738,  3742,  3752,  3756,  3766,  3773,
    3780,  3793,  3797,  3809,  3815,  3829,  3840,  3844,  3848,  3852,
    3856,  3860,  3864,  3868,  3878,  3882,  3892,  3897,  3902,  3913,
    3924,  3928,  3939,  3949,  3960,  4016,  4022,  4034,  4040,  4052,
    4056,  4066,  4070,  4074,  4084,  4092,  4100,  4108,  4116,  4124,
    4139,  4145,  4157,  4163,  4176,  4185,  4187,  4193,  4198,  4210,
    4213,  4220,  4226,  4232,  4240,  4255,  4258,  4265,  4271,  4277,
    4285,  4299,  4304,  4315,  4320,  4331,  4336,  4341,  4347,  4359,
    4365,  4370,  4375,  4386,  4391,  4406,  4411,  4428,  4443,  4447,
    4451,  4455,  4459,  4463,  4473,  4484,  4490,  4496,  4501,  4523,
    4529,  4535,  4540,  4551,  4561,  4571,  4577,  4583,  4588,  4598,
    4602,  4612,  4623,  4627,  4631,  4668,  4672,  4676,  4686,  4690,
    4694,  4704,  4714,  4718,  4722,  4726,  4730,  4734,  4738,  4742,
    4746,  4756,  4766,  4770,  4774,  4784,  4794,  4804,  4808,  4812,
    4822,  4828,  4834,  4840,  4846,  4858,  4869,  4876,  4883,  4890,
    4897,  4904,  4911,  4924,  4945,  4952,  4972,  5012,  5016,  5020,
    5029,  5035,  5041,  5047,  5053,  5060,  5066,  5072,  5078,  5084,
    5096,  5101,  5111,  5117,  5129,  5155,  5166,  5172,  5185,  5201,
    5208,  5214,  5225,  5232,  5242,  5253,  5269,  5275,  5285,  5294,
    5295,  5313,  5317,  5330,  5336,  5344,  5345,  5346,  5347,  5348,
    5349,  5350,  5351,  5352,  5353,  5354,  5355,  5356,  5357,  5358,
    5359,  5360,  5361,  5362,  5363,  5364,  5365,  5366,  5367,  5368,
    5369,  5370,  5371,  5372,  5373,  5374,  5375,  5376,  5377,  5378,
    5379,  5380,  5381,  5382,  5383,  5384,  5385,  5386,  5387,  5388,
    5389,  5390,  5391,  5392,  5393,  5394,  5395,  5396,  5397,  5398,
    5399,  5400,  5401,  5402,  5403,  5404,  5405,  5406,  5407,  5408,
    5409,  5410,  5411,  5412,  5413,  5414,  5415,  5416,  5417,  5418,
    5419,  5420,  5421,  5422,  5423,  5424,  5425,  5426,  5427,  5428,
    5429,  5430,  5431,  5432,  5433,  5434,  5435,  5436,  5437,  5438,
    5439,  5440,  5441,  5442,  5443,  5444,  5445,  5446,  5447,  5448,
    5449,  5450,  5451,  5452,  5453,  5454,  5455,  5456,  5457,  5458,
    5459,  5460,  5461,  5462,  5463,  5464,  5465,  5466,  5467,  5468,
    5469,  5470,  5471,  5472,  5473,  5474,  5475,  5476,  5477,  5478,
    5479,  5480,  5481,  5482,  5483,  5484,  5485,  5486,  5487,  5488,
    5489,  5490,  5491,  5492,  5493,  5494,  5495,  5496,  5497,  5498,
    5499,  5500,  5501,  5502,  5503,  5504,  5505,  5506,  5507,  5508,
    5509,  5510,  5511,  5512,  5513,  5514,  5515,  5516,  5517,  5518,
    5519,  5520,  5521,  5522,  5523,  5524,  5525,  5526,  5527,  5528,
    5529,  5530,  5531,  5532,  5533,  5534,  5535,  5536,  5537,  5538,
    5539,  5540,  5541,  5542,  5543,  5558,  5562,  5566,  5570,  5580,
    5583,  5586,  5589,  5598,  5601,  5610,  5613,  5622,  5625,  5634,
    5637,  5646,  5649,  5652,  5661,  5664,  5673,  5677,  5687,  5690,
    5693,  5696,  5699,  5708,  5717,  5721,  5725,  5729,  5733,  5737,
    5741,  5751,  5754,  5757,  5760,  5769,  5772,  5775,  5778,  5787,
    5790,  5799,  5802,  5805,  5808,  5811,  5814,  5817,  5826,  5829,
    5838,  5841,  5844,  5847,  5856,  5859,  5862,  5865,  5868,  5877,
    5880,  5889,  5892,  5901,  5904,  5913,  5916,  5925,  5934,  5937,
    5946,  5949,  5952,  5961,  5964,  5967,  5970,  5973,  5982,  5986,
    5990,  5994,  6004,  6013,  6023,  6032,  6035,  6044,  6047,  6050,
    6059,  6062,  6071
  };

  // Print the state stack on the debug stream.
  void
  xquery_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  xquery_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  xquery_parser::token_number_type
  xquery_parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int xquery_parser::yyeof_ = 0;
  const int xquery_parser::yylast_ = 10867;
  const int xquery_parser::yynnts_ = 261;
  const int xquery_parser::yyempty_ = -2;
  const int xquery_parser::yyfinal_ = 514;
  const int xquery_parser::yyterror_ = 1;
  const int xquery_parser::yyerrcode_ = 256;
  const int xquery_parser::yyntokens_ = 312;

  const unsigned int xquery_parser::yyuser_token_number_max_ = 566;
  const xquery_parser::token_number_type xquery_parser::yyundef_token_ = 2;


/* Line 1054 of lalr1.cc  */
#line 1 "[Bison:b4_percent_define_default]"

} // zorba

/* Line 1054 of lalr1.cc  */
#line 14065 "/home/markos/zorba/zorba/build-gdb/src/compiler/parser/xquery_parser.cpp"


/* Line 1056 of lalr1.cc  */
#line 6079 "/home/markos/zorba/zorba/src/compiler/parser/xquery_parser.y"


namespace zorba {

namespace parser {

const char *the_tumbling = "tumbling", *the_sliding = "sliding",
  *the_start = "start", *the_end = "end", *the_only_end = "only end",
  *the_ofor = "ofor", *the_declare = "declare", *the_create = "create";

}

/*
	The error member function registers the errors to the driver.
*/

void xquery_parser::error(zorba::xquery_parser::location_type const& loc, std::string const& msg)
{
  driver.set_expr (new ParseErrorNode (driver.createQueryLoc (loc), XPST0003, msg));
}

}


#if 0
static void print_token_value(FILE *file, int type, YYSTYPE value)
{
	if (type==VAR) {
		fprintf (file, "%s", value.tptr->name);
	}
	else if (type==NUM) {
		fprintf (file, "%d", value.val);
	}
}
#endif

