/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         ap_expr_yyparse
#define yylex           ap_expr_yylex
#define yyerror         ap_expr_yyerror
#define yydebug         ap_expr_yydebug
#define yynerrs         ap_expr_yynerrs


/* First part of user prologue.  */
#line 31 "util_expr_parse.y" /* yacc.c:337  */

#include "util_expr_private.h"

#line 80 "util_expr_parse.c" /* yacc.c:337  */
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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "util_expr_parse.h".  */
#ifndef YY_AP_EXPR_YY_HOME_YIGONGHU_SOFTWARE_HTTPD_APACHE_SERVER_UTIL_EXPR_PARSE_H_INCLUDED
# define YY_AP_EXPR_YY_HOME_YIGONGHU_SOFTWARE_HTTPD_APACHE_SERVER_UTIL_EXPR_PARSE_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ap_expr_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_TRUE = 258,
    T_FALSE = 259,
    T_EXPR_BOOL = 260,
    T_EXPR_STRING = 261,
    T_ERROR = 262,
    T_DIGIT = 263,
    T_ID = 264,
    T_STRING = 265,
    T_REGEX = 266,
    T_REGEX_I = 267,
    T_REGEX_BACKREF = 268,
    T_OP_UNARY = 269,
    T_OP_BINARY = 270,
    T_STR_BEGIN = 271,
    T_STR_END = 272,
    T_VAR_BEGIN = 273,
    T_VAR_END = 274,
    T_OP_EQ = 275,
    T_OP_NE = 276,
    T_OP_LT = 277,
    T_OP_LE = 278,
    T_OP_GT = 279,
    T_OP_GE = 280,
    T_OP_REG = 281,
    T_OP_NRE = 282,
    T_OP_IN = 283,
    T_OP_STR_EQ = 284,
    T_OP_STR_NE = 285,
    T_OP_STR_LT = 286,
    T_OP_STR_LE = 287,
    T_OP_STR_GT = 288,
    T_OP_STR_GE = 289,
    T_OP_CONCAT = 290,
    T_OP_OR = 291,
    T_OP_AND = 292,
    T_OP_NOT = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 35 "util_expr_parse.y" /* yacc.c:352  */

    char      *cpVal;
    ap_expr_t *exVal;
    int        num;

#line 168 "util_expr_parse.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int ap_expr_yyparse (ap_expr_parse_ctx_t *ctx);

#endif /* !YY_AP_EXPR_YY_HOME_YIGONGHU_SOFTWARE_HTTPD_APACHE_SERVER_UTIL_EXPR_PARSE_H_INCLUDED  */

/* Second part of user prologue.  */
#line 102 "util_expr_parse.y" /* yacc.c:354  */

#include "util_expr_private.h"
#define yyscanner ctx->scanner

int ap_expr_yylex(YYSTYPE *lvalp, void *scanner);

#line 190 "util_expr_parse.c" /* yacc.c:354  */

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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   128

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  96

#define YYUNDEFTOK  2
#define YYMAXUTOK   293

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      39,    40,     2,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   112,   112,   113,   114,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     146,   147,   150,   151,   154,   155,   156,   159,   160,   161,
     164,   165,   168,   169,   170,   171,   172,   173,   174,   177,
     186,   197,   204,   207
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_TRUE", "T_FALSE", "T_EXPR_BOOL",
  "T_EXPR_STRING", "T_ERROR", "T_DIGIT", "T_ID", "T_STRING", "T_REGEX",
  "T_REGEX_I", "T_REGEX_BACKREF", "T_OP_UNARY", "T_OP_BINARY",
  "T_STR_BEGIN", "T_STR_END", "T_VAR_BEGIN", "T_VAR_END", "T_OP_EQ",
  "T_OP_NE", "T_OP_LT", "T_OP_LE", "T_OP_GT", "T_OP_GE", "T_OP_REG",
  "T_OP_NRE", "T_OP_IN", "T_OP_STR_EQ", "T_OP_STR_NE", "T_OP_STR_LT",
  "T_OP_STR_LE", "T_OP_STR_GT", "T_OP_STR_GE", "T_OP_CONCAT", "T_OP_OR",
  "T_OP_AND", "T_OP_NOT", "'('", "')'", "'{'", "'}'", "','", "':'",
  "$accept", "root", "expr", "comparison", "wordlist", "words", "string",
  "strpart", "var", "word", "regex", "backref", "lstfunccall",
  "strfunccall", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,    40,
      41,   123,   125,    44,    58
};
# endif

