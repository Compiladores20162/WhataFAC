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

{real} {
    yylval.flutuante=atof(yytext);
    return(NUMBER);
};
"WORKING-STORAGE SECTION." return(WORKINGSTORAGE);
"IDENTIFICATION DIVISION." return(INCLUDE_STDIO);
"DATA DIVISION." return(DATADIVISION);
"MAIN-PROCEDURE." return(MAIN);
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
