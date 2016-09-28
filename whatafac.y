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
%token WHILE END_WHILE

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
   | INCLUDE_STDIO {printf("#include <stdio.h>\n#include <stdlib.h>\n#include <math.h>\n\n");}
   | DATADIVISION Working
   | MAIN  {printf("int main() {\n"); } Print_variables;
   | PRINT Simbol  {
      char* new_sentense;
      new_sentense = getTillLineBreak($<letra>2);
      printf("\tprintf(");
      printf("%s);\n", new_sentense);
      }
   | IF_TOKEN Conditional_if If_function
   | ELSE_TOKEN {printf("\t}\n\telse {\n");} Else_function {printf("\t}\n");}
   | NUMBER {printf("%lf\n", $<flutuante>1);}
   | POINT {/* NOTHING TO DO HERE */ }
   | WHILE Conditional_while While_function
   | RETURN_0 {printf("\treturn 0;\n}\n"); exit(0);}
;

Print_variables:
  {print_variables();}
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

Conditional_if:
   VARIABLE SIMBOL NUMBER  {
  	printf("\tif (%s) {\n", $<letra>1);
  }
  | VARIABLE SIMBOL VARIABLE /*If_function*/ {
  	printf("\tif (%s) {\n", $<letra>1);
  }
  ;

If_function:
	END If_function
	| Line If_function
	| END_IF END {printf("\t}\n");}
	;

Else_function:
	END Else_function
	| Line Else_function
	| END_IF END
	| Line
	;

Conditional_while:
  VARIABLE SIMBOL NUMBER {printf("\twhile (%s) {\n", $<letra>1);}
  | VARIABLE SIMBOL VARIABLE /*If_function*/ {printf("\twhile (%s) {\n", $<letra>1);
  }
  ;

While_function:
	END While_function
	| Line While_function
	| END_WHILE END {printf("\t}\n");}
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
