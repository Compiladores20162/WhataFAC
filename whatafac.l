%{
#include "sintatico.h"
#include "functionsLexic.c"
#include <stdlib.h>
#include <string.h>
%}

digit [0-9]
integer {digit}+
type9 "9("{integer}")"
typeAX "A("?"X("?{integer}")"
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
"IF" return (IF_TOKEN);
"ELSE" return (ELSE_TOKEN);
"END-IF" return (END_IF);
"+" return(PLUS);
"-" return(MINUS);
"*" return(TIMES);
"/" return(DIVIDE);
"^" return(POWER);
"(" return(LEFT_PARENTHESIS);
")" return(RIGHT_PARENTHESIS);
"." return (POINT);




{type9} {
    yylval.variableType=yytext;
    if(yytext[0]=='9'){
      saveTypeVariables("int\n");
      return(POINT);
    }
};

{typeAX} {
    yylval.variableType=yytext;
    if(yytext[0]=='A' || yytext[0]=='X' ){
      saveTypeVariables("char\n");
      return(POINT);
    }
};

[!?""a-zA-Z0-9()\/&@#=><]+ {{
  yylval.letra = yytext;
  return (SIMBOL);
}};

[a-z_A-Z]+ {{
  yylval.variable = yytext;
   saveNameVariables(yytext);
   saveNameVariables("\n");
  return (VARIABLE);
}};


"\n" return(END);


%%

yywrap () {
    return 0;
}
