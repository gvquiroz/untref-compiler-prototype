%option noyywrap

%{
#include <stdio.h>
#include <string.h>

#define YY_DECL int yylex()

#include "comp.tab.h"

%}

%%

[ \t]	;
[0-9]+				{yylval.numero = atoi(yytext); return ENTERO;}
[a-z] 	{strcpy (yylval.caracter, yytext); return  CHAR;}

\n			{return NUEVA_LINEA;}

"+"			{return SUMA;}
"-"			{return RESTA;}
"*"			{return MULTIPLICACION;}
"/"			{return DIVISION;}

"="        {return IGUAL;}
"!="       {return DISTINTO;}
","        {return COMA;}
"=="       {return COMPARADOR;}
"."        {}
">="       {return MAYOR_IGUAL;}
"<="       {return MENOR_IGUAL;}
"("        {return PAR_ABRE;}
")"        {return PAR_CIERRA;}
">"        {return MAYOR;}
"<"        {return MENOR;}
"{"        {return LLAVE_ABRE;}
"}"        {return LLAVE_CIERRA;}
"&"        {return AND;}
"||"       {return OR;}
"!"        {return NOT;}

"if"       {return IF;}
"else"     {return ELSE;}
"for"      {return FOR;}
"while"    {return WHILE;}

"salir"		{return SALIR;}
"fin"		{return SALIR;}

%%
