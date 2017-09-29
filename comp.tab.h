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
     ENTERO = 258,
     CHAR = 259,
     SUMA = 260,
     RESTA = 261,
     MULTIPLICACION = 262,
     DIVISION = 263,
     NUEVA_LINEA = 264,
     SALIR = 265,
     IGUAL = 266,
     DISTINTO = 267,
     COMPARADOR = 268,
     MAYOR_IGUAL = 269,
     MENOR_IGUAL = 270,
     PAR_ABRE = 271,
     PAR_CIERRA = 272,
     MAYOR = 273,
     MENOR = 274,
     LLAVE_ABRE = 275,
     LLAVE_CIERRA = 276,
     AND = 277,
     OR = 278,
     NOT = 279,
     IF = 280,
     FOR = 281,
     WHILE = 282,
     COMA = 283,
     ELSE = 284
   };
#endif
/* Tokens.  */
#define ENTERO 258
#define CHAR 259
#define SUMA 260
#define RESTA 261
#define MULTIPLICACION 262
#define DIVISION 263
#define NUEVA_LINEA 264
#define SALIR 265
#define IGUAL 266
#define DISTINTO 267
#define COMPARADOR 268
#define MAYOR_IGUAL 269
#define MENOR_IGUAL 270
#define PAR_ABRE 271
#define PAR_CIERRA 272
#define MAYOR 273
#define MENOR 274
#define LLAVE_ABRE 275
#define LLAVE_CIERRA 276
#define AND 277
#define OR 278
#define NOT 279
#define IF 280
#define FOR 281
#define WHILE 282
#define COMA 283
#define ELSE 284




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "comp.y"
{
	int numero;
	char caracter;
}
/* Line 1529 of yacc.c.  */
#line 112 "comp.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

