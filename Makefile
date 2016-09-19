all: clean whatafac run

whatafac: whatafac.l whatafac.y
	bison -d whatafac.y
	mv whatafac.tab.h sintatico.h
	mv whatafac.tab.c sintatico.c
	flex whatafac.l
	mv lex.yy.c lexico.c
	gcc -lm -o whatafac.out sintatico.c lexico.c

clean:
	rm -f *.swp lexico.* sintatico.* out.txt whatafac.out

run:
	./whatafac.out < in.txt > out.txt
