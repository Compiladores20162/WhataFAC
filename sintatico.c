/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "whatafac.y" /* yacc.c:339  */

#include "functionsSyntatic.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


#line 75 "whatafac.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "whatafac.tab.h".  */
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
    VALUE = 259,
    INTEGER_POINT = 260,
    ZEROCINCO = 261,
    INTNINE = 262,
    POINT = 263,
    NUMBER = 264,
    PLUS = 265,
    MINUS = 266,
    TIMES = 267,
    DIVIDE = 268,
    POWER = 269,
    EQUALS = 270,
    LEFT_PARENTHESIS = 271,
    RIGHT_PARENTHESIS = 272,
    END = 273,
    PRINT = 274,
    WORD = 275,
    RETURN_0 = 276,
    MAIN = 277,
    INCLUDE_STDIO = 278,
    WORKINGSTORAGE = 279,
    DATADIVISION = 280,
    COMPUTE = 281,
    END_COMPUTE = 282,
    DEFAULT = 283,
    CASE_SWITCH = 284,
    SWITCH = 285,
    END_SWITCH = 286,
    AND_TOKEN = 287,
    CONDITIONAL = 288,
    OR_TOKEN = 289,
    STRINGASPAS = 290,
    WHITE = 291,
    IF_TOKEN = 292,
    ELSE_TOKEN = 293,
    END_IF = 294,
    STRING = 295,
    WHILE = 296,
    END_WHILE = 297,
    DONOTHING = 298,
    BIGSMALL = 299,
    PROGRAMNAME = 300,
    PIC = 301,
    PROCEDURE = 302,
    STOP = 303,
    ACCEPT = 304,
    NEG = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "whatafac.y" /* yacc.c:355  */

   int num;
   float numero;
   char *letra;
   double flutuante;
   int declaration;
   char *variable;
   char *variableType;
   char *bigsmall;

