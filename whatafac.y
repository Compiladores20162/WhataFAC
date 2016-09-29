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
   char bigsmall
}

%type <flutuante> NUMBER
%type <declaration> WINTEIRO
%type <letra> STRINGASPAS
%type <variable> STRING
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

%token STRINGASPAS WHITE
%token IF_TOKEN ELSE_TOKEN
%token END_IF STRING
%token WHILE END_WHILE DONOTHING
%token BIGSMALL

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
   | PRINT StringAspas
   | NUMBER {printf("%lf\n", $<flutuante>1);}
   | POINT {/* NOTHING TO DO HERE */ }
   | RETURN_0 {printf("\treturn 0;\n}\n"); exit(0);}
   | IF_TOKEN Conditional_if //If_function
;

Print_variables:
  {print_variables();}
  ;

Working:
   END WORKINGSTORAGE Variable
   ;

Variable:
   WINTEIRO STRING DONOTHING POINT END Variable
   | WINTEIRO STRING DONOTHING POINT END
   ;

StringAspas:
     STRINGASPAS {printf("\tprintf(" );
                  printf("%s", $<letra>1);
                  printf(");\n"); }
    | END
;

Conditional_if:
   STRING BIGSMALL STRING  
   {printf("if (%s){\n\t" , $<letra>1 );}  
   DecideIf 
  ;

DecideIf:
   END  DecideIf 
  | END_IF {printf("}\n");}
  | ELSE_TOKEN {printf("}\nelse{\n");}  DecideIf
  | Line DecideIf  


  Else:
    {printf("entrou no else\n");}

  

%%

int yyerror(char *s) {
   printf("%s\n",s);
}

int main(void) {
   yyparse();
}
