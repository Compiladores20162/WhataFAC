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
}

%type <flutuante> NUMBER
%type <declaration> WINTEIRO
%type <letra> SIMBOL

%token WINTEIRO
%token INTNOVE
%token POINT
%token NUMBER
%token PLUS MINUS TIMES DIVIDE POWER
%token LEFT_PARENTHESIS RIGHT_PARENTHESIS
%token END
%token PRINT WORD
%token RETURN_0 MAIN INCLUDE_STDIO WORKINGSTORAGE DATADIVISION
%token SIMBOL WHITE
%token IF_TOKEN ELSE_TOKEN
%token END_IF
%type <letra> SIMBOL

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
   | DATADIVISION Working{printf("Tem data division\n");}
   | NUMBER {printf("%lf\n", $<flutuante>1);}
   | POINT {/* NOTHING TO DO HERE */ }
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

Working:
   END WORKINGSTORAGE Variable
   | END
   ;

Variable:
   WINTEIRO Simbol {printf("%02d %s", $<declaration>1, $<letra>2);}
   | END{printf("END\n");}

/*


Variables:

   | END
   | NUMBER {printf("Tem Number");}


Expression:
   NUMBER { $$=$1; }
   | QUOTATION_MARKS Expression QUOTATION_MARKS {printf("\nentrei\n");}
   | Expression PLUS Expression { $$=$1+$3; }
   | Expression MINUS Expression { $$=$1-$3; }
   | Expression TIMES Expression { $$=$1*$3; }
   | Expression DIVIDE Expression { $$=$1/$3; }
   | MINUS Expression %prec NEG { $$=-$2; }
   | Expression POWER Expression { $$=$1/$3; }
   | LEFT_PARENTHESIS Expression RIGHT_PARENTHESIS { $$=$2; }

*/



%%

int yyerror(char *s) {
   printf("%s\n",s);
}

int main(void) {
   yyparse();
}
