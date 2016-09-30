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
exponant [eE][+-]?{integer}
real {integer}("."{integer})?{exponant}?
aspas "\""
stringcomaspas {aspas}{manystring}{aspas}
string [_0-9a-zA-Z]+
%%

"DATA DIVISION." return(DATADIVISION);
"IDENTIFICATION DIVISION." return(INCLUDE_STDIO);
"WORKING-STORAGE SECTION.\n" return(WORKINGSTORAGE);
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

{stringcomaspas} {
  yylval.letra = yytext;
  return (STRINGASPAS);
};

{string} {
  yylval.letra = yytext;
   saveNameVariables(yytext);
  return(STRING);
};


{real} {
    yylval.flutuante=atof(yytext);
    return(NUMBER);
};

"+" return(PLUS);
"-" return(MINUS);
"*" return(TIMES);
"/" return(DIVIDE);
"^" return(POWER);
"(" return(LEFT_PARENTHESIS);
")" return(RIGHT_PARENTHESIS);

{type9} {
    yylval.variableType=yytext;
    if(yytext[0]=='9'){
      saveTypeVariables("int");
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
