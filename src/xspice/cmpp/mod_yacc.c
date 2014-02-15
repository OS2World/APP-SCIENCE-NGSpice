/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_ARGS = 258,
     TOK_INIT = 259,
     TOK_ANALYSIS = 260,
     TOK_NEW_TIMEPOINT = 261,
     TOK_TIME = 262,
     TOK_RAD_FREQ = 263,
     TOK_TEMPERATURE = 264,
     TOK_T = 265,
     TOK_PARAM = 266,
     TOK_PARAM_SIZE = 267,
     TOK_PARAM_NULL = 268,
     TOK_PORT_SIZE = 269,
     TOK_PORT_NULL = 270,
     TOK_PARTIAL = 271,
     TOK_AC_GAIN = 272,
     TOK_CHANGED = 273,
     TOK_OUTPUT_DELAY = 274,
     TOK_STATIC_VAR = 275,
     TOK_STATIC_VAR_SIZE = 276,
     TOK_INPUT = 277,
     TOK_INPUT_STRENGTH = 278,
     TOK_INPUT_STATE = 279,
     TOK_INPUT_TYPE = 280,
     TOK_OUTPUT = 281,
     TOK_OUTPUT_CHANGED = 282,
     TOK_OUTPUT_STRENGTH = 283,
     TOK_OUTPUT_STATE = 284,
     TOK_OUTPUT_TYPE = 285,
     TOK_COMMA = 286,
     TOK_LPAREN = 287,
     TOK_RPAREN = 288,
     TOK_LBRACKET = 289,
     TOK_RBRACKET = 290,
     TOK_MISC_C = 291,
     TOK_IDENTIFIER = 292,
     TOK_LOAD = 293,
     TOK_TOTAL_LOAD = 294,
     TOK_MESSAGE = 295,
     TOK_CALL_TYPE = 296
   };
#endif
/* Tokens.  */
#define TOK_ARGS 258
#define TOK_INIT 259
#define TOK_ANALYSIS 260
#define TOK_NEW_TIMEPOINT 261
#define TOK_TIME 262
#define TOK_RAD_FREQ 263
#define TOK_TEMPERATURE 264
#define TOK_T 265
#define TOK_PARAM 266
#define TOK_PARAM_SIZE 267
#define TOK_PARAM_NULL 268
#define TOK_PORT_SIZE 269
#define TOK_PORT_NULL 270
#define TOK_PARTIAL 271
#define TOK_AC_GAIN 272
#define TOK_CHANGED 273
#define TOK_OUTPUT_DELAY 274
#define TOK_STATIC_VAR 275
#define TOK_STATIC_VAR_SIZE 276
#define TOK_INPUT 277
#define TOK_INPUT_STRENGTH 278
#define TOK_INPUT_STATE 279
#define TOK_INPUT_TYPE 280
#define TOK_OUTPUT 281
#define TOK_OUTPUT_CHANGED 282
#define TOK_OUTPUT_STRENGTH 283
#define TOK_OUTPUT_STATE 284
#define TOK_OUTPUT_TYPE 285
#define TOK_COMMA 286
#define TOK_LPAREN 287
#define TOK_RPAREN 288
#define TOK_LBRACKET 289
#define TOK_RBRACKET 290
#define TOK_MISC_C 291
#define TOK_IDENTIFIER 292
#define TOK_LOAD 293
#define TOK_TOTAL_LOAD 294
#define TOK_MESSAGE 295
#define TOK_CALL_TYPE 296




/* Copy the first part of user declarations.  */
#line 1 "mod_yacc.y"
 /* $Id: mod_yacc.y,v 1.11 2010/08/15 18:26:56 rlar Exp $ */

