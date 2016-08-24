%{
#include "global.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
%}

%token NUMBER
%token PLUS MINUS TIMES DIVIDE POWER RETURN0
%token LEFT_PARENTHESIS RIGHT_PARENTHESIS
%token END

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
   | Expression END { printf("Resultado: %f\n",$1); }
   ;
Expression:
   RETURN0 {printf("return 0;\n"); }
   | NUMBER { $$=$1; }
   | Expression PLUS Expression { $$=$1+$3; }
   | Expression MINUS Expression { $$=$1-$3; printf("%.2lf", $1);}
   | Expression TIMES Expression { $$=$1*$3; }
   | Expression DIVIDE Expression { $$=$1/$3; }
   | MINUS Expression %prec NEG { $$=-$2; }
   | Expression POWER Expression { $$=$1/$3; }
   | LEFT_PARENTHESIS Expression RIGHT_PARENTHESIS { $$=$2; }
   ;

%%

int yyerror(char *s) {
   printf("%s\n",s);
}

int main(void) {
   yyparse();
}
