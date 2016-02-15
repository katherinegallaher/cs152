/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     BEGIN_PROGRAM = 259,
     END_PROGRAM = 260,
     INTEGER = 261,
     ARRAY = 262,
     OF = 263,
     IF = 264,
     THEN = 265,
     ENDIF = 266,
     ELSE = 267,
     ELSEIF = 268,
     WHILE = 269,
     DO = 270,
     BEGINLOOP = 271,
     ENDLOOP = 272,
     CONTINUE = 273,
     READ = 274,
     WRITE = 275,
     NOT = 276,
     TRUE = 277,
     FALSE = 278,
     SEMICOLON = 279,
     COLON = 280,
     COMMA = 281,
     ASSIGN = 282,
     L_PAREN = 283,
     R_PAREN = 284,
     IDENT = 285,
     NUMBER = 286,
     GTE = 287,
     LTE = 288,
     GT = 289,
     LT = 290,
     NEQ = 291,
     EQ = 292,
     MOD = 293,
     DIV = 294,
     MULT = 295,
     ADD = 296,
     SUB = 297,
     AND = 298,
     OR = 299,
     ELSE_PREC = 300,
     IF_PREC = 301
   };
#endif
/* Tokens.  */
#define PROGRAM 258
#define BEGIN_PROGRAM 259
#define END_PROGRAM 260
#define INTEGER 261
#define ARRAY 262
#define OF 263
#define IF 264
#define THEN 265
#define ENDIF 266
#define ELSE 267
#define ELSEIF 268
#define WHILE 269
#define DO 270
#define BEGINLOOP 271
#define ENDLOOP 272
#define CONTINUE 273
#define READ 274
#define WRITE 275
#define NOT 276
#define TRUE 277
#define FALSE 278
#define SEMICOLON 279
#define COLON 280
#define COMMA 281
#define ASSIGN 282
#define L_PAREN 283
#define R_PAREN 284
#define IDENT 285
#define NUMBER 286
#define GTE 287
#define LTE 288
#define GT 289
#define LT 290
#define NEQ 291
#define EQ 292
#define MOD 293
#define DIV 294
#define MULT 295
#define ADD 296
#define SUB 297
#define AND 298
#define OR 299
#define ELSE_PREC 300
#define IF_PREC 301




