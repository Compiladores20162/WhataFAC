%{
#include "functionsSyntatic.c"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

%}

%union{
   int num;
   float numero;
   char *letra;
   double flutuante;
   int declaration;
   char *variable;
   char *variableType;
}

%type <flutuante> NUMBER
%type <declaration> WINTEIRO
%type <letra> SIMBOL
%type <variable> VARIABLE
%type <variableType> INTNINE

%token WINTEIRO
%token INTNINE
%token POINT
%token NUMBER
%token PLUS MINUS TIMES DIVIDE POWER
%token LEFT_PARENTHESIS RIGHT_PARENTHESIS
%token END
%token PRINT WORD
%token RETURN_0 MAIN INCLUDE_STDIO WORKINGSTORAGE DATADIVISION

%token SIMBOL WHITE
%token IF_TOKEN ELSE_TOKEN
%token END_IF VARIABLE

%left PLUS MINUS
%left TIMES DIVIDE
%left NEG
%right POWER

%start Input

%%

Input:
   /* Empty */
   | Input Line
   ;
Line:
   END
   | DATADIVISION Working{printf("Tem data division\n");}
   | PRINT Simbol  {
      char* new_sentense;
      new_sentense = getTillLineBreak($<letra>2);
      printf("printf(");
      printf("%s);\n", new_sentense);
      }
   | IF_TOKEN Conditional_if If_function
   | ELSE_TOKEN {printf("}\nelse {\n");} Else_function {printf("}\n");}
   | RETURN_0 {printf(" return 0;\n}\n"); exit(0);}
   | MAIN {printf("int main(){\n"); }
   | INCLUDE_STDIO {printf("#include<stdio.h>\n");}
   | NUMBER {printf("%lf\n", $<flutuante>1);}
   | POINT {/* NOTHING TO DO HERE */ }
;

Working:
   END WORKINGSTORAGE Variable

   ;

Variable:
   WINTEIRO VARIABLE DefineType POINT END Variable
   | WINTEIRO VARIABLE DefineType POINT END
   ;

DefineType:
    POINT
    ;

If_function:
	END If_function
	| Line If_function
	| END_IF END {printf("}\n");}
	;

Else_function:
	END Else_function
	| Line Else_function
	| END_IF END
	| Line
	;

Conditional_if:
	 SIMBOL SIMBOL NUMBER  {
		printf("if (%s) {\n", $<letra>1);
	}
	| SIMBOL SIMBOL SIMBOL /*If_function*/ {
		printf("if (%s) {\n", $<letra>1);
	}
	;


Simbol:
    SIMBOL Simbol
    | END
   ;

%%

int yyerror(char *s) {
   printf("%s\n",s);
}

int main(void) {
   yyparse();
}
