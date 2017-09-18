%option noyywrap

%{
#include <stdio.h>

#define YY_DECL int yylex()

#include "calc.tab.h"

%}

%%

[ \t]	; // ignore all whitespace
[0-9]+		{yylval.valor = atoi(yytext); return ENTERO;}
\n		{return NUEVA_LINEA;}
"+"		{return SUMA;}
"-"		{return RESTA;}
"*"		{return MULTIPLICACION;}
"/"		{return DIVISION;}
"salir"		{return SALIR;}
"fin"		{return SALIR;}

%%
