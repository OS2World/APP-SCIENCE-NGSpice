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
     TOK_ALLOWED_TYPES = 258,
     TOK_ARRAY = 259,
     TOK_ARRAY_BOUNDS = 260,
     TOK_BOOL_NO = 261,
     TOK_BOOL_YES = 262,
     TOK_COMMA = 263,
     TOK_PORT_NAME = 264,
     TOK_PORT_TABLE = 265,
     TOK_CTYPE_D = 266,
     TOK_CTYPE_G = 267,
     TOK_CTYPE_GD = 268,
     TOK_CTYPE_H = 269,
     TOK_CTYPE_HD = 270,
     TOK_CTYPE_I = 271,
     TOK_CTYPE_ID = 272,
     TOK_CTYPE_V = 273,
     TOK_CTYPE_VD = 274,
     TOK_CTYPE_VNAM = 275,
     TOK_C_FUNCTION_NAME = 276,
     TOK_DASH = 277,
     TOK_DATA_TYPE = 278,
     TOK_DEFAULT_TYPE = 279,
     TOK_DEFAULT_VALUE = 280,
     TOK_DESCRIPTION = 281,
     TOK_DIRECTION = 282,
     TOK_DIR_IN = 283,
     TOK_DIR_INOUT = 284,
     TOK_DIR_OUT = 285,
     TOK_DTYPE_BOOLEAN = 286,
     TOK_DTYPE_COMPLEX = 287,
     TOK_DTYPE_INT = 288,
     TOK_DTYPE_POINTER = 289,
     TOK_DTYPE_REAL = 290,
     TOK_DTYPE_STRING = 291,
     TOK_IDENTIFIER = 292,
     TOK_STATIC_VAR_NAME = 293,
     TOK_STATIC_VAR_TABLE = 294,
     TOK_INT_LITERAL = 295,
     TOK_LANGLE = 296,
     TOK_LBRACKET = 297,
     TOK_LIMITS = 298,
     TOK_NAME_TABLE = 299,
     TOK_NULL_ALLOWED = 300,
     TOK_PARAMETER_NAME = 301,
     TOK_PARAMETER_TABLE = 302,
     TOK_RANGLE = 303,
     TOK_RBRACKET = 304,
     TOK_REAL_LITERAL = 305,
     TOK_SPICE_MODEL_NAME = 306,
     TOK_STRING_LITERAL = 307
   };
#endif
/* Tokens.  */
#define TOK_ALLOWED_TYPES 258
#define TOK_ARRAY 259
#define TOK_ARRAY_BOUNDS 260
#define TOK_BOOL_NO 261
#define TOK_BOOL_YES 262
#define TOK_COMMA 263
#define TOK_PORT_NAME 264
#define TOK_PORT_TABLE 265
#define TOK_CTYPE_D 266
#define TOK_CTYPE_G 267
#define TOK_CTYPE_GD 268
#define TOK_CTYPE_H 269
#define TOK_CTYPE_HD 270
#define TOK_CTYPE_I 271
#define TOK_CTYPE_ID 272
#define TOK_CTYPE_V 273
#define TOK_CTYPE_VD 274
#define TOK_CTYPE_VNAM 275
#define TOK_C_FUNCTION_NAME 276
#define TOK_DASH 277
#define TOK_DATA_TYPE 278
#define TOK_DEFAULT_TYPE 279
#define TOK_DEFAULT_VALUE 280
#define TOK_DESCRIPTION 281
#define TOK_DIRECTION 282
#define TOK_DIR_IN 283
#define TOK_DIR_INOUT 284
#define TOK_DIR_OUT 285
#define TOK_DTYPE_BOOLEAN 286
#define TOK_DTYPE_COMPLEX 287
#define TOK_DTYPE_INT 288
#define TOK_DTYPE_POINTER 289
#define TOK_DTYPE_REAL 290
#define TOK_DTYPE_STRING 291
#define TOK_IDENTIFIER 292
#define TOK_STATIC_VAR_NAME 293
#define TOK_STATIC_VAR_TABLE 294
#define TOK_INT_LITERAL 295
#define TOK_LANGLE 296
#define TOK_LBRACKET 297
#define TOK_LIMITS 298
#define TOK_NAME_TABLE 299
#define TOK_NULL_ALLOWED 300
#define TOK_PARAMETER_NAME 301
#define TOK_PARAMETER_TABLE 302
#define TOK_RANGLE 303
#define TOK_RBRACKET 304
#define TOK_REAL_LITERAL 305
#define TOK_SPICE_MODEL_NAME 306
#define TOK_STRING_LITERAL 307




/* Copy the first part of user declarations.  */
#line 1 "ifs_yacc.y"
 /* $Id: ifs_yacc.y,v 1.7 2010/06/27 13:28:09 rlar Exp $ */

/*============================================================================
FILE  ifs_yacc.y

MEMBER OF process cmpp

Copyright 1991
Georgia Tech Research Corporation
Atlanta, Georgia 30332
All Rights Reserved

PROJECT A-8503

AUTHORS

    9/12/91  Steve Tynor

MODIFICATIONS

    12/31/91  Bill Kuhn  Fix bug in usage of strcmp in check_default_type()

SUMMARY

    This file contains the BNF specification of the language used in
    the ifspec.ifs file together with various support functions,
    and parses the ifspec.ifs file to get the information from it
    and place this information into a data structure
    of type Ifs_Table_t.

INTERFACES

    yyparse()     -    Generated automatically by UNIX 'yacc' utility.

REFERENCED FILES

    ifs_lex.l

NON-STANDARD FEATURES

    None.

============================================================================*/

#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "ifs_yacc_y.h"

