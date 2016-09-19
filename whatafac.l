%{
#include "sintatico.h"
#include "functionsLexic.c"
#include <stdlib.h>
#include <string.h>
%}

digit [0-9]
integer {digit}+
exponant [eE][+-]?{integer}
real {integer}("."{integer})?{exponant}?


%%

"DATA DIVISION." return(DATADIVISION);
"IDENTIFICATION DIVISION." return(INCLUDE_STDIO);
"WORKING-STORAGE SECTION.\n" return(WORKINGSTORAGE);

"01" {
    yylval.declaration = atoi(yytext);
    return(WINTEIRO);
};

"MAIN-PROCEDURE." return(MAIN);

{real} {
    yylval.flutuante=atof(yytext);
    return(NUMBER);
};

"END PROGRAM" return(RETURN_0);
"DISPLAY" return (PRINT);
"+" return(PLUS);
"-" return(MINUS);
"*" return(TIMES);
"/" return(DIVIDE);
"^" return(POWER);
"(" return(LEFT_PARENTHESIS);
")" return(RIGHT_PARENTHESIS);
"\n" return(END);

[!""a-zA-Z0-9()\/&@#]+ {{
  yylval.letra = yytext;
  return (SIMBOL);
}}

"." return (POINT);


%%

yywrap () {
    return 0;
}