#define YYPACT_NINF -35

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-35)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      48,    60,    73,   -35,     7,   -35,   -35,   -35,   -35,   -34,
     -35,    43,     8,    11,    60,    60,    86,   -35,   -35,    80,
     -35,   -35,   -35,   -35,   108,   -35,   -35,   -35,   -35,    43,
      25,   -35,    79,   -17,   -35,    -8,    60,    60,    43,    43,
      43,    43,    43,    43,    43,     5,     5,     0,    43,    43,
      43,    43,    43,    43,    43,   -35,   -27,   -35,   -35,    73,
     -35,    86,     3,    25,    25,    25,    25,    25,    25,    25,
     -35,   -35,   -35,   -35,    23,    43,   -35,   -35,    25,    25,
      25,    25,    25,    25,    25,   -35,   106,    43,    85,    25,
     -35,   -21,   -35,    43,   -35,    25
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,     0,     5,     6,    14,    42,     0,
      51,     0,     0,     0,     0,     0,     2,    10,    44,     0,
      45,    46,    36,    37,     3,    35,    38,    39,     1,     0,
      11,    48,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,    47,    40,     0,
      13,     8,     9,    12,    15,    16,    17,    18,    19,    20,
      49,    50,    28,    29,     0,     0,    27,    30,    21,    22,
      23,    24,    25,    26,    43,    53,     0,     0,     0,    32,
      41,     0,    31,     0,    52,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -35,   -35,    57,   -35,   -35,   -35,    -9,   -20,    -2,    -5,
      -4,    -1,   -35,   -35
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,    16,    17,    76,    88,    24,    25,    18,    19,
      72,    20,    77,    21
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      26,    27,    58,    32,    55,    29,    30,    28,    54,    74,
      26,    27,    55,    85,    54,    22,    70,    71,    23,    94,
      33,    10,    26,    27,    56,    31,    13,    59,    36,    37,
      26,    27,    60,    63,    64,    65,    66,    67,    68,    69,
      37,    75,    73,    78,    79,    80,    81,    82,    83,    84,
      86,     8,     9,     1,     2,     3,    10,    26,    27,    12,
      54,    13,    87,     5,     6,     0,    55,     7,     8,     9,
      89,    34,    35,    10,    11,     0,    12,     0,    13,     0,
      22,     0,    91,    23,    26,    27,    10,     0,    95,    23,
       0,    13,    10,    61,    62,    38,    57,    13,    14,    15,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    23,     0,    23,    10,
       0,    10,    36,    37,    13,    90,    13,    92,    93
};

