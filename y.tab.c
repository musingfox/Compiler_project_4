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
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"
#include "symtab.h"
#include "semcheck.h"

extern int linenum;
extern FILE	*yyin;
extern char	*yytext;
extern char buf[256];
extern int Opt_Symbol;		/* declared in lex.l */

extern FILE *jfp;

int scope = 0;
char fileName[256];
struct SymTable *symbolTable;
__BOOLEAN paramError;
struct PType *funcReturn;
__BOOLEAN semError = __FALSE;
int inloop = 0;


#line 93 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
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
    LE_OP = 258,
    NE_OP = 259,
    GE_OP = 260,
    EQ_OP = 261,
    AND_OP = 262,
    OR_OP = 263,
    READ = 264,
    BOOLEAN = 265,
    WHILE = 266,
    DO = 267,
    IF = 268,
    ELSE = 269,
    TRUE = 270,
    FALSE = 271,
    FOR = 272,
    INT = 273,
    PRINT = 274,
    BOOL = 275,
    VOID = 276,
    FLOAT = 277,
    DOUBLE = 278,
    STRING = 279,
    CONTINUE = 280,
    BREAK = 281,
    RETURN = 282,
    CONST = 283,
    L_PAREN = 284,
    R_PAREN = 285,
    COMMA = 286,
    SEMICOLON = 287,
    ML_BRACE = 288,
    MR_BRACE = 289,
    L_BRACE = 290,
    R_BRACE = 291,
    ADD_OP = 292,
    SUB_OP = 293,
    MUL_OP = 294,
    DIV_OP = 295,
    MOD_OP = 296,
    ASSIGN_OP = 297,
    LT_OP = 298,
    GT_OP = 299,
    NOT_OP = 300,
    ID = 301,
    INT_CONST = 302,
    FLOAT_CONST = 303,
    SCIENTIFIC = 304,
    STR_CONST = 305
  };
#endif
/* Tokens.  */
#define LE_OP 258
#define NE_OP 259
#define GE_OP 260
#define EQ_OP 261
#define AND_OP 262
#define OR_OP 263
#define READ 264
#define BOOLEAN 265
#define WHILE 266
#define DO 267
#define IF 268
#define ELSE 269
#define TRUE 270
#define FALSE 271
#define FOR 272
#define INT 273
#define PRINT 274
#define BOOL 275
#define VOID 276
#define FLOAT 277
#define DOUBLE 278
#define STRING 279
#define CONTINUE 280
#define BREAK 281
#define RETURN 282
#define CONST 283
#define L_PAREN 284
#define R_PAREN 285
#define COMMA 286
#define SEMICOLON 287
#define ML_BRACE 288
#define MR_BRACE 289
#define L_BRACE 290
#define R_BRACE 291
#define ADD_OP 292
#define SUB_OP 293
#define MUL_OP 294
#define DIV_OP 295
#define MOD_OP 296
#define ASSIGN_OP 297
#define LT_OP 298
#define GT_OP 299
#define NOT_OP 300
#define ID 301
#define INT_CONST 302
#define FLOAT_CONST 303
#define SCIENTIFIC 304
#define STR_CONST 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 28 "parser.y" /* yacc.c:355  */

	int intVal;
	float floatVal;	
	char *lexeme;
	struct idNode_sem *id;
	struct ConstAttr *constVal;
	struct PType *ptype;
	struct param_sem *par;
	struct expr_sem *exprs;
	struct expr_sem_node *exprNode;
	struct constParam *constNode;
	struct varDeclParam* varDeclNode;

#line 247 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 264 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   303

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

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
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    74,    75,    76,    77,    81,    82,    83,
      84,    85,    90,    89,   104,   103,   130,   129,   144,   143,
     171,   175,   186,   190,   203,   210,   216,   221,   224,   240,
     249,   261,   270,   278,   284,   289,   296,   304,   307,   314,
     318,   321,   352,   357,   363,   369,   378,   391,   391,   402,
     403,   404,   405,   408,   409,   410,   411,   412,   413,   414,
     417,   430,   431,   438,   439,   442,   445,   445,   445,   447,
     447,   457,   457,   461,   462,   463,   464,   465,   468,   473,
     480,   487,   492,   495,   496,   497,   498,   499,   502,   518,
     522,   528,   534,   540,   546,   550,   557,   563,   568,   571,
     576,   579,   584,   587,   592,   595,   596,   597,   598,   599,
     600,   603,   608,   609,   612,   613,   616,   626,   629,   630,
     631,   634,   640,   647,   652,   658,   663,   668,   673,   678,
     694,   701,   707,   708,   709,   710,   711,   714,   719,   724,
     729,   734,   739,   744,   748,   753
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LE_OP", "NE_OP", "GE_OP", "EQ_OP",
  "AND_OP", "OR_OP", "READ", "BOOLEAN", "WHILE", "DO", "IF", "ELSE",
  "TRUE", "FALSE", "FOR", "INT", "PRINT", "BOOL", "VOID", "FLOAT",
  "DOUBLE", "STRING", "CONTINUE", "BREAK", "RETURN", "CONST", "L_PAREN",
  "R_PAREN", "COMMA", "SEMICOLON", "ML_BRACE", "MR_BRACE", "L_BRACE",
  "R_BRACE", "ADD_OP", "SUB_OP", "MUL_OP", "DIV_OP", "MOD_OP", "ASSIGN_OP",
  "LT_OP", "GT_OP", "NOT_OP", "ID", "INT_CONST", "FLOAT_CONST",
  "SCIENTIFIC", "STR_CONST", "$accept", "program", "decl_list",
  "decl_and_def_list", "funct_def", "$@1", "$@2", "$@3", "$@4",
  "funct_decl", "parameter_list", "var_decl", "identifier_list",
  "initial_array", "literal_list", "const_decl", "const_list",
  "array_decl", "dim", "compound_statement", "$@5", "var_const_stmt_list",
  "statement", "simple_statement", "conditional_statement",
  "conditional_if", "while_statement", "$@6", "$@7", "$@8",
  "for_statement", "$@9", "initial_expression", "control_expression",
  "increment_expression", "statement_for", "function_invoke_statement",
  "jump_statement", "variable_reference", "dimension",
  "logical_expression", "logical_term", "logical_factor",
  "relation_expression", "relation_operator", "arithmetic_expression",
  "add_op", "term", "mul_op", "factor", "logical_expression_list",
  "scalar_type", "literal_const", YY_NULLPTR
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