/* Copy the first part of user declarations.  */
#line 3 "MINI_L.y"

 #include <stdio.h>
 #include <stdlib.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 FILE * yyin;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "MINI_L.y"
{
  char* identToken;
  int numberToken;
}
/* Line 193 of yacc.c.  */
#line 202 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 215 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   149

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  164

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    10,    14,    18,    19,    29,    34,
      38,    39,    43,    46,    50,    57,    63,    70,    73,    76,
      78,    82,    84,    88,    89,    92,    93,    96,    99,   103,
     104,   108,   109,   114,   117,   120,   125,   129,   131,   133,
     137,   139,   144,   147,   150,   152,   154,   158,   161,   164,
     169,   170,   174,   178,   182,   186,   190,   191,   193,   195,
     197,   199,   201,   203,   205,   207,   209,   211,   213,   215,
     217,   219,   221,   223,   225,   227,   229,   231,   233,   235,
     237,   239,   241,   243,   245,   247,   249,   251,   253,   255,
     257,   259,   261,   263,   265,   267,   269,   271
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    -1,    69,    70,    71,    49,    81,    -1,
      50,    80,    53,    -1,    51,    71,    50,    -1,    -1,    70,
      52,    72,    74,    75,    77,    76,    78,    73,    -1,    70,
      52,    72,    73,    -1,    26,    70,    52,    -1,    -1,    53,
      54,    71,    -1,    54,    71,    -1,    63,    82,    64,    -1,
      83,    58,    84,    56,    57,    85,    -1,    87,    58,    89,
      56,    90,    -1,    88,    89,    56,    90,    87,    58,    -1,
      92,    55,    -1,    93,    55,    -1,    91,    -1,    55,    79,
      63,    -1,    63,    -1,    54,    71,    56,    -1,    -1,    86,
      56,    -1,    -1,    59,    60,    -1,    62,    61,    -1,    95,
      59,    60,    -1,    -1,    94,    62,    61,    -1,    -1,    96,
      64,   104,    64,    -1,    96,    97,    -1,    96,    98,    -1,
      96,    75,    58,    76,    -1,    64,   104,    64,    -1,    97,
      -1,    98,    -1,    75,    58,    76,    -1,    70,    -1,    70,
      75,    64,    76,    -1,    65,    68,    -1,    66,    67,    -1,
      63,    -1,    77,    -1,    75,    64,    76,    -1,    99,    63,
      -1,    99,    77,    -1,    99,    75,    64,    76,    -1,    -1,
      67,   101,    66,    -1,    67,   102,    66,    -1,    67,   103,
      66,    -1,   100,    65,    68,    -1,    99,    65,    68,    -1,
      -1,     3,    -1,    30,    -1,    24,    -1,    25,    -1,     6,
      -1,     7,    -1,    28,    -1,    29,    -1,    31,    -1,     8,
      -1,    26,    -1,     4,    -1,     5,    -1,    27,    -1,     9,
      -1,    10,    -1,    11,    -1,    12,    -1,    14,    -1,    15,
      -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,    20,
      -1,    43,    -1,    44,    -1,    21,    -1,    22,    -1,    23,
      -1,    42,    -1,    41,    -1,    40,    -1,    39,    -1,    38,
      -1,    37,    -1,    36,    -1,    35,    -1,    34,    -1,    33,
      -1,    32,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    28,    28,    30,    33,    37,    38,    42,    43,    46,
      47,    50,    51,    54,    55,    56,    57,    58,    59,    60,
      63,    64,    66,    67,    70,    71,    74,    77,    80,    81,
      84,    85,    88,    89,    90,    91,    92,    93,    94,    95,
      98,    99,   102,   105,   108,   109,   110,   111,   112,   113,
     115,   116,   117,   118,   121,   123,   124,   129,   132,   135,
     138,   141,   144,   147,   150,   153,   156,   159,   162,   165,
     168,   171,   174,   177,   180,   183,   187,   190,   193,   196,
     199,   202,   205,   208,   211,   214,   217,   219,   222,   225,
     228,   231,   234,   235,   236,   237,   238,   239
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "BEGIN_PROGRAM",
  "END_PROGRAM", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "ELSEIF", "WHILE", "DO", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ",
  "WRITE", "NOT", "TRUE", "FALSE", "SEMICOLON", "COLON", "COMMA", "ASSIGN",
  "L_PAREN", "R_PAREN", "IDENT", "NUMBER", "GTE", "LTE", "GT", "LT", "NEQ",
  "EQ", "MOD", "DIV", "MULT", "ADD", "SUB", "AND", "OR", "ELSE_PREC",
  "IF_PREC", "$accept", "prog_start", "block", "declarations",
  "declaration", "more_idents", "statements", "statement", "Vars",
  "ststatement", "optionalelse", "bool_exp", "relation_and_exp",
  "relationexplist", "andlist", "relation_exp", "Var", "expression",
  "multiplicative_exp", "term", "terms", "exprlist", "program",
  "identifier", "semicolon", "colon", "integer", "array", "l_paren",
  "r_paren", "number", "of", "comma", "begin_program", "end_program",
  "assign", "if", "then", "end_if", "else", "while", "do", "begin_loop",
  "end_loop", "continue", "read", "write", "and", "or", "not", "true",
  "false", "sub", "add", "multiply", "divide", "mod", "comp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    50,    50,    51,    51,    52,
      52,    53,    53,    54,    54,    54,    54,    54,    54,    54,
      55,    55,    56,    56,    57,    57,    58,    59,    60,    60,
      61,    61,    62,    62,    62,    62,    62,    62,    62,    62,
      63,    63,    64,    65,    66,    66,    66,    66,    66,    66,
      67,    67,    67,    67,    68,    68,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   104,   104,   104,   104,   104
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     5,     3,     3,     0,     9,     4,     3,
       0,     3,     2,     3,     6,     5,     6,     2,     2,     1,
       3,     1,     3,     0,     2,     0,     2,     2,     3,     0,
       3,     0,     4,     2,     2,     4,     3,     1,     1,     3,
       1,     4,     2,     2,     1,     1,     3,     2,     2,     4,
       0,     3,     3,     3,     3,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    57,     0,     0,     1,    58,     0,    59,     6,     0,
       0,     0,    10,    69,     3,    68,     0,     6,     0,     0,
      71,    75,    76,    79,    80,    81,     4,     0,     0,    40,
       0,     0,     0,    19,     0,     0,     5,    10,    60,     0,
       0,    12,    70,     0,    63,     0,    84,    85,    86,    65,
      87,     0,    29,    31,    44,     0,    56,    50,     0,    45,
       0,    37,    38,     0,     0,    77,    23,    17,    21,    18,
       9,    61,    62,     8,     0,    11,    13,     0,     0,    72,
      23,    83,    26,     0,    82,    27,     0,    97,    96,    95,
      94,    93,    92,     0,    88,    42,     0,     0,    43,     0,
       0,     0,     0,    33,    34,    47,     0,    48,    23,     0,
       0,    67,     0,     0,     0,    64,    41,    25,    29,    31,
      36,    56,    56,    91,    90,    89,     0,     0,     0,    39,
      46,     0,     0,     0,     0,    23,    78,     0,    20,     0,
      74,     0,    23,    28,    30,    55,    54,    51,    52,    53,
      32,    35,    49,    15,    22,     0,     0,    73,    14,    24,
      16,    66,     0,     7
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    10,    11,    19,    26,   109,    67,   110,
     141,    51,    52,    82,    85,    53,    54,    55,    56,    57,
      98,    95,     3,    29,     8,    39,    73,    74,    77,   130,
      59,   162,   112,    16,    14,    43,    30,    80,   158,   142,
      31,    32,    66,   137,    33,    34,    35,    86,    83,    60,
      61,    62,    63,    97,   126,   127,   128,    93
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -67
static const yytype_int16 yypact[] =
{
       5,   -67,    13,   -14,   -67,   -67,    -4,   -67,   -14,    28,
      33,    -4,    14,   -67,   -67,   -67,    71,   -14,   -14,    18,
     -67,   -67,   -67,   -67,   -67,   -67,    71,    -4,    29,    17,
      76,    76,    32,   -67,   -14,   -14,   -67,    14,   -67,    22,
      -4,   -67,   -67,    21,   -67,    21,   -67,   -67,   -67,   -67,
     -67,    52,    49,    30,   -67,    88,    12,   -67,    76,   -67,
      37,   -67,   -67,     8,    32,   -67,    71,    68,   -67,    68,
     -67,   -67,   -67,   -67,    17,   -67,   -67,    21,    73,   -67,
      71,   -67,   -67,    76,   -67,   -67,    76,   -67,   -67,   -67,
     -67,   -67,   -67,    21,   -67,   -67,    21,    21,    43,    73,
      79,    88,    76,   -67,   -67,   -67,    21,   -67,    71,    -4,
      83,   -67,   -14,    74,    73,   -67,   -67,   105,    49,    30,
     -67,    12,    12,   -67,   -67,   -67,    21,    21,    21,   -67,
     -67,    21,    73,    73,    83,    71,   -67,   118,   -67,    73,
     -67,   122,    71,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,    76,   126,   -67,   -67,   -67,
     -67,   -67,   129,   -67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -67,   -67,   -67,   119,   -67,   100,   -67,    -1,   103,   -66,
     -67,   -27,    56,    23,    24,    54,   -16,   -36,    -9,     3,
     -67,   -12,   -67,     9,    -6,   -67,   -20,   -67,   -28,   -55,
     -52,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       7,   -67,    81,    15,   -67,   -67,   -67,   -67,   -67,   -67,
      86,    87,   -50,   -67,   -67,   -67,   -67,    47
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      28,    45,    58,    58,    64,    17,    96,    76,     1,    78,
      28,   107,     6,     4,   117,    27,     5,    12,    68,    68,
       7,    41,   100,   116,   101,    40,    12,    37,    71,    72,
      58,    99,   102,    13,    75,   106,    44,    15,     5,    49,
      18,   114,   134,    38,   129,    44,   113,   105,    65,    44,
      28,     5,    49,    94,    50,    58,    42,   120,    58,    47,
      48,   139,    79,    50,    28,    44,   100,     5,    49,   154,
     133,    96,    96,    84,    58,   132,   159,   151,   152,    50,
      20,   123,   124,   125,   156,    21,    22,   121,   122,    23,
      24,    25,    28,    81,   111,   150,   138,    46,    47,    48,
     136,     5,   115,   135,    44,    49,     5,    49,   115,   145,
     146,    87,    88,    89,    90,    91,    92,   140,    50,    28,
      87,    88,    89,    90,    91,    92,    28,    58,   160,   147,
     148,   149,    21,   157,   161,    71,    36,    70,    69,   118,
     119,   143,   163,   144,   155,   108,   103,   104,   131,   153
};

