%{
#include "functionsSyntatic.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
   char *bigsmall
}

%type <flutuante> NUMBER
%type <declaration> WINTEIRO
%type <letra> STRINGASPAS
%type <letra> STRING
%type <variableType> INTNINE

%token WINTEIRO VALUE INTEGER_POINT
%token INTNINE
%token POINT
%token NUMBER
%token PLUS MINUS TIMES DIVIDE POWER EQUALS
%token LEFT_PARENTHESIS RIGHT_PARENTHESIS
%token END
%token PRINT WORD
%token RETURN_0 MAIN INCLUDE_STDIO WORKINGSTORAGE DATADIVISION
%token COMPUTE END_COMPUTE DEFAULT CASE_SWITCH SWITCH END_SWITCH


%token STRINGASPAS WHITE
%token IF_TOKEN ELSE_TOKEN
%token END_IF STRING
%token WHILE END_WHILE DONOTHING
%token BIGSMALL PROGRAMNAME PIC PROCEDURE STOP

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
   | PROGRAMNAME STRING {/* DO NOTHING HERE */}
   | DATADIVISION  Working
   | PROCEDURE {/* DO NOTHING IN HERE*/}
   | MAIN  {printf("\nint main() {\n"); } Print_variables;
   | PRINT StringAspas
   | NUMBER {printf("%lf\n", $<flutuante>1);}
   | POINT {/* NOTHING TO DO HERE */ }
   | RETURN_0 {printf("\treturn 0;\n}\n"); exit(0);}
   | IF_TOKEN Conditional_if //If_function
   | WHILE {printf("while(" );} While
   | STOP {/* DO NOTHING HERE */}

   | COMPUTE Compute_variable END_COMPUTE {printf(";\n");}
   | SWITCH Switch_value Switch_function
   | CASE_SWITCH STRING {printf("case %s:\n", $<letra>2);} Case_function  {printf("}\n");}
;

Print_variables:
  {print_variables();}
  ;

Working:
   END WORKINGSTORAGE  Variable
   ;

Variable: 
    WINTEIRO STRING  PIC DONOTHING {  saveNameVariables($<letra>2);} Value  END  Variable 
   | /* DO NOTHING IN HERE */ 
   ;

Value:
   VALUE NUMBER POINT {saveFloatDataVariables ($<flutuante>2);}
   | POINT {printPointComma();}
   | VALUE INTEGER_POINT {saveIntDataVariables ($<flutuante>2);}

StringAspas:
     STRINGASPAS {printf("\tprintf(" );
                  printf("%s", $<letra>1);
                  printf(");\n"); }
    | END
;

Conditional_if:
   STRING BIGSMALL STRING {printf("if (%s){\n\t" , $<letra>1 );} DecideIf
  ;

DecideIf:
   END  DecideIf
  | END_IF {printf("}\n");}
  | ELSE_TOKEN {printf("}\nelse{\n");}  DecideIf
  | Line DecideIf

While:
  STRING BIGSMALL STRING
  {printf("%s){\n", $<letra>1 );} DecideIf

DecideIf:
   END_WHILE {printf("}\n");}
   | Line

            //  COMPUTE
Compute_variable:
    END Compute_variable
    | STRING EQUALS Compute_sequence {
      char* this = getTillLineBreak($<letra>1);
      printf("%s", this);
    }
    ;

Compute_sequence:
    END
    | STRING Compute_sequence
    | NUMBER Compute_sequence
    | Signs Compute_sequence
    | LEFT_PARENTHESIS Compute_sequence
    | RIGHT_PARENTHESIS Compute_sequence
    ;

Signs:
    PLUS
    | MINUS
    | TIMES
    | DIVIDE
    ;

                // SWITCH
    Switch_function:
      END Switch_function
      | Line Switch_function
      | END_SWITCH END {printf("}\n");}
      ;


    Case_function:
      END CASE_SWITCH STRING {printf("break;\ncase %s:\n", $<letra>3);} Case_function
      | Line Case_function
      | DEFAULT {printf("break;\ndefault:\n");} Default
      | END_SWITCH END
      ;

    Default:
      END Default
      | Line Default
      | END_SWITCH END
      ;

      Switch_value:
        STRING {
        printf("switch (%s) {\n", $<letra>1);
      }
      ;


%%

int yyerror(char *s) {
   printf("%s\n",s);
}

int main(void) {
   yyparse();
}
