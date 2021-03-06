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
#line 1 "l22_parser.y"

//-- don't change *any* of these: if you do, you'll break the compiler.
#include <algorithm>
#include <memory>
#include <cstring>
#include <cdk/compiler.h>
#include <cdk/types/types.h>
#include ".auto/all_nodes.h"
#define LINE                         compiler->scanner()->lineno()
#define yylex()                      compiler->scanner()->scan()
#define yyerror(compiler, s)         compiler->scanner()->error(s)
//-- don't change *any* of these --- END!

#line 84 "l22_parser.tab.c"

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
#ifndef YY_YY_L22_PARSER_TAB_H_INCLUDED
# define YY_YY_L22_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    tINT_TYPE = 258,
    tDOUBLE_TYPE = 259,
    tTEXT_TYPE = 260,
    tVOID_TYPE = 261,
    tFOREIGN = 262,
    tUSE = 263,
    tPUBLIC = 264,
    tPRIVATE = 265,
    tVAR = 266,
    tTYPE_DECL = 267,
    tAND = 268,
    tOR = 269,
    tNOT = 270,
    tGE = 271,
    tLE = 272,
    tEQ = 273,
    tNE = 274,
    tIF = 275,
    tTHEN = 276,
    tELIF = 277,
    tELSE = 278,
    tWHILE = 279,
    tDO = 280,
    tSTOP = 281,
    tAGAIN = 282,
    tWRITE = 283,
    tWRITELN = 284,
    tRETURN = 285,
    tBEGIN = 286,
    tEND = 287,
    tSIZEOF = 288,
    tINPUT = 289,
    tUNARY = 290,
    tSWEEP = 291,
    tWITH = 292,
    tCHANGE = 293,
    tINTEGER = 294,
    tIDENTIFIER = 295,
    tSTRING = 296,
    tDOUBLE = 297,
    tNULL = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "l22_parser.y"

  //--- don't change *any* of these: if you do, you'll break the compiler.
  YYSTYPE() : type(cdk::primitive_type::create(0, cdk::TYPE_VOID)) {}
  ~YYSTYPE() {}
  YYSTYPE(const YYSTYPE &other) { *this = other; }
  YYSTYPE& operator=(const YYSTYPE &other) { type = other.type; return *this; }

  std::shared_ptr<cdk::basic_type> type;        /* expression type */
  //-- don't change *any* of these --- END!

  int                   i;	/* integer value */
  double                d;
  std::string          *s;	/* symbol name or string literal */
  
  cdk::basic_node      *node;	/* node pointer */
  cdk::sequence_node   *sequence;
  cdk::expression_node *expression; /* expression nodes */
  cdk::lvalue_node     *lvalue;

  l22::block_node       *block_node;
  std::vector<std::shared_ptr<cdk::basic_type>> *types;

#line 203 "l22_parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (std::shared_ptr<cdk::compiler> compiler);

#endif /* !YY_YY_L22_PARSER_TAB_H_INCLUDED  */

/* Second part of user prologue.  */
#line 65 "l22_parser.y"

// Precedences
#line 84 "l22_parser.y"

//-- The rules below will be included in yyparse, the main parsing function.

#line 226 "l22_parser.tab.c"


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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1029

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

#define YYUNDEFTOK  2
#define YYMAXUTOK   298


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
       2,     2,     2,     2,     2,     2,     2,    51,     2,     2,
      52,    59,    49,    47,    55,    48,    60,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    63,    54,
      45,    44,    46,    61,    62,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    89,    89,    90,    91,    92,    96,   100,   101,   102,
     103,   104,   106,   109,   110,   111,   112,   113,   114,   115,
     117,   124,   125,   129,   133,   134,   137,   138,   141,   142,
     143,   144,   145,   146,   150,   151,   155,   156,   157,   158,
     162,   163,   164,   165,   168,   169,   170,   171,   172,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   187,   188,
     189,   191,   192,   193,   194,   197,   198,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   230,   231,   232,   233,   234,   235,
     240,   241,   244,   245,   248,   249
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tINT_TYPE", "tDOUBLE_TYPE",
  "tTEXT_TYPE", "tVOID_TYPE", "tFOREIGN", "tUSE", "tPUBLIC", "tPRIVATE",
  "tVAR", "tTYPE_DECL", "tAND", "tOR", "tNOT", "tGE", "tLE", "tEQ", "tNE",
  "tIF", "tTHEN", "tELIF", "tELSE", "tWHILE", "tDO", "tSTOP", "tAGAIN",
  "tWRITE", "tWRITELN", "tRETURN", "tBEGIN", "tEND", "tSIZEOF", "tINPUT",
  "tUNARY", "tSWEEP", "tWITH", "tCHANGE", "tINTEGER", "tIDENTIFIER",
  "tSTRING", "tDOUBLE", "tNULL", "'='", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'('", "'['", "';'", "','", "']'", "'{'", "'}'", "')'",
  "'.'", "'?'", "'@'", "':'", "$accept", "file", "program", "declaration",
  "declarations", "variable", "variables", "func_type", "data_type",
  "data_types", "block", "instructions", "block_instruction",
  "instruction", "elif", "exprs", "string", "expr", "function_def",
  "block_expr", "lval", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    61,    60,    62,    43,    45,    42,
      47,    37,    40,    91,    59,    44,    93,   123,   125,    41,
      46,    63,    64,    58
};
# endif

