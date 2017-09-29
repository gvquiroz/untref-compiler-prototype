all: comp

comp.tab.c comp.tab.h:	comp.y
	bison -d comp.y

lex.yy.c: comp.l comp.tab.h
	flex comp.l

comp: lex.yy.c comp.tab.c comp.tab.h
	gcc -o comp comp.tab.c lex.yy.c

clean:
	rm comp comp.tab.c lex.yy.c comp.tab.h