#define	yymaxdepth ifs_yymaxdepth
#define	yyparse	ifs_yyparse
#define	yylex	ifs_yylex
#define	yyerror	ifs_yyerror
#define	yylval	ifs_yylval
#define	yychar	ifs_yychar
#define	yydebug	ifs_yydebug
#define	yypact	ifs_yypact
#define	yyr1	ifs_yyr1
#define	yyr2	ifs_yyr2
#define	yydef	ifs_yydef
#define	yychk	ifs_yychk
#define	yypgo	ifs_yypgo
#define	yyact	ifs_yyact
#define	yyexca	ifs_yyexca
#define yyerrflag ifs_yyerrflag
#define yynerrs	ifs_yynerrs
#define	yyps	ifs_yyps
#define	yypv	ifs_yypv
#define	yys	ifs_yys
#define	yy_yys	ifs_yyyys
#define	yystate	ifs_yystate
#define	yytmp	ifs_yytmp
#define	yyv	ifs_yyv
#define	yy_yyv	ifs_yyyyv
#define	yyval	ifs_yyval
#define	yylloc	ifs_yylloc
#define yyreds	ifs_yyreds
#define yytoks	ifs_yytoks
#define yylhs	ifs_yyyylhs
#define yylen	ifs_yyyylen
#define yydefred ifs_yyyydefred
#define yydgoto	ifs_yyyydgoto
#define yysindex ifs_yyyysindex
#define yyrindex ifs_yyyyrindex
#define yygindex ifs_yyyygindex
#define yytable	 ifs_yyyytable
#define yycheck	 ifs_yyyycheck
#define yyname   ifs_yyyyname
#define yyrule   ifs_yyyyrule

extern int yylineno;
extern int yyival;
extern double yydval;
extern char *ifs_yytext;
extern void yyerror (char*);
 extern int ifs_yylex(void);

Boolean_t parser_just_names;
static Boolean_t saw_model_name;
static Boolean_t saw_function_name;

static char *dtype_to_str[] = {
   "BOOLEAN", "INTEGER", "REAL", "COMPLEX", "STRING", "POINTER"
   };

static Boolean_t did_default_type;
static Boolean_t did_allowed_types;

static int num_items;
static int item;
static int item_offset;
static Boolean_t num_items_fixed;

Ifs_Table_t *parser_ifs_table;
#define TBL parser_ifs_table

static int alloced_size [4];

/*
 * !!!!! Make sure these are large enough so that they never get realloced
 * !!!!! since that will cause garbage uninitialized data...
 * !!!!! (FIX THIS!)
 */
#define DEFAULT_SIZE_CONN	100
#define DEFAULT_SIZE_PARAM	100
#define DEFAULT_SIZE_INST_VAR	100
#define GROW_SIZE		10

typedef enum {
   TBL_NAME,
   TBL_PORT,
   TBL_PARAMETER,
   TBL_STATIC_VAR,
} Table_t;

typedef struct {
   Table_t table;
   int record;
} Context_t;

Context_t context;

#define ITEM_BUFFER_SIZE 20	/* number of items that can be put in a table
				 * before requiring a new xxx_TABLE: keyword
				 */
#define FOR_ITEM(i) for (i = item_offset; i < num_items; i++)
#define ITEM_BUF(i) item_buffer[i-item_offset]

#define ASSIGN_BOUNDS(struct_name, i) \
  if (ITEM_BUF(i).range.is_named) {\
    TBL->struct_name[i].has_conn_ref = TRUE;\
    TBL->struct_name[i].conn_ref = find_conn_ref (ITEM_BUF(i).range.u.name);\
  } else {\
    TBL->struct_name[i].has_conn_ref = FALSE;\
    TBL->struct_name[i].has_lower_bound =\
       ITEM_BUF(i).range.u.bounds.lower.has_bound;\
    TBL->struct_name[i].has_upper_bound =\
       ITEM_BUF(i).range.u.bounds.upper.has_bound;\
    if (TBL->struct_name[i].has_lower_bound) {\
      assert (ITEM_BUF(i).range.u.bounds.lower.bound.kind == INTEGER);\
       TBL->struct_name[i].lower_bound =\
	ITEM_BUF(i).range.u.bounds.lower.bound.u.ivalue;\
    }\
    if (TBL->struct_name[i].has_upper_bound) {\
       assert (ITEM_BUF(i).range.u.bounds.upper.bound.kind == INTEGER);\
       TBL->struct_name[i].upper_bound =\
	  ITEM_BUF(i).range.u.bounds.upper.bound.u.ivalue;\
    }\
  }

/*---------------------------------------------------------------------------*/
static void fatal (char *str)
{
   yyerror (str);
   exit(1);
}

/*---------------------------------------------------------------------------*/
static int
find_conn_ref (char *name)
{
   int i;
   char str[130];
   
   for (i = 0; i < TBL->num_conn; i++) {
      if (strcmp (name, TBL->conn[i].name) == 0) {
	 return i;
      }
   }
   sprintf (str, "Port `%s' not found", name);
   yyerror (str);

   return 0;
}

typedef enum {C_DOUBLE, C_BOOLEAN, C_POINTER, C_UNDEF} Ctype_Class_t;

/*---------------------------------------------------------------------------*/
static Ctype_Class_t get_ctype_class (Port_Type_t type)
{
   switch (type) {
   case USER_DEFINED:
      return C_POINTER;
      break;
   case DIGITAL:
      return C_BOOLEAN;
      break;
   default:
      return C_DOUBLE;
      break;
   }
}

/*---------------------------------------------------------------------------*/
static void check_port_type_direction (Dir_t dir, Port_Type_t port_type)
{
   switch (port_type) {
   case VOLTAGE:
   case DIFF_VOLTAGE:
   case CURRENT:
   case DIFF_CURRENT:
   case DIGITAL:
   case USER_DEFINED:
      /*
       * anything goes
       */
      break;
   case VSOURCE_CURRENT:
      if (dir != IN) {
	 yyerror ("Port type `vnam' is only valid for `in' ports");
      }
      break;
   case CONDUCTANCE:
   case DIFF_CONDUCTANCE:
   case RESISTANCE:
   case DIFF_RESISTANCE:
      if (dir != INOUT) {
	 yyerror ("Port types `g', `gd', `h', `hd' are only valid for `inout' ports");
      }
      break;
   default:
      assert (0);
   }
}

