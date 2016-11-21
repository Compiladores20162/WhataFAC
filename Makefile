all: clean whatafac run

whatafac: whatafac.l whatafac.y
	bison -d whatafac.y
	mv whatafac.tab.h sintatico.h
	mv whatafac.tab.c sintatico.c
	flex whatafac.l
	mv lex.yy.c lexico.c
	gcc -lm -o printErrors.out printErrors.c
	gcc -lm -o whatafac.out sintatico.c lexico.c

clean:
	rm -f printErrors.out *.swp lexico.* logOfErrors.txt sintatico.* out.c whatafac.out printNameVariables.txt printTypeVariables.txt a.out quantityOfCloses.txt SimbolsTable.txt

run:
	./whatafac.out < in.cbl > out.c
	./printErrors.out
