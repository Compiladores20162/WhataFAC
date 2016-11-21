%{
#include "functionsSyntatic.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

%}

%{
  extern int passo;
  extern FILE * yyin;
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

/*Especify tolkens types*/
%type <flutuante> NUMBER
%type <declaration> VARIABLE_ID
%type <letra> STRING_QUATATION
%type <letra> STRING
%type <variableType> INTNINE
%type <bigsmall> BIGSMALL
%type <variable> CONDITIONAL

/*Tolkens*/
%token VARIABLE_ID VALUE INTEGER_POINT ATRIBUTTE_ID
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

%token STRING_QUATATION WHITE
%token IF_TOKEN ELSE_TOKEN
%token END_IF STRING
%token WHILE END_WHILE DONOTHING
%token BIGSMALL PROGRAMNAME PIC PROCEDURE STOP ACCEPT

/*Especify Math Operator's Precedence Order*/
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
   /*Identification and Variables Division*/
   | INCLUDE_STDIO {printf("#include <stdio.h>\n#include <stdlib.h>\n#include <math.h>\n\n", passo);}
   | PROGRAMNAME STRING {/* DO NOTHING HERE */}
   | DATADIVISION  Working
   | PROCEDURE {/* DO NOTHING IN HERE*/}
   | POINT {/* NOTHING TO DO HERE */ }

   /*Procedure Divistion*/
   | MAIN  {printf("\nint main() {\n"); } Print_variables;

   /*Inputs and Outputs*/
   | ACCEPT {printf("\tscanf(\"" );} DecideVariableType
   | PRINT String_quatation

   /*Conditionals and Sequencials Algorithms*/
   | IF_TOKEN Conditional_if
   | WHILE While
   | STOP {/* DO NOTHING HERE */}
   | COMPUTE {printf("\t");}Compute_variable END_COMPUTE {printf(";\n");}
   | SWITCH Switch_value Switch_function
   | CASE_SWITCH STRING {printf("\tcase %s:\n", $<letra>2);} Case_function  {printf("}\n");}

   /*Comenties*/
   | TIMES {printf("\t//");} Line

   /*End Procedure Division*/
   | RETURN_0 {printf("\treturn 0;\n}\n");  
                printStruct();

              if (passo == 1)
              {
                passo = 2;
                FILE *fp = fopen("in.txt", "r+");
                yyin = fp;
                yyrestart(fp);
                yyparse();
              }
              if (passo == 2)
                exit(0);  
            }
   ;

  /*For Initial codes*/
  Working:
     END WORKINGSTORAGE  Variable
     | END
     ;

  /*identifies variable types*/
  Variable:
    ATRIBUTTE_ID STRING PIC DONOTHING {saveNameVariables($<letra>2); } Value END TakeContentOfStruct
    | VARIABLE_ID STRING PIC DONOTHING {saveNameVariables($<letra>2);} Value  END  Variable
    | VARIABLE_ID STRING POINT{saveTypeVariables("struct "); saveNameVariables($<letra>2); printOpenBrackets();} END Variable
    | /* DO NOTHING IN HERE */
    ;

    DecideVariableType:
    STRING {defineDataType($<letra>1 );}


     Print_variables:
    {print_variables();}
    ;

  /*Variables' value*/
  Value:
   VALUE NUMBER POINT {saveFloatDataVariables ($<flutuante>2);}
   | POINT {printPointComma();}
   | VALUE INTEGER_POINT {saveIntDataVariables ($<flutuante>2);}
   ;

   /*Catch struct's content*/
  TakeContentOfStruct:
    ATRIBUTTE_ID STRING PIC DONOTHING {saveNameVariables($<letra>2); } Value END TakeContentOfStruct Variable
    | END {printCloseBrackets(); printPointComma();} Variable
    | {printCloseBrackets(); printPointComma();} Variable
    ;

  /*Save a string with quatation marks. Important to print string values*/
  String_quatation:
     STRING_QUATATION {printf("\tprintf(" );
                            printf("%s", $<letra>1);
                            printf(");\n"); }
    | END
    ;




    /*If-Else Commands*/


  /*Defines conditional expressions */
  Conditional_if:
      CONDITIONAL {printf("\tif (%s " , $<variable>1);} Conditional_if DecideIf
      | AND_TOKEN {printf("&&");} CONDITIONAL  {printf(" %s " , $<variable>3);} Conditional_if
      | OR_TOKEN {printf("||");} CONDITIONAL  {printf(" %s " , $<variable>3);} Conditional_if
      | END {printf(") {\n");}
      ;

  /*Define if-else hierarchy*/
  DecideIf:
     END  DecideIf
    | END_IF {printf("\t}\n"); }
    | ELSE_TOKEN {printf("\t}else{\n");}  DecideIf
    | Line DecideIf
    | END_WHILE {printf("\t}\n");}
    | Line
    ;

  /*Writes expressions inside while*/
  While:
    CONDITIONAL {printf("\twhile (%s " , $<variable>1);} Conditional_if DecideIf
      | AND_TOKEN {printf("&&");} CONDITIONAL  {printf(" %s " , $<variable>3);} Conditional_if
      | OR_TOKEN {printf("||");} CONDITIONAL  {printf(" %s " , $<variable>3);} Conditional_if
      | END {printf(") {\n");}
      ;



  /*Compute Comands*/


  Compute_variable:
      END Compute_variable
      | STRING EQUALS Compute_sequence {
        char* this = getTillLineBreak($<letra>1);
        printf("%s", this);
      }
      ;

  /*Hierarchy of calculation commands*/
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



  /*Switch Commands*/

  Switch_function:
      END Switch_function
      | Line Switch_function
      | END_SWITCH END {printf("}\n");}
      ;

  Case_function:
      END CASE_SWITCH STRING {printf("\tbreak;\n\tcase %s:\n", $<letra>3);} Case_function
      | Line Case_function
      | DEFAULT {printf("\tbreak;\n\tdefault:\n");} Default {printf("\t");}
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
  FILE *fp = fopen("in.txt", "r+");
  yyin = fp;
  yyparse();

  // passo = 2;
  // fp = fopen("in.txt", "r+");
  // yyin = fp;
  // yyparse();
  // exit(0);
}
