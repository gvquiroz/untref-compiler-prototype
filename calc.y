%{

#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);
%}

%union {
	int valor;
}

%token<valor> ENTERO
%token SUMA RESTA MULTIPLICACION DIVISION
%token NUEVA_LINEA SALIR
%left SUMA RESTA
%left MULTIPLICACION DIVISION

%type<valor> expresion

%start calculadora

%%

calculadora: 
	   | calculadora line
;

line: NUEVA_LINEA
    | expresion NUEVA_LINEA { printf("\tResultado: %i\n", $1); } 
    | SALIR NUEVA_LINEA { printf("bye!\n"); exit(0); }
;

expresion: ENTERO				{ $$ = $1; }
	  | expresion SUMA expresion	{ $$ = $1 + $3; }
	  | expresion RESTA expresion	{ $$ = $1 - $3; }
	  | expresion MULTIPLICACION expresion	{ $$ = $1 * $3; }
	  | expresion DIVISION expresion		 { $$ = $1 / $3; }
;

%%

int main() {
	yyin = stdin;

	do { 
		yyparse();
	} while(!feof(yyin));

	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
