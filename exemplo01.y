%{
#include "global.h"
#include "functionsSyntatic.c"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
%}

%token NUMBER
%token PLUS MINUS TIMES DIVIDE POWER
%token LEFT_PARENTHESIS RIGHT_PARENTHESIS
%token END
%token PRINT WORD
%token RETURN_0 MAIN INCLUDE_STDIO WORKINGSTORAGE DATADIVISION
%token SIMBOL WHITE


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
   | PRINT Simbol {printf("printf("); printContents(); printf(");\n");}
   | RETURN_0 {printf(" return 0;\n}\n"); exit(0);}
   | MAIN {printf("int main(){\n"); }
   | INCLUDE_STDIO {printf("#include<stdio.h>\n"); }
   | DATADIVISION Working{printf("Tem data division\n");}
   | NUMBER {printf("numero: %lf", $1);}
 ;

Simbol:
   SIMBOL END
   | SIMBOL Simbol END
   | END
   ;

Working:
   END WORKINGSTORAGE {printf("Tem working\n");}
   | END
   ;

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

   ;
*/
%%

int yyerror(char *s) {
   printf("%s\n",s);
}

int main(void) {
   yyparse();
}
