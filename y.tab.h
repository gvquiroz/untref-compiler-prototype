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
     TYPE_NUMBER = 258,
     TYPE_BOOLEAN = 259,
     TYPE_STRING = 260,
     DEF = 261,
     AS = 262,
     ASSIGN = 263,
     IF = 264,
     WHILE = 265,
     OP_ARI = 266,
     OP_LOG = 267,
     LP = 268,
     RP = 269,
     LC = 270,
     RC = 271,
     NUMBER = 272,
     BOOLEAN = 273,
     STRING = 274,
     VAR_NAME = 275
   };
#endif
/* Tokens.  */
#define TYPE_NUMBER 258
#define TYPE_BOOLEAN 259
#define TYPE_STRING 260
#define DEF 261
#define AS 262
#define ASSIGN 263
#define IF 264
#define WHILE 265
#define OP_ARI 266
#define OP_LOG 267
#define LP 268
#define RP 269
#define LC 270
#define RC 271
#define NUMBER 272
#define BOOLEAN 273
#define STRING 274
#define VAR_NAME 275




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "cei.y"
{
  double value;
  char symbol[50];
  int type;
  Variable var;
}
/* Line 1529 of yacc.c.  */
#line 96 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

