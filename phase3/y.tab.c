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
 #include <ctype.h>
 #include <sstream>
 #include <vector>
 #include <string>
 #include <map>
 #include <fstream>
 #include <iostream>
 using namespace std; 

 extern int currLine;
 extern int currPos;
 extern int yylex(void);
 void yyerror(const char *msg);
 bool var_in_table(string val);
 bool arr_valid_size(int val);
 bool ident_is_array(string val);
 int sym_type(string val);
 void do_readwrite(string curr);
 bool check_if_temp(string val);
 struct symtable_entry{
	int type;
	int a_size;
	string name;
	symtable_entry() :type(0), a_size(0), name() {}
 };

 string filename;
 bool add = false, sub = false; 
 bool mult = false, divide = false, mod = false; 
 bool readst = false, writest = false; 
 bool andp = false, orp = false; 
 ostringstream out;
 ostringstream errors;

 vector<symtable_entry> sym_table;
 vector<string> t_vars;
 vector<string> p_vars;
 vector<string> l_labels; 

 vector <string> t;


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
#line 48 "MINI_L.y"
{
  char* identToken;
  int numberToken;
}
/* Line 193 of yacc.c.  */
#line 238 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 251 "y.tab.c"

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
#define YYLAST   130

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNRULES -- Number of states.  */
#define YYNSTATES  134

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
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     5,    12,    13,    18,    22,    23,
      33,    38,    42,    43,    47,    50,    54,    55,    63,    69,
      76,    77,    81,    82,    86,    88,    92,    94,    98,    99,
     102,   103,   106,   109,   113,   114,   118,   119,   124,   127,
     130,   135,   139,   141,   143,   147,   149,   154,   157,   160,
     162,   164,   168,   171,   174,   179,   180,   184,   188,   192,
     196,   200,   201,   203,   205,   207,   209,   211
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    -1,    -1,     3,    30,    49,    24,    50,
       5,    -1,    -1,    52,     4,    51,    55,    -1,    53,    24,
      52,    -1,    -1,    30,    54,    25,     7,    28,    31,    29,
       8,     6,    -1,    30,    54,    25,     6,    -1,    26,    30,
      54,    -1,    -1,    55,    56,    24,    -1,    56,    24,    -1,
      68,    27,    69,    -1,    -1,     9,    63,    10,    61,    57,
      62,    11,    -1,    14,    63,    16,    61,    17,    -1,    15,
      16,    61,    17,    14,    63,    -1,    -1,    19,    58,    60,
      -1,    -1,    20,    59,    60,    -1,    18,    -1,    60,    26,
      68,    -1,    68,    -1,    56,    24,    61,    -1,    -1,    12,
      61,    -1,    -1,    64,    65,    -1,    67,    66,    -1,    44,
      64,    65,    -1,    -1,    43,    67,    66,    -1,    -1,    21,
      69,    74,    69,    -1,    21,    22,    -1,    21,    23,    -1,
      21,    28,    63,    29,    -1,    69,    74,    69,    -1,    22,
      -1,    23,    -1,    28,    63,    29,    -1,    30,    -1,    30,
      28,    69,    29,    -1,    70,    73,    -1,    71,    72,    -1,
      68,    -1,    31,    -1,    28,    69,    29,    -1,    42,    68,
      -1,    42,    31,    -1,    42,    28,    69,    29,    -1,    -1,
      72,    40,    71,    -1,    72,    39,    71,    -1,    72,    38,
      71,    -1,    41,    70,    73,    -1,    42,    70,    73,    -1,
      -1,    37,    -1,    36,    -1,    35,    -1,    34,    -1,    33,
      -1,    32,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    80,    80,    83,    83,    87,    88,    92,
     107,   123,   136,   139,   140,   143,   186,   186,   196,   197,
     198,   198,   199,   199,   200,   203,   206,   210,   211,   214,
     218,   221,   263,   292,   297,   300,   308,   311,   312,   313,
     314,   315,   362,   363,   364,   367,   379,   397,   423,   454,
     455,   456,   457,   458,   459,   462,   463,   467,   471,   477,
     481,   485,   488,   489,   490,   491,   492,   493
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
  "IF_PREC", "$accept", "prog_start", "@1", "block", "@2", "declarations",
  "declaration", "more_idents", "statements", "statement", "@3", "@4",
  "@5", "Vars", "ststatement", "optionalelse", "bool_exp",
  "relation_and_exp", "relationexplist", "andlist", "relation_exp", "Var",
  "expression", "multiplicative_exp", "term", "terms", "exprlist", "comp", 0
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
       0,    47,    48,    49,    48,    51,    50,    52,    52,    53,
      53,    54,    54,    55,    55,    56,    57,    56,    56,    56,
      58,    56,    59,    56,    56,    60,    60,    61,    61,    62,
      62,    63,    64,    65,    65,    66,    66,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    69,    70,    71,
      71,    71,    71,    71,    71,    72,    72,    72,    72,    73,
      73,    73,    74,    74,    74,    74,    74,    74
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     6,     0,     4,     3,     0,     9,
       4,     3,     0,     3,     2,     3,     0,     7,     5,     6,
       0,     3,     0,     3,     1,     3,     1,     3,     0,     2,
       0,     2,     2,     3,     0,     3,     0,     4,     2,     2,
       4,     3,     1,     1,     3,     1,     4,     2,     2,     1,
       1,     3,     2,     2,     4,     0,     3,     3,     3,     3,
       3,     0,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     3,     1,     0,     8,    12,     0,     0,
       0,     0,     0,     4,     5,     8,    12,     0,     0,     7,
      11,    10,     0,     0,     0,     0,    24,    20,    22,    45,
       6,     0,     0,     0,     0,    42,    43,     0,    50,     0,
       0,    34,    36,    49,     0,    61,    55,     0,    28,     0,
       0,     0,     0,    14,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    53,    52,    28,     0,    31,     0,    32,
      67,    66,    65,    64,    63,    62,     0,     0,     0,    47,
      48,    28,     0,     0,    21,    26,    23,     0,     0,    13,
      15,     0,     0,     0,    44,    51,     0,    16,    34,    36,
      41,    61,    61,     0,     0,     0,     0,    28,     0,     0,
       0,    46,     0,    40,    37,    54,    30,    33,    35,    59,
      60,    58,    57,    56,    18,    27,     0,    25,     9,    28,
       0,    19,    29,    17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     8,    18,     9,    10,    12,    30,    82,
     116,    49,    50,    84,    83,   130,    40,    41,    67,    69,
      42,    43,    44,    45,    46,    80,    79,    76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -66