/*---------------------------------------------------------------------------*/
static void check_dtype_not_pointer (Data_Type_t dtype)
{
   if (dtype == POINTER) {
      yyerror("Invalid parameter type - POINTER type valid only for STATIC_VARs");
   }
}

/*---------------------------------------------------------------------------*/
static void check_default_type (Conn_Info_t conn)
{
   int i;
   
   for (i = 0; i < conn.num_allowed_types; i++) {
      if (conn.default_port_type == conn.allowed_port_type[i]) {
	 if ((conn.default_port_type != USER_DEFINED) ||
	     (strcmp (conn.default_type, conn.allowed_type[i]) == 0)) {
	    return;
	 }
      }
   }
   yyerror ("Port default type is not an allowed type");
}

/*---------------------------------------------------------------------------*/
static void
assign_ctype_list (Conn_Info_t  *conn, Ctype_List_t *ctype_list )
{
   int i;
   Ctype_List_t *p;
   Ctype_Class_t class = C_UNDEF;
   
   conn->num_allowed_types = 0;
   for (p = ctype_list; p; p = p->next) {
      conn->num_allowed_types++;
   }
   conn->allowed_type = (char**) calloc (conn->num_allowed_types,
					 sizeof (char*));
   conn->allowed_port_type = (Port_Type_t*) calloc (conn->num_allowed_types,
						    sizeof (Port_Type_t));
   if (! (conn->allowed_type && conn->allowed_port_type)) {
      fatal ("Could not allocate memory");
   }
   for (i = conn->num_allowed_types-1, p = ctype_list; p; i--, p = p->next) {
      if (class == C_UNDEF) {
	 class = get_ctype_class (p->ctype.kind);
      }
      if (class != get_ctype_class (p->ctype.kind)) {
	 yyerror ("Incompatible port types in `allowed_types' clause");
      }
      check_port_type_direction (conn->direction, p->ctype.kind);
      
      conn->allowed_port_type[i] = p->ctype.kind;
      conn->allowed_type[i] = p->ctype.id;
   } 
}

/*---------------------------------------------------------------------------*/
static void
assign_value (Data_Type_t type, Value_t *dest_value, My_Value_t src_value)
{
   char str[200];
   if ((type == REAL) && (src_value.kind == INTEGER)) {
      dest_value->rvalue = src_value.u.ivalue;
      return;
   } else if (type != src_value.kind) {
      sprintf (str, "Invalid parameter type (saw %s - expected %s)",
	       dtype_to_str[src_value.kind],
	       dtype_to_str[type] );
      yyerror (str);
   } 
   switch (type) {
   case BOOLEAN:
      dest_value->bvalue = src_value.u.bvalue;
      break;
   case INTEGER:
      dest_value->ivalue = src_value.u.ivalue;
      break;
   case REAL:
      dest_value->rvalue = src_value.u.rvalue;
      break;
   case COMPLEX:
      dest_value->cvalue = src_value.u.cvalue;
      break;
   case STRING:
      dest_value->svalue = src_value.u.svalue;
      break;
   default:
      yyerror ("INTERNAL ERROR - unexpected data type in `assign_value'");
   }
}   

/*---------------------------------------------------------------------------*/
static void
assign_limits (Data_Type_t type, Param_Info_t *param, Range_t range)
{
   if (range.is_named) {
      yyerror ("Named range not allowed for limits");
   }
   param->has_lower_limit = range.u.bounds.lower.has_bound;
   if (param->has_lower_limit) {
      assign_value (type, &param->lower_limit, range.u.bounds.lower.bound);
   }
   param->has_upper_limit = range.u.bounds.upper.has_bound;
   if (param->has_upper_limit) {
      assign_value (type, &param->upper_limit, range.u.bounds.upper.bound);
   }
}

/*---------------------------------------------------------------------------*/
static void
check_item_num (void)
{
   if (item-item_offset >= ITEM_BUFFER_SIZE) {
      fatal ("Too many items in table - split into sub-tables");
   }
   if (item > alloced_size [context.table] ) {
      switch (context.table) {
      case TBL_NAME:
	 break;
      case TBL_PORT:
	 alloced_size[context.table] += GROW_SIZE;
	 TBL->conn = (Conn_Info_t*)
	    realloc (TBL->conn,
		     alloced_size [context.table] * sizeof (Conn_Info_t));
	 if (! TBL->conn) {
	    fatal ("Error allocating memory for port definition");
	 }
	 break;
      case TBL_PARAMETER:
	 alloced_size [context.table] += GROW_SIZE;
	 TBL->param = (Param_Info_t*)
	    realloc (TBL->param,
		     alloced_size [context.table] * sizeof (Param_Info_t));
	 if (! TBL->param) {
	    fatal ("Error allocating memory for parameter definition");
	 }
	 break;
      case TBL_STATIC_VAR:
	 alloced_size [context.table] += GROW_SIZE;
	 TBL->inst_var = (Inst_Var_Info_t*)
	    realloc (TBL->inst_var,
		     alloced_size [context.table] * sizeof (Inst_Var_Info_t));
	 if (! TBL->inst_var) {
	    fatal ("Error allocating memory for static variable definition");
	 }
	 break;
      }
   }
   item++;
}

/*---------------------------------------------------------------------------*/
static void
check_end_item_num (void)
{
   if (num_items_fixed) {
      if (item != num_items) {
	 char buf[200];
	 sprintf
	    (buf,
	     "Wrong number of elements in sub-table (saw %d - expected %d)",
	     item - item_offset,
	     num_items - item_offset);
	 fatal (buf);
      }
   } else {
      num_items = item;
      num_items_fixed = TRUE;
      switch (context.table) {
      case TBL_NAME:
	 break;
      case TBL_PORT:
	 TBL->num_conn = num_items;
	 break;
      case TBL_PARAMETER:
	 TBL->num_param = num_items;
	 break;
      case TBL_STATIC_VAR:
	 TBL->num_inst_var = num_items;
	 break;
      }
   }
   item = item_offset;
}

