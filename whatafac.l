%{
#include "sintatico.h"
#include "functionsLexic.c"
#include <stdlib.h>
#include <string.h>
%}

digit [0-9]
integer {digit}+
zeroum "01"
point "."
biggersmaller [><][=]?
manystring [<>=!+()._0-9a-zA-Z ]+
type9 "9("{integer}")"
typeAX "A("?"X("?{integer}")"
type9_decimal "9("{integer}")V"[9]+
exponant [eE][+-]?{integer}
real {integer}("."{integer})?{exponant}?

integer_point {integer}"."
aspas "\""
stringcomaspas {aspas}{manystring}{aspas}
string [-_0-9a-zA-Z]+
%%

"IDENTIFICATION DIVISION." return(INCLUDE_STDIO);
"PROGRAM-ID." return (PROGRAMNAME);
"DATA DIVISION."  return(DATADIVISION);
"WORKING-STORAGE SECTION.\n"  return(WORKINGSTORAGE);
"PIC" return (PIC);
"PROCEDURE DIVISION." return (PROCEDURE);
{point} return(POINT);

{biggersmaller} {
  yylval.bigsmall = yytext;
  return (BIGSMALL);
};

{zeroum} {
    yylval.declaration = atoi(yytext);
    return(WINTEIRO);
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

{stringcomaspas} {
  yylval.letra = yytext;
  return (STRINGASPAS);
};

{string} {
  int qtdLetras = strlen(yytext);
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


{type9} {
    yylval.variableType=yytext;
    if(yytext[0]=='9'){
      saveTypeVariables("int");
      return(DONOTHING);
    }
};

{type9_decimal} {
    yylval.variableType=yytext;
    if(yytext[0]=='9'){
      saveTypeVariables("double");
      return(DONOTHING);
    }
};

{typeAX} {
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
