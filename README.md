# Compiladores2017
UNTreF Compiladores 2017

## ¿ Cómo probar el ejemploLex.l ?
1) flex -o ejemploLex.yy.c ejemploLex.l  -> esto genera el ejemploLex.yy.c
2) gcc -o ejemplo ejemploLex.yy.c --> esto genera el ejecutable
3) ./ejemplo --> con eso se ejecuta


## ¿ Cómo compilar el código?
1) bison -d analizador_sintactico.y
2) flex cei.l
3) gcc analizador_sintactico.tab.c lex.yy.c

./a.out < 'nombre_archivo'
