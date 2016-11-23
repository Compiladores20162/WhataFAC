%{
#include "functionsSyntatic.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

%}

%{
  extern int step;
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
   | INCLUDE_STDIO {
      if (step == 2) {
        printf("\n#include <stdio.h>\n#include <stdlib.h>\n#include <math.h>\n\n");
        printStruct();
      }
    }

   | PROGRAMNAME STRING {/* DO NOTHING HERE */}
   | DATADIVISION  Working
   | PROCEDURE {/* DO NOTHING IN HERE*/}
   | POINT {/* NOTHING TO DO HERE */ }


   /*Procedure Divistion*/
   | MAIN  {
      if(step == 2)
        printf("\nint main() {\n");
    } Print_variables;


   /*Inputs and Outputs*/
   | ACCEPT {
      if (step == 2)
        printf("\tscanf(\"" );
    } DecideVariableType


   | PRINT String_quatation

   /*Conditionals and Sequencials Algorithms*/
   | IF_TOKEN Conditional_if
   | WHILE While
   | STOP {/* DO NOTHING HERE */}
   | COMPUTE {
      if (step == 2)
        printf("\t");
    }Compute_variable END_COMPUTE {
      if (step == 2)
        printf(";\n");
    }


   | SWITCH Switch_value Switch_function
   | CASE_SWITCH STRING {
      if (step == 2)
        printf("\tcase %s:\n", $<letra>2);
    }
   Case_function  {
    if (step == 2)
      printf("}\n");
    }


   /*Comenties*/
   | TIMES {
      if (step == 2)
        printf("\t//");
    } Line


   /*End Procedure Division*/
   | RETURN_0 {
                if (step == 1)
                {
                  step = 2;
                  FILE *fp = fopen("in.txt", "r+");
                  yyin = fp;
                  yyrestart(fp);
                  yyparse();
                }
                if (step == 2)
                {
                  printf("\treturn 0;\n}\n");
                  exit(0);
                }
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
    | VARIABLE_ID STRING POINT{
          saveTypeVariables("struct ");
          saveNameVariables($<letra>2);
          printOpenBrackets();
    } END Variable
    | /* DO NOTHING IN HERE */
    ;

    DecideVariableType:
    STRING {
      if (step == 2)
        defineDataType($<letra>1 );
    }


     Print_variables:
    {
      if (step == 2)
        print_variables();
    }
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
     STRING_QUATATION {
      if (step == 2) {
        printf("\tprintf(" );
        printf("%s", $<letra>1);
        printf(");\n");
      }
    }
    | END
    ;




    /*If-Else Commands*/


  /*Defines conditional expressions */
  Conditional_if:
      CONDITIONAL {
        if(step == 2)
          printf("\tif (%s " , $<variable>1);
      } Conditional_if DecideIf

      | AND_TOKEN {
        if (step == 2)
          printf("&&");
      } CONDITIONAL  {
        if(step == 2)
          printf(" %s " , $<variable>3);
      } Conditional_if

      | OR_TOKEN {
        if(step == 2)
          printf("||");
      } CONDITIONAL  {
        if (step == 2)
        printf(" %s " , $<variable>3);
      } Conditional_if

      | END {
        if (step == 2)
          printf(") {\n");
      }
      ;

  /*Define if-else hierarchy*/
  DecideIf:
     END  DecideIf
    | END_IF {
      if (step == 2)
        printf("\t}\n");
    }

    | ELSE_TOKEN {
      if (step == 2)
        printf("\t}else{\n");
    }  DecideIf

    | Line DecideIf

    | END_WHILE {
      if (step == 2)
        printf("\t}\n");
    }

    | Line
    ;


  /*Writes expressions inside while*/
  While:
      CONDITIONAL {
        if (step == 2)
          printf("\twhile (%s " , $<variable>1);
      } Conditional_if DecideIf

      | AND_TOKEN {
        if (step == 2)
          printf("&&");
      } CONDITIONAL  {
        if (step == 2)
          printf(" %s " , $<variable>3);
      } Conditional_if

      | OR_TOKEN {
        if (step == 2)
          printf("||");
      } CONDITIONAL  {
        if (step == 2)
          printf(" %s " , $<variable>3);
      } Conditional_if

      | END {
        if (step == 2)
          printf(") {\n");
      }
      ;



  /*Compute Comands*/


  Compute_variable:
      END Compute_variable
      | STRING EQUALS Compute_sequence {
        if (step == 2){
          char* this = getTillLineBreak($<letra>1);
          printf("%s", this);
        }
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
      | END_SWITCH END {
        if (step == 2)
          printf("}\n");
      }
      ;

  Case_function:
      END CASE_SWITCH STRING {
        if (step == 2)
          printf("\tbreak;\n\tcase %s:\n", $<letra>3);
      } Case_function

      | Line Case_function

      | DEFAULT {
        if (step == 2)
          printf("\tbreak;\n\tdefault:\n");
      } Default {
        if (step == 2)
          printf("\t");
      }

      | END_SWITCH END
      ;

  Default:
      END Default
      | Line Default
      | END_SWITCH END
      ;

  Switch_value:
      STRING {
        if (step == 2)
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

}
