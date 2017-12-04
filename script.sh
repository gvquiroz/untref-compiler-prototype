bison -d analizador_sintactico.y
flex cei.l
gcc analizador_sintactico.tab.c lex.yy.c
