/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "SysY_to_Eeyore.y"

#include <stdio.h>
#include <string>
#include <map>
#include <string>
#include "data_structure.h"
#include "compile.h"

extern FILE* yyin;
extern FILE* yyout;
extern int yylineno;

int yylex();
void yyerror(char*);

int tree_node_count;
struct TreeNode* root;
std :: map <std :: string, int> T_map;
std :: map <std :: string, int> p_map;
int T_map_cnt;
int p_map_cnt;
int t_cnt;
int goto_cnt;
int eeyore_cnt;
int func_cnt = 1;

std :: vector <struct TreeNode*> init_main_list;

FILE* checkfile = fopen("checkfile.txt", "w");
FILE* fout = fopen("output.eeyore", "w");

#line 102 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 226 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   180

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  146

#define YYUNDEFTOK  2
#define YYMAXUTOK   284


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    78,    78,    79,    80,    83,    84,    87,    90,    91,
      94,    97,    98,   101,   102,   103,   106,   107,   110,   113,
     114,   117,   118,   121,   122,   125,   126,   127,   130,   131,
     134,   135,   138,   139,   142,   143,   146,   147,   150,   151,
     154,   157,   158,   161,   162,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   178,   181,   184,   187,
     188,   189,   192,   195,   196,   197,   198,   201,   202,   205,
     206,   209,   210,   213,   214,   217,   218,   221,   222,   225,
     226,   229,   230,   233
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTCONST", "IDENT", "CONST", "INT",
  "VOID", "IF", "ELSE", "WHILE", "BREAK", "CONTINUE", "RETURN", "PRN_L",
  "PRN_R", "ARR_L", "ARR_R", "BRA_L", "BRA_R", "COMMA", "EOL", "OP_1",
  "OP_8", "OP_2", "OP_3", "OP_4", "OP_5", "OP_6", "OP_7", "$accept",
  "CompUnit", "Decl", "ConstDecl", "ConstDefs", "ConstDef",
  "ConstIdentParam", "ConstInitVal", "ConstInitVals", "VarDecl", "VarDefs",
  "VarDef", "VarIdentParam", "InitVal", "InitVals", "Type", "FuncDef",
  "FuncFParams", "FuncFParam", "ArrExps", "Block", "BlockItems",
  "BlockItem", "Stmt", "Exp", "Cond", "LVal", "PrimaryExp", "Number",
  "UnaryExp", "UnaryOp", "FuncRParams", "MulExp", "AddExp", "RelExp",
  "EqExp", "LAndExp", "LOrExp", "ConstExp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284
};
# endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -53,   141,   -53,    59,   -53,   -53,   -53,   -53,   -53,    13,
     -53,    55,    49,    47,   -53,   -53,    53,   -53,    33,    -7,
      65,   -53,    -4,    55,   -53,    71,    79,    14,   -53,   131,
      94,   -53,   -53,   131,   106,   -53,   -53,   -53,    78,    71,
      59,   -53,    93,   131,   -53,   -53,   -53,   -53,   -53,   -53,
     131,    87,    88,   110,    68,   -53,   -53,    88,   112,    77,
     -53,   -53,    39,   113,   -53,   -53,   111,   107,   123,   -53,
     131,   131,   -53,   -53,   -53,    81,   -53,   -53,   -53,    98,
     130,   135,   133,   134,   118,   -53,   -53,   -53,    65,   -53,
     -53,   -53,   136,   128,   -53,   -53,   -53,    21,   131,   -53,
     -53,    87,   -53,    94,   -53,   106,   131,   131,   -53,   -53,
     -53,   137,   -53,   131,   107,   -53,   131,   142,   -53,   -53,
     145,    88,   126,   138,   132,   139,   147,   -53,   143,   -53,
     -53,    10,   131,   131,   131,   131,    10,   -53,   154,    88,
     126,   138,   132,   -53,    10,   -53
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     1,     0,    31,    30,     2,     5,     6,     0,
       3,     0,    24,     0,    20,    12,     0,     9,     0,    21,
       0,    18,     0,     0,     7,     0,     0,     0,    35,     0,
       0,    24,    19,     0,     0,     8,    42,    33,    36,     0,
       0,    62,    39,     0,    68,    67,    60,    63,    61,    71,
       0,    73,    83,     0,     0,    22,    25,    56,     0,     0,
      10,    13,     0,     0,    32,    34,     0,    58,     0,    66,
       0,     0,    23,    26,    29,     0,    11,    15,    16,     0,
       0,     0,     0,     0,     0,    40,    47,    43,     0,    48,
      41,    44,     0,    60,    39,    64,    70,     0,     0,    59,
      72,    74,    27,     0,    14,     0,     0,     0,    52,    53,
      54,     0,    46,     0,    37,    65,     0,     0,    28,    17,
       0,    75,    77,    79,    81,    57,     0,    55,     0,    69,
      38,     0,     0,     0,     0,     0,     0,    45,    49,    76,
      78,    80,    82,    51,     0,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   -53,   104,   -53,   -53,   146,   -53,   -51,   -53,   -53,
     -53,   148,   -53,   -48,   -53,     0,   -53,   -53,   140,    76,
     -14,   -53,   -53,     6,   -28,    64,   -52,   -53,   -53,   -43,
     -53,   -53,   101,   -29,    40,    41,    42,   -53,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     6,     7,    16,    17,    22,    60,    79,     8,
      13,    14,    19,    55,    75,    26,    10,    27,    28,    67,
      89,    62,    90,    91,    92,   120,    46,    47,    48,    49,
      50,    97,    51,    57,   122,   123,   124,   125,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      52,     9,    56,    11,    52,    52,    74,    69,    78,    29,
      93,    37,    33,    41,    42,    68,    30,    12,    80,    34,
      81,    82,    83,    84,    43,    64,    56,   100,    36,    39,
      52,    86,    44,    53,    40,    45,   115,    58,    96,     4,
       5,   116,    41,    42,     3,     4,     5,    80,    25,    81,
      82,    83,    84,    43,   119,   118,   111,    36,    85,    15,
      86,    44,    88,    18,    45,     4,     5,    20,    21,    31,
     117,    41,    42,    23,    24,    56,    52,   121,   121,    93,
      41,    42,    43,    38,    93,   128,    54,    73,   129,    36,
      44,    43,    93,    45,    63,    59,    77,    41,    42,    44,
     102,   103,    45,   139,   121,   121,   121,    66,    43,    41,
      42,    70,    54,    71,    41,    42,    44,   104,   105,    45,
      43,    41,    42,    98,    59,    43,    95,    72,    44,    76,
      94,    45,    43,    44,    41,    42,    45,   138,    99,   110,
      44,     2,   143,    45,   106,    43,     3,     4,     5,   107,
     145,   113,   132,    44,   108,   109,    45,   112,   127,   130,
     131,   134,   136,   144,   137,   133,    87,   135,    32,    35,
     114,   126,   101,   140,     0,   141,     0,   142,     0,     0,
      65
};