/*============================================================================
FILE  mod_yacc.y

MEMBER OF process cmpp

Copyright 1991
Georgia Tech Research Corporation
Atlanta, Georgia 30332
All Rights Reserved

PROJECT A-8503

AUTHORS

    9/12/91  Steve Tynor

MODIFICATIONS

    <date> <person name> <nature of modifications>
  20050420 Steven Borley Renamed strcmpi() to local_strcmpi() to avoid
                         clash with strcmpi() in a windows header file.

SUMMARY

    This file contains a BNF specification of the translation of
    cfunc.mod files to cfunc.c files, together with various support
    functions.

INTERFACES

    mod_yyparse() -    Function 'yyparse()' is generated automatically
                       by UNIX 'yacc' utility and then converted to
                       'mod_yyparse()' by UNIX 'sed' utility under
                       direction of Makefile.

REFERENCED FILES

    mod_lex.l

NON-STANDARD FEATURES

    Names of functions generated by 'yacc' are translated by 'sed'
    under direction of the Makefile to prevent collisions with
    functions generated from ifs_yacc.y.

============================================================================*/


#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "mod_yacc_y.h"

extern int mod_yylex(void);

#define	yymaxdepth mod_yymaxdepth
#define	yyparse	mod_yyparse
#define	yylex	mod_yylex
#define	yyerror	mod_yyerror
#define	yylval	mod_yylval
#define	yychar	mod_yychar
#define	yydebug	mod_yydebug
#define	yypact	mod_yypact
#define	yyr1	mod_yyr1
#define	yyr2	mod_yyr2
#define	yydef	mod_yydef
#define	yychk	mod_yychk
#define	yypgo	mod_yypgo
#define	yyact	mod_yyact
#define	yyexca	mod_yyexca
#define yyerrflag mod_yyerrflag
#define yynerrs	mod_yynerrs
#define	yyps	mod_yyps
#define	yypv	mod_yypv
#define	yys	mod_yys
#define	yy_yys	mod_yyyys
#define	yystate	mod_yystate
#define	yytmp	mod_yytmp
#define	yyv	mod_yyv
#define	yy_yyv	mod_yyyyv
#define	yyval	mod_yyval
#define	yylloc	mod_yylloc
#define yyreds	mod_yyreds
#define yytoks	mod_yytoks
#define yylhs	mod_yyyylhs
#define yylen	mod_yyyylen
#define yydefred mod_yyyydefred
#define yydgoto	mod_yyyydgoto
#define yysindex mod_yyyysindex
#define yyrindex mod_yyyyrindex
#define yygindex mod_yyyygindex
#define yytable	 mod_yyyytable
#define yycheck	 mod_yyyycheck
#define yyname   mod_yyyyname
#define yyrule   mod_yyyyrule

Ifs_Table_t *mod_ifs_table;

extern char *mod_yytext;
extern FILE* mod_yyout;
 extern void mod_yyerror(char*);

#include <string.h>
#include <ctype.h>

int mod_num_errors;

#define BUFFER_SIZE 3000
static char buffer [BUFFER_SIZE];
static int buf_len;
   
typedef enum {CONN, PARAM, STATIC_VAR} Id_Kind_t;

/*--------------------------------------------------------------------------*/
static char *subscript (Sub_Id_t sub_id)
{
   if (sub_id.has_subscript) {
      return sub_id.subscript;
   } else {
      return "0";
   }
}

/*--------------------------------------------------------------------------*/
static int
local_strcmpi(char *s, char *t)
     /* string compare -  case insensitive */
{
   for (; *s && t && tolower(*s) == tolower(*t); s++, t++)
      ;
   if (*s && !*t) {
      return 1;
   }
   if (!*s && *t) {
      return -1;
   }
   if (! (*s || *t)) {
      return 0;
   }
   return (tolower(*s) - tolower(*t));
}

/*---------------------------------------------------------------------------*/
static void put_type (FILE *fp, Data_Type_t type)
{
   char ch = ' ';
   
   switch (type) {
   case INTEGER:
      ch = 'i';
      break;
   case REAL:
      ch = 'r';
      break;
   case COMPLEX:
      ch = 'c';
      break;
   case BOOLEAN:
      ch = 'b';
      break;
   case STRING:
      ch = 's';
      break;
   case POINTER:
      ch = 'p';
      break;
   }
   fprintf (fp, ".%cvalue", ch);
}