#define YYPACT_NINF (-57)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     158,   -57,   -57,   -57,   -57,    77,    77,   141,   -34,   -39,
      77,    24,   -57,   -57,   158,   -13,   -57,     3,     7,     8,
      31,    14,    25,    32,    34,   210,    43,   -29,   -57,   -57,
     -57,   -57,    40,   182,    36,    55,    42,   304,   -33,   304,
     356,    75,    80,   -57,   -57,   304,   304,   304,    87,   -57,
     356,   356,   -57,   -57,   -57,   -57,   -57,   356,   356,   321,
     372,   -57,    88,   270,    71,   402,    89,   101,   963,   -57,
     -57,   -16,   -57,   -57,   304,   -57,     8,    18,   -57,   -57,
     304,   356,   775,   -57,   304,   -57,   785,   -57,   304,   976,
     -15,   356,   356,    93,   963,   -57,    93,   963,   -57,   356,
     828,   913,    96,    96,   142,   -57,     6,    47,   589,    97,
     722,   482,   -57,   100,   -57,   -57,   402,   -57,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   304,   512,   -57,   837,   -57,   -57,    77,   847,
     -57,   -57,   889,   -57,   -57,   356,   604,   648,   304,   663,
     356,   356,    77,    77,   143,   -57,   -57,   108,   -57,   -57,
      53,   -57,   -57,   976,   580,   154,   154,   154,   154,   154,
     154,    64,    64,    96,    96,    96,   763,   963,   -57,   -57,
      63,   -57,     8,   -57,   -57,   149,   146,   963,   -57,   -57,
     954,   899,   -44,   -57,    77,   542,   -57,   -57,   -57,   -39,
     -39,   356,   356,   -39,   -43,   -57,    69,   112,   -57,   443,
     459,   -57,   -39,   -57,   121,   -39,   -57,   115,   119,   -57,
     356,   -57,   356,   356,   707,   963,   963,   159,   -39,   112,
     -57
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    28,    29,    30,    32,     0,     0,     0,     0,     0,
       0,     0,     5,    22,     4,     0,    31,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     3,
      21,     7,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    52,     0,     0,    55,     0,    93,
       0,     0,    67,   104,    65,    68,    70,     0,     0,     0,
       0,    39,     0,     0,     0,    41,    40,    69,    49,   102,
      44,    90,     6,    33,     0,    26,    35,     0,    20,    12,
       0,     0,     0,    19,     0,    13,     0,    11,     0,    86,
      90,     0,     0,    50,    62,    64,    51,    54,    48,     0,
       0,     0,    71,    72,     0,    25,     0,     0,     0,     0,
       0,     0,    38,     0,    37,    43,     0,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,     0,     9,    27,     0,     0,
      17,    18,     0,    15,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    87,     0,    88,    99,
       0,    36,    42,    85,    84,    80,    81,    83,    82,    78,
      79,    73,    74,    75,    77,    76,     0,    91,   103,    97,
       0,     8,    34,    16,    14,     0,     0,    61,    63,    92,
       0,     0,     0,    24,     0,     0,    98,   105,    96,     0,
       0,     0,     0,     0,     0,    95,     0,    45,    47,     0,
       0,   100,     0,    94,     0,     0,    46,     0,     0,   101,
       0,    58,     0,     0,     0,    56,    57,     0,     0,    59,
      60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -57,   -57,   168,    -1,   165,   -42,   -57,   178,    -2,   -57,
     267,   -56,   -57,   -57,   -45,   -23,   -57,   -25,   -49,    94,
       5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,   106,    16,    17,    77,
      26,    64,    65,    66,   216,    93,    67,    94,    69,    95,
      90
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,    33,    33,    19,    20,    23,    24,   113,    27,   115,
     109,    84,    82,    30,    86,    89,    33,   105,    25,   203,
     212,    85,    97,    96,    28,   100,   101,    73,   132,   145,
      71,    76,   102,   103,   108,   110,   133,   133,    68,   109,
      68,    31,    71,    32,    71,   134,   134,    34,    33,   135,
      71,    71,    71,    33,    36,   139,   110,   107,    27,   142,
     162,   153,    30,   108,   137,   154,   146,   147,    71,    37,
      71,    35,    38,   138,   149,    72,    33,    33,    39,    71,
       1,     2,     3,     4,    74,    71,    80,   155,   160,    71,
      78,    68,    33,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   148,    79,
     180,   193,   196,   128,   129,   130,    71,   131,   148,    70,
     177,    71,   198,   187,   148,   190,   191,    91,   213,   114,
      10,    83,    92,    87,   214,   215,   182,    71,    71,    99,
     111,    98,   117,   116,     1,     2,     3,     4,   148,   131,
     192,   107,    21,    71,   152,   194,   157,    70,   161,    70,
     195,     1,     2,     3,     4,     5,     6,     7,   136,     8,
     199,   200,   206,   220,   140,   222,   209,   210,   143,   223,
     228,    22,    29,    18,   230,     1,     2,     3,     4,     9,
      63,     0,   204,     0,    10,   224,     0,   225,   226,     0,
      71,   126,   127,   128,   129,   130,     0,   131,     0,     0,
      70,    10,     0,     1,     2,     3,     4,     5,     6,     7,
       0,     8,     0,     0,     0,    40,   178,     0,    75,     0,
      41,     0,     0,     0,    42,    10,    43,    44,    45,    46,
      47,     0,   188,    48,    49,     0,    50,    51,     0,    52,
      53,    54,    55,    56,     0,     0,     0,    57,    58,     0,
       0,     0,    59,    60,     0,     0,     0,     0,    61,     0,
       0,     0,    62,     1,     2,     3,     4,     5,     6,     7,
       0,     8,     0,     0,     0,    40,     0,     0,     0,     0,
      41,     0,     0,     0,    42,     0,    43,    44,    45,    46,
      47,     0,     0,    48,    49,     0,    50,    51,     0,    52,
      53,    54,    55,    56,     0,     0,     0,    57,    58,    40,
       0,     0,    59,    60,     1,     2,     3,     4,   112,     0,
       0,     0,    62,     0,     0,     0,    40,    48,    49,     0,
       0,     0,     0,    52,    53,    54,    55,    56,     0,     0,
       0,    57,    58,     0,    48,    49,    59,    81,     0,     0,
      52,    53,    54,    55,    56,     0,    62,     0,    57,    58,
       0,    40,     0,    59,    60,     1,     2,     3,     4,     0,
     104,     0,     0,    62,     0,     0,     0,    40,     0,    48,
      49,     0,     0,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,    57,    58,    48,    49,     0,    88,    81,
       0,    52,    53,    54,    55,    56,     0,    40,    62,    57,
      58,     0,    41,     0,    88,    60,    42,     0,    43,    44,
      45,    46,    47,     0,    62,    48,    49,     0,    50,    51,
       0,    52,    53,    54,    55,    56,     0,     0,     0,    57,
      58,     0,     0,     0,    59,    81,   118,   119,     0,   120,
     121,   122,   123,     0,    62,     0,   207,   208,     0,     0,
     211,     0,   118,   119,     0,   120,   121,   122,   123,   219,
       0,     0,   221,     0,     0,     0,     0,     0,   124,   125,
     126,   127,   128,   129,   130,   229,   131,    40,     0,     0,
       0,     0,     0,   217,   124,   125,   126,   127,   128,   129,
     130,     0,   131,     0,     0,    48,    49,     0,     0,   218,
       0,    52,    53,    54,    55,    56,     0,    40,     0,    57,
      58,     0,     0,     0,    59,    81,     0,     0,     0,     0,
       0,   159,     0,     0,    62,    48,    49,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,    40,     0,    57,
      58,     0,     0,     0,    59,    81,     0,     0,     0,     0,
       0,   179,     0,     0,    62,    48,    49,     0,     0,     0,
       0,    52,    53,    54,    55,    56,     0,     0,     0,    57,
      58,     0,     0,   118,    59,    81,   120,   121,   122,   123,
       0,   205,   118,   119,    62,   120,   121,   122,   123,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   119,     0,
     120,   121,   122,   123,     0,   124,   125,   126,   127,   128,
     129,   130,     0,   131,   124,   125,   126,   127,   128,   129,
     130,     0,   131,     0,     0,     0,     0,     0,   156,   124,
     125,   126,   127,   128,   129,   130,     0,   131,     0,     0,
       0,   118,   119,   185,   120,   121,   122,   123,     0,     0,
       0,     0,     0,     0,     0,     0,   118,   119,     0,   120,
     121,   122,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,   125,   126,   127,   128,   129,   130,
       0,   131,     0,     0,     0,     0,     0,   186,   124,   125,
     126,   127,   128,   129,   130,     0,   131,     0,     0,     0,
     118,   119,   189,   120,   121,   122,   123,     0,     0,     0,
       0,     0,     0,     0,     0,   118,   119,     0,   120,   121,
     122,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,   125,   126,   127,   128,   129,   130,     0,
     131,     0,     0,     0,     0,     0,   227,   124,   125,   126,
     127,   128,   129,   130,     0,   131,   118,   119,   158,   120,
     121,   122,   123,     0,     0,     0,     0,     0,   118,   119,
       0,   120,   121,   122,   123,     0,     0,     0,   118,   119,
       0,   120,   121,   122,   123,     0,     0,     0,   124,   125,
     126,   127,   128,   129,   130,     0,   131,     0,     0,   197,
     124,   125,   126,   127,   128,   129,   130,     0,   131,   141,
     124,   125,   126,   127,   128,   129,   130,     0,   131,   144,
     150,   118,   119,     0,   120,   121,   122,   123,     0,     0,
     118,   119,     0,   120,   121,   122,   123,     0,     0,     0,
     118,   119,     0,   120,   121,   122,   123,     0,     0,     0,
       0,     0,     0,   124,   125,   126,   127,   128,   129,   130,
       0,   131,   124,   125,   126,   127,   128,   129,   130,     0,
     131,   181,   124,   125,   126,   127,   128,   129,   130,     0,
     131,   183,   118,   119,     0,   120,   121,   122,   123,     0,
       0,   202,   118,   119,     0,   120,   121,   122,   123,     0,
       0,     0,     0,     0,     0,     0,   118,   119,     0,   120,
     121,   122,   123,     0,   124,   125,   126,   127,   128,   129,
     130,     0,   131,   184,   124,   125,   126,   127,   128,   129,
     130,   151,   131,     0,     0,     0,     0,     0,   124,   125,
     126,   127,   128,   129,   130,     0,   131,   118,   119,     0,
     120,   121,   122,   123,     0,     0,   118,   119,     0,   120,
     121,   122,   123,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   120,   121,   122,   123,     0,     0,     0,   124,
     125,   126,   127,   128,   129,   130,     0,   131,   124,   125,
     126,   127,   128,   129,   130,     0,   131,     0,     0,     0,
       0,   124,   125,   126,   127,   128,   129,   130,     0,   131
};