#define INIT(n) item = (n); item_offset = (n); num_items = (n); num_items_fixed = FALSE
#define ITEM check_item_num()
#define END  check_end_item_num()
   


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
#line 489 "ifs_yacc.y"
{
   Ctype_List_t 	*ctype_list;
   Dir_t		dir;
   Boolean_t		bool;
   Range_t		range;
   Data_Type_t		dtype;
   My_Port_Type_t	ctype;
   My_Value_t		value;
   char			*str;
   Bound_t		bound;
   int			ival;
   double		rval;
   Complex_t		cval;
}
/* Line 187 of yacc.c.  */
#line 652 "ifs_yacc.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 519 "ifs_yacc.y"

/*
 * resuse the Yacc union for our buffer:
 */
YYSTYPE item_buffer [ITEM_BUFFER_SIZE];

/*
 * Shorthand for refering to the current element of the item buffer:
 */
#define BUF ITEM_BUF(item-1)



/* Line 216 of yacc.c.  */
#line 677 "ifs_yacc.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   109

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNRULES -- Number of states.  */
#define YYNSTATES  143

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    13,    17,    18,
      22,    23,    27,    28,    32,    33,    36,    39,    42,    45,
      46,    49,    52,    55,    58,    61,    64,    67,    70,    73,
      74,    77,    80,    83,    86,    89,    92,    95,    98,   101,
     102,   105,   108,   111,   114,   117,   118,   121,   122,   125,
     128,   129,   132,   133,   136,   138,   140,   142,   143,   146,
     147,   150,   152,   154,   156,   158,   160,   162,   164,   166,
     168,   170,   172,   173,   176,   178,   180,   182,   184,   186,
     188,   189,   192,   194,   200,   201,   203,   205,   207,   209,
     215,   217,   219,   220,   223,   225,   227,   229,   231,   233,
     235,   241,   242,   245,   249,   251,   255,   257,   259,   261,
     263,   265,   267,   269,   271
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    -1,    55,    56,    -1,    57,    -1,    56,
      57,    -1,    -1,    44,    58,    62,    -1,    -1,    10,    59,
      64,    -1,    -1,    47,    60,    66,    -1,    -1,    39,    61,
      68,    -1,    -1,    62,    63,    -1,    21,    95,    -1,    51,
      95,    -1,    26,    94,    -1,    -1,    64,    65,    -1,     9,
      70,    -1,    26,    72,    -1,    27,    73,    -1,    24,    76,
      -1,     3,    90,    -1,     4,    75,    -1,     5,    71,    -1,
      45,    75,    -1,    -1,    66,    67,    -1,    46,    70,    -1,
      26,    72,    -1,    23,    78,    -1,    25,    86,    -1,    43,
      80,    -1,     4,    75,    -1,     5,    71,    -1,    45,    75,
      -1,    -1,    68,    69,    -1,    38,    70,    -1,    26,    72,
      -1,    23,    78,    -1,     4,    75,    -1,    -1,    70,    95,
      -1,    -1,    71,    81,    -1,    71,    95,    -1,    -1,    72,
      94,    -1,    -1,    73,    74,    -1,    28,    -1,    30,    -1,
      29,    -1,    -1,    75,    93,    -1,    -1,    76,    77,    -1,
      18,    -1,    19,    -1,    20,    -1,    16,    -1,    17,    -1,
      12,    -1,    13,    -1,    14,    -1,    15,    -1,    11,    -1,
      95,    -1,    -1,    78,    79,    -1,    35,    -1,    33,    -1,
      31,    -1,    32,    -1,    36,    -1,    34,    -1,    -1,    80,
      84,    -1,    22,    -1,    42,    83,    82,    83,    49,    -1,
      -1,     8,    -1,    22,    -1,    97,    -1,    22,    -1,    42,
      85,    82,    85,    49,    -1,    22,    -1,    96,    -1,    -1,
      86,    87,    -1,    22,    -1,    88,    -1,    94,    -1,    93,
      -1,    89,    -1,    96,    -1,    41,    98,    82,    98,    48,
      -1,    -1,    90,    91,    -1,    42,    92,    49,    -1,    77,
      -1,    92,    82,    77,    -1,     7,    -1,     6,    -1,    52,
      -1,    37,    -1,    98,    -1,    97,    -1,    99,    -1,    50,
      -1,    40,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   534,   534,   534,   563,   564,   568,   567,   571,   570,
     578,   577,   583,   582,   589,   590,   593,   597,   601,   605,
     606,   609,   615,   621,   627,   639,   650,   656,   663,   671,
     672,   675,   681,   687,   694,   706,   714,   720,   726,   734,
     735,   738,   744,   750,   756,   764,   765,   768,   769,   772,
     778,   779,   782,   783,   786,   787,   788,   791,   792,   795,
     796,   799,   800,   801,   802,   803,   804,   805,   806,   807,
     808,   809,   813,   814,   817,   818,   819,   820,   821,   822,
     825,   826,   829,   832,   839,   840,   843,   844,   848,   851,
     858,   859,   863,   864,   867,   868,   871,   874,   877,   880,
     883,   888,   889,   893,   896,   904,   917,   918,   921,   924,
     927,   930,   933,   938,   941
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_ALLOWED_TYPES", "TOK_ARRAY",
  "TOK_ARRAY_BOUNDS", "TOK_BOOL_NO", "TOK_BOOL_YES", "TOK_COMMA",
  "TOK_PORT_NAME", "TOK_PORT_TABLE", "TOK_CTYPE_D", "TOK_CTYPE_G",
  "TOK_CTYPE_GD", "TOK_CTYPE_H", "TOK_CTYPE_HD", "TOK_CTYPE_I",
  "TOK_CTYPE_ID", "TOK_CTYPE_V", "TOK_CTYPE_VD", "TOK_CTYPE_VNAM",
  "TOK_C_FUNCTION_NAME", "TOK_DASH", "TOK_DATA_TYPE", "TOK_DEFAULT_TYPE",
  "TOK_DEFAULT_VALUE", "TOK_DESCRIPTION", "TOK_DIRECTION", "TOK_DIR_IN",
  "TOK_DIR_INOUT", "TOK_DIR_OUT", "TOK_DTYPE_BOOLEAN", "TOK_DTYPE_COMPLEX",
  "TOK_DTYPE_INT", "TOK_DTYPE_POINTER", "TOK_DTYPE_REAL",
  "TOK_DTYPE_STRING", "TOK_IDENTIFIER", "TOK_STATIC_VAR_NAME",
  "TOK_STATIC_VAR_TABLE", "TOK_INT_LITERAL", "TOK_LANGLE", "TOK_LBRACKET",
  "TOK_LIMITS", "TOK_NAME_TABLE", "TOK_NULL_ALLOWED", "TOK_PARAMETER_NAME",
  "TOK_PARAMETER_TABLE", "TOK_RANGLE", "TOK_RBRACKET", "TOK_REAL_LITERAL",
  "TOK_SPICE_MODEL_NAME", "TOK_STRING_LITERAL", "$accept", "ifs_file",
  "@1", "list_of_tables", "table", "@2", "@3", "@4", "@5", "name_table",
  "name_table_item", "port_table", "port_table_item", "parameter_table",
  "parameter_table_item", "static_var_table", "static_var_table_item",
  "list_of_ids", "list_of_array_bounds", "list_of_strings",
  "list_of_directions", "direction", "list_of_bool", "list_of_ctypes",
  "ctype", "list_of_dtypes", "dtype", "list_of_ranges", "int_range",
  "maybe_comma", "int_or_dash", "range", "number_or_dash",
  "list_of_values", "value_or_dash", "value", "complex",
  "list_of_ctype_lists", "delimited_ctype_list", "ctype_list", "bool",
  "string", "identifier", "number", "integer_value", "real", "integer", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    54,    56,    56,    58,    57,    59,    57,
      60,    57,    61,    57,    62,    62,    63,    63,    63,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    67,    67,    67,    67,    67,    67,    67,    67,    68,
      68,    69,    69,    69,    69,    70,    70,    71,    71,    71,
      72,    72,    73,    73,    74,    74,    74,    75,    75,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    78,    78,    79,    79,    79,    79,    79,    79,
      80,    80,    81,    81,    82,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    87,    88,    88,    88,    88,
      89,    90,    90,    91,    92,    92,    93,    93,    94,    95,
      96,    96,    97,    98,    99
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     2,     2,     2,     2,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       2,     2,     2,     2,     2,     0,     2,     0,     2,     2,
       0,     2,     0,     2,     1,     1,     1,     0,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     5,     0,     1,     1,     1,     1,     5,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       5,     0,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     8,    12,     6,    10,     3,     4,
      19,    39,    14,    29,     5,     9,    13,     7,    11,   101,
      57,    47,    45,    59,    50,    52,    57,    20,    57,    72,
      50,    45,    40,     0,     0,     0,    15,    57,    47,    72,
      92,    50,    80,    57,    45,    30,    25,    26,    27,    21,
      24,    22,    23,    28,    44,    43,    42,    41,   109,    16,
     108,    18,    17,    36,    37,    33,    34,    32,    35,    38,
      31,     0,   102,   107,   106,    58,    82,     0,    48,    49,
      46,    70,    66,    67,    68,    69,    64,    65,    61,    62,
      63,    60,    71,    51,    54,    56,    55,    53,    76,    77,
      75,    79,    74,    78,    73,    94,   114,     0,   113,    93,
      95,    98,    97,    96,    99,   111,   110,   112,    88,     0,
      81,   104,    84,    86,    84,    87,    84,    90,    84,    91,
      85,   103,     0,     0,     0,     0,   105,     0,     0,     0,
      83,   100,    89
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     8,     9,    12,    10,    13,    11,    17,
      36,    15,    27,    18,    45,    16,    32,    49,    48,    51,
      52,    97,    47,    50,    91,    55,   104,    68,    78,   132,
     124,   120,   128,    66,   109,   110,   111,    46,    72,   122,
      75,    93,    80,   129,   115,   116,   117
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -101
static const yytype_int8 yypact[] =
{
    -101,    10,    27,  -101,  -101,  -101,  -101,  -101,    27,  -101,
    -101,  -101,  -101,  -101,  -101,     9,     4,    26,    18,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,   -26,   -32,   -26,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,    11,    19,   -13,   -26,
      67,   -32,    72,    19,    19,    57,   -32,   -26,  -101,  -101,
    -101,  -101,  -101,    19,   -13,    57,    -1,   -32,    28,    19,
     -26,    67,  -101,  -101,  -101,  -101,  -101,    33,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,     7,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,     6,
    -101,  -101,    -4,  -101,    59,  -101,    59,  -101,    59,  -101,
    -101,  -101,    67,    33,     7,     6,  -101,    23,    20,    46,
    -101,  -101,  -101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -101,  -101,  -101,  -101,    89,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,   -12,    65,    35,
    -101,  -101,    32,  -101,   -70,    66,  -101,  -101,  -101,   -30,
     -27,  -101,   -28,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
      42,   -18,   -33,    43,   -74,  -100,  -101
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      59,   121,    62,   125,   130,    73,    74,   126,    28,    76,
       3,    58,    19,    20,    21,    79,    61,    92,    22,    57,
      60,   105,    37,    38,    58,    73,    74,    29,   127,    77,
      30,    79,    70,    23,   138,    24,    25,     4,    92,   106,
     107,    39,    31,    40,    41,   131,   106,    33,   113,   108,
     118,    60,    34,    71,    26,   123,   108,   108,    53,   125,
      54,    42,   136,    43,    44,    56,     5,   130,   141,    63,
     119,     6,   140,   106,     7,    69,    67,    35,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    98,    99,
     100,   101,   102,   103,   133,   142,   134,    14,   135,    92,
      94,    95,    96,    64,    58,    65,   137,   139,   112,   114
};

