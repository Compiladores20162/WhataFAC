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
   char *bigsmall;
}

%type <flutuante> NUMBER
%type <declaration> WINTEIRO
%type <letra> STRINGASPAS
%type <letra> STRING
%type <variableType> INTNINE
%type <bigsmall> BIGSMALL
%type <variable> CONDITIONAL

%token WINTEIRO VALUE INTEGER_POINT ZEROCINCO
%token INTNINE
%token POINT
%token NUMBER
%token PLUS MINUS TIMES DIVIDE POWER EQUALS
%token LEFT_PARENTHESIS RIGHT_PARENTHESIS
%token END
%token PRINT WORD
%token RETURN_0 MAIN INCLUDE_STDIO WORKINGSTORAGE DATADIVISION
%token COMPUTE END_COMPUTE DEFAULT CASE_SWITCH SWITCH END_SWITCH
%token AND_TOKEN CONDITIONAL OR_TOKEN

%token STRINGASPAS WHITE
%token IF_TOKEN ELSE_TOKEN
%token END_IF STRING
%token WHILE END_WHILE DONOTHING
%token BIGSMALL PROGRAMNAME PIC PROCEDURE STOP ACCEPT

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
   | MAIN  {printf("\nint main() {\n"); } Print_variables ;
   | ACCEPT {printf("\tscanf(\"" );} DecideVariableType
   | PRINT StringAspas
   | NUMBER {printf("%lf\n", $<flutuante>1);}
   | POINT {/* NOTHING TO DO HERE */ }
   | RETURN_0 {printf("\treturn 0;\n}\n"); printStruct(); exit(0);}
   | IF_TOKEN Conditional_if
   | WHILE While
   | STOP {/* DO NOTHING HERE */}
   | COMPUTE {printf("\t");}Compute_variable END_COMPUTE {printf(";\n");}
   | SWITCH Switch_value Switch_function
   | CASE_SWITCH STRING {printf("\tcase %s:\n", $<letra>2);} Case_function  {printf("}\n");}
   | TIMES {printf("\t//");} Line
   ;

Print_variables:
  {print_variables();}
  ;

Working:
   END WORKINGSTORAGE  Variable
   | END
   ;


DecideVariableType:
    STRING {  defineDataType($<letra>1 );}

Variable:
  ZEROCINCO STRING PIC DONOTHING {saveNameVariables($<letra>2); } Value END TakeContentOfStruct
  | WINTEIRO STRING PIC DONOTHING {saveNameVariables($<letra>2);} Value  END  Variable
  | WINTEIRO STRING POINT{saveTypeVariables("struct "); saveNameVariables($<letra>2); printOpenBrackets();} END Variable
  | /* DO NOTHING IN HERE */
  ;

TakeContentOfStruct:
  ZEROCINCO STRING PIC DONOTHING {saveNameVariables($<letra>2); } Value END TakeContentOfStruct Variable
  | END {printCloseBrackets(); printPointComma();} Variable
  | {printCloseBrackets(); printPointComma();} Variable
  ;


Value:
   VALUE NUMBER POINT {saveFloatDataVariables ($<flutuante>2);}
   | POINT {printPointComma();}
   | VALUE INTEGER_POINT {saveIntDataVariables ($<flutuante>2);}
   ;
StringAspas:
     STRINGASPAS {printf("\tprintf(" );
                            printf("%s", $<letra>1);
                            printf(");\n"); }
    | END
    ;

Conditional_if:
    CONDITIONAL {printf("\tif (%s " , $<variable>1);} Conditional_if DecideIf
    | AND_TOKEN {printf("&&");} CONDITIONAL  {printf(" %s " , $<variable>3);} Conditional_if
    | OR_TOKEN {printf("||");} CONDITIONAL  {printf(" %s " , $<variable>3);} Conditional_if
    | END {printf(") {\n\t");}
    ;

DecideIf:
   END  DecideIf
  | END_IF {printf("\t}\n"); }
  | ELSE_TOKEN {printf("\t}else{\n\t");}  DecideIf
  | Line DecideIf
  | END_WHILE {printf("\t}\n");}
  | Line
  ;

While:
  CONDITIONAL {printf("\twhile (%s " , $<variable>1);} Conditional_if DecideIf
    | AND_TOKEN {printf("&&");} CONDITIONAL  {printf(" %s " , $<variable>3);} Conditional_if
    | OR_TOKEN {printf("||");} CONDITIONAL  {printf(" %s " , $<variable>3);} Conditional_if
    | END {printf(") {\n");}
    ;

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

Switch_function:
    END Switch_function
    | Line Switch_function
    | END_SWITCH END {printf("}\n");}
    ;

Case_function:
    END CASE_SWITCH STRING {printf("\tbreak;\n\tcase %s:\n", $<letra>3);} Case_function
    | Line Case_function
    | DEFAULT {printf("\tbreak;\n\tdefault: ");} Default {printf("\t");}
    | END_SWITCH END
    ;

Default:
    END Default
    | Line Default
    | END_SWITCH END
    ;

Switch_value:
    STRING {
    printf("\tswitch (%s) {\n", $<letra>1);
    }
    ;


%%

int yyerror(char *s) {
   printf("%s\n",s);
}

int main(void) {

	yyparse();

}