static const yytype_int16 yycheck[] =
{
      25,    45,    45,     5,     6,     7,    40,    63,    10,    65,
      59,    44,    37,    14,    39,    40,    45,    59,    57,    63,
      63,    54,    47,    46,     0,    50,    51,    56,    44,    44,
      25,    33,    57,    58,    59,    60,    52,    52,    63,    88,
      65,    54,    37,    40,    39,    61,    61,    40,    45,    74,
      45,    46,    47,    45,    40,    80,    81,    59,    60,    84,
     116,    55,    63,    88,    46,    59,    91,    92,    63,    44,
      65,    40,    40,    55,    99,    32,    45,    45,    44,    74,
       3,     4,     5,     6,    44,    80,    44,    40,   111,    84,
      54,   116,    45,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,    55,    54,
     133,   153,    59,    49,    50,    51,   111,    53,    55,    25,
     145,   116,    59,   148,    55,   150,   151,    52,    59,    58,
      53,    37,    52,    39,    22,    23,   138,   132,   133,    52,
      52,    47,    41,    54,     3,     4,     5,     6,    55,    53,
     152,   153,    11,   148,    12,    12,    59,    63,    58,    65,
      52,     3,     4,     5,     6,     7,     8,     9,    74,    11,
      21,    25,   195,    52,    80,    60,   201,   202,    84,    60,
      21,    40,    14,     5,   229,     3,     4,     5,     6,    31,
      25,    -1,   194,    -1,    53,   220,    -1,   222,   223,    -1,
     195,    47,    48,    49,    50,    51,    -1,    53,    -1,    -1,
     116,    53,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,   132,    -1,    46,    -1,
      20,    -1,    -1,    -1,    24,    53,    26,    27,    28,    29,
      30,    -1,   148,    33,    34,    -1,    36,    37,    -1,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    62,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    24,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    33,    34,    -1,    36,    37,    -1,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    47,    48,    15,
      -1,    -1,    52,    53,     3,     4,     5,     6,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    15,    33,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    47,    48,    -1,    33,    34,    52,    53,    -1,    -1,
      39,    40,    41,    42,    43,    -1,    62,    -1,    47,    48,
      -1,    15,    -1,    52,    53,     3,     4,     5,     6,    -1,
      59,    -1,    -1,    62,    -1,    -1,    -1,    15,    -1,    33,
      34,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    47,    48,    33,    34,    -1,    52,    53,
      -1,    39,    40,    41,    42,    43,    -1,    15,    62,    47,
      48,    -1,    20,    -1,    52,    53,    24,    -1,    26,    27,
      28,    29,    30,    -1,    62,    33,    34,    -1,    36,    37,
      -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    52,    53,    13,    14,    -1,    16,
      17,    18,    19,    -1,    62,    -1,   199,   200,    -1,    -1,
     203,    -1,    13,    14,    -1,    16,    17,    18,    19,   212,
      -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,   228,    53,    15,    -1,    -1,
      -1,    -1,    -1,    60,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    -1,    -1,    33,    34,    -1,    -1,    60,
      -1,    39,    40,    41,    42,    43,    -1,    15,    -1,    47,
      48,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    62,    33,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    -1,    15,    -1,    47,
      48,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    62,    33,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,    47,
      48,    -1,    -1,    13,    52,    53,    16,    17,    18,    19,
      -1,    59,    13,    14,    62,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    -1,
      16,    17,    18,    19,    -1,    45,    46,    47,    48,    49,
      50,    51,    -1,    53,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    45,
      46,    47,    48,    49,    50,    51,    -1,    53,    -1,    -1,
      -1,    13,    14,    59,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    59,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    -1,    -1,    -1,
      13,    14,    59,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    14,    -1,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    59,    45,    46,    47,
      48,    49,    50,    51,    -1,    53,    13,    14,    56,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    -1,    -1,    56,
      45,    46,    47,    48,    49,    50,    51,    -1,    53,    54,
      45,    46,    47,    48,    49,    50,    51,    -1,    53,    54,
      12,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    -1,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    12,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    -1,    16,
      17,    18,    19,    -1,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    45,    46,    47,    48,    49,    50,
      51,    38,    53,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    16,    17,    18,    19,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    -1,    53,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    -1,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    11,    31,
      53,    65,    66,    67,    68,    69,    71,    72,    71,    72,
      72,    11,    40,    72,    40,    57,    74,    72,     0,    66,
      67,    54,    40,    45,    40,    40,    40,    44,    40,    44,
      15,    20,    24,    26,    27,    28,    29,    30,    33,    34,
      36,    37,    39,    40,    41,    42,    43,    47,    48,    52,
      53,    58,    62,    68,    75,    76,    77,    80,    81,    82,
      83,    84,    32,    56,    44,    46,    72,    73,    54,    54,
      44,    53,    81,    83,    44,    54,    81,    83,    52,    81,
      84,    52,    52,    79,    81,    83,    79,    81,    83,    52,
      81,    81,    81,    81,    59,    69,    70,    72,    81,    82,
      81,    52,    58,    75,    58,    75,    54,    41,    13,    14,
      16,    17,    18,    19,    45,    46,    47,    48,    49,    50,
      51,    53,    44,    52,    61,    81,    83,    46,    55,    81,
      83,    54,    81,    83,    54,    44,    81,    81,    55,    81,
      12,    38,    12,    55,    59,    40,    59,    59,    56,    59,
      79,    58,    75,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    83,    59,
      79,    54,    72,    54,    54,    59,    59,    81,    83,    59,
      81,    81,    72,    69,    12,    52,    59,    56,    59,    21,
      25,    37,    12,    63,    72,    59,    79,    74,    74,    81,
      81,    74,    63,    59,    22,    23,    78,    60,    60,    74,
      52,    74,    60,    60,    81,    81,    81,    59,    21,    74,
      78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    66,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    68,    69,    70,    70,    71,    71,    72,    72,
      72,    72,    72,    72,    73,    73,    74,    74,    74,    74,
      75,    75,    75,    75,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    78,    78,
      78,    79,    79,    79,    79,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      82,    82,    83,    83,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     3,     2,     5,     4,
       5,     4,     4,     4,     6,     5,     6,     5,     5,     4,
       4,     2,     1,     2,     3,     1,     3,     4,     1,     1,
       1,     1,     1,     3,     3,     1,     4,     3,     3,     2,
       1,     1,     3,     2,     1,     6,     7,     6,     2,     1,
       2,     2,     1,     1,     2,     1,     9,     9,     2,     6,
       7,     3,     1,     3,     1,     1,     2,     1,     1,     1,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     2,
       1,     3,     4,     1,     6,     5,     4,     3,     4,     3,
       6,     7,     1,     3,     1,     4
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
        yyerror (compiler, YY_("syntax error: cannot back up")); \
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
                  Type, Value, compiler); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, std::shared_ptr<cdk::compiler> compiler)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (compiler);
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
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, std::shared_ptr<cdk::compiler> compiler)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep, compiler);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule, std::shared_ptr<cdk::compiler> compiler)
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
                                              , compiler);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, compiler); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, std::shared_ptr<cdk::compiler> compiler)
{
  YYUSE (yyvaluep);
  YYUSE (compiler);
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
yyparse (std::shared_ptr<cdk::compiler> compiler)
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
#line 89 "l22_parser.y"
                              { compiler->ast(new cdk::sequence_node(LINE)); }
#line 1704 "l22_parser.tab.c"
    break;

  case 3:
#line 90 "l22_parser.y"
                              { compiler->ast(new cdk::sequence_node(LINE, new l22::program_node(LINE, (yyvsp[0].node)), (yyvsp[-1].sequence))); }
#line 1710 "l22_parser.tab.c"
    break;

  case 4:
#line 91 "l22_parser.y"
                              { compiler->ast((yyvsp[0].sequence)); }
#line 1716 "l22_parser.tab.c"
    break;

  case 5:
#line 92 "l22_parser.y"
                              { compiler->ast(new l22::program_node(LINE, (yyvsp[0].node))); }
#line 1722 "l22_parser.tab.c"
    break;

  case 6:
#line 96 "l22_parser.y"
                                   { (yyval.node) = (yyvsp[-1].block_node); }
#line 1728 "l22_parser.tab.c"
    break;

  case 7:
#line 100 "l22_parser.y"
                                                             { (yyval.node) = (yyvsp[-1].node); }
#line 1734 "l22_parser.tab.c"
    break;

  case 8:
#line 101 "l22_parser.y"
                                                             { (yyval.node) = new l22::variable_declaration_node(LINE, tPRIVATE,  (yyvsp[-4].type), *(yyvsp[-3].s), (yyvsp[-1].expression)); delete (yyvsp[-3].s); }
#line 1740 "l22_parser.tab.c"
    break;

  case 9:
#line 102 "l22_parser.y"
                                                               { (yyval.node) = new l22::variable_declaration_node(LINE, tPRIVATE,  (yyvsp[-3].type), *(yyvsp[-2].s), (yyvsp[0].expression)); delete (yyvsp[-2].s); }
#line 1746 "l22_parser.tab.c"
    break;

  case 10:
#line 103 "l22_parser.y"
                                                             { (yyval.node) = new l22::variable_declaration_node(LINE, tPRIVATE,  cdk::primitive_type::create(4, cdk::typename_type::TYPE_UNSPEC), *(yyvsp[-3].s), (yyvsp[-1].expression)); delete (yyvsp[-3].s); }
#line 1752 "l22_parser.tab.c"
    break;

  case 11:
#line 104 "l22_parser.y"
                                                               { (yyval.node) = new l22::variable_declaration_node(LINE, tPRIVATE,  cdk::primitive_type::create(4, cdk::typename_type::TYPE_UNSPEC), *(yyvsp[-2].s), (yyvsp[0].expression)); delete (yyvsp[-2].s); }
#line 1758 "l22_parser.tab.c"
    break;

  case 12:
#line 106 "l22_parser.y"
                                                             { (yyval.node) = new l22::variable_declaration_node(LINE, tUSE,  (yyvsp[-2].type), *(yyvsp[-1].s), nullptr); delete (yyvsp[-1].s); }
#line 1764 "l22_parser.tab.c"
    break;

  case 13:
#line 109 "l22_parser.y"
                                                             { (yyval.node) = new l22::variable_declaration_node(LINE, tPUBLIC,  (yyvsp[-2].type), *(yyvsp[-1].s), nullptr); delete (yyvsp[-1].s); }
#line 1770 "l22_parser.tab.c"
    break;

  case 14:
#line 110 "l22_parser.y"
                                                             { (yyval.node) = new l22::variable_declaration_node(LINE, tPUBLIC,  (yyvsp[-4].type), *(yyvsp[-3].s), (yyvsp[-1].expression)); delete (yyvsp[-3].s); }
#line 1776 "l22_parser.tab.c"
    break;

  case 15:
#line 111 "l22_parser.y"
                                                               { (yyval.node) = new l22::variable_declaration_node(LINE, tPUBLIC,  (yyvsp[-3].type), *(yyvsp[-2].s), (yyvsp[0].expression)); delete (yyvsp[-2].s); }
#line 1782 "l22_parser.tab.c"
    break;

  case 16:
#line 112 "l22_parser.y"
                                                             { (yyval.node) = new l22::variable_declaration_node(LINE, tPUBLIC,  cdk::primitive_type::create(4, cdk::typename_type::TYPE_UNSPEC), *(yyvsp[-3].s), (yyvsp[-1].expression)); delete (yyvsp[-3].s); }
#line 1788 "l22_parser.tab.c"
    break;

  case 17:
#line 113 "l22_parser.y"
                                                               { (yyval.node) = new l22::variable_declaration_node(LINE, tPUBLIC,  cdk::primitive_type::create(4, cdk::typename_type::TYPE_UNSPEC), *(yyvsp[-2].s), (yyvsp[0].expression)); delete (yyvsp[-2].s); }
#line 1794 "l22_parser.tab.c"
    break;

  case 18:
#line 114 "l22_parser.y"
                                                            { (yyval.node) = new l22::variable_declaration_node(LINE, tPUBLIC,  cdk::primitive_type::create(4, cdk::typename_type::TYPE_UNSPEC), *(yyvsp[-3].s), (yyvsp[-1].expression)); delete (yyvsp[-3].s);}
#line 1800 "l22_parser.tab.c"
    break;

  case 19:
#line 115 "l22_parser.y"
                                                          { (yyval.node) = new l22::variable_declaration_node(LINE, tPUBLIC,  cdk::primitive_type::create(4, cdk::typename_type::TYPE_UNSPEC), *(yyvsp[-2].s), (yyvsp[0].expression)); delete (yyvsp[-2].s);}
#line 1806 "l22_parser.tab.c"
    break;

  case 20:
#line 117 "l22_parser.y"
                                                             { (yyval.node) = new l22::variable_declaration_node(LINE, tFOREIGN,  (yyvsp[-2].type), *(yyvsp[-1].s), nullptr); delete (yyvsp[-1].s); }
#line 1812 "l22_parser.tab.c"
    break;

  case 21:
#line 124 "l22_parser.y"
                                                            { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node), (yyvsp[-1].sequence)); }