#line 177 "whatafac.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_WHATAFAC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 194 "whatafac.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    57,    62,    63,    64,    65,    66,    67,
      67,    68,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    76,    77,    78,    78,    79,    79,    83,    87,    88,
      93,    96,    96,    97,    97,    98,    98,    99,   103,   103,
     104,   104,   105,   105,   110,   111,   112,   115,   118,   122,
     122,   123,   123,   123,   124,   124,   124,   125,   129,   130,
     131,   131,   132,   133,   134,   138,   138,   139,   139,   139,
     140,   140,   140,   141,   145,   146,   153,   154,   155,   156,
     157,   158,   162,   163,   164,   165,   169,   170,   171,   175,
     175,   176,   177,   177,   178,   182,   183,   184,   188
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WINTEIRO", "VALUE", "INTEGER_POINT",
  "ZEROCINCO", "INTNINE", "POINT", "NUMBER", "PLUS", "MINUS", "TIMES",
  "DIVIDE", "POWER", "EQUALS", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS",
  "END", "PRINT", "WORD", "RETURN_0", "MAIN", "INCLUDE_STDIO",
  "WORKINGSTORAGE", "DATADIVISION", "COMPUTE", "END_COMPUTE", "DEFAULT",
  "CASE_SWITCH", "SWITCH", "END_SWITCH", "AND_TOKEN", "CONDITIONAL",
  "OR_TOKEN", "STRINGASPAS", "WHITE", "IF_TOKEN", "ELSE_TOKEN", "END_IF",
  "STRING", "WHILE", "END_WHILE", "DONOTHING", "BIGSMALL", "PROGRAMNAME",
  "PIC", "PROCEDURE", "STOP", "ACCEPT", "NEG", "$accept", "Input", "Line",
  "$@1", "$@2", "$@3", "$@4", "$@5", "Print_variables", "Working",
  "DecideVariableType", "Variable", "$@6", "$@7", "$@8",
  "TakeContentOfStruct", "$@9", "$@10", "$@11", "Value", "StringAspas",
  "Conditional_if", "$@12", "$@13", "$@14", "$@15", "$@16", "DecideIf",
  "$@17", "While", "$@18", "$@19", "$@20", "$@21", "$@22",
  "Compute_variable", "Compute_sequence", "Signs", "Switch_function",
  "Case_function", "$@23", "$@24", "Default", "Switch_value", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -134

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-134)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -134,    11,  -134,  -134,  -134,  -134,  -134,    -9,  -134,  -134,
    -134,   -10,  -134,   -23,     5,    56,    59,    21,  -134,  -134,
    -134,  -134,   209,  -134,  -134,  -134,  -134,    15,  -134,     4,
    -134,  -134,   141,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,    27,  -134,  -134,     7,     4,    58,
      44,   107,   141,    63,   141,  -134,    51,    56,    52,    67,
      56,    68,  -134,  -134,    70,    72,  -134,  -134,   231,  -134,
      78,  -134,    96,   107,  -134,  -134,  -134,  -134,  -134,    57,
    -134,  -134,    57,  -134,    -3,    71,   231,  -134,  -134,  -134,
    -134,   231,   231,  -134,   231,  -134,   231,    81,   175,  -134,
    -134,    56,    57,  -134,  -134,  -134,    57,  -134,    56,    56,
    -134,    56,  -134,    75,    80,  -134,  -134,  -134,  -134,  -134,
    -134,   175,   106,   175,  -134,  -134,  -134,    57,  -134,  -134,
    -134,  -134,   109,  -134,  -134,   107,  -134,  -134,  -134,  -134,
       7,     8,     8,  -134,  -134,    37,  -134,   113,   121,  -134,
     132,     7,    -4,  -134,  -134,   101,  -134,  -134,     7,    97,
       7,  -134,    99,  -134,  -134,     8,   127,    -4,     7,  -134
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    15,    14,    25,     4,     0,    16,     9,
       5,     0,    20,     0,     0,     0,     0,     0,     8,    19,
      11,     3,     0,    48,    47,    13,    27,    29,     7,     0,
      23,    98,     0,    57,    51,    49,    54,    17,    73,    67,
      65,    70,    18,     6,     0,    26,    10,    37,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,    30,    12,     0,     0,    28,    74,     0,    21,
       4,    92,     0,     0,    24,    86,    88,    87,    52,     0,
      55,    68,     0,    71,     0,     0,     0,    82,    83,    84,
      85,     0,     0,    76,     0,    75,     0,     0,     0,    94,
      91,     0,     4,    60,    59,    63,    64,    50,     0,     0,
      66,     0,    35,     0,     0,    78,    80,    81,    77,    79,
      89,     0,     0,     0,    93,    53,    58,     0,    62,    56,
      69,    72,     0,    33,    31,     0,    95,    97,    96,    61,
      37,     0,     0,    90,    36,     0,    45,     0,     0,    46,
       0,    37,    42,    44,    34,     0,    40,    32,    37,     0,
      37,    43,     0,    41,    38,     0,     0,    42,    37,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,    -1,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -133,  -134,  -134,  -134,   -21,  -134,  -134,  -134,  -127,
    -134,   -54,  -134,  -134,  -134,  -134,  -134,   -78,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,   103,    17,  -134,    10,   -72,
    -134,  -134,   -53,  -134
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   106,    26,    44,    29,    51,    22,    46,    28,
      63,    66,   142,   141,   132,   157,   165,   160,   158,   147,
      25,    37,    57,    56,   101,    58,   108,   107,   127,    42,
      60,    59,   109,    61,   111,    50,    95,    96,    55,    74,
     135,    98,   124,    32
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      21,   100,   155,    79,   110,   112,    82,   144,    27,    23,
      64,     2,   145,    65,   156,   148,   146,    30,   154,     3,
       4,    45,    48,     5,   126,   161,    24,   163,   128,     6,
       7,    54,     8,     9,    10,   169,    11,    12,   166,    47,
      13,    14,   149,   113,    49,    31,   150,   125,    15,   139,
      73,    54,    16,    54,   129,   130,    17,   131,    18,    19,
      20,    43,    75,   143,    77,     3,     4,    62,   136,     5,
     138,    69,    73,    68,    33,   102,     7,    38,     8,     9,
      10,    76,    11,    12,    78,    80,    13,    14,    34,    35,
      36,    39,    40,    41,    15,   103,   104,   123,    16,   105,
      81,    83,    17,   115,    18,    19,    20,    97,   116,   117,
      84,   118,    85,   119,    99,     3,     4,   114,   133,     5,
     123,   120,   123,   134,   137,    70,     7,   140,     8,     9,
      10,   151,    11,    12,    73,    71,    13,    14,    72,   152,
     153,   159,   164,   162,    15,   167,   168,     0,    16,     3,
       4,    67,    17,     5,    18,    19,    20,     0,     0,    52,
       7,     0,     8,     9,    10,     0,    11,    12,     0,     0,
      13,    14,    53,     0,     0,     0,     0,     0,    15,     0,
       0,     0,    16,     3,     4,     0,    17,     5,    18,    19,
      20,     0,     0,   121,     7,     0,     8,     9,    10,     0,
      11,    12,     0,     0,    13,    14,   122,     0,     0,     0,
       0,     0,    15,     0,     0,     0,    16,     3,     4,     0,
      17,     5,    18,    19,    20,     0,     0,     6,     7,     0,
       8,     9,    10,     0,    11,    12,     0,     0,    13,    14,
      86,    87,    88,    89,    90,     0,    15,    91,    92,    93,
      16,     0,     0,     0,    17,     0,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94
};

