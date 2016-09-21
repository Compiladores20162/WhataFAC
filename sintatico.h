/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_WHATAFAC_TAB_H_INCLUDED
# define YY_YY_WHATAFAC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    WINTEIRO = 258,
    INTNOVE = 259,
    POINT = 260,
    NUMBER = 261,
    PLUS = 262,
    MINUS = 263,
    TIMES = 264,
    DIVIDE = 265,
    POWER = 266,
    LEFT_PARENTHESIS = 267,
    RIGHT_PARENTHESIS = 268,
    END = 269,
    PRINT = 270,
    WORD = 271,
    RETURN_0 = 272,
    MAIN = 273,
    INCLUDE_STDIO = 274,
    WORKINGSTORAGE = 275,
    DATADIVISION = 276,
    SIMBOL = 277,
    WHITE = 278,
    IF_TOKEN = 279,
    ELSE_TOKEN = 280,
    END_IF = 281,
    NEG = 282
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "whatafac.y" /* yacc.c:1909  */

   int num;
   float numero;
   char *letra;
   double flutuante;
   int declaration;

#line 90 "whatafac.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_WHATAFAC_TAB_H_INCLUDED  */