static const yytype_int8 yycheck[] =
{
       2,     2,    19,    12,    24,    39,    11,     0,    35,     9,
      12,    12,    32,    40,    35,     7,    11,    12,    10,    40,
       9,    13,    24,    24,    29,    17,    18,    44,    36,    37,
      32,    32,    40,    38,    39,    40,    41,    42,    43,    44,
      37,    41,    46,    48,    49,    50,    51,    52,    53,    54,
      59,     8,     9,     5,     6,     7,    13,    59,    59,    16,
      35,    18,    39,     3,     4,    -1,    86,     7,     8,     9,
      75,    14,    15,    13,    14,    -1,    16,    -1,    18,    -1,
       7,    -1,    87,    10,    86,    86,    13,    -1,    93,    10,
      -1,    18,    13,    36,    37,    15,    17,    18,    38,    39,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    10,    -1,    10,    13,
      -1,    13,    36,    37,    18,    19,    18,    42,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,    46,     3,     4,     7,     8,     9,
      13,    14,    16,    18,    38,    39,    47,    48,    53,    54,
      56,    58,     7,    10,    51,    52,    53,    56,     0,    39,
      54,    17,    51,     9,    47,    47,    36,    37,    15,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    52,    54,    17,    19,    44,
      40,    47,    47,    54,    54,    54,    54,    54,    54,    54,
      11,    12,    55,    55,     9,    41,    49,    57,    54,    54,
      54,    54,    54,    54,    54,    40,    51,    39,    50,    54,
      19,    54,    42,    43,    40,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    46,    46,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      49,    49,    50,    50,    51,    51,    51,    52,    52,    52,
      53,    53,    54,    54,    54,    54,    54,    54,    54,    55,
      55,    56,    57,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     2,     3,     3,
       1,     2,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     1,     3,     2,     1,     1,     1,     1,     1,
       3,     5,     1,     3,     1,     1,     1,     3,     2,     1,
       1,     1,     4,     4
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
        yyerror (ctx, YY_("syntax error: cannot back up")); \
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
                  Type, Value, ctx); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, ap_expr_parse_ctx_t *ctx)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (ctx);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, ap_expr_parse_ctx_t *ctx)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep, ctx);
  YYFPRINTF (yyo, ")");
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, ap_expr_parse_ctx_t *ctx)
{
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              , ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, ctx); \
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

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, ap_expr_parse_ctx_t *ctx)
{
  YYUSE (yyvaluep);
  YYUSE (ctx);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (ap_expr_parse_ctx_t *ctx)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex (&yylval, yyscanner);
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
#line 112 "util_expr_parse.y" /* yacc.c:1652  */
    { ctx->expr = (yyvsp[0].exVal); }
#line 1346 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 3:
#line 113 "util_expr_parse.y" /* yacc.c:1652  */
    { ctx->expr = (yyvsp[0].exVal); }
#line 1352 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 4:
#line 114 "util_expr_parse.y" /* yacc.c:1652  */
    { YYABORT; }
#line 1358 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 5:
#line 117 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_True,        NULL, NULL, ctx); }
#line 1364 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 6:
#line 118 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_False,       NULL, NULL, ctx); }
#line 1370 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 7:
#line 119 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_Not,         (yyvsp[0].exVal),   NULL, ctx); }
#line 1376 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 8:
#line 120 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_Or,          (yyvsp[-2].exVal),   (yyvsp[0].exVal),   ctx); }
#line 1382 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 9:
#line 121 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_And,         (yyvsp[-2].exVal),   (yyvsp[0].exVal),   ctx); }
#line 1388 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 10:
#line 122 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_Comp,        (yyvsp[0].exVal),   NULL, ctx); }
#line 1394 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 11:
#line 123 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_unary_op_make(       (yyvsp[-1].cpVal),   (yyvsp[0].exVal),   ctx); }
#line 1400 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 12:
#line 124 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_binary_op_make((yyvsp[-1].cpVal),   (yyvsp[-2].exVal),   (yyvsp[0].exVal),   ctx); }
#line 1406 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 13:
#line 125 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = (yyvsp[-1].exVal); }
#line 1412 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 14:
#line 126 "util_expr_parse.y" /* yacc.c:1652  */
    { YYABORT; }
#line 1418 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 15:
#line 129 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_EQ,      (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1424 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 16:
#line 130 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_NE,      (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1430 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 17:
#line 131 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_LT,      (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1436 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 18:
#line 132 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_LE,      (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1442 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 19:
#line 133 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_GT,      (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1448 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 20:
#line 134 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_GE,      (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1454 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 21:
#line 135 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_STR_EQ,  (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1460 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 22:
#line 136 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_STR_NE,  (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1466 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 23:
#line 137 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_STR_LT,  (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1472 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 24:
#line 138 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_STR_LE,  (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1478 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 25:
#line 139 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_STR_GT,  (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1484 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 26:
#line 140 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_STR_GE,  (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1490 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 27:
#line 141 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_IN,      (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1496 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 28:
#line 142 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_REG,     (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1502 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 29:
#line 143 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_NRE,     (yyvsp[-2].exVal), (yyvsp[0].exVal), ctx); }
#line 1508 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 30:
#line 146 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = (yyvsp[0].exVal); }
#line 1514 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 31:
#line 147 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = (yyvsp[-1].exVal); }
#line 1520 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 32:
#line 150 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_ListElement, (yyvsp[0].exVal), NULL, ctx); }
#line 1526 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 33:
#line 151 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_ListElement, (yyvsp[0].exVal), (yyvsp[-2].exVal),   ctx); }
#line 1532 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 34:
#line 154 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_Concat, (yyvsp[-1].exVal), (yyvsp[0].exVal), ctx); }
#line 1538 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 35:
#line 155 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = (yyvsp[0].exVal); }
#line 1544 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 36:
#line 156 "util_expr_parse.y" /* yacc.c:1652  */
    { YYABORT; }
#line 1550 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 37:
#line 159 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_String, (yyvsp[0].cpVal), NULL, ctx); }
#line 1556 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 38:
#line 160 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = (yyvsp[0].exVal); }
#line 1562 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 39:
#line 161 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = (yyvsp[0].exVal); }
#line 1568 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 40:
#line 164 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_var_make((yyvsp[-1].cpVal), ctx); }
#line 1574 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 41:
#line 165 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_str_func_make((yyvsp[-3].cpVal), (yyvsp[-1].exVal), ctx); }
#line 1580 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 42:
#line 168 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_Digit,  (yyvsp[0].cpVal), NULL, ctx); }
#line 1586 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 43:
#line 169 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_Concat, (yyvsp[-2].exVal), (yyvsp[0].exVal),   ctx); }
#line 1592 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 44:
#line 170 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = (yyvsp[0].exVal); }
#line 1598 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 45:
#line 171 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = (yyvsp[0].exVal); }
#line 1604 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 46:
#line 172 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = (yyvsp[0].exVal); }
#line 1610 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 47:
#line 173 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = (yyvsp[-1].exVal); }
#line 1616 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 48:
#line 174 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_make(op_String, "", NULL, ctx); }
#line 1622 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 49:
#line 177 "util_expr_parse.y" /* yacc.c:1652  */
    {
                ap_regex_t *regex;
                if ((regex = ap_pregcomp(ctx->pool, (yyvsp[0].cpVal),
                                         AP_REG_EXTENDED|AP_REG_NOSUB)) == NULL) {
                    ctx->error = "Failed to compile regular expression";
                    YYERROR;
                }
                (yyval.exVal) = ap_expr_make(op_Regex, regex, NULL, ctx);
            }
#line 1636 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 50:
#line 186 "util_expr_parse.y" /* yacc.c:1652  */
    {
                ap_regex_t *regex;
                if ((regex = ap_pregcomp(ctx->pool, (yyvsp[0].cpVal),
                                         AP_REG_EXTENDED|AP_REG_NOSUB|AP_REG_ICASE)) == NULL) {
                    ctx->error = "Failed to compile regular expression";
                    YYERROR;
                }
                (yyval.exVal) = ap_expr_make(op_Regex, regex, NULL, ctx);
            }
#line 1650 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 51:
#line 197 "util_expr_parse.y" /* yacc.c:1652  */
    {
                int *n = apr_palloc(ctx->pool, sizeof(int));
                *n = (yyvsp[0].num);
                (yyval.exVal) = ap_expr_make(op_RegexBackref, n, NULL, ctx);
            }
#line 1660 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 52:
#line 204 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_list_func_make((yyvsp[-3].cpVal), (yyvsp[-1].exVal), ctx); }
#line 1666 "util_expr_parse.c" /* yacc.c:1652  */
    break;

  case 53:
#line 207 "util_expr_parse.y" /* yacc.c:1652  */
    { (yyval.exVal) = ap_expr_str_func_make((yyvsp[-3].cpVal), (yyvsp[-1].exVal), ctx); }
#line 1672 "util_expr_parse.c" /* yacc.c:1652  */
    break;


#line 1676 "util_expr_parse.c" /* yacc.c:1652  */
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
      yyerror (ctx, YY_("syntax error"));
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
        yyerror (ctx, yymsgp);
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
                      yytoken, &yylval, ctx);
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
                  yystos[yystate], yyvsp, ctx);
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
  yyerror (ctx, YY_("memory exhausted"));
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
                  yytoken, &yylval, ctx);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, ctx);
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
#line 210 "util_expr_parse.y" /* yacc.c:1918  */


void yyerror(ap_expr_parse_ctx_t *ctx, const char *s)
{
    /* s is allocated on the stack */
    ctx->error = apr_pstrdup(ctx->ptemp, s);
}