static const yytype_int8 yypact[] =
{
      16,    12,    33,   -66,   -66,    22,    30,    35,    57,    63,
      41,    38,    44,   -66,   -66,    30,    35,     3,    34,   -66,
     -66,   -66,    43,   -15,   -15,    58,   -66,   -66,   -66,    47,
      34,    53,    52,    68,    50,   -66,   -66,   -15,   -66,    -2,
      72,    56,    59,   -66,    51,     9,   -66,    85,    34,    74,
      74,    -6,    81,   -66,    -6,    77,   -66,   -66,   -15,    51,
      78,    61,    -6,   -66,   -66,    34,   -15,   -66,   -15,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,    -6,    -6,    -6,   -66,
     -35,    34,    84,    92,    86,   -66,    86,    -6,    87,   -66,
     -66,   102,    88,    -6,   -66,   -66,    89,   -66,    56,    59,
     -66,     9,     9,    -6,    -6,    -6,    96,    34,   100,    74,
      90,   -66,   109,   -66,   -66,   -66,   108,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -15,   -66,   -66,    34,
     110,   -66,   -66,   -66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -66,   -66,   -66,   -66,   -66,   107,   -66,   111,   -66,    -7,
     -66,   -66,   -66,    73,   -63,   -66,   -23,    60,    26,    29,
      62,   -18,   -17,   -22,   -65,   -66,   -44,    66
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      32,    47,    97,   103,   104,   105,    34,    35,    36,    21,
      22,    31,    32,    37,    60,    29,    38,    59,   106,     1,
      61,    64,    87,    52,    29,    38,    62,    39,    29,    63,
      32,    85,    85,     4,    88,    92,    39,    90,   121,   122,
     123,    61,     3,    23,   125,    96,     6,    32,    24,    25,
      77,    78,    26,    27,    28,   101,   102,   119,   120,   100,
       7,    11,    13,    32,    29,    15,   132,    14,    16,    17,
     110,    33,    56,    57,    48,    51,   114,    53,    58,    54,
      29,    38,    65,    70,    71,    72,    73,    74,    75,    32,
      95,   127,    39,    70,    71,    72,    73,    74,    75,    55,
      66,    81,    68,   131,    29,    89,    91,    94,   107,   108,
     112,    32,   109,   124,   126,   128,   111,   113,   115,    95,
     129,   133,    19,    86,   117,    93,    98,    20,   118,     0,
      99
};

