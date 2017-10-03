%{

#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);
%}

%union {
	int numero;
	char caracter;
}

%token<numero> ENTERO
%token<caracter> CHAR

%token SUMA RESTA MULTIPLICACION DIVISION NUEVA_LINEA SALIR
%token IGUAL DISTINTO COMPARADOR MAYOR_IGUAL MENOR_IGUAL PAR_ABRE PAR_CIERRA MAYOR MENOR LLAVE_ABRE LLAVE_CIERRA
%token AND OR NOT
%token IF FOR WHILE COMA
%right ELSE
%left SUMA RESTA
%left MULTIPLICACION DIVISION

%type<numero> expresion_entero
%type<caracter> expresion_caracter

%start calculadora

%%

calculadora:
	   | calculadora line
;

line: NUEVA_LINEA
    | expresion_entero NUEVA_LINEA { printf("\tResultado: %i\n", $1); }
    | expresion_caracter NUEVA_LINEA { printf("\tResultado: %c\n", $1); }
    | SALIR NUEVA_LINEA { printf("bye!\n"); exit(0); }
;

expresion_entero: ENTERO				{ $$ = $1; }
	| expresion_entero SUMA expresion_entero	{ $$ = $1 + $3; }
	| expresion_entero RESTA expresion_entero	{ $$ = $1 - $3; }
	| expresion_entero MULTIPLICACION expresion_entero	{ $$ = $1 * $3; }
	| expresion_entero DIVISION expresion_entero	{ $$ = $1 / $3; }
	| expresion_entero MENOR expresion_entero	{ $$ = $1 < $3; }
	| expresion_entero MENOR_IGUAL expresion_entero	{ $$ = $1 <= $3; }
	| expresion_entero MAYOR expresion_entero	{ $$ = $1 > $3; }
	| expresion_entero MAYOR_IGUAL expresion_entero	{ $$ = $1 >= $3; }
	| expresion_entero COMPARADOR expresion_entero	{ $$ = $1 == $3; }
	| expresion_entero DISTINTO expresion_entero	{ $$ = $1 != $3; }
;

expresion_caracter: CHAR				{ $$ = $1; }
	| expresion_caracter COMPARADOR expresion_caracter	{ $$ = $1 == $3; }
	| expresion_caracter DISTINTO expresion_caracter	{ $$ = $1 != $3; }
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