#define YYPACT_NINF -192

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-192)))

#define YYTABLE_NINF -103

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -192,    14,   275,  -192,  -192,  -192,   -15,  -192,  -192,  -192,
     152,  -192,  -192,  -192,  -192,     7,    22,    12,   275,    17,
      95,    29,   208,    32,   104,  -192,  -192,  -192,  -192,   264,
      33,   231,    45,    40,  -192,    58,    77,   108,    60,    47,
      78,  -192,    97,   126,    98,  -192,  -192,   231,    69,   231,
     119,  -192,  -192,  -192,  -192,   131,   153,   166,  -192,   234,
      38,    49,  -192,  -192,   124,   -21,   141,   231,  -192,  -192,
    -192,   160,   152,   168,  -192,    74,  -192,   161,  -192,  -192,
     182,  -192,     5,   231,   198,  -192,  -192,  -192,   131,  -192,
      54,    96,  -192,   231,   231,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,    96,    96,  -192,  -192,  -192,    96,   199,
     231,    58,    -6,   153,  -192,   200,  -192,  -192,   188,    47,
    -192,  -192,  -192,  -192,     9,   139,  -192,   153,   128,  -192,
      23,   166,  -192,    38,    49,  -192,  -192,   153,  -192,   231,
    -192,  -192,  -192,   168,  -192,  -192,  -192,  -192,  -192,   136,
    -192,   231,  -192,   153,   193,  -192,   153,   197,   211,   215,
     219,   231,   217,   218,   231,  -192,   222,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,   246,  -192,  -192,  -192,    31,   213,
    -192,   158,   231,   231,   231,     2,  -192,  -192,    15,   207,
    -192,   231,    72,  -192,   153,   232,   153,   164,  -192,    86,
     153,  -192,  -192,   229,   169,   252,    16,   237,  -192,   231,
     231,   231,  -192,   236,   242,  -192,  -192,   258,  -192,   153,
     176,  -192,   153,   153,  -192,   231,  -192,  -192,   231,   231,
      25,  -192,  -192,  -192,   153,   194,  -192,   153,   241,  -192,
     231,  -192,  -192,  -192,   153,  -192
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,     1,   132,   135,     0,   136,   133,   134,
       0,    11,     5,     3,     4,     0,     0,     0,     2,    36,
       0,    34,     0,     0,     0,    10,     9,     7,     8,     0,
       0,     0,    44,     0,    28,     0,    16,     0,     0,     0,
       0,    41,    12,     0,     0,   144,   145,     0,     0,     0,
      94,   137,   139,   141,   143,   121,    35,    98,   100,   112,
     104,   113,   117,   129,     0,    29,    32,    40,    33,    22,
      47,    18,     0,    27,    26,     0,    43,     0,    20,    47,
      14,    46,     0,     0,    94,   138,   140,   142,   122,   101,
       0,     0,    95,     0,     0,   106,   110,   108,   107,   114,
     115,   105,   109,     0,     0,   118,   119,   120,     0,     0,
       0,     0,     0,    39,    17,     0,    23,    47,     0,     0,
      13,    21,    47,   123,     0,     0,   127,   131,     0,   112,
       0,    97,    99,   103,   111,   116,    45,    30,    31,     0,
      37,    52,    19,    24,    25,    42,    15,   124,   128,     0,
     125,     0,    96,    38,    47,   126,   130,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    94,    50,    51,    53,
      49,    54,    55,    56,     0,    57,    58,    59,     0,     0,
      94,     0,     0,     0,    77,     0,    91,    92,     0,     0,
      47,     0,    36,    62,    66,     0,    65,     0,    76,   121,
      75,    61,    93,     0,     0,     0,     0,     0,    47,     0,
      82,     0,    90,     0,     0,    60,    67,    63,    73,    74,
       0,    81,    80,    88,    89,     0,    47,    47,     0,    87,
       0,    68,    64,    78,    79,     0,    86,    85,     0,    71,
       0,    70,    47,    83,    84,    72
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -192,  -192,  -192,  -192,   256,  -192,  -192,  -192,  -192,   257,
     254,   -14,  -192,   174,  -192,   -13,  -192,   -27,  -192,   -77,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -191,  -192,  -192,   -47,  -192,
     -31,   196,   -40,   -71,  -192,   -35,  -192,   186,  -192,   183,
    -117,    -7,   -32
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    18,    11,    79,   122,    70,   117,    12,
      37,    13,    20,    68,   112,    14,    24,    21,    32,   114,
     115,   154,   170,   171,   172,   195,   173,   207,   226,   174,
     175,   242,   197,   220,   235,   198,   176,   177,    55,    92,
     127,    57,    58,    59,   103,    60,   104,    61,   108,    62,
     128,    15,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    88,   120,    17,    27,    28,    66,    76,   149,    89,
      93,    74,    30,    93,     3,    38,    82,    93,   218,   221,
     129,   110,    38,    93,    93,   139,    95,    96,    97,    98,
     140,    16,   129,    93,   201,   123,   113,   233,   236,   147,
     142,    95,    96,    97,    98,   146,    29,   202,   215,   243,
      30,    22,   124,    19,   132,   238,   130,   152,    23,    31,
      99,   100,    45,    46,    91,   118,   101,   102,   133,    45,
      46,    35,   204,   191,    39,    99,   100,   169,    64,   137,
      44,   101,   102,    47,   126,    75,    65,   145,   105,   106,
     107,   144,    48,    67,    51,    52,    53,    54,    83,    49,
      50,    51,    52,    53,    54,    30,    73,   178,   153,    69,
     181,    45,    46,   205,    31,    84,    85,    86,    87,    91,
     156,    85,    86,    87,    77,    47,    33,    34,   211,    78,
     185,   217,    81,   188,    48,    40,    41,   199,    71,    72,
     167,   168,    50,    51,    52,    53,    54,   179,    90,   231,
     232,   194,   196,   200,    45,    46,    80,    72,   150,   151,
     206,    93,   199,   199,    91,   245,   155,   151,    47,   148,
       4,   109,     5,    94,     7,     8,     9,    48,   219,   222,
     223,   199,   199,   111,    49,    50,    51,    52,    53,    54,
     193,    91,   116,   199,   230,   209,   210,   234,   237,   213,
     151,    30,   157,   119,   158,   -69,   159,   228,   229,   244,
     160,     4,   161,     5,   121,     7,     8,     9,   162,   163,
     164,    10,    45,    46,   239,   240,     4,   125,     5,   165,
       7,     8,     9,   136,   143,   141,    47,   203,    36,   166,
     182,  -102,  -102,   180,   183,    48,    45,    46,   184,   186,
     187,   189,    49,    50,    51,    52,    53,    54,   190,   192,
      47,   212,   208,   214,  -102,  -102,  -102,   216,   224,    48,
    -102,   225,   227,   241,    25,    26,    49,    50,    51,    52,
      53,    54,     4,    43,     5,   138,     7,     8,     9,   131,
     134,   135,     0,     4,    42,     5,     6,     7,     8,     9,
       0,     0,     0,    10
};