static const yytype_int16 yycheck[] =
{
      18,    24,    65,    38,    39,    40,    21,    22,    23,     6,
       7,    18,    30,    28,    37,    30,    31,    34,    81,     3,
      37,    39,    28,    30,    30,    31,    28,    42,    30,    31,
      48,    49,    50,     0,    51,    58,    42,    54,   103,   104,
     105,    58,    30,     9,   107,    62,    24,    65,    14,    15,
      41,    42,    18,    19,    20,    77,    78,   101,   102,    76,
      30,    26,     5,    81,    30,    24,   129,     4,    30,    25,
      87,    28,    22,    23,    16,    28,    93,    24,    28,    27,
      30,    31,    10,    32,    33,    34,    35,    36,    37,   107,
      29,   109,    42,    32,    33,    34,    35,    36,    37,    31,
      44,    16,    43,   126,    30,    24,    29,    29,    24,    17,
       8,   129,    26,    17,    14,     6,    29,    29,    29,    29,
      12,    11,    15,    50,    98,    59,    66,    16,    99,    -1,
      68
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    48,    30,     0,    49,    24,    30,    50,    52,
      53,    26,    54,     5,     4,    24,    30,    25,    51,    52,
      54,     6,     7,     9,    14,    15,    18,    19,    20,    30,
      55,    56,    68,    28,    21,    22,    23,    28,    31,    42,
      63,    64,    67,    68,    69,    70,    71,    63,    16,    58,
      59,    28,    56,    24,    27,    31,    22,    23,    28,    69,
      63,    69,    28,    31,    68,    10,    44,    65,    43,    66,
      32,    33,    34,    35,    36,    37,    74,    41,    42,    73,
      72,    16,    56,    61,    60,    68,    60,    28,    69,    24,
      69,    29,    63,    74,    29,    29,    69,    61,    64,    67,
      69,    70,    70,    38,    39,    40,    61,    24,    17,    26,
      69,    29,     8,    29,    69,    29,    57,    65,    66,    73,
      73,    71,    71,    71,    17,    61,    14,    68,     6,    12,
      62,    63,    61,    11
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
#line 80 "MINI_L.y"
    {filename = (yyvsp[(2) - (2)].identToken);;}
    break;

  case 4:
#line 80 "MINI_L.y"
    {;}
    break;

  case 5:
#line 83 "MINI_L.y"
    {out <<": START\n"; ;}
    break;

  case 6:
#line 83 "MINI_L.y"
    { ;}
    break;

  case 7:
#line 87 "MINI_L.y"
    { ;}
    break;

  case 8:
#line 88 "MINI_L.y"
    { ;}
    break;

  case 9:
#line 92 "MINI_L.y"
    {
				bool valid = true, arrvalid=true;
				arrvalid = arr_valid_size(atoi((yyvsp[(6) - (9)].identToken)));
				valid = var_in_table((yyvsp[(1) - (9)].identToken));
				if(arrvalid && !valid){
					symtable_entry temp;
					temp.type = 1; 
					temp.a_size = atoi((yyvsp[(6) - (9)].identToken));
					temp.name = (yyvsp[(1) - (9)].identToken); 
					sym_table.push_back(temp);
				}
				else{
					errors << "Variable " << (yyvsp[(1) - (9)].identToken) << " is already declared" <<endl;
				}
			;}
    break;

  case 10:
#line 107 "MINI_L.y"
    { 
  				bool valid = true;
				valid = var_in_table((yyvsp[(1) - (4)].identToken));
				if(!valid){
					symtable_entry temp;
					temp.type = 0; 
					temp.name = (yyvsp[(1) - (4)].identToken); 
					sym_table.push_back(temp);
				}
				else{
					errors << "Variable " << (yyvsp[(1) - (4)].identToken) << " is already declared" <<endl;
				}
			;}
    break;

  case 11:
#line 123 "MINI_L.y"
    { 
				bool valid = true;
				valid = var_in_table((yyvsp[(2) - (3)].identToken));
				if(!valid){
					symtable_entry temp;
					temp.type = 0; 
					temp.name = (yyvsp[(2) - (3)].identToken); 
					sym_table.push_back(temp);
				}
				else{
					errors << "Variable " << (yyvsp[(2) - (3)].identToken) << " is already declared" <<endl;
				}
			;}
    break;

  case 12:
#line 136 "MINI_L.y"
    {  ;}
    break;

  case 13:
#line 139 "MINI_L.y"
    { ;}
    break;

  case 14:
#line 140 "MINI_L.y"
    { ;}
    break;

  case 15:
#line 143 "MINI_L.y"
    {
				//here it can either be = or []=, check which and then put in out , var decides 
				string var = (yyvsp[(1) - (3)].identToken); 
				int i = var.find(" ",0);
				if(i != string::npos){//array on lhs
					string a, b, c;
					a = var.substr(0,i);
					b = var.substr(i+1);
					c = (yyvsp[(3) - (3)].identToken);
					if(!check_if_temp(a) )
						a.insert(0,"_");
					if(!check_if_temp(b) )
						b.insert(0,"_");
					if(!check_if_temp(c) )
						c.insert(0,"_");

					out << "[]= " << a << ", "<< b<< ", "<< c << endl;
				}
				else{
					string exp = (yyvsp[(3) - (3)].identToken);	
					if(!check_if_temp(var) )
						var.insert(0,"_");
					
					int i = exp.find(" ",0);
					if(i != string::npos){//array on rhs 
						string a, b;
						a = exp.substr(0,i);
						b = exp.substr(i+1);

						if(!check_if_temp(a) )
							a.insert(0,"_");
						if(!check_if_temp(b) )
							b.insert(0,"_");

						out << "=[] " << var << ", " << a << ", " << b <<endl;
					}
					else{
						if(!check_if_temp(exp) )
							exp.insert(0,"_");
						out << "= " << var << ", "<< exp << endl;
					}
				}
			;}
    break;

  case 16:
#line 186 "MINI_L.y"
    {
											stringstream temp;
											temp << "L" << l_labels.size(); 
											l_labels.push_back(temp.str() );
											out << ":= " << temp.str() <<endl;
										  ;}
    break;

  case 17:
#line 192 "MINI_L.y"
    { 
				out <<": " << l_labels[l_labels.size() -2] <<endl;
				out << ": " << l_labels[l_labels.size() -1] <<endl; 
			;}
    break;

  case 18:
#line 196 "MINI_L.y"
    { ;}
    break;

  case 19:
#line 197 "MINI_L.y"
    { ;}
    break;

  case 20:
#line 198 "MINI_L.y"
    {readst = true; ;}
    break;

  case 21:
#line 198 "MINI_L.y"
    { readst = false;;}
    break;

  case 22:
#line 199 "MINI_L.y"
    {writest = true; ;}
    break;

  case 23:
#line 199 "MINI_L.y"
    { readst = false;;}
    break;

  case 24:
#line 200 "MINI_L.y"
    {    ;}
    break;

  case 25:
#line 203 "MINI_L.y"
    {  
				do_readwrite((yyvsp[(3) - (3)].identToken));
			;}
    break;

  case 26:
#line 206 "MINI_L.y"
    { 
				do_readwrite((yyvsp[(1) - (1)].identToken));
			;}
    break;

  case 27:
#line 210 "MINI_L.y"
    { ;}
    break;

  case 28:
#line 211 "MINI_L.y"
    { ;}
    break;

  case 29:
#line 214 "MINI_L.y"
    { 
				out << ":= " << l_labels[l_labels.size() - 1] <<endl;
				l_labels.pop_back();	
			;}
    break;

  case 30:
#line 218 "MINI_L.y"
    { ;}
    break;

  case 31:
#line 221 "MINI_L.y"
    { 
				if((yyvsp[(2) - (2)].identToken) == NULL){
					  stringstream temp3;
					  temp3 << "p" <<p_vars.size();
					  p_vars.push_back(temp3.str() );
					  out << "== " << temp3.str() << ", " << p_vars[p_vars.size() -2] << ", 0" << endl;

					stringstream temp;
					temp << "L" << l_labels.size(); 
					l_labels.push_back(temp.str() );
					
					out << "?:= " << temp.str() << ", " << temp3.str() << endl;

					(yyval.identToken) = (yyvsp[(1) - (2)].identToken);
				}
				else{//there are ORs
					orp = true; 
					stringstream temp;
					temp << "p" << p_vars.size(); 
					p_vars.push_back(temp.str() );

					string a = (yyvsp[(1) - (2)].identToken), b = (yyvsp[(2) - (2)].identToken); 
					if(!check_if_temp(a) )
						a.insert(0,"_");
					if(!check_if_temp(b) )
						b.insert(0,"_");
					out << "|| "<< temp.str() <<", " << a << ", " << b <<endl;

					if(t.size() != 0){
						while(t.size() != 0 ){
							stringstream temp2;
							temp2 << "p" << p_vars.size(); 
							p_vars.push_back(temp2.str() );
							out << "|| "<< temp2.str() <<", "<< p_vars[p_vars.size()-2]<<", " << t[t.size()-1]<< endl;
							t.pop_back();
						}
					}
					strcpy((yyval.identToken), p_vars[p_vars.size()-1].c_str() );
				}
			;}
    break;

  case 32:
#line 263 "MINI_L.y"
    {  
				if((yyvsp[(2) - (2)].identToken) == NULL){
					(yyval.identToken) = (yyvsp[(1) - (2)].identToken); 	
				}
				else{//andlist is not null 
					stringstream temp;
					temp << "p" << p_vars.size(); 
					p_vars.push_back(temp.str() );

					string a = (yyvsp[(1) - (2)].identToken), b = (yyvsp[(2) - (2)].identToken); 
					if(!check_if_temp(a) )
						a.insert(0,"_");
					if(!check_if_temp(b) )
						b.insert(0,"_");
					out << "&& "<< temp.str() <<", " << a << ", " << b <<endl;

					while(t.size() > 0 ){
						stringstream temp2;
						temp2 << "p" << p_vars.size(); 
						p_vars.push_back(temp2.str() );
						out << "&& "<< temp2.str() <<", "<< p_vars[p_vars.size()-2]<<", " << t[t.size()-1]<< endl;
						t.pop_back();
					}
						
					strcpy((yyval.identToken), p_vars[p_vars.size()-1].c_str() );
				}
			;}
    break;

  case 33:
#line 292 "MINI_L.y"
    { 
				(yyval.identToken) = (yyvsp[(2) - (3)].identToken); 
				if((yyvsp[(3) - (3)].identToken) != NULL)
					t.push_back((yyvsp[(3) - (3)].identToken));
			;}
    break;

  case 34:
#line 297 "MINI_L.y"
    { (yyval.identToken) = NULL; 	;}
    break;

  case 35:
#line 300 "MINI_L.y"
    {  
				(yyval.identToken) = (yyvsp[(2) - (3)].identToken); 
				if((yyvsp[(3) - (3)].identToken) != NULL){
	cout<<"not null return: "<<(yyvsp[(3) - (3)].identToken)<<endl;

					t.push_back((yyvsp[(3) - (3)].identToken));
				}
			;}
    break;

  case 36:
#line 308 "MINI_L.y"
    { (yyval.identToken) = NULL; ;}
    break;

  case 37:
#line 311 "MINI_L.y"
    { ;}
    break;

  case 38:
#line 312 "MINI_L.y"
    {;}
    break;

  case 39:
#line 313 "MINI_L.y"
    { ;}
    break;

  case 40:
#line 314 "MINI_L.y"
    { ;}
    break;

  case 41:
#line 315 "MINI_L.y"
    { 
				stringstream temp;
				temp << "p" << p_vars.size(); 
				p_vars.push_back(temp.str() );

				string a = (yyvsp[(1) - (3)].identToken), b = (yyvsp[(3) - (3)].identToken); 
				if(!check_if_temp(a) )
					a.insert(0,"_");
				if(!check_if_temp(b) )
					b.insert(0,"_");

				//if array another output is needed 				

				int i = a.find(" ",0);
				if(i != string::npos){//array on rhs 
					stringstream temp2;
					temp2 <<"t" << t_vars.size();
					t_vars.push_back(temp2.str() );
					
					string c, d;
					c = a.substr(0,i);
					d = a.substr(i+1);

					if(!check_if_temp(c) )
						c.insert(0,"_");
					if(!check_if_temp(d) )
						d.insert(0,"_");
					out << "=[] " << temp2.str() << ", " << c<< ", " << d <<endl;
					out << (yyvsp[(2) - (3)].identToken) <<" "<< temp.str() <<", " << temp2.str() << ", " << b <<endl;
				  }
				  else{
					out << (yyvsp[(2) - (3)].identToken) <<" "<< temp.str() <<", " << a << ", " << b <<endl;
				  }
				  //check for false
	//??????????????????
	/*
				  stringstream temp3;
				  temp3 << "p" <<p_vars.size();
				  p_vars.push_back(temp.str() );
				  out << "== " << temp3.str() << ", " << p_vars[p_vars.size() -2] << ", 0" << endl;
				  strcpy($$, temp3.str().c_str());
				  */

				  strcpy((yyval.identToken), temp.str().c_str());


			;}
    break;

  case 42:
#line 362 "MINI_L.y"
    {;}
    break;

  case 43:
#line 363 "MINI_L.y"
    { ;}
    break;

  case 44:
#line 364 "MINI_L.y"
    { ;}
    break;

  case 45:
#line 367 "MINI_L.y"
    {  
				bool valid = var_in_table((yyvsp[(1) - (1)].identToken));
				if(valid && !ident_is_array((yyvsp[(1) - (1)].identToken)) ){//it is not an array 
					(yyval.identToken) = (yyvsp[(1) - (1)].identToken);
				}
				else if(!valid){
					errors << "Variable " << (yyvsp[(1) - (1)].identToken) << " does not exist" <<endl;
				}
				else{ //is an array 
					errors << "Variable " << (yyvsp[(1) - (1)].identToken) << " is being accessed as the wrong type" <<endl;
				}
			;}
    break;

  case 46:
#line 379 "MINI_L.y"
    { 
				bool valid = var_in_table((yyvsp[(1) - (4)].identToken));
				if(ident_is_array((yyvsp[(1) - (4)].identToken)) && valid){//it is an array 
				string a; 
				a.append((yyvsp[(1) - (4)].identToken));
				a.append(" ");
				a.append((yyvsp[(3) - (4)].identToken));
				strcpy((yyval.identToken),a.c_str() );
				}
				else if(!valid){
					errors << "Variable " << (yyvsp[(1) - (4)].identToken) << " does not exist" <<endl;
				}
				else{ //is not an array 
					errors << "Variable " << (yyvsp[(1) - (4)].identToken) << " is being accessed as the wrong type" <<endl;
				}
			;}
    break;

  case 47:
#line 397 "MINI_L.y"
    {  
				if((yyvsp[(2) - (2)].identToken) == NULL){
					(yyval.identToken) = (yyvsp[(1) - (2)].identToken);
				}
				else{//there is an exprlist so add or sub 
					string a = (yyvsp[(1) - (2)].identToken), b = (yyvsp[(2) - (2)].identToken); 
					if(!check_if_temp(a) )
						a.insert(0, "_");
					if(!check_if_temp(b) )
						b.insert(0,"_");

					stringstream temp;
					temp << "t" << t_vars.size(); 
					t_vars.push_back(temp.str() );
					if(add){
						out << "+ " << temp.str() << ", " << a << ", "<<b <<endl;
					}
					else if(sub){
						out << "- " << temp.str() << ", " << a << ", "<<b <<endl;
					}
					strcpy((yyval.identToken), t_vars[t_vars.size()-1].c_str() );
				}
				add = sub = false; 
			;}
    break;

  case 48:
#line 423 "MINI_L.y"
    {  
				if((yyvsp[(2) - (2)].identToken) == NULL){
					(yyval.identToken) = (yyvsp[(1) - (2)].identToken); 
				}
				else{ //there's a mult div or mod
					string a = (yyvsp[(1) - (2)].identToken), b = (yyvsp[(2) - (2)].identToken); 
					if(!check_if_temp(a) )
						a.insert(0, "_");
					if(!check_if_temp(b) )
						b.insert(0,"_");


					stringstream temp;
					temp << "t" << t_vars.size(); 
					t_vars.push_back(temp.str() );
					if(mult){
						out << "* " << temp.str() << ", " << a << ", "<<b <<endl;
					}
					else if(divide){
						out << "/ " << temp.str() << ", " << a << ", "<<b <<endl;
					}
					else if(mod){
						out << "% " << temp.str() << ", " << a << ", "<<b <<endl;
					}
					strcpy((yyval.identToken), t_vars[t_vars.size()-1].c_str() );
					
				}
				mult = divide = mod = false; 
			;}
    break;

  case 49:
#line 454 "MINI_L.y"
    { (yyval.identToken) = (yyvsp[(1) - (1)].identToken); ;}
    break;

  case 50:
#line 455 "MINI_L.y"
    { (yyval.identToken) = (yyvsp[(1) - (1)].identToken); ;}
    break;

  case 51:
#line 456 "MINI_L.y"
    { (yyval.identToken) = (yyvsp[(2) - (3)].identToken); ;}
    break;

  case 52:
#line 457 "MINI_L.y"
    { ;}
    break;

  case 53:
#line 458 "MINI_L.y"
    { ;}
    break;

  case 54:
#line 459 "MINI_L.y"
    { ;}
    break;

  case 55:
#line 462 "MINI_L.y"
    { (yyval.identToken) = NULL; ;}
    break;

  case 56:
#line 463 "MINI_L.y"
    {  
				(yyval.identToken) = (yyvsp[(3) - (3)].identToken);
				mult = true; 	
			;}
    break;

  case 57:
#line 467 "MINI_L.y"
    { 
				(yyval.identToken) = (yyvsp[(3) - (3)].identToken);
				divide = true; 	
			;}
    break;

  case 58:
#line 471 "MINI_L.y"
    { 
				(yyval.identToken) = (yyvsp[(3) - (3)].identToken);
				mod = true; 
			;}
    break;

  case 59:
#line 477 "MINI_L.y"
    {
				add = true;
				(yyval.identToken) = (yyvsp[(2) - (3)].identToken);
			;}
    break;

  case 60:
#line 481 "MINI_L.y"
    { 
				sub = true; 
				(yyval.identToken) = (yyvsp[(2) - (3)].identToken);
			;}
    break;

  case 61:
#line 485 "MINI_L.y"
    { (yyval.identToken) = NULL; ;}
    break;

  case 62:
#line 488 "MINI_L.y"
    { (yyval.identToken) = "=="; ;}
    break;

  case 63:
#line 489 "MINI_L.y"
    { (yyval.identToken) = "!=";;}
    break;

  case 64:
#line 490 "MINI_L.y"
    { (yyval.identToken) = "<";;}
    break;

  case 65:
#line 491 "MINI_L.y"
    { (yyval.identToken) = ">"; ;}
    break;

  case 66:
#line 492 "MINI_L.y"
    { (yyval.identToken) = "<=";;}
    break;

  case 67:
#line 493 "MINI_L.y"
    { (yyval.identToken) = ">=";;}
    break;


/* Line 1267 of yacc.c.  */
#line 2196 "y.tab.c"
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


#line 495 "MINI_L.y"



int main(int argc, char **argv){
	
   yyparse();
   
   if(!errors.str().empty()){ //if errors were encountered, output them and exit
	   cout<<"Errors encountered: " << errors.str()<<endl;
	   return 0;
   }
   
   

   for(int i=0; i<sym_table.size(); i++){
	   if(sym_table[i].type == 0)
		   cout << ". _"<< sym_table[i].name<<endl;
		else if(sym_table[i].type == 1)
			cout << ".[] _" << sym_table[i].name <<", " << sym_table[i].a_size<<endl;
	}
   
   cout<<endl;
   cout<<out.str() <<endl;
   
   return 0;
}


void yyerror(const char *msg) {
}
bool var_in_table(string val){
	if(val == filename){
		return true;
	}
	for(int i=0; i<sym_table.size(); i++){
		if(sym_table[i].name == val){
			return true; 
		}
	}
	return false; 
}
bool arr_valid_size(int val){
	if(val > 0 ){
		return true;
	}
	errors << "Variable " << val << " has an invalid array size" <<endl;
	return false;
}
 bool ident_is_array(string val){
	 for(int i=0; i<sym_table.size(); i++){
		 if(sym_table[i].name == val){
			 if(sym_table[i].type == 1){
				 return true;
			 }
			 else{
				 return false;
			 }
		 }
	 }
	 return false; 
 }
 int sym_type(string val){
	 for(int i=0; i<sym_table.size(); i++){
		 if(sym_table[i].name == val){
			 return sym_table[i].type; 
		 }
	 }
	 return -1;
 }
 void do_readwrite(string curr){
	if(readst){
		if(sym_type(curr) == 0 ) {//its an int
			out << ".< _" << curr <<endl; 
		}
		else{//its an array read 
			int i = curr.find(" ",0);
			string a, b;
			a = curr.substr(0,i);
			b = curr.substr(i+1);
			
			if(!check_if_temp(b) )
				b.insert(0,"_");

			out << ".[]< _" << a << ", " << b <<endl;
		}
	}
	else if(writest){
		if(sym_type(curr) == 0){
		out << ".> _" << curr <<endl;
		}
		else{//its an array write 
			int i = curr.find(" ",0);
			string a, b;
			a = curr.substr(0,i);
			b = curr.substr(i+1);

			if(!check_if_temp(b) )
				b.insert(0,"_");
			out << ".[]> _" << a << ", " << b <<endl;
		}
	}
 }
 bool check_if_temp(string val){
	 size_t num = val.find_first_of("0123456789", 0); 
	 if((val[0] == 't' && num == 1) || val[0] == '_' || (num == 0) ||  (val[0] == 'p' && num == 1) ){
		 return true;
	 }
	 return false; 
 }

