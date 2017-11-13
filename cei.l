%{
#include "data_structs.h"
#include "y.tab.h"
%}
%option noyywrap
%option yylineno
OP_ARI "+"|"-"|"*"|"/"
OP_LOG "not"|"and"|"or"|">"|"<"|"="|"#"|">="|"<="
NUMBER "0"|(-)?[1-9][0-9]*(\.[0-9]+)?
STRING \"[^\"]*["]
BOOLEAN "true"|"false"
VAR_NAME [a-zA-Z][a-zA-Z0-9]*
%%
"::"                    { return AS; }
":"                    { return ASSIGN; }
{OP_ARI}                { return OP_ARI; }
{OP_LOG}                { return OP_LOG; }
"number"                { return TYPE_NUMBER; }
"boolean"               { return TYPE_BOOLEAN; }
"string"                { return TYPE_STRING; }
"if"                    { return IF; }
"while"                 { return WHILE; }
"("                     { return LP; }
")"                     { return RP; }
"{"                     { return LC; }
"}"                     { return RC; }
{STRING}                {
                          yylval.type = 2;
                          return STRING;
                        }
{BOOLEAN}               {
                          yylval.type = 1;
                          return BOOLEAN;
                        }
{NUMBER}                {
                          yylval.type = 0;
                          return NUMBER;
                        }
{VAR_NAME}              {
                          strcpy(yylval.symbol, yytext);
                          return VAR_NAME;
                        }
<<EOF>>                 { return 0; }
[ \t\n]+                { }
.                       { printf("Unrecognized token!: %s\n", yytext); exit(1); }
%%