/*---------------------------------------------------------------------------*/
static void put_conn_type (FILE *fp, Port_Type_t type)
{
   char ch;
   
   switch (type) {
   case USER_DEFINED:
      ch = 'p';
      break;
   case DIGITAL:
      ch = 'p';
      break;
   default:
      ch = 'r';
      break;
   }
   fprintf (fp, ".%cvalue", ch);
}

/*---------------------------------------------------------------------------*/
static void check_dir (int conn_number, Dir_t dir, char *context)
{
   Dir_t conn_dir;
   
   if (conn_number >= 0) {
      /*
       * If negative, this is an invalid port ID and we've already issued
       * an error.
       */
      conn_dir = mod_ifs_table->conn[conn_number].direction;
      if ((conn_dir != dir) && (conn_dir != INOUT)) {
	 char error_str[200];
	 
	 sprintf (error_str,
		  "Direction of port `%s' in %s() is not %s or INOUT",
		  mod_ifs_table->conn[conn_number].name, context,
		  (dir == IN) ? "IN" : "OUT");
	 yyerror (error_str);
	 mod_num_errors++;
      }
   }
}

/*---------------------------------------------------------------------------*/
static void check_subscript (Boolean_t formal, Boolean_t actual,
			     Boolean_t missing_actual_ok,
			     char *context, char *id)
{
   char error_str[200];

   if ((formal && !actual) && !missing_actual_ok) {
      sprintf (error_str,
	       "%s `%s' is an array - subscript required",
	       context, id);
      yyerror (error_str);
      mod_num_errors++;
      return;
   } else if (!formal && actual) {
      sprintf (error_str,
	       "%s `%s' is not an array - subscript prohibited",
	       context, id);
      yyerror (error_str);
      mod_num_errors++;
      return;
   }
}

/*---------------------------------------------------------------------------*/
static int check_id (Sub_Id_t sub_id, Id_Kind_t kind, Boolean_t do_subscript)
{
   int i;
   char error_str[200];
   
   switch (kind) {
   case CONN:
      for (i = 0; i < mod_ifs_table->num_conn; i++) {
	 if (0 == local_strcmpi (sub_id.id, mod_ifs_table->conn[i].name)) {
	    if (do_subscript) {
	       check_subscript (mod_ifs_table->conn[i].is_array,
				sub_id.has_subscript, FALSE, "Port",
				sub_id.id);
	    }
	    return i;
	 }
      }
      break;
   case PARAM:
      for (i = 0; i < mod_ifs_table->num_param; i++) {
      	 if (0 == local_strcmpi (sub_id.id, mod_ifs_table->param[i].name)) {
	    if (do_subscript) {
	       check_subscript (mod_ifs_table->param[i].is_array,
				sub_id.has_subscript, FALSE, "Parameter",
				sub_id.id);
	    }
	    return i;
	 }
      }
      break;
   case STATIC_VAR:
      for (i = 0; i < mod_ifs_table->num_inst_var; i++) {
      	 if (0 == local_strcmpi (sub_id.id, mod_ifs_table->inst_var[i].name)) {
	    if (do_subscript) {
	       check_subscript (mod_ifs_table->inst_var[i].is_array,
				sub_id.has_subscript, TRUE,
				"Static Variable",
				sub_id.id);
	    }
	    return i;
	 }
      }
      break;
   }
   
   sprintf (error_str, "No %s named '%s'",
	    ((kind==CONN)
	     ? "port"
	     : ((kind==PARAM)
		? "parameter"
		:"static variable")),
	    sub_id.id);
   yyerror (error_str);
   mod_num_errors++;
   return -1;
}

/*---------------------------------------------------------------------------*/
static int valid_id (Sub_Id_t sub_id, Id_Kind_t kind)
{
    return check_id (sub_id, kind, FALSE);
}

/*---------------------------------------------------------------------------*/
static int valid_subid (Sub_Id_t sub_id, Id_Kind_t kind)
{
    return check_id (sub_id, kind, TRUE);
}