#line 1818 "l22_parser.tab.c"
    break;

  case 22:
#line 125 "l22_parser.y"
                                                            { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node)); }
#line 1824 "l22_parser.tab.c"
    break;

  case 23:
#line 129 "l22_parser.y"
                                        { (yyval.node) = new l22::variable_declaration_node(LINE, tPRIVATE, (yyvsp[-1].type), *(yyvsp[0].s), nullptr); delete (yyvsp[0].s); }
#line 1830 "l22_parser.tab.c"
    break;

  case 24:
#line 133 "l22_parser.y"
                                        { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node), (yyvsp[-2].sequence)); }
#line 1836 "l22_parser.tab.c"
    break;

  case 25:
#line 134 "l22_parser.y"
                                        { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node)); }
#line 1842 "l22_parser.tab.c"
    break;

  case 26:
#line 137 "l22_parser.y"
                                          { (yyval.type) = cdk::functional_type::create((yyvsp[-2].type)); }
#line 1848 "l22_parser.tab.c"
    break;

  case 27:
#line 138 "l22_parser.y"
                                          { (yyval.type) = cdk::functional_type::create(*(yyvsp[-1].types), (yyvsp[-3].type)); }
#line 1854 "l22_parser.tab.c"
    break;

  case 28:
#line 141 "l22_parser.y"
                                          { (yyval.type) = cdk::primitive_type::create(4, cdk::typename_type::TYPE_INT); }
