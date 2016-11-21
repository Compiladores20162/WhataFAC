%{
#include "sintatico.h"
#include "functionsLexic.c"
#include <stdlib.h>
#include <string.h>
int passo =1;
%}

digit [0-9]
integer {digit}+
/*Indicates variable declaration*/
variable_id "01"
/*Indicates atributtes declaration*/
atributte_id "05"
point "."
biggersmaller [ ]?[<>][=]?[ ]?
string_with_symbols [<>=!+()._0-9a-zA-Z ]+
type_numeric "9("{integer}")"
type_alpha_numeric "A("?"X("?{integer}")"
type_numeric_decimal "9("{integer}")V"[9]+
exponant [eE][+-]?{integer}
real {integer}("."{integer})?{exponant}?
/*Gets number with many decimal */
integer_point {integer}"."
quotation_marks "\""
/*Gets almost any string*/
string_with_quatation {quotation_marks}{string_with_symbols}{quotation_marks}
string [-_0-9a-zA-Z]+
/*Gets conditional statment at ifs or whiles*/
conditional {string}{biggersmaller}{string}
%%

"IDENTIFICATION DIVISION." return(INCLUDE_STDIO); printf("%d", passo);
"PROGRAM-ID." return (PROGRAMNAME);
"DATA DIVISION."  return(DATADIVISION);
"WORKING-STORAGE SECTION.\n"  return(WORKINGSTORAGE);
"PIC" return (PIC);
"PROCEDURE DIVISION." return (PROCEDURE);
"ACCEPT" return(ACCEPT);

{point} return(POINT);

{conditional} {
  yylval.variable = yytext;
  return (CONDITIONAL);
}

{biggersmaller} {
  yylval.bigsmall = yytext;
  printf("maior menor: %s\n", yylval.bigsmall);
  return (BIGSMALL);
};

{variable_id} {
    yylval.declaration = atoi(yytext);
    return(VARIABLE_ID);
};

{atributte_id} {
  yylval.declaration = atoi(yytext);
  return(ATRIBUTTE_ID);
};

"MAIN-PROCEDURE." return(MAIN);
"DISPLAY" return (PRINT);

"IF" return  (IF_TOKEN);
"ELSE"  return (ELSE_TOKEN);
"END PROGRAM" return(RETURN_0);
"END-IF"  return (END_IF);
"PERFORM UNTIL"  return (WHILE);
"END-PERFORM" return (END_WHILE);
"COMPUTE" return (COMPUTE);
"END-COMPUTE" return (END_COMPUTE);
"WHEN OTHER" return (DEFAULT);
"WHEN" return (CASE_SWITCH);
"EVALUATE" return (SWITCH);
"END-EVALUATE" return (END_SWITCH);
"STOP RUN."  return (STOP);
"VALUE" return VALUE;
"AND" return(AND_TOKEN);
"OR" return (OR_TOKEN);

{string_with_quatation} {
  yylval.letra = yytext;
  return (STRING_QUATATION);
};

{string} {
  yylval.letra = yytext;
  return(STRING);
};

{real} {
    yylval.flutuante=atof(yytext);
    return(NUMBER);
};

{integer_point} {
	yylval.flutuante=atof(yytext);
	return(INTEGER_POINT);
};

"+" return(PLUS);
"*" return(TIMES);
"/" return(DIVIDE);
"^" return(POWER);
"=" return(EQUALS);
"(" return(LEFT_PARENTHESIS);
")" return(RIGHT_PARENTHESIS);


{type_numeric} {
    yylval.variableType=yytext;
    if(yytext[0]=='9'){
      saveTypeVariables("int");
      return(DONOTHING);
    }
};

{type_numeric_decimal} {
    yylval.variableType=yytext;
    if(yytext[0]=='9'){
      saveTypeVariables("double");
      return(DONOTHING);
    }
};



{type_alpha_numeric} {
    yylval.variableType=yytext;
    if(yytext[0]=='A' || yytext[0]=='X' ){
      saveTypeVariables("char");
      return(DONOTHING);
    }
};



"\n" return(END);


%%

yywrap () {
    return 0;
};
