%{
#include "global.h"
#include "sintatico.h"
#include <stdlib.h>
%}
white [ \t]+
digit [0-9]
integer {digit}+
exponant [eE][+-]?{integer}
real {integer}("."{integer})?{exponant}?

%%

{white} { /* We ignore white characters */ }
{real} {
    yylval=atof(yytext);
    return(NUMBER);
}
return(NUMBER);

[0-9] return (NUMBER);
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

%%

yywrap () {
    return 0;
}
