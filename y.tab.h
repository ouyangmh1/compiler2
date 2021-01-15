/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INTCONST = 258,
    IDENT = 259,
    CONST = 260,
    INT = 261,
    VOID = 262,
    IF = 263,
    ELSE = 264,
    WHILE = 265,
    BREAK = 266,
    CONTINUE = 267,
    RETURN = 268,
    PRN_L = 269,
    PRN_R = 270,
    ARR_L = 271,
    ARR_R = 272,
    BRA_L = 273,
    BRA_R = 274,
    COMMA = 275,
    EOL = 276,
    OP_1 = 277,
    OP_8 = 278,
    OP_2 = 279,
    OP_3 = 280,
    OP_4 = 281,
    OP_5 = 282,
    OP_6 = 283,
    OP_7 = 284
  };
#endif
/* Tokens.  */
#define INTCONST 258
#define IDENT 259
#define CONST 260
#define INT 261
#define VOID 262
#define IF 263
#define ELSE 264
#define WHILE 265
#define BREAK 266
#define CONTINUE 267
#define RETURN 268
#define PRN_L 269
#define PRN_R 270
#define ARR_L 271
#define ARR_R 272
#define BRA_L 273
#define BRA_R 274
#define COMMA 275
#define EOL 276
#define OP_1 277
#define OP_8 278
#define OP_2 279
#define OP_3 280
#define OP_4 281
#define OP_5 282
#define OP_6 283
#define OP_7 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "SysY_to_Eeyore.y"

	int value;
	char* name;
	struct TreeNode* node;
	/*struct CompUnit* compunit;
	struct Defs* defs;
	struct Def* def;
	struct IdentParam* identparam;
	struct InitVal* initval;
	struct Func* func;
	struct FuncFParam* funcfparam;
	std :: vector <Block*> block;*/

#line 129 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