static const yytype_uint8 yycheck[] =
{
      33,    71,    35,    77,     8,     6,     7,   107,     4,    22,
       0,    37,     3,     4,     5,    48,    34,    50,     9,    31,
      52,    22,     4,     5,    37,     6,     7,    23,    22,    42,
      26,    64,    44,    24,   134,    26,    27,    10,    71,    40,
      41,    23,    38,    25,    26,    49,    40,    21,    66,    50,
      22,    52,    26,    42,    45,    22,    50,    50,    26,   133,
      28,    43,   132,    45,    46,    30,    39,     8,    48,    37,
      42,    44,    49,    40,    47,    43,    41,    51,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    31,    32,
      33,    34,    35,    36,   124,    49,   126,     8,   128,   132,
      28,    29,    30,    38,    37,    39,   133,   135,    66,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    55,     0,    10,    39,    44,    47,    56,    57,
      59,    61,    58,    60,    57,    64,    68,    62,    66,     3,
       4,     5,     9,    24,    26,    27,    45,    65,     4,    23,
      26,    38,    69,    21,    26,    51,    63,     4,     5,    23,
      25,    26,    43,    45,    46,    67,    90,    75,    71,    70,
      76,    72,    73,    75,    75,    78,    72,    70,    37,    95,
      52,    94,    95,    75,    71,    78,    86,    72,    80,    75,
      70,    42,    91,     6,     7,    93,    22,    42,    81,    95,
      95,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    77,    95,    94,    28,    29,    30,    74,    31,    32,
      33,    34,    35,    36,    79,    22,    40,    41,    50,    87,
      88,    89,    93,    94,    96,    97,    98,    99,    22,    42,
      84,    77,    92,    22,    83,    97,    98,    22,    85,    96,
       8,    49,    82,    82,    82,    82,    77,    83,    98,    85,
      49,    48,    49
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
        case 2:
#line 534 "ifs_yacc.y"
    {TBL->num_conn = 0;
			   TBL->num_param = 0;
			   TBL->num_inst_var = 0;

			   saw_function_name = FALSE;
			   saw_model_name = FALSE;

			   alloced_size [TBL_PORT] = DEFAULT_SIZE_CONN;
			   alloced_size [TBL_PARAMETER] = DEFAULT_SIZE_PARAM;
			   alloced_size [TBL_STATIC_VAR] = 
			      DEFAULT_SIZE_INST_VAR;

			   TBL->conn = (Conn_Info_t*)
			      calloc (DEFAULT_SIZE_CONN,
				      sizeof (Conn_Info_t));
 		     	   TBL->param = (Param_Info_t*)
			      calloc (DEFAULT_SIZE_PARAM,
				      sizeof (Param_Info_t));
			   TBL->inst_var = (Inst_Var_Info_t*)
			      calloc (DEFAULT_SIZE_INST_VAR,
				      sizeof (Inst_Var_Info_t));
			   if (! (TBL->conn && TBL->param &&
				  TBL->inst_var) ) {
			      fatal ("Could not allocate enough memory");
			   } 
  			  ;}
    break;

  case 6:
#line 568 "ifs_yacc.y"
    {context.table = TBL_NAME;;}
    break;

  case 8:
#line 571 "ifs_yacc.y"
    {context.table = TBL_PORT;
			     did_default_type = FALSE;
			     did_allowed_types = FALSE;
			     INIT (TBL->num_conn);;}
    break;

  case 9:
#line 576 "ifs_yacc.y"
    {TBL->num_conn = num_items;;}
    break;

  case 10:
#line 578 "ifs_yacc.y"
    {context.table = TBL_PARAMETER;
			     INIT (TBL->num_param);;}
    break;

  case 11:
#line 581 "ifs_yacc.y"
    {TBL->num_param = num_items;;}
    break;

  case 12:
#line 583 "ifs_yacc.y"
    {context.table = TBL_STATIC_VAR;
			     INIT (TBL->num_inst_var);;}
    break;

  case 13:
#line 586 "ifs_yacc.y"
    {TBL->num_inst_var = num_items;;}
    break;

  case 16:
#line 594 "ifs_yacc.y"
    {TBL->name.c_fcn_name =strdup (ifs_yytext);
 			   saw_function_name = TRUE;
			   if (parser_just_names && saw_model_name) return 0;;}
    break;

  case 17:
#line 598 "ifs_yacc.y"
    {TBL->name.model_name = strdup (ifs_yytext);
 			   saw_model_name = TRUE;
			   if (parser_just_names && saw_function_name) return 0;;}
    break;

  case 18:
#line 602 "ifs_yacc.y"
    {TBL->name.description = strdup (ifs_yytext);;}
    break;

  case 21:
#line 610 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->conn[i].name = ITEM_BUF(i).str;
			   };}
    break;

  case 22:
#line 616 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->conn[i].description = ITEM_BUF(i).str;
			   };}
    break;

  case 23:
#line 622 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->conn[i].direction = ITEM_BUF(i).dir;
			   };}
    break;

  case 24:
#line 628 "ifs_yacc.y"
    {int i;
			   END;
			   did_default_type = TRUE;
			   FOR_ITEM (i) {
			      TBL->conn[i].default_port_type = 
				 ITEM_BUF(i).ctype.kind;
			      TBL->conn[i].default_type = ITEM_BUF(i).ctype.id;
			      if (did_allowed_types) {
				 check_default_type (TBL->conn[i]);
			      }
			   };}
    break;

  case 25:
#line 640 "ifs_yacc.y"
    {int i;
			   END;
			   did_allowed_types = TRUE;
			   FOR_ITEM (i) {
			      assign_ctype_list (&TBL->conn[i],
						 ITEM_BUF(i).ctype_list);
			      if (did_default_type) {
				 check_default_type (TBL->conn[i]);
			      }
			   };}
    break;

  case 26:
#line 651 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->conn[i].is_array = ITEM_BUF(i).bool;
			   };}
    break;

  case 27:
#line 657 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      ASSIGN_BOUNDS (conn, i);
			      assert (!TBL->conn[i].has_conn_ref);
			   };}
    break;

  case 28:
#line 664 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->conn[i].null_allowed = ITEM_BUF(i).bool;
			   };}
    break;

  case 31:
#line 676 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->param[i].name = ITEM_BUF(i).str;
			   };}
    break;

  case 32:
#line 682 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->param[i].description = ITEM_BUF(i).str;
			   };}
    break;

  case 33:
#line 688 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      check_dtype_not_pointer (ITEM_BUF(i).dtype);
			      TBL->param[i].type = ITEM_BUF(i).dtype;
			   };}
    break;

  case 34:
#line 695 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->param[i].has_default = 
				 ITEM_BUF(i).value.has_value;
			      if (TBL->param[i].has_default) {
   			         assign_value (TBL->param[i].type,
					       &TBL->param[i].default_value,
					       ITEM_BUF(i).value);
			      }
			   };}
    break;

  case 35:
#line 707 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      assign_limits (TBL->param[i].type, 
					     &TBL->param[i],
					     ITEM_BUF(i).range);
			   };}
    break;

  case 36:
#line 715 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->param[i].is_array = ITEM_BUF(i).bool;
			   };}
    break;

  case 37:
#line 721 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      ASSIGN_BOUNDS (param, i);
			   };}
    break;

  case 38:
#line 727 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->param[i].null_allowed = ITEM_BUF(i).bool;
			   };}
    break;

  case 41:
#line 739 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->inst_var[i].name = ITEM_BUF(i).str;
			   };}
    break;

  case 42:
#line 745 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->inst_var[i].description = ITEM_BUF(i).str;
			   };}
    break;

  case 43:
#line 751 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->inst_var[i].type = ITEM_BUF(i).dtype;
			   };}
    break;

  case 44:
#line 757 "ifs_yacc.y"
    {int i;
			   END;
			   FOR_ITEM (i) {
			      TBL->inst_var[i].is_array = ITEM_BUF(i).bool;
			   };}
    break;

  case 46:
#line 765 "ifs_yacc.y"
    {ITEM; BUF.str = (yyvsp[(2) - (2)].str);;}
    break;

  case 48:
#line 770 "ifs_yacc.y"
    {ITEM; 
			    BUF.range = (yyvsp[(2) - (2)].range);;}
    break;

  case 49:
#line 773 "ifs_yacc.y"
    {ITEM; 
			    BUF.range.is_named = TRUE;
			    BUF.range.u.name = (yyvsp[(2) - (2)].str);;}
    break;

  case 51:
#line 779 "ifs_yacc.y"
    {ITEM; BUF.str = (yyvsp[(2) - (2)].str);;}
    break;

  case 53:
#line 783 "ifs_yacc.y"
    {ITEM; BUF.dir = (yyvsp[(2) - (2)].dir);;}
    break;

  case 54:
#line 786 "ifs_yacc.y"
    {(yyval.dir) = IN;;}
    break;

  case 55:
#line 787 "ifs_yacc.y"
    {(yyval.dir) = OUT;;}
    break;

  case 56:
#line 788 "ifs_yacc.y"
    {(yyval.dir) = INOUT;;}
    break;

  case 58:
#line 792 "ifs_yacc.y"
    {ITEM; BUF.bool = (yyvsp[(2) - (2)].bool);;}
    break;

  case 60:
#line 796 "ifs_yacc.y"
    {ITEM; BUF.ctype = (yyvsp[(2) - (2)].ctype);;}
    break;

  case 61:
#line 799 "ifs_yacc.y"
    {(yyval.ctype).kind = VOLTAGE;;}
    break;

  case 62:
#line 800 "ifs_yacc.y"
    {(yyval.ctype).kind = DIFF_VOLTAGE;;}
    break;

  case 63:
#line 801 "ifs_yacc.y"
    {(yyval.ctype).kind = VSOURCE_CURRENT;;}
    break;

  case 64:
#line 802 "ifs_yacc.y"
    {(yyval.ctype).kind = CURRENT;;}
    break;

  case 65:
#line 803 "ifs_yacc.y"
    {(yyval.ctype).kind = DIFF_CURRENT;;}
    break;

  case 66:
#line 804 "ifs_yacc.y"
    {(yyval.ctype).kind = CONDUCTANCE;;}
    break;

  case 67:
#line 805 "ifs_yacc.y"
    {(yyval.ctype).kind = DIFF_CONDUCTANCE;;}
    break;

  case 68:
#line 806 "ifs_yacc.y"
    {(yyval.ctype).kind = RESISTANCE;;}
    break;

  case 69:
#line 807 "ifs_yacc.y"
    {(yyval.ctype).kind = DIFF_RESISTANCE;;}
    break;

  case 70:
#line 808 "ifs_yacc.y"
    {(yyval.ctype).kind = DIGITAL;;}
    break;

  case 71:
#line 809 "ifs_yacc.y"
    {(yyval.ctype).kind = USER_DEFINED;
					 (yyval.ctype).id   = (yyvsp[(1) - (1)].str);;}
    break;

  case 73:
#line 814 "ifs_yacc.y"
    {ITEM; BUF.dtype = (yyvsp[(2) - (2)].dtype);;}
    break;

  case 74:
#line 817 "ifs_yacc.y"
    {(yyval.dtype) = REAL;;}
    break;

  case 75:
#line 818 "ifs_yacc.y"
    {(yyval.dtype) = INTEGER;;}
    break;

  case 76:
#line 819 "ifs_yacc.y"
    {(yyval.dtype) = BOOLEAN;;}
    break;

  case 77:
#line 820 "ifs_yacc.y"
    {(yyval.dtype) = COMPLEX;;}
    break;

  case 78:
#line 821 "ifs_yacc.y"
    {(yyval.dtype) = STRING;;}
    break;

  case 79:
#line 822 "ifs_yacc.y"
    {(yyval.dtype) = POINTER;;}
    break;

  case 81:
#line 826 "ifs_yacc.y"
    {ITEM; BUF.range = (yyvsp[(2) - (2)].range);;}
    break;

  case 82:
#line 829 "ifs_yacc.y"
    {(yyval.range).is_named = FALSE; 
				    (yyval.range).u.bounds.lower.has_bound = FALSE;
				    (yyval.range).u.bounds.upper.has_bound = FALSE;;}
    break;

  case 83:
#line 834 "ifs_yacc.y"
    {(yyval.range).is_named = FALSE;
			    (yyval.range).u.bounds.lower = (yyvsp[(2) - (5)].bound);
			    (yyval.range).u.bounds.upper = (yyvsp[(4) - (5)].bound);;}
    break;

  case 86:
#line 843 "ifs_yacc.y"
    {(yyval.bound).has_bound = FALSE;;}
    break;

  case 87:
#line 844 "ifs_yacc.y"
    {(yyval.bound).has_bound = TRUE; 
				           (yyval.bound).bound = (yyvsp[(1) - (1)].value);;}
    break;

  case 88:
#line 848 "ifs_yacc.y"
    {(yyval.range).is_named = FALSE; 
				    (yyval.range).u.bounds.lower.has_bound = FALSE;
				    (yyval.range).u.bounds.upper.has_bound = FALSE;;}
    break;

  case 89:
#line 853 "ifs_yacc.y"
    {(yyval.range).is_named = FALSE;
			    (yyval.range).u.bounds.lower = (yyvsp[(2) - (5)].bound);
			    (yyval.range).u.bounds.upper = (yyvsp[(4) - (5)].bound);;}
    break;

  case 90:
#line 858 "ifs_yacc.y"
    {(yyval.bound).has_bound = FALSE;;}
    break;

  case 91:
#line 859 "ifs_yacc.y"
    {(yyval.bound).has_bound = TRUE; 
				  (yyval.bound).bound = (yyvsp[(1) - (1)].value);;}
    break;

  case 93:
#line 864 "ifs_yacc.y"
    {ITEM; BUF.value = (yyvsp[(2) - (2)].value);;}
    break;

  case 94:
#line 867 "ifs_yacc.y"
    {(yyval.value).has_value = FALSE;;}
    break;

  case 96:
#line 871 "ifs_yacc.y"
    {(yyval.value).has_value = TRUE;
					 (yyval.value).kind = STRING;
					 (yyval.value).u.svalue = (yyvsp[(1) - (1)].str);;}
    break;

  case 97:
#line 874 "ifs_yacc.y"
    {(yyval.value).has_value = TRUE;
					 (yyval.value).kind = BOOLEAN;
					 (yyval.value).u.bvalue = (yyvsp[(1) - (1)].bool);;}
    break;

  case 98:
#line 877 "ifs_yacc.y"
    {(yyval.value).has_value = TRUE;
					 (yyval.value).kind = COMPLEX;
					 (yyval.value).u.cvalue = (yyvsp[(1) - (1)].cval);;}
    break;

  case 100:
#line 884 "ifs_yacc.y"
    {(yyval.cval).real = (yyvsp[(2) - (5)].rval);
			   (yyval.cval).imag = (yyvsp[(4) - (5)].rval);;}
    break;

  case 102:
#line 890 "ifs_yacc.y"
    {ITEM; BUF.ctype_list = (yyvsp[(2) - (2)].ctype_list);;}
    break;

  case 103:
#line 893 "ifs_yacc.y"
    {(yyval.ctype_list) = (yyvsp[(2) - (3)].ctype_list);;}
    break;

  case 104:
#line 897 "ifs_yacc.y"
    {(yyval.ctype_list) = (Ctype_List_t*)calloc (1,
							sizeof (Ctype_List_t));
			    if (!(yyval.ctype_list)) {
			       fatal ("Error allocating memory");
			    }
			    (yyval.ctype_list)->ctype = (yyvsp[(1) - (1)].ctype);
			    (yyval.ctype_list)->next = (Ctype_List_t*)0;;}
    break;

  case 105:
#line 905 "ifs_yacc.y"
    {(yyval.ctype_list) = (Ctype_List_t*)calloc (1, 
							sizeof (Ctype_List_t));
			    if (!(yyval.ctype_list)) {
			       fatal ("Error allocating memory");
			    }
			    (yyval.ctype_list)->ctype = (yyvsp[(3) - (3)].ctype);
			    (yyval.ctype_list)->next = (yyvsp[(1) - (3)].ctype_list);
			    /*$$->next = (Ctype_List_t*)0;
			    assert ($1);
			    $1->next = $$;*/;}
    break;

  case 106:
#line 917 "ifs_yacc.y"
    {(yyval.bool) = TRUE;;}
    break;

  case 107:
#line 918 "ifs_yacc.y"
    {(yyval.bool) = FALSE;;}
    break;

  case 108:
#line 921 "ifs_yacc.y"
    {(yyval.str) = strdup(ifs_yytext);;}
    break;

  case 109:
#line 924 "ifs_yacc.y"
    {(yyval.str) = strdup(ifs_yytext);;}
    break;

  case 110:
#line 927 "ifs_yacc.y"
    {(yyval.value).has_value = TRUE;
				 (yyval.value).kind = REAL;
				 (yyval.value).u.rvalue = (yyvsp[(1) - (1)].rval);;}
    break;

  case 112:
#line 933 "ifs_yacc.y"
    {(yyval.value).has_value = TRUE;
					 (yyval.value).kind = INTEGER;
					 (yyval.value).u.ivalue = (yyvsp[(1) - (1)].ival);;}
    break;

  case 113:
#line 938 "ifs_yacc.y"
    {(yyval.rval) = yydval;;}
    break;

  case 114:
#line 941 "ifs_yacc.y"
    {(yyval.ival) = yyival;;}
    break;


/* Line 1267 of yacc.c.  */
#line 2634 "ifs_yacc.c"
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


#line 944 "ifs_yacc.y"


