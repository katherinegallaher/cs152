/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "MINI_L.y"
{
  char* identToken;
  int numberToken;
}
/* Line 1529 of yacc.c.  */
#line 146 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