#line 1860 "l22_parser.tab.c"
    break;

  case 29:
#line 142 "l22_parser.y"
                                          { (yyval.type) = cdk::primitive_type::create(8, cdk::typename_type::TYPE_DOUBLE); }
#line 1866 "l22_parser.tab.c"
    break;

  case 30:
#line 143 "l22_parser.y"
                                          { (yyval.type) = cdk::primitive_type::create(4, cdk::typename_type::TYPE_STRING); }
#line 1872 "l22_parser.tab.c"
    break;

  case 31:
#line 144 "l22_parser.y"
                                         { (yyval.type) = (yyvsp[0].type); }
#line 1878 "l22_parser.tab.c"
    break;

  case 32:
#line 145 "l22_parser.y"
                                          { (yyval.type) = cdk::primitive_type::create(4, cdk::typename_type::TYPE_VOID); }
#line 1884 "l22_parser.tab.c"
    break;

  case 33:
#line 146 "l22_parser.y"
                                          { (yyval.type) = cdk::reference_type::create(4, (yyvsp[-1].type)); }
#line 1890 "l22_parser.tab.c"
    break;

  case 34:
#line 150 "l22_parser.y"
                                        { (yyval.types) = (yyvsp[-2].types); (yyval.types)->push_back((yyvsp[0].type)); }
