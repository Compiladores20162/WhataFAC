cobol_c: exemplo01.l exemplo01.y
	bison -d exemplo01.y
	mv exemplo01.tab.h sintatico.h
	mv exemplo01.tab.c sintatico.c
	flex exemplo01.l
	mv lex.yy.c lexico.c
	gcc -lm -o cobol_c.out sintatico.c lexico.c

clean:
	rm -f *.swp lexico.* sintatico.* cobol_c.out

run:
	./cobol_c.out < in > out