static const yytype_int16 yycheck[] =
{
      29,     1,    30,     3,    33,    34,    54,    50,    59,    16,
      62,    25,    16,     3,     4,    43,    23,     4,     8,    23,
      10,    11,    12,    13,    14,    39,    54,    70,    18,    15,
      59,    21,    22,    29,    20,    25,    15,    33,    66,     6,
       7,    20,     3,     4,     5,     6,     7,     8,    15,    10,
      11,    12,    13,    14,   105,   103,    84,    18,    19,     4,
      21,    22,    62,    14,    25,     6,     7,    20,    21,     4,
      98,     3,     4,    20,    21,   103,   105,   106,   107,   131,
       3,     4,    14,     4,   136,   113,    18,    19,   116,    18,
      22,    14,   144,    25,    16,    18,    19,     3,     4,    22,
      19,    20,    25,   132,   133,   134,   135,    14,    14,     3,
       4,    24,    18,    25,     3,     4,    22,    19,    20,    25,
      14,     3,     4,    16,    18,    14,    15,    17,    22,    17,
      17,    25,    14,    22,     3,     4,    25,   131,    15,    21,
      22,     0,   136,    25,    14,    14,     5,     6,     7,    14,
     144,    23,    26,    22,    21,    21,    25,    21,    21,    17,
      15,    29,    15,     9,    21,    27,    62,    28,    20,    23,
      94,   107,    71,   133,    -1,   134,    -1,   135,    -1,    -1,
      40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,     0,     5,     6,     7,    32,    33,    39,    45,
      46,    45,     4,    40,    41,     4,    34,    35,    14,    42,
      20,    21,    36,    20,    21,    15,    45,    47,    48,    16,
      23,     4,    41,    16,    23,    35,    18,    50,     4,    15,
      20,     3,     4,    14,    22,    25,    56,    57,    58,    59,
      60,    62,    63,    68,    18,    43,    54,    63,    68,    18,
      37,    68,    51,    16,    50,    48,    14,    49,    54,    59,
      24,    25,    17,    19,    43,    44,    17,    19,    37,    38,
       8,    10,    11,    12,    13,    19,    21,    32,    45,    50,
      52,    53,    54,    56,    17,    15,    54,    61,    16,    15,
      59,    62,    19,    20,    19,    20,    14,    14,    21,    21,
      21,    54,    21,    23,    49,    15,    20,    54,    43,    37,
      55,    63,    64,    65,    66,    67,    55,    21,    54,    54,
      17,    15,    26,    27,    29,    28,    15,    21,    53,    63,
      64,    65,    66,    53,     9,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    31,    31,    32,    32,    33,    34,    34,
      35,    36,    36,    37,    37,    37,    38,    38,    39,    40,
      40,    41,    41,    42,    42,    43,    43,    43,    44,    44,
      45,    45,    46,    46,    47,    47,    48,    48,    49,    49,
      50,    51,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    54,    55,    56,    57,
      57,    57,    58,    59,    59,    59,    59,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    67,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     4,     3,     1,
       4,     4,     0,     1,     3,     2,     1,     3,     3,     3,
       1,     2,     4,     4,     0,     1,     2,     3,     3,     1,
       1,     1,     6,     5,     3,     1,     2,     5,     4,     0,
       3,     2,     0,     1,     1,     4,     2,     1,     1,     5,
       7,     5,     2,     2,     2,     3,     1,     1,     2,     3,
       1,     1,     1,     1,     3,     4,     2,     1,     1,     3,
       1,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2:
#line 78 "SysY_to_Eeyore.y"
                         {root = (yyval.node) = (yyvsp[-1].node); (yyval.node)->childlist.push_back((yyvsp[0].node)); (yyvsp[0].node)->parent=(yyval.node);}
#line 1510 "y.tab.c"
    break;

  case 3:
#line 79 "SysY_to_Eeyore.y"
                           {root = (yyval.node) = (yyvsp[-1].node); (yyval.node)->childlist.push_back((yyvsp[0].node)); (yyvsp[0].node)->parent=(yyval.node);}
#line 1516 "y.tab.c"
    break;

  case 4:
#line 80 "SysY_to_Eeyore.y"
          {root = (yyval.node) = new TreeNode(NODE_COMPUNIT);}
#line 1522 "y.tab.c"
    break;

  case 5:
#line 83 "SysY_to_Eeyore.y"
                  {(yyval.node) = (yyvsp[0].node);}
#line 1528 "y.tab.c"
    break;

  case 6:
#line 84 "SysY_to_Eeyore.y"
                  {(yyval.node) = (yyvsp[0].node);}
#line 1534 "y.tab.c"
    break;

  case 7:
#line 87 "SysY_to_Eeyore.y"
                                     {(yyval.node) = new TreeNode(NODE_CONSTDECL); (yyval.node)->child[0]=(yyvsp[-2].node); (yyval.node)->child[1]=(yyvsp[-1].node); (yyvsp[-2].node)->parent=(yyval.node); (yyvsp[-1].node)->parent=(yyval.node);}
#line 1540 "y.tab.c"
    break;

  case 8:
#line 90 "SysY_to_Eeyore.y"
                                     {(yyval.node) = (yyvsp[-2].node); (yyval.node)->childlist.push_back((yyvsp[0].node)); (yyvsp[0].node)->parent=(yyval.node);}
#line 1546 "y.tab.c"
    break;

  case 9:
#line 91 "SysY_to_Eeyore.y"
                     {(yyval.node) = new TreeNode(NODE_CONSTDEFS); (yyval.node)->childlist.push_back((yyvsp[0].node)); (yyvsp[0].node)->parent=(yyval.node);}
#line 1552 "y.tab.c"
    break;

  case 10:
#line 94 "SysY_to_Eeyore.y"
                                                   {(yyval.node) = new TreeNode(NODE_CONSTDEF); (yyval.node)->name=(yyvsp[-3].name); (yyval.node)->child[0]=(yyvsp[-2].node); (yyval.node)->child[1]=(yyvsp[0].node);}
#line 1558 "y.tab.c"
    break;

  case 11:
#line 97 "SysY_to_Eeyore.y"
                                                       {(yyval.node)=(yyvsp[-3].node); (yyval.node)->childlist.push_back((yyvsp[-1].node));}
#line 1564 "y.tab.c"
    break;

  case 12:
#line 98 "SysY_to_Eeyore.y"
             {(yyval.node) = new TreeNode(NODE_CONSTIDENTPARAM);}
#line 1570 "y.tab.c"
    break;

  case 13:
#line 101 "SysY_to_Eeyore.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1576 "y.tab.c"
    break;

  case 18:
#line 110 "SysY_to_Eeyore.y"
                           {(yyval.node) = new TreeNode(NODE_VARDECL); (yyval.node)->child[0]=(yyvsp[-2].node); (yyval.node)->child[1]=(yyvsp[-1].node); (yyvsp[-2].node)->parent=(yyval.node); (yyvsp[-1].node)->parent=(yyval.node);}
#line 1582 "y.tab.c"
    break;

  case 19:
#line 113 "SysY_to_Eeyore.y"
                               {(yyval.node) = (yyvsp[-2].node); (yyval.node)->childlist.push_back((yyvsp[0].node)); (yyvsp[0].node)->parent=(yyval.node);}
#line 1588 "y.tab.c"
    break;

  case 20:
#line 114 "SysY_to_Eeyore.y"
                 {(yyval.node) = new TreeNode(NODE_VARDEFS); (yyval.node)->childlist.push_back((yyvsp[0].node)); (yyvsp[0].node)->parent=(yyval.node);}
#line 1594 "y.tab.c"
    break;

  case 21:
#line 117 "SysY_to_Eeyore.y"
                             {(yyval.node) = new TreeNode(NODE_VARDEF_1); (yyval.node)->name=(yyvsp[-1].name); (yyval.node)->child[0]=(yyvsp[0].node);}
#line 1600 "y.tab.c"
    break;

  case 22:
#line 118 "SysY_to_Eeyore.y"
                                          {(yyval.node) = new TreeNode(NODE_VARDEF_2); (yyval.node)->name=(yyvsp[-3].name); (yyval.node)->child[0]=(yyvsp[-2].node); (yyval.node)->child[1]=(yyvsp[0].node);}
#line 1606 "y.tab.c"
    break;

  case 23:
#line 121 "SysY_to_Eeyore.y"
                                                   {(yyval.node)=NULL;}
#line 1612 "y.tab.c"
    break;

  case 24:
#line 122 "SysY_to_Eeyore.y"
                {(yyval.node)=NULL;}
#line 1618 "y.tab.c"
    break;

  case 30:
#line 134 "SysY_to_Eeyore.y"
            {(yyval.node) = new TreeNode(NODE_TYPE); (yyval.node)->name="void";}
#line 1624 "y.tab.c"
    break;

  case 31:
#line 135 "SysY_to_Eeyore.y"
           {(yyval.node) = new TreeNode(NODE_TYPE); (yyval.node)->name="int";}
#line 1630 "y.tab.c"
    break;

  case 32:
#line 138 "SysY_to_Eeyore.y"
                                                   {(yyval.node) = new TreeNode(NODE_FUNCDEF_1); (yyval.node)->name=(yyvsp[-4].name); (yyval.node)->child[0]=(yyvsp[-5].node); (yyval.node)->child[1]=(yyvsp[-2].node); (yyval.node)->child[2]=(yyvsp[0].node); (yyval.node)->funcbh=(yyvsp[-2].node)->funcbh=(yyvsp[0].node)->funcbh=func_cnt++;}
#line 1636 "y.tab.c"
    break;

  case 33:
#line 139 "SysY_to_Eeyore.y"
                                       {(yyval.node) = new TreeNode(NODE_FUNCDEF_2); (yyval.node)->name=(yyvsp[-3].name); (yyval.node)->child[0]=(yyvsp[-4].node); (yyval.node)->child[2]=(yyvsp[0].node); (yyval.node)->funcbh=(yyvsp[0].node)->funcbh=func_cnt++;}
#line 1642 "y.tab.c"
    break;

  case 34:
#line 142 "SysY_to_Eeyore.y"
                                           {(yyval.node)=(yyvsp[-2].node); (yyval.node)->childlist.push_back((yyvsp[0].node));}
#line 1648 "y.tab.c"
    break;

  case 35:
#line 143 "SysY_to_Eeyore.y"
                         {(yyval.node) = new TreeNode(NODE_FUNCFPARAMS); (yyval.node)->childlist.push_back((yyvsp[0].node));}
#line 1654 "y.tab.c"
    break;

  case 36:
#line 146 "SysY_to_Eeyore.y"
                        {(yyval.node) = new TreeNode(NODE_FUNCFPARAM_1); (yyval.node)->child[0]=(yyvsp[-1].node); (yyval.node)->name=(yyvsp[0].name);}
#line 1660 "y.tab.c"
    break;

  case 37:
#line 147 "SysY_to_Eeyore.y"
                                            {(yyval.node) = new TreeNode(NODE_FUNCFPARAM_2); (yyval.node)->child[0]=(yyvsp[-4].node); (yyval.node)->child[1]=(yyvsp[0].node); (yyval.node)->name=(yyvsp[-3].name);}
#line 1666 "y.tab.c"
    break;

  case 38:
#line 150 "SysY_to_Eeyore.y"
                                  {(yyval.node)=(yyvsp[-3].node); (yyval.node)->childlist.push_back((yyvsp[-1].node));}
#line 1672 "y.tab.c"
    break;

  case 39:
#line 151 "SysY_to_Eeyore.y"
         {(yyval.node) = new TreeNode(NODE_ARREXPS);}
#line 1678 "y.tab.c"
    break;

  case 40:
#line 154 "SysY_to_Eeyore.y"
                               {(yyval.node) = (yyvsp[-1].node);}
#line 1684 "y.tab.c"
    break;

  case 41:
#line 157 "SysY_to_Eeyore.y"
                                  {(yyval.node) = (yyvsp[-1].node); (yyval.node)->childlist.push_back((yyvsp[0].node)); (yyvsp[0].node)->parent=(yyval.node);}
#line 1690 "y.tab.c"
    break;

  case 42:
#line 158 "SysY_to_Eeyore.y"
             {(yyval.node) = new TreeNode(NODE_BLOCKITEMS);}
#line 1696 "y.tab.c"
    break;

  case 43:
#line 161 "SysY_to_Eeyore.y"
                 {(yyval.node) = (yyvsp[0].node);}
#line 1702 "y.tab.c"
    break;

  case 44:
#line 162 "SysY_to_Eeyore.y"
                 {(yyval.node) = (yyvsp[0].node);}
#line 1708 "y.tab.c"
    break;

  case 45:
#line 165 "SysY_to_Eeyore.y"
                         {(yyval.node) = new TreeNode(NODE_STMT_1); (yyval.node)->child[0]=(yyvsp[-3].node); (yyval.node)->child[1]=(yyvsp[-1].node); (yyvsp[-3].node)->parent=(yyval.node); (yyvsp[-1].node)->parent=(yyval.node);}
#line 1714 "y.tab.c"
    break;

  case 46:
#line 166 "SysY_to_Eeyore.y"
                  {(yyval.node) = new TreeNode(NODE_STMT_2); (yyval.node)->child[0]=(yyvsp[-1].node); (yyvsp[-1].node)->parent=(yyval.node);}
#line 1720 "y.tab.c"
    break;

  case 47:
#line 167 "SysY_to_Eeyore.y"
              {(yyval.node) = new TreeNode(NODE_STMT_3);}
#line 1726 "y.tab.c"
    break;

  case 48:
#line 168 "SysY_to_Eeyore.y"
                {(yyval.node) = new TreeNode(NODE_STMT_4); (yyval.node)->child[0]=(yyvsp[0].node); (yyvsp[0].node)->parent=(yyval.node);}
#line 1732 "y.tab.c"
    break;

  case 49:
#line 169 "SysY_to_Eeyore.y"
                                   {(yyval.node) = new TreeNode(NODE_STMT_5); (yyval.node)->child[0]=(yyvsp[-2].node); (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[-2].node)->parent=(yyval.node); (yyvsp[0].node)->parent=(yyval.node);}
#line 1738 "y.tab.c"
    break;

  case 50:
#line 170 "SysY_to_Eeyore.y"
                                             {(yyval.node) = new TreeNode(NODE_STMT_6); (yyval.node)->child[0]=(yyvsp[-4].node); (yyval.node)->child[1]=(yyvsp[-2].node); (yyval.node)->child[2]=(yyvsp[0].node); (yyvsp[-4].node)->parent=(yyval.node); (yyvsp[-2].node)->parent=(yyval.node); (yyvsp[0].node)->parent=(yyval.node);}
#line 1744 "y.tab.c"
    break;

  case 51:
#line 171 "SysY_to_Eeyore.y"
                                      {(yyval.node) = new TreeNode(NODE_STMT_7); (yyval.node)->child[0]=(yyvsp[-2].node); (yyval.node)->child[1]=(yyvsp[0].node); (yyvsp[-2].node)->parent=(yyval.node); (yyvsp[0].node)->parent=(yyval.node);}
#line 1750 "y.tab.c"
    break;

  case 52:
#line 172 "SysY_to_Eeyore.y"
                    {(yyval.node) = new TreeNode(NODE_STMT_8);}
#line 1756 "y.tab.c"
    break;

  case 53:
#line 173 "SysY_to_Eeyore.y"
                       {(yyval.node) = new TreeNode(NODE_STMT_9);}
#line 1762 "y.tab.c"
    break;

  case 54:
#line 174 "SysY_to_Eeyore.y"
                     {(yyval.node) = new TreeNode(NODE_STMT_10);}
#line 1768 "y.tab.c"
    break;

  case 55:
#line 175 "SysY_to_Eeyore.y"
                         {(yyval.node) = new TreeNode(NODE_STMT_11); (yyval.node)->child[0]=(yyvsp[-1].node);}
#line 1774 "y.tab.c"
    break;

  case 56:
#line 178 "SysY_to_Eeyore.y"
             {(yyval.node) = (yyvsp[0].node);}
#line 1780 "y.tab.c"
    break;

  case 57:
#line 181 "SysY_to_Eeyore.y"
              {(yyval.node) = (yyvsp[0].node);}
#line 1786 "y.tab.c"
    break;

  case 58:
#line 184 "SysY_to_Eeyore.y"
                     {(yyval.node) = new TreeNode(NODE_LVAL); (yyval.node)->name=(yyvsp[-1].name); (yyval.node)->child[0]=(yyvsp[0].node);}
#line 1792 "y.tab.c"
    break;

  case 59:
#line 187 "SysY_to_Eeyore.y"
                             {(yyval.node) = new TreeNode(NODE_PRIMARYEXP_1); (yyval.node)->child[0]=(yyvsp[-1].node);}
#line 1798 "y.tab.c"
    break;

  case 60:
#line 188 "SysY_to_Eeyore.y"
               {(yyval.node)=(yyvsp[0].node);}
#line 1804 "y.tab.c"
    break;

  case 61:
#line 189 "SysY_to_Eeyore.y"
                 {(yyval.node)=(yyvsp[0].node);}
#line 1810 "y.tab.c"
    break;

  case 62:
#line 192 "SysY_to_Eeyore.y"
                  {(yyval.node) = new TreeNode(NODE_NUMBER); (yyval.node)->val=(yyvsp[0].value);}
#line 1816 "y.tab.c"
    break;

  case 63:
#line 195 "SysY_to_Eeyore.y"
                      {(yyval.node) = (yyvsp[0].node);}
#line 1822 "y.tab.c"
    break;

  case 64:
#line 196 "SysY_to_Eeyore.y"
                             {(yyval.node) = new TreeNode(NODE_UNARYEXP_1); (yyval.node)->name=(yyvsp[-2].name);}
#line 1828 "y.tab.c"
    break;

  case 65:
#line 197 "SysY_to_Eeyore.y"
                                         {(yyval.node) = new TreeNode(NODE_UNARYEXP_2); (yyval.node)->name=(yyvsp[-3].name); (yyval.node)->child[0]=(yyvsp[-1].node);}
#line 1834 "y.tab.c"
    break;

  case 66:
#line 198 "SysY_to_Eeyore.y"
                           {(yyval.node) = new TreeNode(NODE_UNARYEXP_3); (yyval.node)->name=(yyvsp[-1].name); (yyval.node)->child[0]=(yyvsp[0].node);}
#line 1840 "y.tab.c"
    break;

  case 67:
#line 201 "SysY_to_Eeyore.y"
               {(yyval.name)=(yyvsp[0].name);}
#line 1846 "y.tab.c"
    break;

  case 68:
#line 202 "SysY_to_Eeyore.y"
               {(yyval.name)=(yyvsp[0].name);}
#line 1852 "y.tab.c"
    break;

  case 69:
#line 205 "SysY_to_Eeyore.y"
                                    {(yyval.node)=(yyvsp[-2].node); (yyval.node)->childlist.push_back((yyvsp[0].node));}
#line 1858 "y.tab.c"
    break;

  case 70:
#line 206 "SysY_to_Eeyore.y"
                 {(yyval.node) = new TreeNode(NODE_FUNCRPARAMS); (yyval.node)->childlist.push_back((yyvsp[0].node));}
#line 1864 "y.tab.c"
    break;

  case 71:
#line 209 "SysY_to_Eeyore.y"
                  {(yyval.node) = (yyvsp[0].node);}
#line 1870 "y.tab.c"
    break;

  case 72:
#line 210 "SysY_to_Eeyore.y"
                              {(yyval.node) = new TreeNode(NODE_MULEXP); (yyval.node)->name=(yyvsp[-1].name); (yyval.node)->child[0]=(yyvsp[-2].node); (yyval.node)->child[1]=(yyvsp[0].node);}
#line 1876 "y.tab.c"
    break;

  case 73:
#line 213 "SysY_to_Eeyore.y"
                {(yyval.node) = (yyvsp[0].node);}
#line 1882 "y.tab.c"
    break;

  case 74:
#line 214 "SysY_to_Eeyore.y"
                            {(yyval.node) = new TreeNode(NODE_ADDEXP); (yyval.node)->name=(yyvsp[-1].name); (yyval.node)->child[0]=(yyvsp[-2].node); (yyval.node)->child[1]=(yyvsp[0].node);}
#line 1888 "y.tab.c"
    break;

  case 75:
#line 217 "SysY_to_Eeyore.y"
                {(yyval.node)=(yyvsp[0].node);}
#line 1894 "y.tab.c"
    break;

  case 76:
#line 218 "SysY_to_Eeyore.y"
                            {(yyval.node) = new TreeNode(NODE_RELEXP); (yyval.node)->name=(yyvsp[-1].name); (yyval.node)->child[0]=(yyvsp[-2].node); (yyval.node)->child[1]=(yyvsp[0].node);}
#line 1900 "y.tab.c"
    break;

  case 77:
#line 221 "SysY_to_Eeyore.y"
               {(yyval.node)=(yyvsp[0].node);}
#line 1906 "y.tab.c"
    break;

  case 78:
#line 222 "SysY_to_Eeyore.y"
                          {(yyval.node) = new TreeNode(NODE_EQEXP); (yyval.node)->name=(yyvsp[-1].name); (yyval.node)->child[0]=(yyvsp[-2].node); (yyval.node)->child[1]=(yyvsp[0].node);}
#line 1912 "y.tab.c"
    break;

  case 79:
#line 225 "SysY_to_Eeyore.y"
                {(yyval.node) = (yyvsp[0].node);}
#line 1918 "y.tab.c"
    break;

  case 80:
#line 226 "SysY_to_Eeyore.y"
                             {(yyval.node) = new TreeNode(NODE_LANDEXP); (yyval.node)->name=(yyvsp[-1].name); (yyval.node)->child[0]=(yyvsp[-2].node); (yyval.node)->child[1]=(yyvsp[0].node);}
#line 1924 "y.tab.c"
    break;

  case 81:
#line 229 "SysY_to_Eeyore.y"
                 {(yyval.node) = (yyvsp[0].node);}
#line 1930 "y.tab.c"
    break;

  case 82:
#line 230 "SysY_to_Eeyore.y"
                             {(yyval.node) = new TreeNode(NODE_LOREXP); (yyval.node)->name=(yyvsp[-1].name); (yyval.node)->child[0]=(yyvsp[-2].node); (yyval.node)->child[1]=(yyvsp[0].node);}
#line 1936 "y.tab.c"
    break;

  case 83:
#line 233 "SysY_to_Eeyore.y"
                  {(yyval.node)=(yyvsp[0].node);}
#line 1942 "y.tab.c"
    break;


#line 1946 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 236 "SysY_to_Eeyore.y"


void yyerror (char* s) {
	fprintf(stderr, ">> ERROR: %s, in line %d\n", s, yylineno);
	exit(0);
}

int main(int argc, char** argv) {
	yyin = fopen(argv[1], "r");
	//fout = fopen(argv[2], "w");
	fout = fopen("output.e", "w");	

	yyparse();
	pushdown(root);
	compile(root);
	write_initfunc();
	fclose(yyin);
	fclose(yyout);
	fclose(fout);
	return 0;
}