#line 1896 "l22_parser.tab.c"
    break;

  case 35:
#line 151 "l22_parser.y"
                                        { (yyval.types) = new std::vector<std::shared_ptr<cdk::basic_type>>(); (yyval.types)->push_back((yyvsp[0].type)); }
#line 1902 "l22_parser.tab.c"
    break;

  case 36:
#line 155 "l22_parser.y"
                                                      { (yyval.block_node) = new l22::block_node(LINE, (yyvsp[-2].sequence), (yyvsp[-1].sequence)); }
#line 1908 "l22_parser.tab.c"
    break;

  case 37:
#line 156 "l22_parser.y"
                                                      { (yyval.block_node) = new l22::block_node(LINE, new cdk::sequence_node(LINE), (yyvsp[-1].sequence)); }
#line 1914 "l22_parser.tab.c"
    break;

  case 38:
#line 157 "l22_parser.y"
                                                    { (yyval.block_node) = new l22::block_node(LINE, (yyvsp[-1].sequence), new cdk::sequence_node(LINE)); }
#line 1920 "l22_parser.tab.c"
    break;

  case 39:
#line 158 "l22_parser.y"
                                                      { (yyval.block_node) = new l22::block_node(LINE, new cdk::sequence_node(LINE), new cdk::sequence_node(LINE)); }
#line 1926 "l22_parser.tab.c"
    break;

  case 40:
#line 162 "l22_parser.y"
                                                      { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node)); }
#line 1932 "l22_parser.tab.c"
    break;

  case 41:
#line 163 "l22_parser.y"
                                                      { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node)); }
#line 1938 "l22_parser.tab.c"
    break;

  case 42:
#line 164 "l22_parser.y"
                                                      { std::reverse((yyvsp[0].sequence)->nodes().begin(), (yyvsp[0].sequence)->nodes().end()); (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[-2].node), (yyvsp[0].sequence)); std::reverse((yyval.sequence)->nodes().begin(), (yyval.sequence)->nodes().end()); }
#line 1944 "l22_parser.tab.c"
    break;

  case 43:
#line 165 "l22_parser.y"
                                                      { std::reverse((yyvsp[0].sequence)->nodes().begin(), (yyvsp[0].sequence)->nodes().end()); (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[-1].node), (yyvsp[0].sequence)); std::reverse((yyval.sequence)->nodes().begin(), (yyval.sequence)->nodes().end()); }
#line 1950 "l22_parser.tab.c"
    break;

  case 44:
#line 168 "l22_parser.y"
                                                       { (yyval.node) = new l22::evaluation_node(LINE, (yyvsp[0].expression)); }
#line 1956 "l22_parser.tab.c"
    break;

  case 45:
#line 169 "l22_parser.y"
                                                       { (yyval.node) = new l22::if_node(LINE, (yyvsp[-3].expression), (yyvsp[0].block_node)); }
#line 1962 "l22_parser.tab.c"
    break;

  case 46:
#line 170 "l22_parser.y"
                                                       { (yyval.node) = new l22::if_else_node(LINE, (yyvsp[-4].expression), (yyvsp[-1].block_node), (yyvsp[0].node)); }
#line 1968 "l22_parser.tab.c"
    break;

  case 47:
#line 171 "l22_parser.y"
                                                       { (yyval.node) = new l22::while_node(LINE, (yyvsp[-3].expression), (yyvsp[0].block_node)); }
#line 1974 "l22_parser.tab.c"
    break;

  case 48:
#line 172 "l22_parser.y"
                                                       { (yyval.node) = new l22::return_node(LINE, (yyvsp[0].expression)); }
#line 1980 "l22_parser.tab.c"
    break;

  case 49:
#line 176 "l22_parser.y"
                                                                           { (yyval.node) = new l22::evaluation_node(LINE, (yyvsp[0].expression)); }
