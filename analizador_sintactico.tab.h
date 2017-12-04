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
     INICIO = 258,
     FIN = 259,
     LEER = 260,
     MOSTRAR = 261,
     ASIG = 262,
     MQ = 263,
     HACER = 264,
     SI = 265,
     ENTONCES = 266,
     SINO = 267,
     SU = 268,
     RU = 269,
     ES = 270,
     BOOL = 271,
     STRING = 272,
     PI = 273,
     PD = 274,
     LI = 275,
     LD = 276,
     OPSL = 277,
     PC = 278,
     NUMBER = 279,
     VAR = 280,
     OPS = 281,
     OPM = 282
   };
#endif
/* Tokens.  */
#define INICIO 258
#define FIN 259
#define LEER 260
#define MOSTRAR 261
#define ASIG 262
#define MQ 263
#define HACER 264
#define SI 265
#define ENTONCES 266
#define SINO 267
#define SU 268
#define RU 269
#define ES 270
#define BOOL 271
#define STRING 272
#define PI 273
#define PD 274
#define LI 275
#define LD 276
#define OPSL 277
#define PC 278
#define NUMBER 279
#define VAR 280
#define OPS 281
#define OPM 282




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 15 "analizador_sintactico.y"
{
  int numero;
  char* string;
  char  simbolo;
  char variable[255];
  char tipoDato;
  ptrNodoArbol arbol;
  Dato tipoDeDato;
}
/* Line 1529 of yacc.c.  */
#line 113 "analizador_sintactico.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