static const yytype_int16 yycheck[] =
{
       1,    73,     6,    57,    82,     8,    60,   140,    18,    18,
       3,     0,     4,     6,    18,   142,     8,    40,   151,     8,
       9,    22,    18,    12,   102,   158,    35,   160,   106,    18,
      19,    32,    21,    22,    23,   168,    25,    26,   165,    24,
      29,    30,     5,    46,    40,    40,     9,   101,    37,   127,
      51,    52,    41,    54,   108,   109,    45,   111,    47,    48,
      49,    40,    52,   135,    54,     8,     9,    40,   121,    12,
     123,    27,    73,    15,    18,    18,    19,    18,    21,    22,
      23,    18,    25,    26,    33,    33,    29,    30,    32,    33,
      34,    32,    33,    34,    37,    38,    39,    98,    41,    42,
      33,    33,    45,    86,    47,    48,    49,    29,    91,    92,
      40,    94,    40,    96,    18,     8,     9,    46,    43,    12,
     121,    40,   123,    43,    18,    18,    19,    18,    21,    22,
      23,    18,    25,    26,   135,    28,    29,    30,    31,    18,
       8,    40,    43,    46,    37,    18,   167,    -1,    41,     8,
       9,    48,    45,    12,    47,    48,    49,    -1,    -1,    18,
      19,    -1,    21,    22,    23,    -1,    25,    26,    -1,    -1,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    41,     8,     9,    -1,    45,    12,    47,    48,
      49,    -1,    -1,    18,    19,    -1,    21,    22,    23,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,     8,     9,    -1,
      45,    12,    47,    48,    49,    -1,    -1,    18,    19,    -1,
      21,    22,    23,    -1,    25,    26,    -1,    -1,    29,    30,
       9,    10,    11,    12,    13,    -1,    37,    16,    17,    18,
      41,    -1,    -1,    -1,    45,    -1,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,     0,     8,     9,    12,    18,    19,    21,    22,
      23,    25,    26,    29,    30,    37,    41,    45,    47,    48,
      49,    53,    58,    18,    35,    71,    54,    18,    60,    56,
      40,    40,    94,    18,    32,    33,    34,    72,    18,    32,
      33,    34,    80,    40,    55,    53,    59,    24,    18,    40,
      86,    57,    18,    31,    53,    89,    74,    73,    76,    82,
      81,    84,    40,    61,     3,     6,    62,    86,    15,    27,
      18,    28,    31,    53,    90,    89,    18,    89,    33,    72,
      33,    33,    72,    33,    40,    40,     9,    10,    11,    12,
      13,    16,    17,    18,    40,    87,    88,    29,    92,    18,
      90,    75,    18,    38,    39,    42,    53,    78,    77,    83,
      78,    85,     8,    46,    46,    87,    87,    87,    87,    87,
      40,    18,    31,    53,    93,    72,    78,    79,    78,    72,
      72,    72,    65,    43,    43,    91,    93,    18,    93,    78,
      18,    64,    63,    90,    62,     4,     8,    70,    70,     5,
       9,    18,    18,     8,    62,     6,    18,    66,    69,    40,
      68,    62,    46,    62,    43,    67,    70,    18,    66,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    53,    53,    53,    54,
      53,    55,    53,    53,    53,    53,    53,    53,    53,    53,
      56,    53,    53,    57,    53,    58,    53,    59,    60,    60,
      61,    63,    62,    64,    62,    65,    62,    62,    67,    66,
      68,    66,    69,    66,    70,    70,    70,    71,    71,    73,
      72,    74,    75,    72,    76,    77,    72,    72,    78,    78,
      79,    78,    78,    78,    78,    81,    80,    82,    83,    80,
      84,    85,    80,    80,    86,    86,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    89,    89,    89,    91,
      90,    90,    92,    90,    90,    93,    93,    93,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     2,     1,     0,
       3,     0,     3,     2,     1,     1,     1,     2,     2,     1,
       0,     4,     3,     0,     4,     0,     3,     0,     3,     1,
       1,     0,     8,     0,     8,     0,     6,     0,     0,     9,
       0,     3,     0,     2,     3,     1,     2,     1,     1,     0,
       4,     0,     0,     5,     0,     0,     5,     1,     2,     1,
       0,     3,     2,     1,     1,     0,     4,     0,     0,     5,
       0,     0,     5,     1,     2,     3,     1,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     2,     2,     2,     0,
       5,     2,     0,     3,     2,     2,     2,     2,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 63 "whatafac.y" /* yacc.c:1646  */
    {printf("#include <stdio.h>\n#include <stdlib.h>\n#include <math.h>\n\n");}
#line 1420 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 64 "whatafac.y" /* yacc.c:1646  */
    {/* DO NOTHING HERE */}
#line 1426 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 66 "whatafac.y" /* yacc.c:1646  */
    {/* DO NOTHING IN HERE*/}
#line 1432 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 67 "whatafac.y" /* yacc.c:1646  */
    {printf("\nint main() {\n"); }
#line 1438 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 68 "whatafac.y" /* yacc.c:1646  */
    {printf("\tscanf(\"" );}
#line 1444 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 70 "whatafac.y" /* yacc.c:1646  */
    {printf("%lf\n", (yyvsp[0].flutuante));}
#line 1450 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 71 "whatafac.y" /* yacc.c:1646  */
    {/* NOTHING TO DO HERE */ }
#line 1456 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 72 "whatafac.y" /* yacc.c:1646  */
    {printf("\treturn 0;\n}\n"); printStruct(); exit(0);}
#line 1462 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 75 "whatafac.y" /* yacc.c:1646  */
    {/* DO NOTHING HERE */}
#line 1468 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 76 "whatafac.y" /* yacc.c:1646  */
    {printf("\t");}
#line 1474 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 76 "whatafac.y" /* yacc.c:1646  */
    {printf(";\n");}
#line 1480 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 78 "whatafac.y" /* yacc.c:1646  */
    {printf("\tcase %s:\n", (yyvsp[0].letra));}
#line 1486 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 78 "whatafac.y" /* yacc.c:1646  */
    {printf("}\n");}
#line 1492 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 79 "whatafac.y" /* yacc.c:1646  */
    {printf("\t//");}
#line 1498 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 83 "whatafac.y" /* yacc.c:1646  */
    {print_variables();}
#line 1504 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 93 "whatafac.y" /* yacc.c:1646  */
    {  defineDataType((yyvsp[0].letra) );}
#line 1510 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 96 "whatafac.y" /* yacc.c:1646  */
    {saveNameVariables((yyvsp[-2].letra)); }
#line 1516 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 97 "whatafac.y" /* yacc.c:1646  */
    {saveNameVariables((yyvsp[-2].letra));}
#line 1522 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 98 "whatafac.y" /* yacc.c:1646  */
    {saveTypeVariables("struct "); saveNameVariables((yyvsp[-1].letra)); printOpenBrackets();}
#line 1528 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 103 "whatafac.y" /* yacc.c:1646  */
    {saveNameVariables((yyvsp[-2].letra)); }
#line 1534 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 104 "whatafac.y" /* yacc.c:1646  */
    {printCloseBrackets(); printPointComma();}
#line 1540 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 105 "whatafac.y" /* yacc.c:1646  */
    {printCloseBrackets(); printPointComma();}
#line 1546 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 110 "whatafac.y" /* yacc.c:1646  */
    {saveFloatDataVariables ((yyvsp[-1].flutuante));}
#line 1552 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 111 "whatafac.y" /* yacc.c:1646  */
    {printPointComma();}
#line 1558 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 112 "whatafac.y" /* yacc.c:1646  */
    {saveIntDataVariables ((yyvsp[0].flutuante));}
#line 1564 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 115 "whatafac.y" /* yacc.c:1646  */
    {printf("\tprintf(" );
                            printf("%s", (yyvsp[0].letra));
                            printf(");\n"); }
#line 1572 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 122 "whatafac.y" /* yacc.c:1646  */
    {printf("\tif (%s " , (yyvsp[0].variable));}
#line 1578 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 123 "whatafac.y" /* yacc.c:1646  */
    {printf("&&");}
#line 1584 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 123 "whatafac.y" /* yacc.c:1646  */
    {printf(" %s " , (yyvsp[0].variable));}
#line 1590 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 124 "whatafac.y" /* yacc.c:1646  */
    {printf("||");}
#line 1596 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 124 "whatafac.y" /* yacc.c:1646  */
    {printf(" %s " , (yyvsp[0].variable));}
#line 1602 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 125 "whatafac.y" /* yacc.c:1646  */
    {printf(") {\n\t");}
#line 1608 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 130 "whatafac.y" /* yacc.c:1646  */
    {printf("\t}\n"); }
#line 1614 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 131 "whatafac.y" /* yacc.c:1646  */
    {printf("\t}else{\n\t");}
#line 1620 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 133 "whatafac.y" /* yacc.c:1646  */
    {printf("\t}\n");}
#line 1626 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 138 "whatafac.y" /* yacc.c:1646  */
    {printf("\twhile (%s " , (yyvsp[0].variable));}
#line 1632 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 139 "whatafac.y" /* yacc.c:1646  */
    {printf("&&");}
#line 1638 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 139 "whatafac.y" /* yacc.c:1646  */
    {printf(" %s " , (yyvsp[0].variable));}
#line 1644 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 140 "whatafac.y" /* yacc.c:1646  */
    {printf("||");}
#line 1650 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 140 "whatafac.y" /* yacc.c:1646  */
    {printf(" %s " , (yyvsp[0].variable));}
#line 1656 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 141 "whatafac.y" /* yacc.c:1646  */
    {printf(") {\n");}
#line 1662 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 146 "whatafac.y" /* yacc.c:1646  */
    {
      char* this = getTillLineBreak((yyvsp[-2].letra));
      printf("%s", this);
    }
#line 1671 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 171 "whatafac.y" /* yacc.c:1646  */
    {printf("}\n");}
#line 1677 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 175 "whatafac.y" /* yacc.c:1646  */
    {printf("\tbreak;\n\tcase %s:\n", (yyvsp[0].letra));}
#line 1683 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 177 "whatafac.y" /* yacc.c:1646  */
    {printf("\tbreak;\n\tdefault: ");}
#line 1689 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 177 "whatafac.y" /* yacc.c:1646  */
    {printf("\t");}
#line 1695 "whatafac.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 188 "whatafac.y" /* yacc.c:1646  */
    {
    printf("\tswitch (%s) {\n", (yyvsp[0].letra));
    }
#line 1703 "whatafac.tab.c" /* yacc.c:1646  */
    break;


#line 1707 "whatafac.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 194 "whatafac.y" /* yacc.c:1906  */


int verifyLogErrors(){
  FILE *fp;
  fp = fopen("logOfErrors.txt","r+");
  if(fp == NULL){
    printf("Erro ao abrir o arquivo!\n");
    return 0;
  }

  char c;
  do{
    c = fgetc(fp);
    printf("%c", c);

  }while(c!=EOF);

  fclose(fp);

  return -1;
}

int yyerror(char *s) {
   printf("%s\n",s);
}

int main(void) {
	int haveError = 0;
	yyparse();
	haveError = verifyLogErrors();
	if(haveError == 0){

		system("echo Codigo compilado com sucesso!\n");
	}else{
		system("make clean");
		system("echo Codigo contem erro!\n");
	}
}
