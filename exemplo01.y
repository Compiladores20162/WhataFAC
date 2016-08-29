%{
#include "global.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
%}

%token NUMBER
%token PLUS MINUS TIMES DIVIDE POWER
%token LEFT_PARENTHESIS RIGHT_PARENTHESIS
%token END

%token RETURN_0 MAIN INCLUDE_STDIO WORKINGSTORAGE DATADIVISION

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
   END {}
   | END { printf("Resultado: %f\n",$1); }
   | RETURN_0 {printf(" return 0;\n}\n"); exit(0);}
   | MAIN {printf("int main(){\n"); }
   | INCLUDE_STDIO {printf("#include<stdio.h>\n"); }
   | DATADIVISION Working{printf("Tem data division\n");}
   ;

Working:
   END WORKINGSTORAGE Variables {printf("Tem working\n");}
   | END

    ;

Variables:
   /* Empty */
   | END
   | NUMBER {printf("Tem Number");}

/*
Expression:
   NUMBER { $$=$1; }
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