static const yytype_int16 yycheck[] =
{
      31,    48,    79,    10,    18,    18,    33,    39,   125,    49,
       8,    38,    33,     8,     0,    22,    47,     8,   209,   210,
      91,    42,    29,     8,     8,    31,     3,     4,     5,     6,
      36,    46,   103,     8,    32,    30,    67,   228,   229,    30,
     117,     3,     4,     5,     6,   122,    29,    32,    32,   240,
      33,    29,    83,    46,    94,    30,    91,    34,    46,    42,
      37,    38,    15,    16,    33,    72,    43,    44,   103,    15,
      16,    42,   189,    42,    42,    37,    38,   154,    33,   110,
      47,    43,    44,    29,    30,    38,    46,   119,    39,    40,
      41,   118,    38,    35,    47,    48,    49,    50,    29,    45,
      46,    47,    48,    49,    50,    33,    46,   154,   139,    32,
     157,    15,    16,   190,    42,    46,    47,    48,    49,    33,
     151,    47,    48,    49,    46,    29,    31,    32,    42,    32,
     161,   208,    34,   164,    38,    31,    32,   184,    30,    31,
     154,   154,    46,    47,    48,    49,    50,   154,    29,   226,
     227,   182,   183,   184,    15,    16,    30,    31,    30,    31,
     191,     8,   209,   210,    33,   242,    30,    31,    29,    30,
      18,    47,    20,     7,    22,    23,    24,    38,   209,   210,
     211,   228,   229,    42,    45,    46,    47,    48,    49,    50,
      32,    33,    32,   240,   225,    31,    32,   228,   229,    30,
      31,    33,     9,    42,    11,    12,    13,    31,    32,   240,
      17,    18,    19,    20,    32,    22,    23,    24,    25,    26,
      27,    28,    15,    16,    30,    31,    18,    29,    20,    36,
      22,    23,    24,    34,    46,    35,    29,    30,    30,    46,
      29,     7,     8,    46,    29,    38,    15,    16,    29,    32,
      32,    29,    45,    46,    47,    48,    49,    50,    12,    46,
      29,    32,    30,    11,    30,    31,    32,    30,    32,    38,
      36,    29,    14,    32,    18,    18,    45,    46,    47,    48,
      49,    50,    18,    29,    20,   111,    22,    23,    24,    93,
     104,   108,    -1,    18,    30,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    53,     0,    18,    20,    21,    22,    23,    24,
      28,    55,    60,    62,    66,   102,    46,   102,    54,    46,
      63,    68,    29,    46,    67,    55,    60,    62,    66,    29,
      33,    42,    69,    31,    32,    42,    30,    61,   102,    42,
      31,    32,    30,    61,    47,    15,    16,    29,    38,    45,
      46,    47,    48,    49,    50,    89,    91,    92,    93,    94,
      96,    98,   100,   103,    33,    46,    68,    35,    64,    32,
      58,    30,    31,    46,    68,    38,   103,    46,    32,    56,
      30,    34,    91,    29,    46,    47,    48,    49,    89,    93,
      29,    33,    90,     8,     7,     3,     4,     5,     6,    37,
      38,    43,    44,    95,    97,    39,    40,    41,    99,    47,
      42,    42,    65,    91,    70,    71,    32,    59,   102,    42,
      70,    32,    57,    30,    91,    29,    30,    91,   101,    94,
      96,    92,    93,    96,    98,   100,    34,    91,    64,    31,
      36,    35,    70,    46,    68,   103,    70,    30,    30,   101,
      30,    31,    34,    91,    72,    30,    91,     9,    11,    13,
      17,    19,    25,    26,    27,    36,    46,    62,    66,    70,
      73,    74,    75,    77,    80,    81,    87,    88,    89,   102,
      46,    89,    29,    29,    29,    91,    32,    32,    91,    29,
      12,    42,    46,    32,    91,    76,    91,    83,    86,    89,
      91,    32,    32,    30,   101,    70,    91,    78,    30,    31,
      32,    42,    32,    30,    11,    32,    30,    70,    86,    91,
      84,    86,    91,    91,    32,    29,    79,    14,    31,    32,
      91,    70,    70,    86,    91,    85,    86,    91,    30,    30,
      31,    32,    82,    86,    91,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    53,    53,    54,    54,    54,
      54,    54,    56,    55,    57,    55,    58,    55,    59,    55,
      60,    60,    60,    60,    61,    61,    61,    61,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    64,    65,    65,
      65,    66,    67,    67,    68,    69,    69,    71,    70,    72,
      72,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      74,    74,    74,    75,    75,    76,    78,    79,    77,    80,
      77,    82,    81,    83,    83,    83,    83,    83,    84,    84,
      84,    84,    84,    85,    85,    85,    85,    85,    86,    87,
      87,    88,    88,    88,    89,    89,    90,    91,    91,    92,
      92,    93,    93,    94,    94,    95,    95,    95,    95,    95,
      95,    96,    96,    96,    97,    97,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     101,   101,   102,   102,   102,   102,   102,   103,   103,   103,
     103,   103,   103,   103,   103,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     2,     0,     2,     2,     2,
       2,     0,     0,     6,     0,     7,     0,     6,     0,     7,
       5,     6,     5,     6,     4,     4,     2,     2,     3,     3,
       5,     5,     3,     3,     1,     3,     1,     3,     3,     1,
       0,     4,     5,     3,     2,     4,     3,     0,     4,     2,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     3,     5,     7,     1,     0,     0,     7,     0,
       8,     0,    10,     3,     3,     1,     1,     0,     3,     3,
       1,     1,     0,     3,     3,     1,     1,     0,     3,     5,
       4,     2,     2,     3,     1,     2,     3,     3,     1,     3,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     2,     3,     4,     4,     5,     3,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     2,     1,     1,     1
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
        case 2:
#line 67 "parser.y" /* yacc.c:1646  */
    {
					if(Opt_Symbol == 1)
					printSymTable( symbolTable, scope );
					fprintf(jfp, "test");	
				}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 90 "parser.y" /* yacc.c:1646  */
    {
				funcReturn = (yyvsp[-3].ptype); 
				struct SymNode *node;
				node = findFuncDeclaration( symbolTable, (yyvsp[-2].lexeme) );
				
				if( node != 0 ){
					verifyFuncDeclaration( symbolTable, 0, (yyvsp[-3].ptype), node );
				}
				else{
					insertFuncIntoSymTable( symbolTable, (yyvsp[-2].lexeme), 0, (yyvsp[-3].ptype), scope, __TRUE );
				}
			}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 102 "parser.y" /* yacc.c:1646  */
    { funcReturn = 0; }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 104 "parser.y" /* yacc.c:1646  */
    {				
				funcReturn = (yyvsp[-4].ptype);
				
				paramError = checkFuncParam( (yyvsp[-1].par) );
				if( paramError == __TRUE ){
					fprintf( stdout, "########## Error at Line#%d: param(s) with several fault!! ##########\n", linenum );
					semError = __TRUE;
				}
				// check and insert function into symbol table
				else{
					struct SymNode *node;
					node = findFuncDeclaration( symbolTable, (yyvsp[-3].lexeme) );

					if( node != 0 ){
						if(verifyFuncDeclaration( symbolTable, (yyvsp[-1].par), (yyvsp[-4].ptype), node ) == __TRUE){	
							insertParamIntoSymTable( symbolTable, (yyvsp[-1].par), scope+1 );
						}				
					}
					else{
						insertParamIntoSymTable( symbolTable, (yyvsp[-1].par), scope+1 );				
						insertFuncIntoSymTable( symbolTable, (yyvsp[-3].lexeme), (yyvsp[-1].par), (yyvsp[-4].ptype), scope, __TRUE );
					}
				}
			}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 128 "parser.y" /* yacc.c:1646  */
    { funcReturn = 0; }
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 130 "parser.y" /* yacc.c:1646  */
    {
				funcReturn = createPType(VOID_t); 
				struct SymNode *node;
				node = findFuncDeclaration( symbolTable, (yyvsp[-2].lexeme) );

				if( node != 0 ){
					verifyFuncDeclaration( symbolTable, 0, createPType( VOID_t ), node );					
				}
				else{
					insertFuncIntoSymTable( symbolTable, (yyvsp[-2].lexeme), 0, createPType( VOID_t ), scope, __TRUE );	
				}
			}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 142 "parser.y" /* yacc.c:1646  */
    { funcReturn = 0; }
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 144 "parser.y" /* yacc.c:1646  */
    {									
				funcReturn = createPType(VOID_t);
				
				paramError = checkFuncParam( (yyvsp[-1].par) );
				if( paramError == __TRUE ){
					fprintf( stdout, "########## Error at Line#%d: param(s) with several fault!! ##########\n", linenum );
					semError = __TRUE;
				}
				// check and insert function into symbol table
				else{
					struct SymNode *node;
					node = findFuncDeclaration( symbolTable, (yyvsp[-3].lexeme) );

					if( node != 0 ){
						if(verifyFuncDeclaration( symbolTable, (yyvsp[-1].par), createPType( VOID_t ), node ) == __TRUE){	
							insertParamIntoSymTable( symbolTable, (yyvsp[-1].par), scope+1 );				
						}
					}
					else{
						insertParamIntoSymTable( symbolTable, (yyvsp[-1].par), scope+1 );				
						insertFuncIntoSymTable( symbolTable, (yyvsp[-3].lexeme), (yyvsp[-1].par), createPType( VOID_t ), scope, __TRUE );
					}
				}
			}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 168 "parser.y" /* yacc.c:1646  */
    { funcReturn = 0; }
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 172 "parser.y" /* yacc.c:1646  */
    {
				insertFuncIntoSymTable( symbolTable, (yyvsp[-3].lexeme), 0, (yyvsp[-4].ptype), scope, __FALSE );	
			}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 176 "parser.y" /* yacc.c:1646  */
    {
				paramError = checkFuncParam( (yyvsp[-2].par) );
				if( paramError == __TRUE ){
					fprintf( stdout, "########## Error at Line#%d: param(s) with several fault!! ##########\n", linenum );
					semError = __TRUE;
				}
				else {
					insertFuncIntoSymTable( symbolTable, (yyvsp[-4].lexeme), (yyvsp[-2].par), (yyvsp[-5].ptype), scope, __FALSE );
				}
			}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 187 "parser.y" /* yacc.c:1646  */
    {				
				insertFuncIntoSymTable( symbolTable, (yyvsp[-3].lexeme), 0, createPType( VOID_t ), scope, __FALSE );
			}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 191 "parser.y" /* yacc.c:1646  */
    {
				paramError = checkFuncParam( (yyvsp[-2].par) );
				if( paramError == __TRUE ){
					fprintf( stdout, "########## Error at Line#%d: param(s) with several fault!! ##########\n", linenum );
					semError = __TRUE;	
				}
				else {
					insertFuncIntoSymTable( symbolTable, (yyvsp[-4].lexeme), (yyvsp[-2].par), createPType( VOID_t ), scope, __FALSE );
				}
			}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 204 "parser.y" /* yacc.c:1646  */
    {
				struct param_sem *ptr;
				ptr = createParam( createIdList( (yyvsp[0].lexeme) ), (yyvsp[-1].ptype) );
				param_sem_addParam( (yyvsp[-3].par), ptr );
				(yyval.par) = (yyvsp[-3].par);
			   }
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 211 "parser.y" /* yacc.c:1646  */
    {
				(yyvsp[0].par)->pType->type= (yyvsp[-1].ptype)->type;
				param_sem_addParam( (yyvsp[-3].par), (yyvsp[0].par) );
				(yyval.par) = (yyvsp[-3].par);
			   }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 217 "parser.y" /* yacc.c:1646  */
    { 
				(yyvsp[0].par)->pType->type = (yyvsp[-1].ptype)->type;  
				(yyval.par) = (yyvsp[0].par);
			   }
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 221 "parser.y" /* yacc.c:1646  */
    { (yyval.par) = createParam( createIdList( (yyvsp[0].lexeme) ), (yyvsp[-1].ptype) ); }
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 225 "parser.y" /* yacc.c:1646  */
    {
				struct varDeclParam *ptr;
				struct SymNode *newNode;
				for( ptr=(yyvsp[-1].varDeclNode) ; ptr!=0 ; ptr=(ptr->next) ) {						
					if( verifyRedeclaration( symbolTable, ptr->para->idlist->value, scope ) == __FALSE ) { }
					else {
						if( verifyVarInitValue( (yyvsp[-2].ptype), ptr, symbolTable, scope ) ==  __TRUE ){	
							newNode = createVarNode( ptr->para->idlist->value, scope, ptr->para->pType );
							insertTab( symbolTable, newNode );											
						}
					}
				}
			}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 241 "parser.y" /* yacc.c:1646  */
    {					
					struct param_sem *ptr;	
					struct varDeclParam *vptr;				
					ptr = createParam( createIdList( (yyvsp[0].lexeme) ), createPType( VOID_t ) );
					vptr = createVarDeclParam( ptr, 0 );	
					addVarDeclParam( (yyvsp[-2].varDeclNode), vptr );
					(yyval.varDeclNode) = (yyvsp[-2].varDeclNode); 					
				}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 250 "parser.y" /* yacc.c:1646  */
    {
					struct param_sem *ptr;	
					struct varDeclParam *vptr;				
					ptr = createParam( createIdList( (yyvsp[-2].lexeme) ), createPType( VOID_t ) );
					vptr = createVarDeclParam( ptr, (yyvsp[0].exprs) );
					vptr->isArray = __TRUE;
					vptr->isInit = __TRUE;	
					addVarDeclParam( (yyvsp[-4].varDeclNode), vptr );	
					(yyval.varDeclNode) = (yyvsp[-4].varDeclNode);
					
				}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 262 "parser.y" /* yacc.c:1646  */
    {
					struct varDeclParam *ptr;
					ptr = createVarDeclParam( (yyvsp[-2].par), (yyvsp[0].exprs) );
					ptr->isArray = __TRUE;
					ptr->isInit = __TRUE;
					addVarDeclParam( (yyvsp[-4].varDeclNode), ptr );
					(yyval.varDeclNode) = (yyvsp[-4].varDeclNode);	
				}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 271 "parser.y" /* yacc.c:1646  */
    {
					struct varDeclParam *ptr;
					ptr = createVarDeclParam( (yyvsp[0].par), 0 );
					ptr->isArray = __TRUE;
					addVarDeclParam( (yyvsp[-2].varDeclNode), ptr );
					(yyval.varDeclNode) = (yyvsp[-2].varDeclNode);
				}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 279 "parser.y" /* yacc.c:1646  */
    {	
					(yyval.varDeclNode) = createVarDeclParam( (yyvsp[-2].par) , (yyvsp[0].exprs) );
					(yyval.varDeclNode)->isArray = __TRUE;
					(yyval.varDeclNode)->isInit = __TRUE;	
				}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 285 "parser.y" /* yacc.c:1646  */
    { 
					(yyval.varDeclNode) = createVarDeclParam( (yyvsp[0].par) , 0 ); 
					(yyval.varDeclNode)->isArray = __TRUE;
				}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 290 "parser.y" /* yacc.c:1646  */
    {
					struct param_sem *ptr;					
					ptr = createParam( createIdList( (yyvsp[-2].lexeme) ), createPType( VOID_t ) );
					(yyval.varDeclNode) = createVarDeclParam( ptr, (yyvsp[0].exprs) );		
					(yyval.varDeclNode)->isInit = __TRUE;
				}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 297 "parser.y" /* yacc.c:1646  */
    {
					struct param_sem *ptr;					
					ptr = createParam( createIdList( (yyvsp[0].lexeme) ), createPType( VOID_t ) );
					(yyval.varDeclNode) = createVarDeclParam( ptr, 0 );				
				}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.exprs) = (yyvsp[-1].exprs); }
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 308 "parser.y" /* yacc.c:1646  */
    {
					struct expr_sem *ptr;
					for( ptr=(yyvsp[-2].exprs); (ptr->next)!=0; ptr=(ptr->next) );				
					ptr->next = (yyvsp[0].exprs);
					(yyval.exprs) = (yyvsp[-2].exprs);
				}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 315 "parser.y" /* yacc.c:1646  */
    {
					(yyval.exprs) = (yyvsp[0].exprs);
				}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 322 "parser.y" /* yacc.c:1646  */
    {
				struct SymNode *newNode;				
				struct constParam *ptr;
				for( ptr=(yyvsp[-1].constNode); ptr!=0; ptr=(ptr->next) ){
					if( verifyRedeclaration( symbolTable, ptr->name, scope ) == __TRUE ){//no redeclare
						if( ptr->value->category != (yyvsp[-2].ptype)->type ){//type different
							if( !(((yyvsp[-2].ptype)->type==FLOAT_t || (yyvsp[-2].ptype)->type == DOUBLE_t ) && ptr->value->category==INTEGER_t) ) {
								if(!((yyvsp[-2].ptype)->type==DOUBLE_t && ptr->value->category==FLOAT_t)){	
									fprintf( stdout, "########## Error at Line#%d: const type different!! ##########\n", linenum );
									semError = __TRUE;	
								}
								else{
									newNode = createConstNode( ptr->name, scope, (yyvsp[-2].ptype), ptr->value );
									insertTab( symbolTable, newNode );
								}
							}							
							else{
								newNode = createConstNode( ptr->name, scope, (yyvsp[-2].ptype), ptr->value );
								insertTab( symbolTable, newNode );
							}
						}
						else{
							newNode = createConstNode( ptr->name, scope, (yyvsp[-2].ptype), ptr->value );
							insertTab( symbolTable, newNode );
						}
					}
				}
			}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 353 "parser.y" /* yacc.c:1646  */
    {				
				addConstParam( (yyvsp[-4].constNode), createConstParam( (yyvsp[0].constVal), (yyvsp[-2].lexeme) ) );
				(yyval.constNode) = (yyvsp[-4].constNode);
			}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 358 "parser.y" /* yacc.c:1646  */
    {
				(yyval.constNode) = createConstParam( (yyvsp[0].constVal), (yyvsp[-2].lexeme) );	
			}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 364 "parser.y" /* yacc.c:1646  */
    {
				(yyval.par) = createParam( createIdList( (yyvsp[-1].lexeme) ), (yyvsp[0].ptype) );
			}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 370 "parser.y" /* yacc.c:1646  */
    {
			if( (yyvsp[-1].intVal) == 0 ){
				fprintf( stdout, "########## Error at Line#%d: array size error!! ##########\n", linenum );
				semError = __TRUE;
			}
			else
				increaseArrayDim( (yyvsp[-3].ptype), 0, (yyvsp[-1].intVal) );			
		}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 379 "parser.y" /* yacc.c:1646  */
    {
			if( (yyvsp[-1].intVal) == 0 ){
				fprintf( stdout, "########## Error at Line#%d: array size error!! ##########\n", linenum );
				semError = __TRUE;
			}			
			else{		
				(yyval.ptype) = createPType( VOID_t ); 			
				increaseArrayDim( (yyval.ptype), 0, (yyvsp[-1].intVal) );
			}		
		}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 391 "parser.y" /* yacc.c:1646  */
    {scope++;}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 392 "parser.y" /* yacc.c:1646  */
    { 
						// print contents of current scope
						if( Opt_Symbol == 1 )
							printSymTable( symbolTable, scope );
							
						deleteScope( symbolTable, scope );	// leave this scope, delete...
						scope--; 
					}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 418 "parser.y" /* yacc.c:1646  */
    {
						// check if LHS exists
						__BOOLEAN flagLHS = verifyExistence( symbolTable, (yyvsp[-3].exprs), scope, __TRUE );
						// id RHS is not dereferenced, check and deference
						__BOOLEAN flagRHS = __TRUE;
						if( (yyvsp[-1].exprs)->isDeref == __FALSE ) {
							flagRHS = verifyExistence( symbolTable, (yyvsp[-1].exprs), scope, __FALSE );
						}
						// if both LHS and RHS are exists, verify their type
						if( flagLHS==__TRUE && flagRHS==__TRUE )
							verifyAssignmentTypeMatch( (yyvsp[-3].exprs), (yyvsp[-1].exprs) );
					}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 430 "parser.y" /* yacc.c:1646  */
    { verifyScalarExpr( (yyvsp[-1].exprs), "print" ); }
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 432 "parser.y" /* yacc.c:1646  */
    { 
						if( verifyExistence( symbolTable, (yyvsp[-1].exprs), scope, __TRUE ) == __TRUE )						
							verifyScalarExpr( (yyvsp[-1].exprs), "read" ); 
					}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 442 "parser.y" /* yacc.c:1646  */
    { verifyBooleanExpr( (yyvsp[0].exprs), "if" ); }
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 445 "parser.y" /* yacc.c:1646  */
    { verifyBooleanExpr( (yyvsp[0].exprs), "while" ); }
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 445 "parser.y" /* yacc.c:1646  */
    { inloop++; }
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 446 "parser.y" /* yacc.c:1646  */
    { inloop--; }
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 447 "parser.y" /* yacc.c:1646  */
    { inloop++; }
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 448 "parser.y" /* yacc.c:1646  */
    { 
						 verifyBooleanExpr( (yyvsp[-2].exprs), "while" );
						 inloop--; 
						
					}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 457 "parser.y" /* yacc.c:1646  */
    { inloop++; }
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 458 "parser.y" /* yacc.c:1646  */
    { inloop--; }
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 469 "parser.y" /* yacc.c:1646  */
    {
						fprintf( stdout, "########## Error at Line#%d: control_expression is not boolean type ##########\n", linenum );
						semError = __TRUE;	
				   }
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 474 "parser.y" /* yacc.c:1646  */
    {
						if( (yyvsp[0].exprs)->pType->type != BOOLEAN_t ){
							fprintf( stdout, "########## Error at Line#%d: control_expression is not boolean type ##########\n", linenum );
							semError = __TRUE;	
						}
				   }
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 481 "parser.y" /* yacc.c:1646  */
    { 
						if( (yyvsp[0].exprs)->pType->type != BOOLEAN_t ){
							fprintf( stdout, "########## Error at Line#%d: control_expression is not boolean type ##########\n", linenum );
							semError = __TRUE;	
						}
					}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 488 "parser.y" /* yacc.c:1646  */
    {
						fprintf( stdout, "########## Error at Line#%d: control_expression is not boolean type ##########\n", linenum );
						semError = __TRUE;	
				   }
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 503 "parser.y" /* yacc.c:1646  */
    {
						// check if LHS exists
						__BOOLEAN flagLHS = verifyExistence( symbolTable, (yyvsp[-2].exprs), scope, __TRUE );
						// id RHS is not dereferenced, check and deference
						__BOOLEAN flagRHS = __TRUE;
						if( (yyvsp[0].exprs)->isDeref == __FALSE ) {
							flagRHS = verifyExistence( symbolTable, (yyvsp[0].exprs), scope, __FALSE );
						}
						// if both LHS and RHS are exists, verify their type
						if( flagLHS==__TRUE && flagRHS==__TRUE )
							verifyAssignmentTypeMatch( (yyvsp[-2].exprs), (yyvsp[0].exprs) );
					}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 519 "parser.y" /* yacc.c:1646  */
    {
								verifyFuncInvoke( (yyvsp[-4].lexeme), (yyvsp[-2].exprs), symbolTable, scope );
							}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 523 "parser.y" /* yacc.c:1646  */
    {
								verifyFuncInvoke( (yyvsp[-3].lexeme), 0, symbolTable, scope );
							}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 529 "parser.y" /* yacc.c:1646  */
    {
					if( inloop <= 0){
						fprintf( stdout, "########## Error at Line#%d: continue can't appear outside of loop ##########\n", linenum ); semError = __TRUE;
					}
				}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 535 "parser.y" /* yacc.c:1646  */
    {
					if( inloop <= 0){
						fprintf( stdout, "########## Error at Line#%d: break can't appear outside of loop ##########\n", linenum ); semError = __TRUE;
					}
				}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 541 "parser.y" /* yacc.c:1646  */
    {
					verifyReturnStatement( (yyvsp[-1].exprs), funcReturn );
				}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 547 "parser.y" /* yacc.c:1646  */
    {
						(yyval.exprs) = createExprSem( (yyvsp[0].lexeme) );
					}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 551 "parser.y" /* yacc.c:1646  */
    {	
						increaseDim( (yyvsp[-1].exprs), (yyvsp[0].intVal) );
						(yyval.exprs) = (yyvsp[-1].exprs);
					}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 558 "parser.y" /* yacc.c:1646  */
    {
				(yyval.intVal) = verifyArrayIndex( (yyvsp[-1].exprs) );
			}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 564 "parser.y" /* yacc.c:1646  */
    {
						verifyAndOrOp( (yyvsp[-2].exprs), OR_t, (yyvsp[0].exprs) );
						(yyval.exprs) = (yyvsp[-2].exprs);
					}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 568 "parser.y" /* yacc.c:1646  */
    { (yyval.exprs) = (yyvsp[0].exprs); }
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 572 "parser.y" /* yacc.c:1646  */
    {
					verifyAndOrOp( (yyvsp[-2].exprs), AND_t, (yyvsp[0].exprs) );
					(yyval.exprs) = (yyvsp[-2].exprs);
				}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 576 "parser.y" /* yacc.c:1646  */
    { (yyval.exprs) = (yyvsp[0].exprs); }
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 580 "parser.y" /* yacc.c:1646  */
    {
					verifyUnaryNOT( (yyvsp[0].exprs) );
					(yyval.exprs) = (yyvsp[0].exprs);
				}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 584 "parser.y" /* yacc.c:1646  */
    { (yyval.exprs) = (yyvsp[0].exprs); }
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 588 "parser.y" /* yacc.c:1646  */
    {
						verifyRelOp( (yyvsp[-2].exprs), (yyvsp[-1].intVal), (yyvsp[0].exprs) );
						(yyval.exprs) = (yyvsp[-2].exprs);
					}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 592 "parser.y" /* yacc.c:1646  */
    { (yyval.exprs) = (yyvsp[0].exprs); }
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 595 "parser.y" /* yacc.c:1646  */
    { (yyval.intVal) = LT_t; }
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 596 "parser.y" /* yacc.c:1646  */
    { (yyval.intVal) = LE_t; }
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 597 "parser.y" /* yacc.c:1646  */
    { (yyval.intVal) = EQ_t; }
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 598 "parser.y" /* yacc.c:1646  */
    { (yyval.intVal) = GE_t; }
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 599 "parser.y" /* yacc.c:1646  */
    { (yyval.intVal) = GT_t; }
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 600 "parser.y" /* yacc.c:1646  */
    { (yyval.intVal) = NE_t; }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 604 "parser.y" /* yacc.c:1646  */
    {
				verifyArithmeticOp( (yyvsp[-2].exprs), (yyvsp[-1].intVal), (yyvsp[0].exprs) );
				(yyval.exprs) = (yyvsp[-2].exprs);
			}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 608 "parser.y" /* yacc.c:1646  */
    { (yyval.exprs) = (yyvsp[0].exprs); }
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 609 "parser.y" /* yacc.c:1646  */
    { (yyval.exprs) = (yyvsp[0].exprs); }
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 612 "parser.y" /* yacc.c:1646  */
    { (yyval.intVal) = ADD_t; }
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 613 "parser.y" /* yacc.c:1646  */
    { (yyval.intVal) = SUB_t; }
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 617 "parser.y" /* yacc.c:1646  */
    {
			if( (yyvsp[-1].intVal) == MOD_t ) {
				verifyModOp( (yyvsp[-2].exprs), (yyvsp[0].exprs) );
			}
			else {
				verifyArithmeticOp( (yyvsp[-2].exprs), (yyvsp[-1].intVal), (yyvsp[0].exprs) );
			}
			(yyval.exprs) = (yyvsp[-2].exprs);
		}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 626 "parser.y" /* yacc.c:1646  */
    { (yyval.exprs) = (yyvsp[0].exprs); }
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 629 "parser.y" /* yacc.c:1646  */
    { (yyval.intVal) = MUL_t; }
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 630 "parser.y" /* yacc.c:1646  */
    { (yyval.intVal) = DIV_t; }
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 631 "parser.y" /* yacc.c:1646  */
    { (yyval.intVal) = MOD_t; }
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 635 "parser.y" /* yacc.c:1646  */
    {
			verifyExistence( symbolTable, (yyvsp[0].exprs), scope, __FALSE );
			(yyval.exprs) = (yyvsp[0].exprs);
			(yyval.exprs)->beginningOp = NONE_t;
		}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 641 "parser.y" /* yacc.c:1646  */
    {
			if( verifyExistence( symbolTable, (yyvsp[0].exprs), scope, __FALSE ) == __TRUE )
			verifyUnaryMinus( (yyvsp[0].exprs) );
			(yyval.exprs) = (yyvsp[0].exprs);
			(yyval.exprs)->beginningOp = SUB_t;
		}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 648 "parser.y" /* yacc.c:1646  */
    {
			(yyvsp[-1].exprs)->beginningOp = NONE_t;
			(yyval.exprs) = (yyvsp[-1].exprs); 
		}
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 653 "parser.y" /* yacc.c:1646  */
    {
			verifyUnaryMinus( (yyvsp[-1].exprs) );
			(yyval.exprs) = (yyvsp[-1].exprs);
			(yyval.exprs)->beginningOp = SUB_t;
		}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 659 "parser.y" /* yacc.c:1646  */
    {
			(yyval.exprs) = verifyFuncInvoke( (yyvsp[-3].lexeme), (yyvsp[-1].exprs), symbolTable, scope );
			(yyval.exprs)->beginningOp = NONE_t;
		}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 664 "parser.y" /* yacc.c:1646  */
    {
			(yyval.exprs) = verifyFuncInvoke( (yyvsp[-3].lexeme), (yyvsp[-1].exprs), symbolTable, scope );
			(yyval.exprs)->beginningOp = SUB_t;
		}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 669 "parser.y" /* yacc.c:1646  */
    {
			(yyval.exprs) = verifyFuncInvoke( (yyvsp[-2].lexeme), 0, symbolTable, scope );
			(yyval.exprs)->beginningOp = NONE_t;
		}
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 674 "parser.y" /* yacc.c:1646  */
    {
			(yyval.exprs) = verifyFuncInvoke( (yyvsp[-2].lexeme), 0, symbolTable, scope );
			(yyval.exprs)->beginningOp = SUB_OP;
		}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 679 "parser.y" /* yacc.c:1646  */
    {
			  (yyval.exprs) = (struct expr_sem *)malloc(sizeof(struct expr_sem));
			  (yyval.exprs)->isDeref = __TRUE;
			  (yyval.exprs)->varRef = 0;
			  (yyval.exprs)->pType = createPType( (yyvsp[0].constVal)->category );
			  (yyval.exprs)->next = 0;
			  if( (yyvsp[0].constVal)->hasMinus == __TRUE ) {
			  	(yyval.exprs)->beginningOp = SUB_t;
			  }
			  else {
				(yyval.exprs)->beginningOp = NONE_t;
			  }
		}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 695 "parser.y" /* yacc.c:1646  */
    {
			  				struct expr_sem *exprPtr;
			  				for( exprPtr=(yyvsp[-2].exprs) ; (exprPtr->next)!=0 ; exprPtr=(exprPtr->next) );
			  				exprPtr->next = (yyvsp[0].exprs);
			  				(yyval.exprs) = (yyvsp[-2].exprs);
						}