#line 1986 "l22_parser.tab.c"
    break;

  case 50:
#line 177 "l22_parser.y"
                                                                           { (yyval.node) = new l22::print_node(LINE, (yyvsp[0].sequence), false); }
#line 1992 "l22_parser.tab.c"
    break;

  case 51:
#line 178 "l22_parser.y"
                                                                           { (yyval.node) = new l22::print_node(LINE, (yyvsp[0].sequence), true); }
#line 1998 "l22_parser.tab.c"
    break;

  case 52:
#line 179 "l22_parser.y"
                                                                           { (yyval.node) = new l22::again_node(LINE); }
#line 2004 "l22_parser.tab.c"
    break;

  case 53:
#line 180 "l22_parser.y"
                                                                           { (yyval.node) = new l22::stop_node(LINE); }
#line 2010 "l22_parser.tab.c"
    break;

  case 54:
#line 181 "l22_parser.y"
                                                                           { (yyval.node) = new l22::return_node(LINE, (yyvsp[0].expression)); }
#line 2016 "l22_parser.tab.c"
    break;

  case 55:
#line 182 "l22_parser.y"
                                                                           { (yyval.node) = new l22::return_node(LINE); }
#line 2022 "l22_parser.tab.c"
    break;

  case 56:
#line 183 "l22_parser.y"
                                                                           { (yyval.node) = new l22::sweep_node(LINE, (yyvsp[-7].expression), (yyvsp[-5].expression), (yyvsp[-3].expression), (yyvsp[0].expression)); }
#line 2028 "l22_parser.tab.c"
    break;

  case 57:
#line 184 "l22_parser.y"
                                                                           { (yyval.node) = new l22::with_node(LINE, (yyvsp[-7].expression), (yyvsp[-5].expression), (yyvsp[-3].expression), (yyvsp[0].expression)); }
#line 2034 "l22_parser.tab.c"
    break;

  case 58:
#line 187 "l22_parser.y"
                                                   { (yyval.node) = (yyvsp[0].block_node); }
#line 2040 "l22_parser.tab.c"
    break;

  case 59:
#line 188 "l22_parser.y"
                                                   { (yyval.node) = new l22::if_node(LINE, (yyvsp[-3].expression), (yyvsp[0].block_node)); }
#line 2046 "l22_parser.tab.c"
    break;

  case 60:
#line 189 "l22_parser.y"
                                                   { (yyval.node) = new l22::if_else_node(LINE, (yyvsp[-4].expression), (yyvsp[-1].block_node), (yyvsp[0].node)); }
#line 2052 "l22_parser.tab.c"
    break;

  case 61:
#line 191 "l22_parser.y"
                                        { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].expression), (yyvsp[-2].sequence)); }
#line 2058 "l22_parser.tab.c"
    break;

  case 62:
#line 192 "l22_parser.y"
                                        { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].expression)); }
#line 2064 "l22_parser.tab.c"
    break;

  case 63:
#line 193 "l22_parser.y"
                                        { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].expression), (yyvsp[-2].sequence)); }
#line 2070 "l22_parser.tab.c"
    break;

  case 64:
#line 194 "l22_parser.y"
                                        { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].expression)); }
#line 2076 "l22_parser.tab.c"
    break;

  case 65:
#line 197 "l22_parser.y"
                                        { (yyval.s) = (yyvsp[0].s); }
#line 2082 "l22_parser.tab.c"
    break;

  case 66:
#line 198 "l22_parser.y"
                                        { (yyval.s) = new std::string(*(yyvsp[-1].s) + *(yyvsp[0].s)); delete (yyvsp[-1].s); delete (yyvsp[0].s); }
#line 2088 "l22_parser.tab.c"
    break;

  case 67:
#line 201 "l22_parser.y"
                                        { (yyval.expression) = new cdk::integer_node(LINE, (yyvsp[0].i)); }
#line 2094 "l22_parser.tab.c"
    break;

  case 68:
#line 202 "l22_parser.y"
                                        { (yyval.expression) = new cdk::double_node(LINE, (yyvsp[0].d)); }
#line 2100 "l22_parser.tab.c"
    break;

  case 69:
#line 203 "l22_parser.y"
                                        { (yyval.expression) = new cdk::string_node(LINE, (yyvsp[0].s)); }
#line 2106 "l22_parser.tab.c"
    break;

  case 70:
#line 204 "l22_parser.y"
                                        { (yyval.expression) = new l22::nullptr_node(LINE); }
#line 2112 "l22_parser.tab.c"
    break;

  case 71:
#line 205 "l22_parser.y"
                                        { (yyval.expression) = new l22::identity_node(LINE, (yyvsp[0].expression)); }
#line 2118 "l22_parser.tab.c"
    break;

  case 72:
#line 206 "l22_parser.y"
                                        { (yyval.expression) = new cdk::neg_node(LINE, (yyvsp[0].expression)); }
#line 2124 "l22_parser.tab.c"
    break;

  case 73:
#line 207 "l22_parser.y"
                                       { (yyval.expression) = new cdk::add_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2130 "l22_parser.tab.c"
    break;

  case 74:
#line 208 "l22_parser.y"
                                       { (yyval.expression) = new cdk::sub_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2136 "l22_parser.tab.c"
    break;

  case 75:
#line 209 "l22_parser.y"
                                       { (yyval.expression) = new cdk::mul_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2142 "l22_parser.tab.c"
    break;

  case 76:
#line 210 "l22_parser.y"
                                       { (yyval.expression) = new cdk::mod_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2148 "l22_parser.tab.c"
    break;

  case 77:
#line 211 "l22_parser.y"
                                       { (yyval.expression) = new cdk::div_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2154 "l22_parser.tab.c"
    break;

  case 78:
#line 212 "l22_parser.y"
                                       { (yyval.expression) = new cdk::lt_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2160 "l22_parser.tab.c"
    break;

  case 79:
#line 213 "l22_parser.y"
                                       { (yyval.expression) = new cdk::gt_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2166 "l22_parser.tab.c"
    break;

  case 80:
#line 214 "l22_parser.y"
                                       { (yyval.expression) = new cdk::ge_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2172 "l22_parser.tab.c"
    break;

  case 81:
#line 215 "l22_parser.y"
                                        { (yyval.expression) = new cdk::le_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2178 "l22_parser.tab.c"
    break;

  case 82:
#line 216 "l22_parser.y"
                                       { (yyval.expression) = new cdk::ne_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2184 "l22_parser.tab.c"
    break;

  case 83:
#line 217 "l22_parser.y"
                                       { (yyval.expression) = new cdk::eq_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2190 "l22_parser.tab.c"
    break;

  case 84:
#line 218 "l22_parser.y"
                                        { (yyval.expression) = new cdk::or_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2196 "l22_parser.tab.c"
    break;

  case 85:
#line 219 "l22_parser.y"
                                        { (yyval.expression) = new cdk::and_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2202 "l22_parser.tab.c"
    break;

  case 86:
#line 220 "l22_parser.y"
                                        { (yyval.expression) = new cdk::not_node(LINE, (yyvsp[0].expression)); }
#line 2208 "l22_parser.tab.c"
    break;

  case 87:
#line 221 "l22_parser.y"
                                        { (yyval.expression) = (yyvsp[-1].expression); }
#line 2214 "l22_parser.tab.c"
    break;

  case 88:
#line 222 "l22_parser.y"
                                        { (yyval.expression) = new l22::stack_alloc_node(LINE, (yyvsp[-1].expression));}
#line 2220 "l22_parser.tab.c"
    break;

  case 89:
#line 223 "l22_parser.y"
                                        { (yyval.expression) = new l22::address_of_node(LINE, (yyvsp[-1].lvalue)); }
#line 2226 "l22_parser.tab.c"
    break;

  case 90:
#line 224 "l22_parser.y"
                                        { (yyval.expression) = new cdk::rvalue_node(LINE, (yyvsp[0].lvalue)); }
#line 2232 "l22_parser.tab.c"
    break;

  case 91:
#line 225 "l22_parser.y"
                                        { (yyval.expression) = new cdk::assignment_node(LINE, (yyvsp[-2].lvalue), (yyvsp[0].expression)); }
#line 2238 "l22_parser.tab.c"
    break;

  case 92:
#line 226 "l22_parser.y"
                                        { (yyval.expression) = new l22::sizeof_node(LINE, (yyvsp[-1].expression)); }
#line 2244 "l22_parser.tab.c"
    break;

  case 93:
#line 227 "l22_parser.y"
                                        { (yyval.expression) = new l22::read_node(LINE); }
#line 2250 "l22_parser.tab.c"
    break;

  case 94:
#line 230 "l22_parser.y"
                                                { (yyval.expression) = new l22::function_call_node(LINE, (yyvsp[-4].expression), (yyvsp[-1].sequence)); }
#line 2256 "l22_parser.tab.c"
    break;

  case 95:
#line 231 "l22_parser.y"
                                                { (yyval.expression) = new l22::function_call_node(LINE, (yyvsp[-3].expression), new cdk::sequence_node(LINE)); }
#line 2262 "l22_parser.tab.c"
    break;

  case 96:
#line 232 "l22_parser.y"
                                                { (yyval.expression) = new l22::function_call_node(LINE, new cdk::rvalue_node(LINE, (yyvsp[-3].lvalue)), (yyvsp[-1].sequence)); }
#line 2268 "l22_parser.tab.c"
    break;

  case 97:
#line 233 "l22_parser.y"
                                                { (yyval.expression) = new l22::function_call_node(LINE, new cdk::rvalue_node(LINE, (yyvsp[-2].lvalue)), new cdk::sequence_node(LINE)); }
#line 2274 "l22_parser.tab.c"
    break;

  case 98:
#line 234 "l22_parser.y"
                                                { (yyval.expression) = new l22::function_call_node(LINE, nullptr, (yyvsp[-1].sequence)); }
#line 2280 "l22_parser.tab.c"
    break;

  case 99:
#line 235 "l22_parser.y"
                                                { (yyval.expression) = new l22::function_call_node(LINE, nullptr, new cdk::sequence_node(LINE)); }
#line 2286 "l22_parser.tab.c"
    break;

  case 100:
#line 240 "l22_parser.y"
                                                                 { (yyval.expression) = new l22::function_definition_node(LINE, new cdk::sequence_node(LINE), (yyvsp[-2].type), (yyvsp[0].block_node)); }
#line 2292 "l22_parser.tab.c"
    break;

  case 101:
#line 241 "l22_parser.y"
                                                                 { (yyval.expression) = new l22::function_definition_node(LINE, (yyvsp[-5].sequence), (yyvsp[-2].type), (yyvsp[0].block_node)); /* TODO : add functional type */}
#line 2298 "l22_parser.tab.c"
    break;

  case 102:
#line 244 "l22_parser.y"
                                    { (yyval.expression) = (yyvsp[0].expression); }
#line 2304 "l22_parser.tab.c"
    break;

  case 103:
#line 245 "l22_parser.y"
                                    { (yyval.expression) = new cdk::assignment_node(LINE, (yyvsp[-2].lvalue), (yyvsp[0].expression)); }
#line 2310 "l22_parser.tab.c"
    break;

  case 104:
#line 248 "l22_parser.y"
                                   { (yyval.lvalue) = new cdk::variable_node(LINE, (yyvsp[0].s)); }
#line 2316 "l22_parser.tab.c"
    break;

  case 105:
#line 249 "l22_parser.y"
                                   { (yyval.lvalue) = new l22::index_node(LINE, (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 2322 "l22_parser.tab.c"
    break;


#line 2326 "l22_parser.tab.c"

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
      yyerror (compiler, YY_("syntax error"));
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
        yyerror (compiler, yymsgp);
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
                      yytoken, &yylval, compiler);
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
                  yystos[yystate], yyvsp, compiler);
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
  yyerror (compiler, YY_("memory exhausted"));
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
                  yytoken, &yylval, compiler);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, compiler);
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
#line 252 "l22_parser.y"