static const yytype_uint8 yycheck[] =
{
      16,    29,    30,    31,    31,    11,    56,    43,     3,    45,
      26,    63,     3,     0,    80,    16,    30,     8,    34,    35,
      24,    27,    58,    78,    60,    26,    17,    18,     6,     7,
      58,    58,    60,     5,    40,    63,    28,     4,    30,    31,
      26,    77,   108,    25,    99,    28,    74,    63,    16,    28,
      66,    30,    31,    41,    42,    83,    27,    93,    86,    22,
      23,   113,    10,    42,    80,    28,   102,    30,    31,   135,
     106,   121,   122,    43,   102,   102,   142,   132,   133,    42,
       9,    38,    39,    40,   139,    14,    15,    96,    97,    18,
      19,    20,   108,    44,    26,   131,   112,    21,    22,    23,
      17,    30,    29,   109,    28,    31,    30,    31,    29,   121,
     122,    32,    33,    34,    35,    36,    37,    12,    42,   135,
      32,    33,    34,    35,    36,    37,   142,   155,   155,   126,
     127,   128,    14,    11,     8,     6,    17,    37,    35,    83,
      86,   118,   162,   119,   137,    64,    60,    60,   101,   134
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    48,    69,     0,    30,    70,    24,    71,    49,
      50,    51,    70,     5,    81,     4,    80,    71,    26,    52,
       9,    14,    15,    18,    19,    20,    53,    54,    63,    70,
      83,    87,    88,    91,    92,    93,    50,    70,    25,    72,
      54,    71,    27,    82,    28,    75,    21,    22,    23,    31,
      42,    58,    59,    62,    63,    64,    65,    66,    75,    77,
      96,    97,    98,    99,    58,    16,    89,    55,    63,    55,
      52,     6,     7,    73,    74,    71,    64,    75,    64,    10,
      84,    44,    60,    95,    43,    61,    94,    32,    33,    34,
      35,    36,    37,   104,    41,    68,    99,   100,    67,    58,
      64,    64,    75,    97,    98,    63,    75,    77,    89,    54,
      56,    26,    79,    75,    64,    29,    76,    56,    59,    62,
      64,    65,    65,    38,    39,    40,   101,   102,   103,    76,
      76,   104,    58,    64,    56,    71,    17,    90,    63,    77,
      12,    57,    86,    60,    61,    68,    68,    66,    66,    66,
      64,    76,    76,    90,    56,    87,    76,    11,    85,    56,
      58,     8,    78,    73
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 30 "MINI_L.y"
    {printf( "program -> program ident semicolon block end_program\n"); ;}
    break;

  case 4:
#line 33 "MINI_L.y"
    {printf("block -> declarations begin_program statements\n");;}
    break;

  case 5:
#line 37 "MINI_L.y"
    {printf("declarations -> declaration semicolon declarations\n"); ;}
    break;

  case 6:
#line 38 "MINI_L.y"
    { printf("declarations -> EMPTY\n"); ;}
    break;

  case 7:
#line 42 "MINI_L.y"
    {printf("declaration -> identifier more_idents colon array l_paren number r_paren of integer\n"); ;}
    break;

  case 8:
#line 43 "MINI_L.y"
    {printf("declaration -> identifier more_idents colon integer\n"); ;}
    break;

  case 9:
#line 46 "MINI_L.y"
    {printf("more_idents -> COMMA identifier more_idents\n"); ;}
    break;

  case 10:
#line 47 "MINI_L.y"
    { printf("more_idents -> EMPTY\n"); ;}
    break;

  case 11:
#line 50 "MINI_L.y"
    {printf("statements -> statements statements semicolon\n"); ;}
    break;

  case 12:
#line 51 "MINI_L.y"
    {printf("statements -> statement semicolon\n"); ;}
    break;

  case 13:
#line 54 "MINI_L.y"
    {printf("statement -> Var assign expression\n"); ;}
    break;

  case 14:
#line 55 "MINI_L.y"
    {printf("statement -> if bool_exp then ststatement optionalelse end_if\n"); ;}
    break;

  case 15:
#line 56 "MINI_L.y"
    {printf("statement -> while bool_exp begin_loop ststatement end_loop\n"); ;}
    break;

  case 16:
#line 57 "MINI_L.y"
    {printf("statement -> do begin_loop ststatement end_loop while bool_exp\n"); ;}
    break;

  case 17:
#line 58 "MINI_L.y"
    {printf("statement -> read Vars\n"); ;}
    break;

  case 18:
#line 59 "MINI_L.y"
    {printf("statement -> write Vars\n");;}
    break;

  case 19:
#line 60 "MINI_L.y"
    {printf("statement -> continue\n");;}
    break;

  case 20:
#line 63 "MINI_L.y"
    {printf("Vars -> Vars comma Var\n"); ;}
    break;

  case 21:
#line 64 "MINI_L.y"
    {printf("Vars -> Var\n");;}
    break;

  case 22:
#line 66 "MINI_L.y"
    {printf("ststatement -> statement semicolon ststatement\n"); ;}
    break;

  case 23:
#line 67 "MINI_L.y"
    {printf("ststatement -> EMPTY\n"); ;}
    break;

  case 24:
#line 70 "MINI_L.y"
    {printf("optionalelse -> else ststatement\n"); ;}
    break;

  case 25:
#line 71 "MINI_L.y"
    {printf("optionalelse -> EMPTY\n"); ;}
    break;

  case 26:
#line 74 "MINI_L.y"
    {printf("bool_exp -> relation_and_exp relationexplist\n"); ;}
    break;

  case 27:
#line 77 "MINI_L.y"
    { printf("relation_and_exp -> relation_exp andlist\n"); ;}
    break;

  case 28:
#line 80 "MINI_L.y"
    { printf("relationexplist -> or relation_and_exp relationexplist\n"); ;}
    break;

  case 29:
#line 81 "MINI_L.y"
    {printf("relatoinexplist -> EMPTY\n"); ;}
    break;

  case 30:
#line 84 "MINI_L.y"
    {printf("andlist -> and relation_exp andlist\n"); ;}
    break;

  case 31:
#line 85 "MINI_L.y"
    {printf("andlist -> EMPTY\n"); ;}
    break;

  case 32:
#line 88 "MINI_L.y"
    {printf("relational_exp -> not expression comp expression\n"); ;}
    break;

  case 33:
#line 89 "MINI_L.y"
    {printf("relational_exp -> not true\n"); ;}
    break;

  case 34:
#line 90 "MINI_L.y"
    {printf("relational_exp -> not false\n"); ;}
    break;

  case 35:
#line 91 "MINI_L.y"
    {printf("relational_exp -> not l_paren bool_exp r_paren\n"); ;}
    break;

  case 36:
#line 92 "MINI_L.y"
    {printf("relational_exp -> expression comp expression\n"); ;}
    break;

  case 37:
#line 93 "MINI_L.y"
    {printf("relational_exp -> true\n"); ;}
    break;

  case 38:
#line 94 "MINI_L.y"
    {printf("relational_exp -> false\n"); ;}
    break;

  case 39:
#line 95 "MINI_L.y"
    {printf("relational_exp -> l_paren bool_exp r_paren\n"); ;}
    break;

  case 40:
#line 98 "MINI_L.y"
    { printf("Var -> identifer\n"); ;}
    break;

  case 41:
#line 99 "MINI_L.y"
    { printf("Var -> identifier l_paren expression r_paren\n"); ;}
    break;

  case 42:
#line 102 "MINI_L.y"
    { printf("expression -> multiplicative_exp exprlist\n"); ;}
    break;

  case 43:
#line 105 "MINI_L.y"
    {printf("multiplicative_exp -> term terms\n"); ;}
    break;

  case 44:
#line 108 "MINI_L.y"
    {printf("term -> Var\n"); ;}
    break;

  case 45:
#line 109 "MINI_L.y"
    {printf("term -> number\n"); ;}
    break;

  case 46:
#line 110 "MINI_L.y"
    {printf("term -> l_paren expression r_paren\n"); ;}
    break;

  case 47:
#line 111 "MINI_L.y"
    {printf("term -> sub Var\n"); ;}
    break;

  case 48:
#line 112 "MINI_L.y"
    {printf("term -> sub number\n"); ;}
    break;

  case 49:
#line 113 "MINI_L.y"
    {printf("term -> sub l_paren expression r_paren\n"); ;}
    break;

  case 50:
#line 115 "MINI_L.y"
    {printf("terms -> EMPTY\n");;}
    break;

  case 51:
#line 116 "MINI_L.y"
    {printf("terms -> terms multiply term\n"); ;}
    break;

  case 52:
#line 117 "MINI_L.y"
    {printf("terms -> terms divide term\n"); ;}
    break;

  case 53:
#line 118 "MINI_L.y"
    {printf("terms -> terms mod term\n"); ;}
    break;

  case 54:
#line 121 "MINI_L.y"
    {printf("exprlist -> add multiplicative_exp exprlist\n"); ;}
    break;

  case 55:
#line 123 "MINI_L.y"
    {printf("exprlist -> sub multiplicative_exp exprlist\n"); ;}
    break;

  case 56:
#line 124 "MINI_L.y"
    {printf("exprlist -> EMPTY\n"); ;}
    break;

  case 57:
#line 129 "MINI_L.y"
    { printf("program -> PROGRAM\n"); ;}
    break;

  case 58:
#line 132 "MINI_L.y"
    { printf("identifier -> IDENT(%s)\n", (yyvsp[(1) - (1)].identToken)); ;}
    break;

  case 59:
#line 135 "MINI_L.y"
    { printf("semicolon -> SEMICOLON\n"); ;}
    break;

  case 60:
#line 138 "MINI_L.y"
    { printf("colon -> COLON\n"); ;}
    break;

  case 61:
#line 141 "MINI_L.y"
    { printf("integer -> INTEGER\n"); ;}
    break;

  case 62:
#line 144 "MINI_L.y"
    { printf("array -> ARRAY\n"); ;}
    break;

  case 63:
#line 147 "MINI_L.y"
    { printf("l_paren -> L_PAREN\n"); ;}
    break;

  case 64:
#line 150 "MINI_L.y"
    { printf("r_paren -> R_PAREN\n"); ;}
    break;

  case 65:
#line 153 "MINI_L.y"
    { printf("number -> NUMBER(%d)\n", (yyvsp[(1) - (1)].numberToken)); ;}
    break;

  case 66:
#line 156 "MINI_L.y"
    {printf("of -> OF\n"); ;}
    break;

  case 67:
#line 159 "MINI_L.y"
    {printf("comma -> COMMA\n"); ;}
    break;

  case 68:
#line 162 "MINI_L.y"
    {printf("begin_program -> BEGINPROGRAM\n"); ;}
    break;

  case 69:
#line 165 "MINI_L.y"
    {printf("end_program -> ENDPROGRAM\n"); ;}
    break;

  case 70:
#line 168 "MINI_L.y"
    {printf("assign -> ASSIGN\n"); ;}
    break;

  case 71:
#line 171 "MINI_L.y"
    {printf("if -> IF\n"); ;}
    break;

  case 72:
#line 174 "MINI_L.y"
    {printf("then -> THEN\n"); ;}
    break;

  case 73:
#line 177 "MINI_L.y"
    {printf("end_if -> ENDIF\n"); ;}
    break;

  case 74:
#line 180 "MINI_L.y"
    {printf("else -> ELSE\n"); ;}
    break;

  case 75:
#line 183 "MINI_L.y"
    {printf("while -> WHILE\n"); ;}
    break;

  case 76:
#line 187 "MINI_L.y"
    {printf("do -> DO\n"); ;}
    break;

  case 77:
#line 190 "MINI_L.y"
    {printf("begin_loop -> BEGINLOOP\n"); ;}
    break;

  case 78:
#line 193 "MINI_L.y"
    {printf("end_loop -> ENDLOOP\n"); ;}
    break;

  case 79:
#line 196 "MINI_L.y"
    {printf("continue-> CONTINUE\n"); ;}
    break;

  case 80:
#line 199 "MINI_L.y"
    {printf("read -> READ\n"); ;}
    break;

  case 81:
#line 202 "MINI_L.y"
    {printf("write -> WRITE\n"); ;}
    break;

  case 82:
#line 205 "MINI_L.y"
    {printf("and -> AND\n"); ;}
    break;

  case 83:
#line 208 "MINI_L.y"
    {printf("or -> OR\n"); ;}
    break;

  case 84:
#line 211 "MINI_L.y"
    {printf("not -> NOT\n"); ;}
    break;

  case 85:
#line 214 "MINI_L.y"
    {printf("true -> TRUE\n"); ;}
    break;

  case 86:
#line 217 "MINI_L.y"
    {printf("false -> FALSE\n"); ;}
    break;

  case 87:
#line 219 "MINI_L.y"
    {printf("false -> SUB\n"); ;}
    break;

  case 88:
#line 222 "MINI_L.y"
    {printf("false -> ADD\n"); ;}
    break;

  case 89:
#line 225 "MINI_L.y"
    {printf("false -> MULT\n"); ;}
    break;

  case 90:
#line 228 "MINI_L.y"
    {printf("false -> DIV\n"); ;}
    break;

  case 91:
#line 231 "MINI_L.y"
    {printf("false -> MOD\n"); ;}
    break;

  case 92:
#line 234 "MINI_L.y"
    {printf("comp -> EQ\n"); ;}
    break;

  case 93:
#line 235 "MINI_L.y"
    {printf("comp -> NEQ\n"); ;}
    break;

  case 94:
#line 236 "MINI_L.y"
    {printf("comp -> LT\n"); ;}
    break;

  case 95:
#line 237 "MINI_L.y"
    {printf("comp -> GT\n"); ;}
    break;

  case 96:
#line 238 "MINI_L.y"
    {printf("comp -> LTE\n"); ;}
    break;

  case 97:
#line 239 "MINI_L.y"
    {printf("comp -> GTE\n"); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2041 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 243 "MINI_L.y"


int main(int argc, char **argv){
	if(argc >= 2)
	{
		yyin = fopen(argv[1], "r");
		if(yyin == NULL)
		{
			yyin = stdin;
		}
   }
   else
   {
      yyin = stdin;
   }
   yyparse();
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}