#line 2468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 701 "parser.y" /* yacc.c:1646  */
    { (yyval.exprs) = (yyvsp[0].exprs); }
#line 2474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 707 "parser.y" /* yacc.c:1646  */
    { (yyval.ptype) = createPType( INTEGER_t ); }
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 708 "parser.y" /* yacc.c:1646  */
    { (yyval.ptype) = createPType( DOUBLE_t ); }
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 709 "parser.y" /* yacc.c:1646  */
    { (yyval.ptype) = createPType( STRING_t ); }
#line 2492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 710 "parser.y" /* yacc.c:1646  */
    { (yyval.ptype) = createPType( BOOLEAN_t ); }
#line 2498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 711 "parser.y" /* yacc.c:1646  */
    { (yyval.ptype) = createPType( FLOAT_t ); }
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 715 "parser.y" /* yacc.c:1646  */
    {
					int tmp = (yyvsp[0].intVal);
					(yyval.constVal) = createConstAttr( INTEGER_t, &tmp );
				}
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 720 "parser.y" /* yacc.c:1646  */
    {
					int tmp = -(yyvsp[0].intVal);
					(yyval.constVal) = createConstAttr( INTEGER_t, &tmp );
				}
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 725 "parser.y" /* yacc.c:1646  */
    {
					float tmp = (yyvsp[0].floatVal);
					(yyval.constVal) = createConstAttr( FLOAT_t, &tmp );
				}
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 730 "parser.y" /* yacc.c:1646  */
    {
					float tmp = -(yyvsp[0].floatVal);
					(yyval.constVal) = createConstAttr( FLOAT_t, &tmp );
				}
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 735 "parser.y" /* yacc.c:1646  */
    {
					double tmp = (yyvsp[0].floatVal);
					(yyval.constVal) = createConstAttr( DOUBLE_t, &tmp );
				}
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 740 "parser.y" /* yacc.c:1646  */
    {
					double tmp = -(yyvsp[0].floatVal);
					(yyval.constVal) = createConstAttr( DOUBLE_t, &tmp );
				}
#line 2558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 745 "parser.y" /* yacc.c:1646  */
    {
					(yyval.constVal) = createConstAttr( STRING_t, (yyvsp[0].lexeme) );
				}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 749 "parser.y" /* yacc.c:1646  */
    {
					SEMTYPE tmp = __TRUE;
					(yyval.constVal) = createConstAttr( BOOLEAN_t, &tmp );
				}
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 754 "parser.y" /* yacc.c:1646  */
    {
					SEMTYPE tmp = __FALSE;
					(yyval.constVal) = createConstAttr( BOOLEAN_t, &tmp );
				}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2588 "y.tab.c" /* yacc.c:1646  */
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
#line 759 "parser.y" /* yacc.c:1906  */


int yyerror( char *msg )
{
    fprintf( stderr, "\n|--------------------------------------------------------------------------\n" );
	fprintf( stderr, "| Error found in Line #%d: %s\n", linenum, buf );
	fprintf( stderr, "|\n" );
	fprintf( stderr, "| Unmatched token: %s\n", yytext );
	fprintf( stderr, "|--------------------------------------------------------------------------\n" );
	exit(-1);
}


