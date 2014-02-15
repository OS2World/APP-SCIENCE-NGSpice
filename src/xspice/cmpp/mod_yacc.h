/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 330 "mod_yacc.y"
{
   char *str;
   Sub_Id_t sub_id;
}
/* Line 1489 of yacc.c.  */
#line 136 "mod_yacc.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