/*---------------------------------------------------------------------------*/
static void init_buffer (void)
{
   buf_len = 0;
   buffer[0] = '\0';
}

/*---------------------------------------------------------------------------*/
static void append (char *str)
{
   int len = strlen (str);
   if (len + buf_len > BUFFER_SIZE) {
      yyerror ("Buffer overflow - try reducing the complexity of CM-macro array subscripts");
      exit (1);
   }
   (void)strcat (buffer,str);
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 330 "mod_yacc.y"
{
   char *str;
   Sub_Id_t sub_id;
}
/* Line 187 of yacc.c.  */
#line 512 "mod_yacc.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 525 "mod_yacc.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNRULES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    11,    14,    15,    18,
      19,    22,    24,    26,    28,    29,    34,    35,    40,    42,
      44,    46,    47,    52,    53,    58,    60,    62,    64,    66,
      68,    70,    72,    74,    79,    84,    89,    94,    99,   104,
     111,   118,   123,   128,   133,   138,   143,   148,   153,   158,
     163,   168,   173,   178,   183,   188,   193,   198,   200,   205
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    -1,    43,    44,    -1,    -1,    44,    51,
      -1,    44,    54,    -1,    -1,    46,    47,    -1,    -1,    47,
      48,    -1,    37,    -1,    36,    -1,    31,    -1,    -1,    34,
      49,    47,    35,    -1,    -1,    32,    50,    47,    33,    -1,
      37,    -1,    36,    -1,    31,    -1,    -1,    34,    52,    44,
      35,    -1,    -1,    32,    53,    44,    33,    -1,     4,    -1,
       3,    -1,     5,    -1,     6,    -1,    41,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    32,    45,    33,    -1,    11,
      32,    55,    33,    -1,    12,    32,    56,    33,    -1,    13,
      32,    56,    33,    -1,    14,    32,    56,    33,    -1,    15,
      32,    56,    33,    -1,    16,    32,    55,    31,    55,    33,
      -1,    17,    32,    55,    31,    55,    33,    -1,    20,    32,
      55,    33,    -1,    21,    32,    56,    33,    -1,    19,    32,
      55,    33,    -1,    18,    32,    55,    33,    -1,    22,    32,
      55,    33,    -1,    25,    32,    55,    33,    -1,    30,    32,
      55,    33,    -1,    23,    32,    55,    33,    -1,    24,    32,
      55,    33,    -1,    26,    32,    55,    33,    -1,    28,    32,
      55,    33,    -1,    29,    32,    55,    33,    -1,    27,    32,
      55,    33,    -1,    38,    32,    55,    33,    -1,    39,    32,
      55,    33,    -1,    40,    32,    55,    33,    -1,    56,    -1,
      56,    34,    45,    35,    -1,    37,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   382,   382,   383,   386,   387,   388,   393,   393,   397,
     398,   401,   402,   403,   405,   404,   409,   408,   414,   415,
     416,   418,   417,   422,   421,   427,   429,   431,   433,   435,
     437,   439,   441,   443,   445,   451,   454,   457,   460,   463,
     471,   480,   492,   496,   502,   508,   516,   522,   528,   537,
     546,   554,   563,   572,   577,   582,   587,   594,   595,   601
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_ARGS", "TOK_INIT", "TOK_ANALYSIS",
  "TOK_NEW_TIMEPOINT", "TOK_TIME", "TOK_RAD_FREQ", "TOK_TEMPERATURE",
  "TOK_T", "TOK_PARAM", "TOK_PARAM_SIZE", "TOK_PARAM_NULL",
  "TOK_PORT_SIZE", "TOK_PORT_NULL", "TOK_PARTIAL", "TOK_AC_GAIN",
  "TOK_CHANGED", "TOK_OUTPUT_DELAY", "TOK_STATIC_VAR",
  "TOK_STATIC_VAR_SIZE", "TOK_INPUT", "TOK_INPUT_STRENGTH",
  "TOK_INPUT_STATE", "TOK_INPUT_TYPE", "TOK_OUTPUT", "TOK_OUTPUT_CHANGED",
  "TOK_OUTPUT_STRENGTH", "TOK_OUTPUT_STATE", "TOK_OUTPUT_TYPE",
  "TOK_COMMA", "TOK_LPAREN", "TOK_RPAREN", "TOK_LBRACKET", "TOK_RBRACKET",
  "TOK_MISC_C", "TOK_IDENTIFIER", "TOK_LOAD", "TOK_TOTAL_LOAD",
  "TOK_MESSAGE", "TOK_CALL_TYPE", "$accept", "mod_file", "c_code",
  "buffered_c_code", "@1", "buffered_c_code2", "buffered_c_char", "@2",
  "@3", "c_char", "@4", "@5", "macro", "subscriptable_id", "id", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    44,    46,    45,    47,
      47,    48,    48,    48,    49,    48,    50,    48,    51,    51,
      51,    52,    51,    53,    51,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    55,    55,    56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     2,     0,     2,     0,
       2,     1,     1,     1,     0,     4,     0,     4,     1,     1,
       1,     0,     4,     0,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     6,
       6,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     1,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     4,     1,     3,    26,    25,    27,    28,    30,    31,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    23,    21,    19,    18,     0,     0,     0,
      29,     5,     6,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     4,     0,     0,     0,     0,
       9,    59,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     8,
      34,     7,    35,    36,    37,    38,     0,     0,    44,    43,
      41,    42,    45,    48,    49,    46,    50,    53,    51,    52,
      47,    24,    22,    54,    55,    56,    13,    16,    14,    12,
      11,    10,     0,     0,     0,     9,     9,    58,    39,    40,
       0,     0,    17,    15
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    69,    70,    99,   131,   136,   135,    41,
      65,    64,    42,    72,    73
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -121
static const yytype_int16 yypact[] =
{
    -121,     5,  -121,   134,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,    -8,     2,     9,    11,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    59,    96,   135,   137,   144,   145,
     146,   147,  -121,  -121,  -121,  -121,  -121,   148,   149,   150,
    -121,  -121,  -121,  -121,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,  -121,  -121,   151,   151,   151,   152,
    -121,  -121,   153,   155,   154,   157,   158,   159,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,    56,    95,   177,   178,   179,  -121,     8,
    -121,  -121,  -121,  -121,  -121,  -121,   151,   151,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,   160,   180,   181,  -121,  -121,  -121,  -121,  -121,
      -6,     1,  -121,  -121
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -121,  -121,   -18,    82,  -121,  -120,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,   -49,   -25
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      78,    79,    80,    81,    82,     2,    84,    85,    86,    87,
      88,    89,    90,    91,    92,   140,   141,    95,    96,    97,
      74,    75,    76,    77,    43,   126,   127,   142,   128,    83,
     129,   130,   126,   127,    44,   128,   143,   129,   130,   126,
     127,    45,   128,    46,   129,   130,    93,    94,    47,    48,
      49,    50,    51,    52,    53,    54,    55,   133,   134,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,   121,
      34,    56,    35,    36,    37,    38,    39,    40,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    57,    34,
     122,    35,    36,    37,    38,    39,    40,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    58,    34,    59,
      35,    36,    37,    38,    39,    40,    60,    61,    62,    63,
      66,    67,    68,   132,     0,    98,   100,   102,    71,   101,
     103,   104,   105,   106,   107,   137,     0,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     123,   124,   125,   138,   139
};

static const yytype_int16 yycheck[] =
{
      49,    50,    51,    52,    53,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    63,   135,   136,    66,    67,    68,
      45,    46,    47,    48,    32,    31,    32,    33,    34,    54,
      36,    37,    31,    32,    32,    34,    35,    36,    37,    31,
      32,    32,    34,    32,    36,    37,    64,    65,    32,    32,
      32,    32,    32,    32,    32,    32,    32,   106,   107,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    32,    36,    37,    38,    39,    40,    41,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    32,    34,
      35,    36,    37,    38,    39,    40,    41,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    32,    34,    32,
      36,    37,    38,    39,    40,    41,    32,    32,    32,    32,
      32,    32,    32,   101,    -1,    33,    33,    33,    37,    34,
      33,    33,    33,    31,    31,    35,    -1,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,     0,    44,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    34,    36,    37,    38,    39,    40,
      41,    51,    54,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    53,    52,    32,    32,    32,    45,
      46,    37,    55,    56,    56,    56,    56,    56,    55,    55,
      55,    55,    55,    56,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    44,    44,    55,    55,    55,    33,    47,
      33,    34,    33,    33,    33,    33,    31,    31,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    35,    33,    33,    33,    31,    32,    34,    36,
      37,    48,    45,    55,    55,    50,    49,    35,    33,    33,
      47,    47,    33,    35
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 7:
#line 393 "mod_yacc.y"
    {init_buffer();;}
    break;

  case 8:
#line 394 "mod_yacc.y"
    {(yyval.str) = strdup (buffer);;}
    break;

  case 11:
#line 401 "mod_yacc.y"
    {append (mod_yytext);;}
    break;

  case 12:
#line 402 "mod_yacc.y"
    {append (mod_yytext);;}
    break;

  case 13:
#line 403 "mod_yacc.y"
    {append (mod_yytext);;}
    break;

  case 14:
#line 405 "mod_yacc.y"
    {append("[");;}
    break;

  case 15:
#line 407 "mod_yacc.y"
    {append("]");;}
    break;

  case 16:
#line 409 "mod_yacc.y"
    {append("(");;}
    break;

  case 17:
#line 411 "mod_yacc.y"
    {append(")");;}
    break;

  case 18:
#line 414 "mod_yacc.y"
    {fputs (mod_yytext, mod_yyout);;}
    break;

  case 19:
#line 415 "mod_yacc.y"
    {fputs (mod_yytext, mod_yyout);;}
    break;

  case 20:
#line 416 "mod_yacc.y"
    {fputs (mod_yytext, mod_yyout);;}
    break;

  case 21:
#line 418 "mod_yacc.y"
    {putc ('[', mod_yyout);;}
    break;

  case 22:
#line 420 "mod_yacc.y"
    {putc (']', mod_yyout);;}
    break;

  case 23:
#line 422 "mod_yacc.y"
    {putc ('(', mod_yyout);;}
    break;

  case 24:
#line 424 "mod_yacc.y"
    {putc (')', mod_yyout);;}
    break;

  case 25:
#line 428 "mod_yacc.y"
    {fprintf (mod_yyout, "private->circuit.init");;}
    break;

  case 26:
#line 430 "mod_yacc.y"
    {fprintf (mod_yyout, "Mif_Private_t *private");;}
    break;

  case 27:
#line 432 "mod_yacc.y"
    {fprintf (mod_yyout, "private->circuit.anal_type");;}
    break;

  case 28:
#line 434 "mod_yacc.y"
    {fprintf (mod_yyout, "private->circuit.anal_init");;}
    break;

  case 29:
#line 436 "mod_yacc.y"
    {fprintf (mod_yyout, "private->circuit.call_type");;}
    break;

  case 30:
#line 438 "mod_yacc.y"
    {fprintf (mod_yyout, "private->circuit.time");;}
    break;

  case 31:
#line 440 "mod_yacc.y"
    {fprintf (mod_yyout, "private->circuit.frequency");;}
    break;

  case 32:
#line 442 "mod_yacc.y"
    {fprintf (mod_yyout, "private->circuit.temperature");;}
    break;

  case 33:
#line 444 "mod_yacc.y"
    {fprintf (mod_yyout, "private->circuit.t[%s]", (yyvsp[(3) - (4)].str));;}
    break;

  case 34:
#line 446 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), PARAM);
			    fprintf (mod_yyout, "private->param[%d]->element[%s]",
				     i, subscript ((yyvsp[(3) - (4)].sub_id)));
			    put_type (mod_yyout, mod_ifs_table->param[i].type);
			   ;}
    break;

  case 35:
#line 452 "mod_yacc.y"
    {int i = valid_id ((yyvsp[(3) - (4)].sub_id), PARAM);
			    fprintf (mod_yyout, "private->param[%d]->size", i);;}
    break;

  case 36:
#line 455 "mod_yacc.y"
    {int i = valid_id ((yyvsp[(3) - (4)].sub_id), PARAM);
			    fprintf (mod_yyout, "private->param[%d]->is_null", i);;}
    break;

  case 37:
#line 458 "mod_yacc.y"
    {int i = valid_id ((yyvsp[(3) - (4)].sub_id), CONN);
			    fprintf (mod_yyout, "private->conn[%d]->size", i);;}
    break;

  case 38:
#line 461 "mod_yacc.y"
    {int i = valid_id ((yyvsp[(3) - (4)].sub_id), CONN);
			    fprintf (mod_yyout, "private->conn[%d]->is_null", i);;}
    break;

  case 39:
#line 465 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (6)].sub_id), CONN);
			    int j = valid_subid ((yyvsp[(5) - (6)].sub_id), CONN);
			    check_dir (i, OUT, "PARTIAL");
			    check_dir (j, IN, "PARTIAL");
			    fprintf (mod_yyout, "private->conn[%d]->port[%s]->partial[%d].port[%s]",
				     i, subscript((yyvsp[(3) - (6)].sub_id)), j, subscript((yyvsp[(5) - (6)].sub_id)));;}
    break;

  case 40:
#line 473 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (6)].sub_id), CONN);
			    int j = valid_subid ((yyvsp[(5) - (6)].sub_id), CONN);
			    check_dir (i, OUT, "AC_GAIN");
			    check_dir (j, IN, "AC_GAIN");
			    fprintf (mod_yyout, 
				     "private->conn[%d]->port[%s]->ac_gain[%d].port[%s]",
				     i, subscript((yyvsp[(3) - (6)].sub_id)), j, subscript((yyvsp[(5) - (6)].sub_id)));;}
    break;

  case 41:
#line 481 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), STATIC_VAR);
			    fprintf (mod_yyout, 
				    "private->inst_var[%d]->element[%s]",
				     i, subscript((yyvsp[(3) - (4)].sub_id)));
			    if (mod_ifs_table->inst_var[i].is_array
				&& !((yyvsp[(3) - (4)].sub_id).has_subscript)) {
			       /* null - eg. for malloc lvalue */
			    } else {
			       put_type (mod_yyout, 
					mod_ifs_table->inst_var[i].type);
			    } ;}
    break;

  case 42:
#line 493 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), STATIC_VAR);
			    fprintf (mod_yyout, "private->inst_var[%d]->size",
				    i);;}
    break;

  case 43:
#line 497 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
			    check_dir (i, OUT, "OUTPUT_DELAY");
			    fprintf (mod_yyout, 
				     "private->conn[%d]->port[%s]->delay", i,
				     subscript((yyvsp[(3) - (4)].sub_id)));;}
    break;

  case 44:
#line 503 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
			    check_dir (i, OUT, "CHANGED");
			    fprintf (mod_yyout, 
				     "private->conn[%d]->port[%s]->changed", i,
				     subscript((yyvsp[(3) - (4)].sub_id)));;}
    break;

  case 45:
#line 509 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
 			    check_dir (i, IN, "INPUT");
			    fprintf (mod_yyout, 
				     "private->conn[%d]->port[%s]->input",
				     i, subscript((yyvsp[(3) - (4)].sub_id)));
			    put_conn_type (mod_yyout, 
			       mod_ifs_table->conn[i].allowed_port_type[0]);;}
    break;

  case 46:
#line 517 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
 			    check_dir (i, IN, "INPUT_TYPE");
			    fprintf (mod_yyout, 
				     "private->conn[%d]->port[%s]->type_str",
				     i, subscript((yyvsp[(3) - (4)].sub_id))); ;}
    break;

  case 47:
#line 523 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
 			    check_dir (i, OUT, "OUTPUT_TYPE");
			    fprintf (mod_yyout, 
				     "private->conn[%d]->port[%s]->type_str",
				     i, subscript((yyvsp[(3) - (4)].sub_id))); ;}
    break;

  case 48:
#line 529 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
 			    check_dir (i, IN, "INPUT_STRENGTH");
			    fprintf (mod_yyout, 
				     "((Digital_t*)(private->conn[%d]->port[%s]->input",
				     i, subscript((yyvsp[(3) - (4)].sub_id)));
			    put_conn_type (mod_yyout, 
			       mod_ifs_table->conn[i].allowed_port_type[0]);
			    fprintf (mod_yyout, "))->strength");;}
    break;

  case 49:
#line 538 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
 			    check_dir (i, IN, "INPUT_STATE");
			    fprintf (mod_yyout, 
				     "((Digital_t*)(private->conn[%d]->port[%s]->input", 
				     i, subscript((yyvsp[(3) - (4)].sub_id)));
			    put_conn_type (mod_yyout, 
			       mod_ifs_table->conn[i].allowed_port_type[0]);
			    fprintf (mod_yyout, "))->state");;}
    break;

  case 50:
#line 547 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
 			    check_dir (i, OUT, "OUTPUT");
			    fprintf (mod_yyout, 
				     "private->conn[%d]->port[%s]->output", 
				     i, subscript((yyvsp[(3) - (4)].sub_id)));
			    put_conn_type (mod_yyout, 
			       mod_ifs_table->conn[i].allowed_port_type[0]);;}
    break;

  case 51:
#line 555 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
 			    check_dir (i, OUT, "OUTPUT_STRENGTH");
			    fprintf (mod_yyout, 
				     "((Digital_t*)(private->conn[%d]->port[%s]->output",
				     i, subscript((yyvsp[(3) - (4)].sub_id)));
			    put_conn_type (mod_yyout, 
			       mod_ifs_table->conn[i].allowed_port_type[0]);
			    fprintf (mod_yyout, "))->strength");;}
    break;

  case 52:
#line 564 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
 			    check_dir (i, OUT, "OUTPUT_STATE");
			    fprintf (mod_yyout, 
				     "((Digital_t*)(private->conn[%d]->port[%s]->output",
				     i, subscript((yyvsp[(3) - (4)].sub_id)));
			    put_conn_type (mod_yyout, 
			       mod_ifs_table->conn[i].allowed_port_type[0]);
			    fprintf (mod_yyout, "))->state");;}
    break;

  case 53:
#line 573 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
			    fprintf (mod_yyout, 
				     "private->conn[%d]->port[%s]->changed", i,
				     subscript((yyvsp[(3) - (4)].sub_id)));;}
    break;

  case 54:
#line 578 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
			    fprintf (mod_yyout, 
				     "private->conn[%d]->port[%s]->load", i,
				     subscript((yyvsp[(3) - (4)].sub_id)));;}
    break;

  case 55:
#line 583 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
			    fprintf (mod_yyout, 
				     "private->conn[%d]->port[%s]->total_load", i,
				     subscript((yyvsp[(3) - (4)].sub_id)));;}
    break;

  case 56:
#line 588 "mod_yacc.y"
    {int i = valid_subid ((yyvsp[(3) - (4)].sub_id), CONN);
			    fprintf (mod_yyout, 
				     "private->conn[%d]->port[%s]->msg", i,
				     subscript((yyvsp[(3) - (4)].sub_id)));;}
    break;

  case 58:
#line 596 "mod_yacc.y"
    {(yyval.sub_id) = (yyvsp[(1) - (4)].sub_id);
			   (yyval.sub_id).has_subscript = TRUE;
			   (yyval.sub_id).subscript = (yyvsp[(3) - (4)].str);;}
    break;

  case 59:
#line 602 "mod_yacc.y"
    {(yyval.sub_id).has_subscript = FALSE;
			      (yyval.sub_id).id = strdup (mod_yytext);;}
    break;


/* Line 1267 of yacc.c.  */
#line 2201 "mod_yacc.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 606 "mod_yacc.y"


