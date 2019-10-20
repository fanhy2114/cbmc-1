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


/* Substitute the variable and function names.  */
#define yyparse         yyansi_cparse
#define yylex           yyansi_clex
#define yyerror         yyansi_cerror
#define yydebug         yyansi_cdebug
#define yynerrs         yyansi_cnerrs

#define yylval          yyansi_clval
#define yychar          yyansi_cchar

/* Copy the first part of user declarations.  */
#line 1 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:339  */


/*
 * This parser is based on:
 *
 * c5.y, a ANSI-C grammar written by James A. Roskind.
 * "Portions Copyright (c) 1989, 1990 James A. Roskind".
 * (http://www.idiom.com/free-compilers/,
 * ftp://ftp.infoseek.com/ftp/pub/c++grammar/,
 * ftp://ftp.sra.co.jp/.a/pub/cmd/c++grammar2.0.tar.gz)
 */

#ifdef ANSI_C_DEBUG
#define YYDEBUG 1
#endif
#define PARSER ansi_c_parser

#include "ansi_c_parser.h"

int yyansi_clex();
extern char *yyansi_ctext;

#include "parser_static.inc"

#include "literals/convert_integer_literal.h"

#include "ansi_c_y.tab.h"

// statements have right recursion, deep nesting of statements thus
// requires more stack space
#define YYMAXDEPTH 25600

/*** token declaration **************************************************/
#line 257 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:339  */

/************************************************************************/
/*** rules **************************************************************/
/************************************************************************/

#line 114 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:339  */

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
   by #include "ansi_c_y.tab.hpp".  */
#ifndef YY_YYANSI_C_HOME_FHY18_GITREPO_CBMC_5_11_CMAKE_BUILD_RELEASE_SRC_ANSI_C_ANSI_C_Y_TAB_HPP_INCLUDED
# define YY_YYANSI_C_HOME_FHY18_GITREPO_CBMC_5_11_CMAKE_BUILD_RELEASE_SRC_ANSI_C_ANSI_C_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yyansi_cdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_AUTO = 258,
    TOK_BOOL = 259,
    TOK_COMPLEX = 260,
    TOK_BREAK = 261,
    TOK_CASE = 262,
    TOK_CHAR = 263,
    TOK_CONST = 264,
    TOK_CONTINUE = 265,
    TOK_DEFAULT = 266,
    TOK_DO = 267,
    TOK_DOUBLE = 268,
    TOK_ELSE = 269,
    TOK_ENUM = 270,
    TOK_EXTERN = 271,
    TOK_FLOAT = 272,
    TOK_FOR = 273,
    TOK_GOTO = 274,
    TOK_IF = 275,
    TOK_INLINE = 276,
    TOK_INT = 277,
    TOK_LONG = 278,
    TOK_REGISTER = 279,
    TOK_RESTRICT = 280,
    TOK_RETURN = 281,
    TOK_SHORT = 282,
    TOK_SIGNED = 283,
    TOK_SIZEOF = 284,
    TOK_STATIC = 285,
    TOK_STRUCT = 286,
    TOK_SWITCH = 287,
    TOK_TYPEDEF = 288,
    TOK_UNION = 289,
    TOK_UNSIGNED = 290,
    TOK_VOID = 291,
    TOK_VOLATILE = 292,
    TOK_WCHAR_T = 293,
    TOK_WHILE = 294,
    TOK_ARROW = 295,
    TOK_INCR = 296,
    TOK_DECR = 297,
    TOK_SHIFTLEFT = 298,
    TOK_SHIFTRIGHT = 299,
    TOK_LE = 300,
    TOK_GE = 301,
    TOK_EQ = 302,
    TOK_NE = 303,
    TOK_ANDAND = 304,
    TOK_OROR = 305,
    TOK_ELLIPSIS = 306,
    TOK_MULTASSIGN = 307,
    TOK_DIVASSIGN = 308,
    TOK_MODASSIGN = 309,
    TOK_PLUSASSIGN = 310,
    TOK_MINUSASSIGN = 311,
    TOK_SHLASSIGN = 312,
    TOK_SHRASSIGN = 313,
    TOK_ANDASSIGN = 314,
    TOK_XORASSIGN = 315,
    TOK_ORASSIGN = 316,
    TOK_IDENTIFIER = 317,
    TOK_TYPEDEFNAME = 318,
    TOK_INTEGER = 319,
    TOK_FLOATING = 320,
    TOK_CHARACTER = 321,
    TOK_STRING = 322,
    TOK_ASM_STRING = 323,
    TOK_INT8 = 324,
    TOK_INT16 = 325,
    TOK_INT32 = 326,
    TOK_INT64 = 327,
    TOK_PTR32 = 328,
    TOK_PTR64 = 329,
    TOK_TYPEOF = 330,
    TOK_GCC_AUTO_TYPE = 331,
    TOK_GCC_FLOAT16 = 332,
    TOK_GCC_FLOAT32 = 333,
    TOK_GCC_FLOAT32X = 334,
    TOK_GCC_FLOAT80 = 335,
    TOK_GCC_FLOAT64 = 336,
    TOK_GCC_FLOAT64X = 337,
    TOK_GCC_FLOAT128 = 338,
    TOK_GCC_FLOAT128X = 339,
    TOK_GCC_INT128 = 340,
    TOK_GCC_DECIMAL32 = 341,
    TOK_GCC_DECIMAL64 = 342,
    TOK_GCC_DECIMAL128 = 343,
    TOK_GCC_ASM = 344,
    TOK_GCC_ASM_PAREN = 345,
    TOK_GCC_ATTRIBUTE = 346,
    TOK_GCC_ATTRIBUTE_ALIGNED = 347,
    TOK_GCC_ATTRIBUTE_TRANSPARENT_UNION = 348,
    TOK_GCC_ATTRIBUTE_PACKED = 349,
    TOK_GCC_ATTRIBUTE_VECTOR_SIZE = 350,
    TOK_GCC_ATTRIBUTE_MODE = 351,
    TOK_GCC_ATTRIBUTE_GNU_INLINE = 352,
    TOK_GCC_ATTRIBUTE_WEAK = 353,
    TOK_GCC_ATTRIBUTE_ALIAS = 354,
    TOK_GCC_ATTRIBUTE_SECTION = 355,
    TOK_GCC_ATTRIBUTE_NORETURN = 356,
    TOK_GCC_ATTRIBUTE_CONSTRUCTOR = 357,
    TOK_GCC_ATTRIBUTE_DESTRUCTOR = 358,
    TOK_GCC_ATTRIBUTE_FALLTHROUGH = 359,
    TOK_GCC_ATTRIBUTE_USED = 360,
    TOK_GCC_LABEL = 361,
    TOK_MSC_ASM = 362,
    TOK_MSC_BASED = 363,
    TOK_CW_VAR_ARG_TYPEOF = 364,
    TOK_BUILTIN_VA_ARG = 365,
    TOK_GCC_BUILTIN_TYPES_COMPATIBLE_P = 366,
    TOK_CLANG_BUILTIN_CONVERTVECTOR = 367,
    TOK_OFFSETOF = 368,
    TOK_ALIGNOF = 369,
    TOK_MSC_TRY = 370,
    TOK_MSC_FINALLY = 371,
    TOK_MSC_EXCEPT = 372,
    TOK_MSC_LEAVE = 373,
    TOK_MSC_DECLSPEC = 374,
    TOK_MSC_FORCEINLINE = 375,
    TOK_INTERFACE = 376,
    TOK_CDECL = 377,
    TOK_STDCALL = 378,
    TOK_FASTCALL = 379,
    TOK_CLRCALL = 380,
    TOK_FORALL = 381,
    TOK_EXISTS = 382,
    TOK_ACSL_FORALL = 383,
    TOK_ACSL_EXISTS = 384,
    TOK_ARRAY_OF = 385,
    TOK_CPROVER_BITVECTOR = 386,
    TOK_CPROVER_FLOATBV = 387,
    TOK_CPROVER_FIXEDBV = 388,
    TOK_CPROVER_ATOMIC = 389,
    TOK_CPROVER_BOOL = 390,
    TOK_CPROVER_THROW = 391,
    TOK_CPROVER_CATCH = 392,
    TOK_CPROVER_TRY = 393,
    TOK_CPROVER_FINALLY = 394,
    TOK_CPROVER_ID = 395,
    TOK_CPROVER_LOOP_INVARIANT = 396,
    TOK_CPROVER_REQUIRES = 397,
    TOK_CPROVER_ENSURES = 398,
    TOK_IMPLIES = 399,
    TOK_EQUIVALENT = 400,
    TOK_TRUE = 401,
    TOK_FALSE = 402,
    TOK_REAL = 403,
    TOK_IMAG = 404,
    TOK_ALIGNAS = 405,
    TOK_ATOMIC_TYPE_QUALIFIER = 406,
    TOK_ATOMIC_TYPE_SPECIFIER = 407,
    TOK_GENERIC = 408,
    TOK_IMAGINARY = 409,
    TOK_NORETURN = 410,
    TOK_STATIC_ASSERT = 411,
    TOK_THREAD_LOCAL = 412,
    TOK_NULLPTR = 413,
    TOK_CONSTEXPR = 414,
    TOK_SCANNER_ERROR = 415,
    TOK_SCANNER_EOF = 416,
    TOK_CATCH = 417,
    TOK_CHAR16_T = 418,
    TOK_CHAR32_T = 419,
    TOK_CLASS = 420,
    TOK_DELETE = 421,
    TOK_DECLTYPE = 422,
    TOK_EXPLICIT = 423,
    TOK_FRIEND = 424,
    TOK_MUTABLE = 425,
    TOK_NAMESPACE = 426,
    TOK_NEW = 427,
    TOK_NOEXCEPT = 428,
    TOK_OPERATOR = 429,
    TOK_PRIVATE = 430,
    TOK_PROTECTED = 431,
    TOK_PUBLIC = 432,
    TOK_TEMPLATE = 433,
    TOK_THIS = 434,
    TOK_THROW = 435,
    TOK_TYPEID = 436,
    TOK_TYPENAME = 437,
    TOK_TRY = 438,
    TOK_USING = 439,
    TOK_VIRTUAL = 440,
    TOK_SCOPE = 441,
    TOK_DOTPM = 442,
    TOK_ARROWPM = 443,
    TOK_UNARY_TYPE_PREDICATE = 444,
    TOK_BINARY_TYPE_PREDICATE = 445,
    TOK_MSC_UUIDOF = 446,
    TOK_MSC_IF_EXISTS = 447,
    TOK_MSC_IF_NOT_EXISTS = 448,
    TOK_UNDERLYING_TYPE = 449
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yyansi_clval;

int yyansi_cparse (void);

#endif /* !YY_YYANSI_C_HOME_FHY18_GITREPO_CBMC_5_11_CMAKE_BUILD_RELEASE_SRC_ANSI_C_ANSI_C_Y_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 360 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  149
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6797

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  219
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  207
/* YYNRULES -- Number of rules.  */
#define YYNRULES  612
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1106

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   449

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   209,     2,     2,     2,   211,   204,     2,
     195,   196,   205,   206,   197,   207,   199,   210,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   198,   218,
     212,   217,   213,   216,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   200,     2,   201,   214,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   202,   215,   203,   208,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   265,   265,   271,   272,   285,   289,   293,   297,   301,
     306,   307,   308,   309,   315,   316,   317,   319,   320,   321,
     322,   323,   324,   325,   329,   339,   343,   350,   357,   367,
     374,   388,   398,   407,   417,   425,   432,   439,   453,   461,
     471,   479,   493,   494,   500,   501,   507,   508,   512,   522,
     523,   525,   534,   543,   549,   555,   561,   568,   578,   592,
     593,   597,   602,   610,   611,   617,   623,   628,   638,   643,
     648,   653,   658,   663,   668,   673,   679,   688,   689,   696,
     701,   709,   710,   712,   714,   719,   720,   722,   727,   728,
     730,   735,   736,   738,   740,   742,   747,   748,   750,   755,
     756,   761,   762,   767,   768,   773,   774,   779,   780,   788,
     789,   797,   798,   803,   804,   811,   821,   822,   824,   826,
     828,   830,   832,   834,   836,   838,   840,   842,   847,   848,
     853,   858,   859,   865,   871,   877,   878,   879,   883,   895,
     894,   907,   906,   919,   918,   934,   941,   945,   949,   954,
     957,   963,   961,   979,   977,   993,  1011,  1009,  1026,  1027,
    1028,  1029,  1030,  1034,  1035,  1036,  1037,  1038,  1042,  1043,
    1047,  1048,  1052,  1059,  1060,  1067,  1074,  1075,  1082,  1083,
    1087,  1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,  1099,
    1104,  1112,  1113,  1117,  1118,  1119,  1123,  1124,  1131,  1135,
    1139,  1143,  1150,  1154,  1158,  1162,  1170,  1174,  1178,  1186,
    1187,  1191,  1198,  1202,  1206,  1213,  1217,  1221,  1228,  1232,
    1236,  1243,  1247,  1251,  1258,  1263,  1271,  1272,  1276,  1280,
    1287,  1296,  1297,  1301,  1305,  1312,  1316,  1320,  1327,  1328,
    1332,  1336,  1340,  1344,  1348,  1352,  1359,  1364,  1372,  1375,
    1379,  1380,  1381,  1382,  1383,  1384,  1385,  1386,  1387,  1388,
    1410,  1411,  1412,  1413,  1414,  1415,  1416,  1417,  1418,  1419,
    1420,  1421,  1422,  1423,  1424,  1425,  1426,  1427,  1428,  1429,
    1430,  1431,  1432,  1433,  1434,  1435,  1436,  1437,  1443,  1450,
    1457,  1461,  1462,  1463,  1467,  1472,  1484,  1481,  1502,  1498,
    1522,  1518,  1535,  1537,  1542,  1544,  1546,  1548,  1550,  1552,
    1554,  1556,  1558,  1560,  1562,  1564,  1566,  1568,  1574,  1577,
    1581,  1582,  1589,  1591,  1597,  1600,  1604,  1605,  1613,  1616,
    1620,  1625,  1633,  1634,  1635,  1639,  1646,  1657,  1665,  1692,
    1700,  1711,  1714,  1725,  1734,  1746,  1749,  1753,  1765,  1763,
    1777,  1774,  1787,  1798,  1807,  1810,  1814,  1819,  1824,  1831,
    1842,  1846,  1853,  1854,  1863,  1868,  1875,  1884,  1889,  1897,
    1905,  1912,  1920,  1929,  1937,  1944,  1952,  1960,  1967,  1975,
    1983,  1991,  1998,  2009,  2010,  2014,  2018,  2023,  2027,  2036,
    2040,  2050,  2051,  2057,  2066,  2074,  2082,  2084,  2092,  2093,
    2101,  2107,  2122,  2129,  2136,  2144,  2151,  2159,  2171,  2172,
    2173,  2174,  2175,  2176,  2177,  2178,  2179,  2180,  2181,  2182,
    2183,  2187,  2196,  2208,  2216,  2223,  2232,  2243,  2251,  2258,
    2266,  2278,  2285,  2290,  2297,  2312,  2321,  2330,  2341,  2342,
    2346,  2358,  2371,  2370,  2402,  2419,  2426,  2428,  2430,  2432,
    2437,  2459,  2464,  2471,  2475,  2481,  2492,  2498,  2507,  2516,
    2524,  2532,  2537,  2545,  2555,  2557,  2558,  2559,  2560,  2572,
    2578,  2585,  2593,  2602,  2614,  2618,  2622,  2626,  2632,  2642,
    2647,  2655,  2659,  2663,  2669,  2679,  2684,  2692,  2696,  2700,
    2708,  2713,  2721,  2725,  2729,  2734,  2742,  2750,  2752,  2756,
    2757,  2761,  2766,  2770,  2771,  2775,  2779,  2786,  2813,  2818,
    2821,  2825,  2830,  2838,  2843,  2844,  2848,  2855,  2859,  2863,
    2867,  2875,  2879,  2883,  2891,  2896,  2906,  2907,  2908,  2912,
    2918,  2924,  2932,  2940,  2947,  2954,  2961,  2971,  2972,  2973,
    2977,  2984,  2994,  3002,  3003,  3007,  3008,  3013,  3017,  3018,
    3023,  3031,  3033,  3043,  3044,  3049,  3055,  3060,  3068,  3070,
    3075,  3085,  3086,  3091,  3092,  3096,  3097,  3102,  3109,  3124,
    3130,  3132,  3142,  3149,  3154,  3155,  3156,  3160,  3161,  3165,
    3167,  3178,  3177,  3200,  3201,  3209,  3208,  3234,  3241,  3251,
    3259,  3266,  3275,  3284,  3297,  3305,  3315,  3320,  3332,  3343,
    3351,  3361,  3366,  3378,  3389,  3391,  3393,  3395,  3401,  3410,
    3412,  3414,  3415
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"auto\"", "\"bool\"", "\"complex\"",
  "\"break\"", "\"case\"", "\"char\"", "\"const\"", "\"continue\"",
  "\"default\"", "\"do\"", "\"double\"", "\"else\"", "\"enum\"",
  "\"extern\"", "\"float\"", "\"for\"", "\"goto\"", "\"if\"", "\"inline\"",
  "\"int\"", "\"long\"", "\"register\"", "\"restrict\"", "\"return\"",
  "\"short\"", "\"signed\"", "\"sizeof\"", "\"static\"", "\"struct\"",
  "\"switch\"", "\"typedef\"", "\"union\"", "\"unsigned\"", "\"void\"",
  "\"volatile\"", "\"wchar_t\"", "\"while\"", "\"->\"", "\"++\"", "\"--\"",
  "\"<<\"", "\">>\"", "\"<=\"", "\">=\"", "\"==\"", "\"!=\"", "\"&&\"",
  "\"||\"", "\"...\"", "\"*=\"", "\"/=\"", "\"%=\"", "\"+=\"", "\"-=\"",
  "\"<<=\"", "\">>=\"", "\"&=\"", "\"^=\"", "\"|=\"", "TOK_IDENTIFIER",
  "TOK_TYPEDEFNAME", "TOK_INTEGER", "TOK_FLOATING", "TOK_CHARACTER",
  "TOK_STRING", "TOK_ASM_STRING", "\"__int8\"", "\"__int16\"",
  "\"__int32\"", "\"__int64\"", "\"__ptr32\"", "\"__ptr64\"", "\"typeof\"",
  "\"__auto_type\"", "\"_Float16\"", "\"_Float32\"", "\"_Float32x\"",
  "\"__float80\"", "\"_Float64\"", "\"_Float64x\"", "\"_Float128\"",
  "\"_Float128x\"", "\"__int128\"", "\"_Decimal32\"", "\"_Decimal64\"",
  "\"_Decimal128\"", "\"__asm__\"", "\"__asm__ (with parentheses)\"",
  "\"__attribute__\"", "\"aligned\"", "\"transparent_union\"",
  "\"packed\"", "\"vector_size\"", "\"mode\"", "\"__gnu_inline__\"",
  "\"weak\"", "\"alias\"", "\"section\"", "\"noreturn\"",
  "\"constructor\"", "\"destructor\"", "\"fallthrough\"", "\"used\"",
  "\"__label__\"", "\"__asm\"", "\"__based\"", "\"_var_arg_typeof\"",
  "\"__builtin_va_arg\"", "\"__builtin_types_compatible_p\"",
  "\"__builtin_convertvector\"", "\"__offsetof\"", "\"__alignof__\"",
  "\"__try\"", "\"__finally\"", "\"__except\"", "\"__leave\"",
  "\"__declspec\"", "\"__forceinline\"", "\"__interface\"", "\"__cdecl\"",
  "\"__stdcall\"", "\"__fastcall\"", "\"__clrcall\"", "\"forall\"",
  "\"exists\"", "\"\\\\forall\"", "\"\\\\exists\"", "\"array_of\"",
  "\"__CPROVER_bitvector\"", "\"__CPROVER_floatbv\"",
  "\"__CPROVER_fixedbv\"", "\"__CPROVER_atomic\"", "\"__CPROVER_bool\"",
  "\"__CPROVER_throw\"", "\"__CPROVER_catch\"", "\"__CPROVER_try\"",
  "\"__CPROVER_finally\"", "\"__CPROVER_ID\"",
  "\"__CPROVER_loop_invariant\"", "\"__CPROVER_requires\"",
  "\"__CPROVER_ensures\"", "\"==>\"", "\"<==>\"", "\"TRUE\"", "\"FALSE\"",
  "\"__real__\"", "\"__imag__\"", "\"_Alignas\"", "\"_Atomic\"",
  "\"_Atomic()\"", "\"_Generic\"", "\"_Imaginary\"", "\"_Noreturn\"",
  "\"_Static_assert\"", "\"_Thread_local\"", "\"nullptr\"",
  "\"constexpr\"", "TOK_SCANNER_ERROR", "TOK_SCANNER_EOF", "\"catch\"",
  "\"char16_t\"", "\"char32_t\"", "\"class\"", "\"delete\"",
  "\"decltype\"", "\"explicit\"", "\"friend\"", "\"mutable\"",
  "\"namespace\"", "\"new\"", "\"noexcept\"", "\"operator\"",
  "\"private\"", "\"protected\"", "\"public\"", "\"template\"", "\"this\"",
  "\"throw\"", "\"typeid\"", "\"typename\"", "\"try\"", "\"using\"",
  "\"virtual\"", "\"::\"", "\".*\"", "\"->*\"", "TOK_UNARY_TYPE_PREDICATE",
  "TOK_BINARY_TYPE_PREDICATE", "\"__uuidof\"", "\"__if_exists\"",
  "\"__if_not_exists\"", "\"__underlying_type\"", "'('", "')'", "','",
  "':'", "'.'", "'['", "']'", "'{'", "'}'", "'&'", "'*'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'='",
  "';'", "$accept", "grammar", "identifier", "typedef_name", "integer",
  "floating", "character", "string", "constant", "primary_expression",
  "generic_selection", "generic_assoc_list", "generic_association",
  "gcc_builtin_expressions", "clang_builtin_expressions",
  "cw_builtin_expressions", "offsetof", "offsetof_member_designator",
  "quantifier_expression", "loop_invariant_opt", "requires_opt",
  "ensures_opt", "statement_expression", "postfix_expression",
  "member_name", "argument_expression_list", "unary_expression",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "logical_implication_expression", "logical_equivalence_expression",
  "conditional_expression", "assignment_expression", "comma_expression",
  "constant_expression", "comma_expression_opt", "declaration",
  "static_assert_declaration", "default_declaring_list", "@1", "@2", "$@3",
  "post_declarator_attribute", "post_declarator_attributes",
  "post_declarator_attributes_opt", "declaring_list", "@4", "@5", "$@6",
  "declaration_specifier", "type_specifier", "declaration_qualifier_list",
  "type_qualifier_list", "attribute_type_qualifier_list",
  "declaration_qualifier", "type_qualifier", "alignas_specifier",
  "attribute_or_type_qualifier",
  "attribute_or_type_qualifier_or_storage_class",
  "attribute_type_qualifier_storage_class_list",
  "basic_declaration_specifier", "basic_type_specifier",
  "sue_declaration_specifier", "sue_type_specifier",
  "typedef_declaration_specifier", "typeof_declaration_specifier",
  "atomic_declaration_specifier", "typedef_type_specifier",
  "typeof_specifier", "typeof_type_specifier", "atomic_specifier",
  "atomic_type_specifier", "msc_decl_identifier", "msc_decl_modifier",
  "msc_declspec_seq", "msc_declspec", "msc_declspec_opt", "storage_class",
  "basic_type_name", "elaborated_type_name", "array_of_construct",
  "pragma_packed", "aggregate_name", "$@7", "$@8", "$@9", "aggregate_key",
  "gcc_type_attribute", "gcc_attribute", "gcc_attribute_list",
  "gcc_attribute_specifier", "gcc_type_attribute_opt",
  "gcc_type_attribute_list", "member_declaration_list_opt",
  "member_declaration_list", "member_declaration",
  "member_default_declaring_list", "member_declaring_list",
  "member_declarator", "member_identifier_declarator",
  "bit_field_size_opt", "bit_field_size", "enum_name", "$@10", "$@11",
  "enum_key", "enumerator_list_opt", "enumerator_list",
  "enumerator_declaration", "enumerator_value_opt", "parameter_type_list",
  "KnR_parameter_list", "KnR_parameter", "parameter_list",
  "parameter_declaration", "identifier_or_typedef_name", "type_name",
  "initializer_opt", "initializer", "initializer_list",
  "initializer_list_opt", "designated_initializer", "designator",
  "statement", "declaration_statement", "labeled_statement",
  "statement_attribute", "compound_statement", "compound_scope",
  "statement_list", "expression_statement", "selection_statement",
  "declaration_or_expression_statement", "iteration_statement", "$@12",
  "jump_statement", "gcc_local_label_statement", "gcc_local_label_list",
  "gcc_local_label", "gcc_asm_statement", "msc_asm_statement",
  "msc_seh_statement", "cprover_exception_statement",
  "volatile_or_goto_opt", "gcc_asm_commands", "gcc_asm_assembler_template",
  "gcc_asm_outputs", "gcc_asm_output", "gcc_asm_output_list",
  "gcc_asm_inputs", "gcc_asm_input", "gcc_asm_input_list",
  "gcc_asm_clobbered_registers", "gcc_asm_clobbered_register",
  "gcc_asm_clobbered_registers_list", "gcc_asm_labels",
  "gcc_asm_labels_list", "gcc_asm_label", "translation_unit",
  "external_definition_list", "external_definition", "asm_definition",
  "function_definition", "function_body", "KnR_parameter_header_opt",
  "KnR_parameter_header", "KnR_parameter_declaration",
  "KnR_declaration_qualifier_list", "KnR_basic_declaration_specifier",
  "KnR_typedef_declaration_specifier", "KnR_sue_declaration_specifier",
  "KnR_declaration_specifier", "KnR_parameter_declaring_list",
  "function_head", "declarator", "paren_attribute_declarator",
  "typedef_declarator", "parameter_typedef_declarator",
  "clean_typedef_declarator", "clean_postfix_typedef_declarator",
  "paren_typedef_declarator", "paren_postfix_typedef_declarator",
  "simple_paren_typedef_declarator", "identifier_declarator",
  "unary_identifier_declarator", "postfix_identifier_declarator",
  "paren_identifier_declarator", "abstract_declarator",
  "parameter_abstract_declarator", "postfixing_abstract_declarator",
  "$@13", "parameter_postfixing_abstract_declarator", "$@14",
  "array_abstract_declarator", "unary_abstract_declarator",
  "parameter_unary_abstract_declarator", "postfix_abstract_declarator",
  "parameter_postfix_abstract_declarator", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,    40,    41,    44,    58,    46,
      91,    93,   123,   125,    38,    42,    43,    45,   126,    33,
      47,    37,    60,    62,    94,   124,    63,    61,    59
};
# endif

#define YYPACT_NINF -981

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-981)))

#define YYTABLE_NINF -582

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1886,  -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,
    -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,
    -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,
    -981,  -981,  -143,   494,  -981,  -981,  -981,  -981,  -981,  -981,
    -981,  -981,  -981,  -981,  -981,  -981,  -981,  -110,   -77,   -57,
     -48,  -981,    49,  -168,   -45,   -13,  -981,  -981,   137,   103,
    -981,   105,  -981,   123,  -981,   727,   241,  1988,   727,  -981,
     328,  -981,    -7,  -981,   115,   -85,    25,    63,   157,  2245,
    2245,  -981,  -981,  6379,  6379,  3693,  3693,  3693,  3693,  3693,
    3693,   456,  1279,   456,  1279,  -981,  -981,    -7,  -981,  -981,
    -981,    -7,  -981,  -981,    -7,  -981,  1886,  -981,  -981,  -981,
     194,  -981,  -981,  -981,    85,  4333,   942,   999,    85,   -33,
    -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,   275,   155,
    5141,    11,    -7,  5141,  5141,  5141,  -981,  4333,    -7,  5141,
     160,   259,   161,  1988,  -981,  -981,  -981,  -981,  -981,  -981,
    -981,  -981,    -7,  -981,   727,  -981,    -7,  -981,  -981,    54,
    -981,   824,    -7,  -981,  -981,    -7,    -7,  -981,    -7,  -981,
    -981,    91,    -7,  -981,   456,   456,  -981,    -7,  -981,  -981,
     163,    -7,    -7,  -981,    -7,    -7,  -981,  -981,  -981,    -7,
      -7,    -7,    -7,    -7,  1369,    -7,  1369,    -7,  -981,   265,
      34,  -981,   200,   231,    20,  3475,  -981,  -981,   213,  5343,
    5377,  5377,    34,  -981,  -981,  -981,  -981,   226,   230,   245,
     248,   263,  5478,  -981,  -981,  -981,  -981,  5141,  5141,   283,
    4232,  5141,  5141,  5141,  5141,  5141,  5141,  -981,  -981,  -981,
    -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,
    -981,    88,  -981,  1107,   349,    46,   522,   -11,   590,   266,
     276,   282,   467,   -23,  -981,  -103,  -981,  -981,   451,  6559,
     327,   846,  1496,  -981,   174,   340,   343,    85,   942,  1634,
    -981,  -981,  -981,  -981,   100,  -981,   -33,   333,  -981,   382,
    2400,   462,  -981,  -981,  -981,  -981,  -981,   390,  -981,    41,
     392,   -17,   156,   180,   475,   407,   413,   415,    85,  -981,
    -981,  -981,  -981,  -981,  -981,   494,  -981,  -981,  -981,  -981,
    -981,  -981,   398,  -981,  1369,  1369,  -981,   398,  -981,  -981,
    -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,
      34,  -981,  -981,   423,   -60,  5141,   428,  -981,  6090,     9,
    5935,  -981,  4434,  -981,   426,  -981,  -981,  3624,  -981,  -981,
    5242,  4232,  -981,  4232,  -981,  -981,  -981,  -981,    -7,  5141,
      -7,  5141,    -7,  4232,  -981,   430,   440,  5625,  5625,  -981,
    -981,  5141,   482,   449,   471,   472,  -981,  -981,  -981,  -981,
    -981,  -981,    34,  -981,  -981,  4535,    34,  5141,  5141,  5141,
    5141,  5141,  5141,  5141,  5141,  5141,  5141,  5141,  5141,  5141,
    5141,  5141,  5141,  5141,  5141,  5141,  5141,  5141,  5141,  5141,
    5141,  5141,  5141,  5141,  5141,  5141,  5141,  5141,  5141,  4636,
    -981,  5141,   198,  2548,  6646,   456,   456,  -981,  -981,  -981,
     384,   846,   473,    85,    85,   485,   400,   846,  -981,  -981,
     661,   667,   505,  -981,  4737,   486,   512,  -981,  -981,   514,
     525,  -981,  -981,   530,   533,  -981,  -981,  -981,  -981,  -981,
    -981,   499,  -981,   464,  -981,  -981,  -981,  -981,   542,   544,
    -981,  -981,  -981,  5141,  -981,   398,   -33,   398,   398,  4737,
    -981,  -981,   528,   534,    34,  -981,   548,  -981,   558,  5141,
    -981,  -981,   494,  6469,  1279,  6379,  3693,  -981,  6090,  -981,
    6240,  6379,  3693,  -981,   494,    42,  -981,   506,  -981,   262,
     262,  2090,  2090,   561,   563,  -981,  -981,  -981,  -981,   567,
    -981,  4838,   577,   566,   589,   595,   596,   604,   615,   617,
     624,  5625,  5625,  1747,    63,   157,  2245,  2245,  1747,   626,
    -981,  4939,  -981,  2703,  -981,  -981,  -981,  -981,   536,  -981,
    -981,   189,  -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,
    -981,  -981,  -981,  -981,  -981,  -981,   349,   349,    46,    46,
     522,   522,   522,   522,   -11,   -11,   590,   266,   276,   282,
     467,  -981,  -981,  5141,   455,  -981,   214,  1527,  -981,  -981,
    -981,  -981,  -981,  -981,  -981,    85,  -981,  -981,  -981,  -981,
     421,  -981,  -981,   275,  4131,  -981,  -981,  -981,  5141,  5141,
       9,   765,   770,   631,  2400,   646,   666,   647,  5141,  5141,
     670,  -981,  -981,  -981,  -981,  -981,   179,   669,    -7,   665,
     676,  -981,    -7,    34,  -981,   685,  -981,  -981,    -7,    -7,
    -981,    -7,  -981,    -7,    34,    34,    -7,    -7,    -7,  -981,
     494,  -981,  6090,     9,   304,  1426,   727,  -981,    -7,  -981,
    -981,  -981,  -981,  -981,    -7,  -981,   871,  1790,    -7,  -981,
      -7,  -981,  6090,  5780,  -981,  -981,  -981,   686,   686,  -981,
      -7,    -7,    -7,    34,   686,  5141,  5141,  5141,  -981,   -33,
     -33,  -981,  -981,  -981,    44,  4131,  -981,   674,  5141,   680,
     706,  3117,  -981,  5040,   710,  3727,   718,   724,   731,   100,
     726,    34,   -21,  -981,  -981,   712,  -981,  -981,   738,   104,
     741,   721,  -981,   742,  -981,  -981,  -981,  -981,  -981,  2910,
    -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,  -981,
    5141,  -981,  -981,  5141,   747,   749,   750,  1527,  -981,  -981,
    -981,  -981,   751,   754,    34,  5141,   761,   762,  -981,   752,
     767,  -981,  3828,   551,   556,   775,   777,   780,  -981,  -981,
    -981,  -981,    45,   203,   234,  -981,   398,  -981,   757,  6559,
     774,   443,  -981,    48,    66,   179,  -981,    -7,    34,   766,
     781,  -981,  -981,  -981,  -981,  -981,    -7,    -7,  -981,  -981,
    -981,  -981,  -981,  6090,  -981,  -981,   793,   794,  1426,  -981,
    -981,  -981,  1790,  -981,  -981,  -981,  -981,  -981,   801,   802,
     806,    14,  -981,  -180,   -98,   805,   576,  -981,   808,   810,
     807,  -981,   -25,  -981,  3117,   970,   817,   795,    89,  5141,
    -981,   114,  5141,  5141,  -981,   -71,   819,   119,  -981,  -981,
     948,   659,  -981,   130,  -981,  3117,  -981,  -981,  -981,  -981,
    -981,    85,    85,  -981,  -981,    -8,   821,  -981,    -3,  4737,
    3929,  -981,    34,  5141,  4737,  -981,  -981,  -981,  -981,  -981,
    -981,   591,  -981,  -981,  -981,  -981,  1017,  2399,    -7,  -981,
    1191,  -981,  1017,  -981,   814,  -981,  -981,  5141,  -981,    -7,
    -981,  -981,    94,  -981,  -981,  -981,  -981,  -981,    34,  -981,
      34,  5141,  -981,  -981,  5141,  -981,    44,  5141,  4030,  -981,
    5141,  3117,  -981,   825,  3324,  -981,  -981,   600,  -981,   609,
     826,   275,   955,  2246,    34,  -981,   822,  -981,   832,  -981,
    -981,   813,  -981,  -981,  -981,    34,   833,  -981,   835,    27,
     837,  5141,  -981,  -981,  -981,  -981,  -981,    24,  -981,  -981,
      45,  5141,  -981,    -7,   840,  -981,    -7,   840,  -981,  -981,
    -981,    -7,  -981,  -981,   841,  -981,  -981,  -981,   255,  -981,
    -981,  -981,  -981,   845,  -981,  5141,  -981,  -981,  5141,  3117,
    3117,   898,   851,   847,   853,  -981,  -981,  -981,  5141,  -981,
    -981,  -981,   852,  5141,    -8,    34,   857,  -981,   858,   275,
     859,   271,  5141,  -981,   842,  -981,  -981,    -7,  -981,  -981,
      -7,  -981,  -981,  -981,  3117,   620,   838,  1044,  -981,   868,
    3117,   856,  -981,   873,   629,   275,   634,  -981,   874,  5141,
      27,  -981,  -981,   880,    34,  -981,  -981,   278,    45,  -981,
    -981,  -981,  -981,   898,  5141,  3117,  5141,  -981,  -981,   860,
    -981,   886,  -981,   275,   638,  -981,   275,  -981,   890,  -981,
    -981,   887,   870,   895,  -981,   900,   233,  -981,  5141,   899,
    -981,  -981,    34,  -981,  -981,   898,  -981,  -981,   649,  5141,
    -981,  3117,  -981,   664,  -981,  -981
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     497,   253,   285,   286,   265,   181,   281,   353,   251,   268,
     255,   260,   267,   254,   182,   266,   282,   252,   302,   250,
     303,   283,   284,   183,     3,     5,   261,   262,   263,   264,
     185,   186,     0,     0,   269,   270,   271,   274,   272,   273,
     275,   276,   277,   278,   279,   280,   257,     0,     0,     0,
       0,   259,     0,     0,     0,     0,   184,   290,     0,     0,
     180,     0,   323,     0,   256,     0,     0,     0,     0,   504,
       0,   572,   324,   502,     0,     0,     0,     0,     0,     0,
       0,   173,   188,   158,   163,   159,   164,   160,   161,   162,
     165,   226,   166,   231,   167,   258,   168,   324,   209,   293,
     291,   324,   170,   292,   324,     2,   498,   499,   503,   501,
      44,   532,   563,   565,   564,   324,     0,     0,   545,   149,
     539,   538,   544,   547,   548,   543,   553,   537,     0,     0,
       0,     0,   324,     0,     0,     0,     4,   324,   324,     0,
       0,     0,     0,     0,   191,   176,   192,   566,   567,     1,
     326,   221,   325,   135,     0,   137,   324,   136,   133,   149,
     134,   149,   324,   172,   179,   324,   324,   178,   324,   206,
     171,   139,   324,   174,   227,   232,   169,   324,   210,   175,
     141,   324,   324,   204,   324,   324,   208,   211,   207,   324,
     324,   324,   324,   324,   229,   324,   234,   324,   202,   248,
     348,   500,     0,    46,   585,     0,   569,   579,   583,     0,
       0,     0,     0,     6,     7,     8,     9,     0,     0,     0,
       0,     0,     0,   431,   431,   431,   431,     0,     0,     0,
     324,     0,     0,     0,     0,     0,     0,    14,    10,    11,
      12,    13,    15,    49,    23,    18,    19,    20,    21,    22,
      17,    63,    77,    81,    85,    88,    91,    96,    99,   101,
     103,   105,   107,   109,   111,   113,   116,   128,     0,     0,
       0,     0,     0,   561,     0,     0,     0,     0,     0,     0,
     542,   549,   556,   546,   464,   148,   150,     0,   146,     0,
     318,     0,   237,   235,   236,   247,   243,   238,   244,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   570,   573,
     506,   177,   568,   327,   143,     0,   151,   153,   213,   216,
     219,   198,   389,   222,   228,   233,   203,   389,   200,   201,
     199,   205,   214,   217,   220,   223,   212,   215,   218,   249,
     296,   383,   384,     0,   324,     0,     0,   431,   584,     0,
       0,   587,     0,   130,     0,   193,   196,     0,   195,   194,
       0,   324,    73,   324,    64,    65,   453,    67,   324,     0,
     324,     0,   324,   324,    75,     0,     0,     0,     0,    79,
      80,     0,     0,     0,     0,     0,    66,    68,    69,    70,
      71,    72,     0,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,   385,   387,   163,   164,   165,   166,   167,   225,
       0,     0,     0,   551,   558,     0,     0,     0,   550,   557,
     466,   465,     0,   147,     0,     0,   307,   305,   304,     0,
       0,   310,   311,     0,     0,   314,   315,   316,   317,   319,
     320,     0,   187,     0,   246,   245,   294,   287,     0,     0,
     189,   190,   230,     0,   571,   389,   149,   389,   389,     0,
     140,   142,     0,   300,   354,   352,     0,    81,     0,     0,
     508,   507,     0,     0,   173,   163,   165,   514,   580,   511,
       0,   526,   527,   528,     0,     0,   366,     0,   364,   369,
     376,   373,   380,     0,   362,   367,   589,   590,   588,     0,
     197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,     0,    48,   131,    59,    60,    54,    51,     0,    61,
      53,     0,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   117,    82,    83,    84,    86,    87,    89,    90,
      94,    95,    92,    93,    97,    98,   100,   102,   104,   106,
     108,   110,   112,     0,     0,   129,   585,   594,   598,   386,
     576,   574,   575,   388,   562,   540,   552,   560,   559,   554,
       0,   467,   468,     0,   397,   391,   155,   505,     0,     0,
       0,     0,     0,     0,   318,     0,     0,     0,     0,     0,
       0,   144,   156,   152,   154,   390,   324,     0,   324,     0,
     355,   356,   324,   354,    45,     0,   530,   515,   324,   324,
     512,   324,   516,   324,     0,     0,   324,   324,   324,   529,
       0,   513,   509,     0,   585,   599,   603,   372,   324,   370,
     611,   577,   578,   379,   324,   377,   585,   599,   324,   374,
     324,   381,   509,     0,   591,   593,   592,    74,     0,    32,
     324,   324,   324,     0,    76,     0,     0,   431,    39,   149,
     149,   139,   141,    41,   324,   397,    78,     0,     0,     0,
       0,   131,   442,     0,     0,     0,     0,     0,     0,   464,
       0,     0,     0,   431,   460,     0,   431,   428,    14,   324,
     132,     0,   421,     0,   432,   410,   408,   420,   409,   131,
     411,   412,   413,   414,   416,   415,   417,   418,   419,    52,
       0,    50,   115,     0,     0,     0,     0,   595,   596,   541,
     555,   474,     0,   469,     0,     0,    14,     0,   398,   396,
       0,   394,     0,     0,     0,     0,     0,     0,   322,   321,
     240,   239,     0,     0,     0,   138,   389,   334,     0,     0,
       0,   324,   330,     0,     0,   324,   301,   324,   358,   360,
       0,    47,   518,   521,   522,   517,   324,   324,   519,   520,
     523,   531,   582,   510,   365,   584,     0,     0,   600,   601,
     371,   378,   600,   375,   382,   586,   363,   368,     0,     0,
       0,     0,    34,     0,     0,     0,     0,    25,     0,   396,
       0,   447,     0,   446,   131,     0,     0,     0,     0,     0,
     448,     0,     0,   131,   430,     0,     0,     0,   451,   457,
       0,     0,   461,     0,   434,   131,   429,   433,    62,   114,
     606,   604,   605,   597,   145,   476,   470,   402,     0,     0,
       0,   392,     0,     0,     0,   400,   308,   306,   309,   312,
     313,     0,   288,   289,   157,   335,   341,     0,   324,   331,
       0,   333,   341,   332,     0,   349,   357,     0,   359,   324,
     524,   525,   609,   610,   602,    29,    30,    31,     0,    33,
       0,     0,    38,    40,     0,    24,   324,     0,     0,    57,
       0,   131,   426,     0,   131,   445,   444,     0,   449,     0,
       0,     0,     0,   318,     0,   450,     0,   431,     0,   431,
     431,   170,   423,   608,   607,     0,     0,   479,   475,   482,
     471,     0,   403,   401,   393,   395,   407,     0,   399,   241,
       0,     0,   338,   324,   345,   336,   324,   345,   295,   337,
     339,   324,   361,   351,   585,   612,    37,    35,     0,    28,
      26,    27,    58,     0,   424,     0,   438,   439,   131,   131,
     131,    42,     0,     0,     0,   452,   456,   459,     0,   462,
     463,   422,     0,     0,     0,     0,     0,   485,   481,   488,
     472,     0,     0,   405,     0,   347,   342,   324,   346,   344,
     324,   297,   295,    36,   131,     0,     0,   435,   437,     0,
     131,     0,   455,     0,     0,     0,     0,   480,     0,     0,
       0,   489,   490,   487,   493,   473,   404,     0,     0,   340,
     343,   299,   425,    42,   131,   131,     0,   440,   454,     0,
     431,     0,   477,     0,     0,   486,     0,   496,   492,   494,
     406,     0,     0,     0,   436,     0,     0,   458,     0,     0,
     483,   491,     0,   242,   441,    42,    43,   427,     0,     0,
     495,   131,   478,     0,   443,   484
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -981,  -981,     0,    30,  -981,  -981,  -981,  -108,  -981,  -320,
    -981,  -981,   172,  -981,  -981,  -981,  -981,  -981,  -981,  -980,
    -981,  -981,  -981,  -981,  -269,  -981,   507,   760,   463,   469,
     422,   457,   677,   679,   682,   675,   678,  -981,   459,  -981,
    -342,   839,   496,  -167,  -832,    28,  -560,  -981,  -981,  -981,
    -981,   823,  -981,  -118,  -981,  -981,  -981,  -981,     5,   167,
       8,   779,   -55,    76,  1250,  -981,  -121,   746,  -981,  -981,
    -216,  -981,  -119,  -981,  -981,  -981,  -107,   -61,   -58,   -39,
     339,  -469,   809,  -981,   911,  -981,  1271,   -73,   -34,  -981,
      79,  -981,  -981,  -981,  -981,   603,  -981,   493,  -981,   224,
     618,   -87,   323,  -981,   329,  -981,  -981,   217,   223,   149,
    -651,  -981,  -981,  -981,   622,   487,  -981,   336,  -981,  -981,
    -981,   477,  -981,   452,  -163,   -51,  -302,  -445,   431,   433,
    -830,  -981,   -83,   207,    56,  -981,  -191,   630,  -981,   209,
    -981,  -981,  -981,  -981,  -981,  -981,  -981,  -210,  -981,  -981,
    -981,  -981,   425,   204,  -981,  -981,   132,  -981,  -981,    98,
    -981,  -981,    75,  -981,  -981,  -981,    61,  -981,  -981,  1083,
    -981,  -981,  -981,   508,   849,  -493,  -981,  -981,  -981,  -981,
    -981,  -981,  -981,    23,  1078,  -981,  -104,  -102,  -981,   -24,
    -981,  -100,    72,   -14,  -981,     4,  -409,  -431,   785,  -981,
    -459,  -981,  -981,   602,  -523,   605,  -414
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    70,   237,   118,   238,   239,   240,   241,   242,   243,
     244,   836,   837,   245,   246,   247,   248,   831,   249,  1040,
     203,   347,   250,   251,   767,   558,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   730,   615,   731,   732,    74,    75,   322,   327,
     485,   285,   286,   316,    76,   487,   488,   786,   544,   545,
     546,   547,   279,   163,    81,    82,   145,   356,   357,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,   297,   298,   299,    95,   340,    96,    97,    98,    99,
    1031,   100,   492,   637,   638,   101,   469,   470,   471,   150,
     269,   152,   790,   791,   792,   793,   794,   972,   975,  1027,
     973,   103,   343,   496,   104,   639,   640,   641,   908,   523,
     517,   518,   524,   525,   733,   838,   490,   768,   769,   770,
     771,   772,   734,   735,   736,   737,   738,   385,   739,   740,
     741,   998,   742,   846,   743,   744,   857,  1077,   745,   746,
     747,   748,   452,   762,   763,   876,   957,   958,   960,  1017,
    1018,  1020,  1052,  1053,  1055,  1078,  1079,   105,   106,   107,
     108,   109,   501,   812,   813,   509,   510,   511,   512,   513,
     514,   515,   110,   974,   120,   121,   122,   123,   124,   125,
     126,   446,   127,   112,   113,   114,   599,   819,   445,   349,
     207,   350,   208,   601,   671,   602,   672
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   287,   367,   498,   627,    77,   168,   177,    79,   616,
     182,   185,   143,   281,   275,   650,   277,   431,   165,   174,
     289,   940,   311,   922,   603,   491,   930,   426,    73,   274,
      72,    48,   133,    71,   416,   417,   292,   344,   354,   384,
     166,   175,   428,   317,   635,   169,   178,   859,   961,   366,
     965,   140,   115,   434,   918,   835,   119,   284,    48,   216,
     670,   670,   670,   670,   270,    71,   292,    71,    71,   141,
     292,    24,   111,   293,   294,  1022,   788,    71,    71,    71,
      71,   300,  -581,  1082,    48,   128,   305,   306,   669,   675,
     679,   681,   276,   282,   216,    62,    24,    25,   965,   431,
     159,   161,   140,   293,   294,   923,    71,   293,   294,   162,
     172,    77,   154,   429,    79,  1101,    71,    71,   129,   450,
     141,   427,    62,   556,   941,    24,    25,   560,   392,   393,
     394,   942,   505,   155,    73,    48,    72,   451,   130,   147,
     148,   816,  -350,    71,   284,    48,   273,   131,    62,    58,
     435,   171,   180,   816,    71,   134,   500,   645,   311,   181,
    -581,   186,   436,   189,   190,   191,  1036,    78,   281,   275,
     384,   440,   384,   931,    58,   448,   275,   493,   111,   383,
     431,   860,   384,   631,   477,   633,   634,   135,   758,   147,
     529,   274,   955,   532,   431,    48,  -533,  -533,   962,    62,
     341,   418,   419,    58,   136,   670,   670,   295,   296,    62,
     919,   437,   341,   920,   921,   312,   348,   670,   670,    24,
      25,   431,   156,   698,   102,  1023,   314,  1015,   703,   435,
     342,   788,  1083,  -535,  -535,   788,    24,   474,   296,   660,
     708,   506,   342,   157,   710,   900,   976,   276,   282,   976,
     817,   752,   412,   413,   276,   449,  -533,   140,   116,    62,
     661,   132,   817,   902,   140,    48,   901,   949,   117,   950,
      48,    71,    71,    78,    71,   141,  -581,    68,    71,    71,
     204,   158,   141,   395,   903,   205,   431,   396,   397,   984,
     437,   146,   505,  -535,   205,    24,    25,    58,   137,    72,
     138,   273,  -384,   170,   179,  -536,  -536,   936,   273,   142,
     533,   431,   534,   891,    58,    71,   944,   535,   139,   537,
     650,   539,   540,  1028,    24,    25,  1028,   885,   149,    62,
     102,   642,   938,   153,    62,    63,   202,   945,   486,   275,
     341,   146,   216,   288,   147,   275,   442,   610,   873,   516,
     290,   312,   116,   431,  -581,   519,   308,   478,   521,   670,
     177,   185,   117,   670,   310,  -536,    24,   146,   632,    65,
     342,    68,   174,    58,   346,   160,   313,   431,    72,    67,
      72,   479,  -328,   288,    50,   288,   431,   914,    68,   435,
     751,   914,   554,   596,   175,   345,   554,   787,   205,   178,
     431,   506,    58,   597,   892,   543,   548,    72,    72,   596,
     348,   869,   598,   360,   205,   667,   673,   276,   179,   597,
     179,   368,   555,   276,   832,   369,   555,   140,   598,   359,
     177,   431,   185,   140,   963,   893,   432,   653,   657,   968,
     370,    71,   174,   371,    58,   141,   505,    71,   168,   177,
     437,   141,   431,   985,   204,   309,  1033,   664,   372,   205,
     165,   174,   205,   172,   175,     5,   505,   665,   431,   178,
     422,   273,  1056,   168,   177,   431,   666,   273,   381,  1080,
     642,    14,   166,   175,   894,   165,   174,   169,   178,   292,
     423,   806,   807,    23,   341,   877,   146,   424,   313,   664,
     815,  1024,    71,   146,   205,   761,   384,   166,   175,   665,
     288,   858,   169,   178,    71,   502,   425,   520,   666,    71,
      71,    71,    71,   439,   342,   646,   293,   294,   625,    30,
      31,   626,   861,   172,    48,   863,   443,   659,    72,   444,
     651,   842,   757,   435,    71,    71,    71,    71,   179,   179,
     454,   162,   172,   728,   409,   506,    24,    25,   366,   410,
     411,   281,   275,   435,    49,   414,   415,   699,   700,   695,
     696,    72,    72,   434,   102,   506,   162,   172,   455,   204,
     604,   359,   317,   729,   205,   473,   652,   656,   658,  1081,
      56,   668,   674,   678,   680,   204,   609,   505,    62,    63,
     205,   102,   102,   481,   437,   476,    59,    60,   438,   482,
     818,   268,   483,   966,   766,   489,   204,   760,   701,   702,
     775,   205,   822,   499,   437,   494,   291,   527,   845,   301,
     302,   303,   541,   304,    58,   642,   311,   420,   421,   828,
     829,   830,   542,   341,   555,   551,  -329,   430,   431,   986,
     140,   987,   431,   753,   341,   341,   867,   179,   472,   431,
      71,   787,   140,   516,    71,    71,    71,   552,   141,   605,
     435,   480,   431,   342,   553,   502,    71,    71,   550,   431,
     141,   608,   436,   811,   342,   342,   612,   438,   519,   116,
     151,   521,    72,   554,   435,   623,   624,   311,   611,   117,
     613,   311,   662,   663,   617,   766,   506,   618,    68,   619,
     288,   728,    72,    72,   448,   198,   362,   364,   365,   199,
     620,   341,   200,   555,  1085,   621,   382,   179,   622,   374,
     636,   437,   749,   750,  1005,   555,  -298,   147,   148,   728,
     982,   729,   628,   847,   629,   170,   179,   886,   431,   147,
     643,   342,   887,   431,   644,   437,  1007,   682,  1009,  1010,
     683,   932,   687,   993,   554,   102,   102,   956,   684,   729,
     170,   179,   925,   926,   315,   947,   948,   102,   686,    80,
     318,   366,   952,   319,   320,   688,   321,   969,   970,    24,
     323,   689,  1012,   690,   555,   326,   999,   431,   341,   328,
     329,   691,   330,   331,  1025,  1000,   431,   332,   333,   334,
     335,   336,   692,   337,   693,   338,  1063,   431,    71,    72,
     694,   146,    71,   704,   177,  1070,   431,   778,   342,   502,
    1072,   431,   776,   761,  1090,   431,   174,   777,   580,   581,
     582,   583,   780,    72,   728,  1102,   431,   438,   994,   502,
     520,  1016,  1048,   375,   376,   377,   378,   382,   175,   382,
    1105,   431,   781,   178,   782,   728,   785,    58,   797,   382,
     194,   795,   196,   798,   729,   576,   577,   584,   585,  1087,
     766,   801,   554,   578,   579,    80,   591,   592,   705,   146,
     312,   366,   841,   561,   312,   729,    71,    71,   843,   206,
      71,   146,    71,   283,   844,   849,   956,   102,    24,    25,
     555,  1051,   555,   852,   284,    48,  1037,  1038,   554,   853,
     554,   856,    65,   288,   288,   594,   206,   172,   766,   366,
     862,   728,    67,    24,   854,   102,  -383,  1071,   431,   864,
     865,    68,  1016,   870,   341,   871,   872,   874,   555,   880,
     555,  1062,   875,   324,   325,   341,   896,  1067,   555,   -59,
     879,   729,   495,   102,    72,  1089,  -534,  -534,  1051,   977,
     881,   888,   977,   889,   342,   895,   890,   898,   307,    62,
     502,   146,  1084,   907,   909,   342,    58,   379,   380,   912,
     913,   386,   387,   388,   389,   390,   391,   915,   916,   728,
     728,   438,   917,   924,    24,    25,   927,   928,     5,   933,
     929,    58,   934,   935,   943,   341,   946,   981,  1104,   959,
     995,   438,  1001,  1003,    14,  1006,  -534,  1008,  1013,   729,
     729,  1011,  1014,    48,   728,  1019,    23,   815,   971,  1039,
     728,   271,   146,  1034,   353,   342,   146,  1041,   433,  1043,
    1042,   272,  1049,  1045,   341,  1050,  1064,  1054,  1065,  1058,
      68,    24,    25,  1066,   729,   728,   676,   815,   102,  1069,
     729,   205,    30,    31,  1068,  1073,   677,  1076,  1086,    24,
      25,  1088,    58,  1093,   342,   666,   341,  1092,  1094,   951,
      48,  1095,   341,   484,  1099,   729,  1096,    62,   990,   586,
     589,   728,   587,   530,   590,   497,   588,    49,   475,   453,
     339,  1061,   387,   654,   773,   774,   342,   779,   904,   980,
     899,   179,   342,   979,   783,   784,  1030,   503,   438,   522,
     800,   729,   655,    56,   906,   827,   839,   271,   840,    58,
     814,   996,  1097,   997,   855,  1002,  1047,   272,  1075,    59,
      60,  1091,   438,  1100,    62,   102,    68,    58,   102,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   573,
     574,   575,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   201,
     825,   833,   834,   382,   278,   280,   353,   508,   755,   353,
       0,   756,     0,     0,   117,     0,     0,     0,   536,   848,
     538,   851,   116,    68,     0,   971,     0,   600,   600,     0,
     549,     0,   117,   102,   102,     0,     0,     0,   606,   607,
       0,    68,     0,     0,   559,     0,     0,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,     0,     0,
       0,     0,     0,    24,   789,     0,   796,     0,   102,   497,
     799,   878,     0,     0,   102,     0,   802,   803,     0,   804,
     595,   805,     0,     0,   808,   809,   810,     0,     0,     0,
       0,     0,     1,     0,     0,     0,   820,   503,     0,   102,
       0,   387,   821,   353,     0,     8,   823,     0,   824,     0,
      10,     0,     0,    13,     0,     0,     0,     0,     0,    17,
       0,   706,    19,     0,     0,     0,     0,   144,     0,     0,
       0,     0,   630,     0,   408,   102,     0,     0,   353,   164,
     173,    58,     0,   164,   183,   164,   187,   164,   164,   164,
     192,     0,     0,     0,     0,   937,     0,   151,   939,     0,
     167,   176,     0,   497,   167,   184,   167,   188,   167,   167,
     167,   193,     0,   195,     0,   197,     0,   144,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,   967,
       0,   754,   600,     0,     0,     0,    65,     0,     0,   971,
     759,     0,     0,   144,    14,     0,    67,     0,    50,    51,
       0,     0,     0,     0,     0,    68,    23,     0,     0,   789,
       0,     0,     0,   789,     0,   905,     0,   988,     0,     0,
       0,     0,     0,     0,   910,   911,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,    64,     0,     0,     0,
       0,   503,    30,    31,   173,     0,   173,     0,     0,     0,
       0,    14,     0,   353,     0,   355,     0,  1021,     0,     0,
      48,   503,   522,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   358,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
       0,  1035,     0,     0,     0,     0,     0,     0,     0,    30,
      31,     0,     0,    56,  1044,     5,     0,     0,     0,  1046,
       0,     0,     0,   497,     0,     0,   978,    48,  1057,    59,
      60,    14,   144,     0,    62,     0,     0,   983,     0,   144,
       0,     0,     0,    23,    49,     0,     5,     0,     0,     0,
       0,     0,   600,     0,   353,  1074,     0,   353,     0,     0,
       0,     0,    14,     0,     0,     0,     0,     0,    24,    25,
      56,     0,     0,     0,    23,     0,    58,     0,   897,    30,
      31,     0,     0,     0,   173,   173,    59,    60,     0,     0,
       0,    62,     0,     0,  1098,     0,     0,    48,     0,   868,
       0,  1026,   503,     0,  1029,  1103,     0,     0,   504,  1032,
      30,    31,     0,     0,    49,     0,     0,   355,     0,     0,
       0,   353,     0,     0,     0,     0,     0,     0,    48,   507,
       0,   664,     0,     0,     0,     0,   205,     0,   358,     0,
      56,   665,     0,     0,     0,    49,    58,     0,     0,     0,
     666,     0,     0,     5,     0,  1059,    59,    60,  1060,     0,
       0,    62,     0,     0,     0,     0,   953,   954,     0,    14,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     0,    59,    60,     0,
       0,     0,    62,   173,   183,   187,   192,     0,     0,     0,
       0,   441,     0,     0,     0,     0,    24,    25,     0,     0,
       0,   272,     0,     0,     0,     0,     0,    30,    31,     0,
      68,     0,     0,     0,     0,     0,     0,     0,   353,   353,
       0,     0,   596,   353,     0,    48,     0,   205,     0,     0,
       0,     0,   597,     0,     0,     0,     0,     0,     0,     0,
       0,   598,    49,     0,     0,     0,   353,     0,     0,     0,
       0,     0,     0,   173,     0,   183,   192,     0,   504,     0,
     164,   164,   164,   989,     0,     0,   991,   353,    56,   353,
       0,   164,   173,     0,    58,   647,   648,   649,     0,   507,
       0,   167,   167,   167,    59,    60,     0,     0,     0,    62,
       0,     0,   167,   176,     0,     0,   164,   173,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
     353,   213,   214,   215,   216,    14,     0,   167,   176,     0,
       0,     0,     0,     0,     0,     0,   497,    23,     0,   447,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   272,
       0,     0,     0,     0,     0,     0,     0,   144,    68,     0,
       0,     0,    24,     0,     0,     0,   217,   218,   219,   220,
     221,     0,     0,    30,    31,     0,     0,     0,     0,     0,
       0,     0,     0,   223,   224,   225,   226,     0,     0,     0,
       0,    48,     0,     0,     0,     0,     0,    58,     0,     1,
       2,     3,     0,     0,     4,     5,     0,     0,    49,     6,
     229,     7,     8,     9,     0,     0,     0,    10,    11,    12,
      13,    14,   504,    15,    16,   144,    17,    18,     0,    19,
      20,    21,    22,    23,    56,     0,     0,   144,     0,     0,
      58,     0,   504,   507,     0,     0,     0,     0,     0,     0,
      59,    60,   697,     0,     0,    62,     0,     0,    24,    25,
       0,     0,     0,   507,     0,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,     0,
       0,     0,     0,     0,     0,   676,     0,     0,     0,     0,
     205,     0,     0,     0,    49,   677,     0,     5,     0,     0,
       0,     0,     0,     0,   666,    50,    51,   144,     0,     0,
       0,     0,     0,    14,     0,     0,    52,    53,    54,    55,
      56,    57,     0,     0,     0,    23,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    61,     0,
       0,    62,    63,    64,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,   504,     0,     0,     0,     0,   144,     0,
       0,     0,   144,     0,     0,     0,     0,     0,     0,    48,
       0,    65,     0,     0,   507,     0,     0,     0,    66,     0,
       0,    67,     0,     1,     2,     3,    49,     0,     4,     5,
      68,     0,     0,     6,    69,     7,     8,     9,     0,     0,
       0,    10,    11,    12,    13,    14,     0,    15,    16,     0,
      17,    18,    56,    19,    20,    21,    22,    23,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
       0,     0,     0,    62,     0,     0,     0,   173,     0,     0,
       0,     0,    24,    25,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
       0,    48,     0,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,     0,     0,     0,     0,    49,     0,
       0,     0,    68,     0,     0,     0,     0,     0,     0,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,    57,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,     0,     0,    62,     0,    64,     1,     2,
       3,     0,     0,     4,     5,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,    10,    11,    12,    13,
      14,     0,    15,    16,     0,    17,    18,     0,    19,    20,
      21,    22,    23,     0,     0,   676,     0,     0,     0,     0,
     205,     0,     0,     0,     0,   677,     0,     0,     0,     0,
       0,     0,     0,     0,   666,     0,     0,    24,    25,     0,
       0,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,     0,    48,     0,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
    1004,   468,     0,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,     0,     0,
      62,     0,    64,     2,     3,     0,     0,     4,     5,     0,
       0,     0,     6,     0,     7,     0,     9,     0,     0,     0,
       0,    11,    12,     0,    14,     0,    15,    16,     0,     0,
      18,     0,     0,    20,    21,    22,    23,     0,     0,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,     0,     0,     0,     0,     0,     0,     0,    68,
       0,    24,    25,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
      48,     0,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,     0,   468,     0,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,    57,     0,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,     2,     3,    62,     0,     4,     5,     0,     0,
       0,     6,     0,     7,     0,     9,     0,     0,     0,     0,
      11,    12,     0,    14,     0,    15,    16,     0,     0,    18,
       0,     0,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,   971,     0,     0,
       0,     0,     0,     0,    67,     0,     0,     0,     0,     0,
       0,    25,     0,    68,     0,     0,     0,    26,    27,    28,
      29,    30,    31,    32,     0,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
      61,     0,     0,    62,     0,     0,     1,     2,     3,   707,
     708,     4,     5,   709,   710,   711,     6,     0,     7,     8,
       9,   712,   713,   714,    10,    11,    12,    13,    14,   715,
      15,    16,   209,    17,    18,   716,    19,    20,    21,    22,
      23,     0,   717,   596,   210,   211,     0,     0,   205,     0,
       0,     0,   212,   597,     0,     0,     0,     0,     0,     0,
       0,     0,   598,     0,     0,    24,    25,   213,   214,   215,
     216,   718,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,   719,   720,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   721,
     722,    49,   217,   218,   219,   220,   221,   222,   723,     0,
       0,   724,    50,    51,     0,     0,     0,     0,     0,   223,
     224,   225,   226,    52,    53,    54,    55,    56,    57,   725,
       0,   726,     0,    58,     0,     0,     0,     0,     0,     0,
       0,   227,   228,    59,    60,    61,   229,     0,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   230,     0,
       0,     0,     0,     0,     0,  -431,   727,   231,   232,   233,
     234,   235,   236,     1,     2,     3,   707,   708,     4,     5,
     709,   710,   711,     6,     0,     7,     8,     9,   712,   713,
     714,    10,    11,    12,    13,    14,   715,    15,    16,   209,
      17,    18,   716,    19,    20,    21,    22,    23,     0,   717,
       0,   210,   211,     0,     0,     0,     0,     0,     0,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,   213,   214,   215,   216,     0,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
     719,   720,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   721,   722,    49,   217,
     218,   219,   220,   221,   222,   723,     0,     0,   724,    50,
      51,     0,     0,     0,     0,     0,   223,   224,   225,   226,
      52,    53,    54,    55,    56,    57,   725,     0,   726,     0,
      58,     0,     0,     0,     0,     0,     0,     0,   227,   228,
      59,    60,    61,   229,     0,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   230,     0,     0,     0,     0,
       0,     0,  -431,   866,   231,   232,   233,   234,   235,   236,
       1,     2,     3,   707,   708,     4,     5,   709,   710,   711,
       6,     0,     7,     8,     9,   712,   713,   714,    10,    11,
      12,    13,    14,   715,    15,    16,   209,    17,    18,   716,
      19,    20,    21,    22,    23,     0,   717,     0,   210,   211,
       0,     0,     0,     0,     0,     0,   212,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,   213,   214,   215,   216,     0,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,   719,   720,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   721,   722,    49,   217,   218,   219,   220,
     221,   222,   723,     0,     0,   724,    50,    51,     0,     0,
       0,     0,     0,   223,   224,   225,   226,    52,    53,    54,
      55,    56,    57,   725,     0,   726,     0,    58,     0,     0,
       0,     0,     0,     0,     0,   227,   228,    59,    60,    61,
     229,     0,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   230,     0,     0,     0,     0,     0,     0,  -431,
       0,   231,   232,   233,   234,   235,   236,     1,     2,     3,
       0,     0,     4,     5,     0,     0,     0,     6,     0,     7,
       8,     9,     0,     0,     0,    10,    11,    12,    13,    14,
       0,    15,    16,   209,    17,    18,     0,    19,    20,    21,
      22,    23,     0,     0,     0,   210,   211,     0,     0,     0,
       0,     0,     0,   212,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,   213,   214,
     215,   216,     0,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,    50,    51,     0,     0,     0,     0,     0,
     223,   224,   225,   226,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,   227,   228,    59,    60,    61,   229,     1,    62,
      63,    64,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,    10,     0,     0,    13,
      14,     0,     0,     0,   209,    17,     0,     0,    19,     0,
       0,     0,    23,     0,     0,     0,   210,   211,     0,   230,
       0,     0,     0,     0,   212,     0,     0,     0,   231,   232,
     233,   234,   235,   236,     0,     0,     0,    24,     0,   213,
     214,   215,   216,     0,     0,     0,     0,     0,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,   217,   218,   219,   220,   221,   222,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,   223,   224,   225,   226,     0,     0,     0,     0,    56,
       0,     0,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,   227,   228,    59,    60,     1,   229,     0,
      62,     0,    64,     5,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,    10,     0,     0,    13,    14,
       0,     0,     0,   209,    17,     0,     0,    19,     0,     0,
       0,    23,     0,     0,     0,   210,   211,     0,     0,     0,
     230,     0,     0,   212,     0,     0,   351,     0,     0,   231,
     352,   233,   234,   235,   236,     0,    24,     0,   213,   214,
     215,   216,     0,     0,     0,     0,     1,    30,    31,     0,
       0,     0,     5,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,    46,    10,    48,     0,    13,    14,     0,
       0,     0,     0,    17,     0,     0,    19,     0,     0,     0,
      23,     0,    49,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,    50,    51,     0,     0,     0,     0,     0,
     223,   224,   225,   226,     0,     0,   209,     0,    56,     0,
       0,     0,     0,     0,    58,     0,    30,    31,   210,   211,
       0,     0,   227,   228,    59,    60,   212,   229,     0,    62,
       0,    64,    46,     0,     0,     0,     0,     0,     0,    24,
       0,   213,   214,   215,   216,     0,     0,     0,     0,     0,
       0,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,     0,     0,     0,     0,     0,   230,
       0,     0,     0,     0,     0,   528,     0,    56,   231,   232,
     233,   234,   235,   236,     0,     0,   217,   218,   219,   220,
     221,   222,     0,    59,    60,     0,     0,     0,     0,     0,
      64,     0,     0,   223,   224,   225,   226,   209,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,   210,
     211,     0,     0,     0,     0,   227,   228,   212,     0,     0,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   230,     0,     0,     0,     0,     0,     0,     0,
       0,   231,   232,   233,   234,   235,   236,   217,   218,   219,
     220,   221,   222,     0,     0,   850,     0,     0,     0,     0,
       0,     0,     0,     0,   223,   224,   225,   226,   209,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
     210,   211,     0,     0,     0,     0,   227,   228,   212,     0,
       0,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,   213,   214,   215,   216,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   230,     0,     0,     0,   882,   883,     0,
     614,     0,   231,   232,   233,   234,   235,   236,   217,   218,
     219,   220,   221,   222,     0,   884,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,   224,   225,   226,   209,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,   210,   211,     0,     0,     0,     0,   227,   228,   212,
       0,     0,   229,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,   213,   214,   215,   216,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   230,     0,     0,     0,   764,   765,
       0,   614,   964,   231,   232,   233,   234,   235,   236,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   223,   224,   225,   226,
     209,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,   210,   211,     0,     0,     0,     0,   227,   228,
     212,     0,     0,   229,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,   213,   214,   215,   216,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   230,     0,     0,     0,   764,
     765,     0,   614,   992,   231,   232,   233,   234,   235,   236,
     217,   218,   219,   220,   221,   222,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,   224,   225,
     226,   209,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,   210,   211,     0,     0,     0,     0,   227,
     228,   212,     0,     0,   229,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,   213,   214,   215,   216,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,   230,     0,     0,     0,
     764,   765,     0,   614,     0,   231,   232,   233,   234,   235,
     236,   217,   218,   219,   220,   221,   222,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   223,   224,
     225,   226,   209,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,   210,   211,     0,     0,     0,     0,
     227,   228,   212,     0,     0,   229,     0,    62,     0,     0,
       0,     0,     0,     0,     0,    24,     0,   213,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,   230,     0,     0,
       0,     0,     0,     0,  -431,     0,   231,   232,   233,   234,
     235,   236,   217,   218,   219,   220,   221,   222,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
     224,   225,   226,   209,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,   210,   211,     0,     0,     0,
       0,   227,   228,   212,     0,     0,   229,     0,    62,     0,
       0,     0,     0,     0,     0,     0,    24,     0,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   230,     0,
       0,     0,     0,     0,     0,     0,     0,   231,   232,   233,
     234,   235,   236,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     223,   224,   225,   226,   209,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,   210,   211,     0,     0,
       0,     0,   227,   228,   212,     0,     0,   229,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,   213,
     214,   215,   216,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   230,
       0,     0,     0,     0,     0,   526,     0,     0,   231,   232,
     233,   234,   235,   236,   217,   218,   219,   220,   221,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   223,   224,   225,   226,   209,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,   210,   211,     0,
       0,     0,     0,   227,   228,   212,     0,     0,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
     213,   214,   215,   216,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     230,   557,     0,     0,     0,     0,     0,     0,     0,   231,
     232,   233,   234,   235,   236,   217,   218,   219,   220,   221,
     222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   223,   224,   225,   226,   209,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,   210,   211,
       0,     0,     0,     0,   227,   228,   212,     0,     0,   229,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,   213,   214,   215,   216,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   230,     0,     0,   593,     0,     0,     0,     0,     0,
     231,   232,   233,   234,   235,   236,   217,   218,   219,   220,
     221,   222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,   224,   225,   226,   209,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,   210,
     211,     0,     0,     0,     0,   227,   228,   212,     0,     0,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   230,     0,     0,     0,     0,     0,     0,   614,
       0,   231,   232,   233,   234,   235,   236,   217,   218,   219,
     220,   221,   222,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,   224,   225,   226,   209,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
     210,   211,     0,     0,     0,     0,   227,   228,   212,     0,
       0,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,   213,   214,   215,   216,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   230,     0,     0,     0,     0,     0,   685,
       0,     0,   231,   232,   233,   234,   235,   236,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,   224,   225,   226,   209,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,   210,   211,     0,     0,     0,     0,   227,   228,   212,
       0,     0,   229,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,   213,   214,   215,   216,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   230,     0,     0,     0,     0,     0,
       0,   705,     0,   231,   232,   233,   234,   235,   236,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   223,   224,   225,   226,
     209,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,   210,   211,     0,     0,     0,     0,   227,   228,
     212,     0,     0,   229,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,   213,   214,   215,   216,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   230,     0,     0,     0,     0,
       0,     0,     0,     0,   231,   232,   233,   234,   235,   236,
     217,   218,   219,   220,   221,   222,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,   224,   225,
     226,   209,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,   210,   211,     0,     0,     0,     0,   227,
     228,   212,     0,     0,   229,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,   213,   214,   215,   216,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   230,     0,     0,     0,
       0,     0,     0,     0,     0,   231,   232,   233,   234,   235,
     236,   217,   218,   219,   220,   221,   222,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   223,   224,
     225,   226,   209,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,   210,   211,     0,     0,     0,     0,
     227,   228,   212,     0,     0,   229,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,   209,   213,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,   210,   211,
       0,     0,     0,     0,     0,     0,   212,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   230,     0,    24,
       0,   213,   214,   215,   216,     0,   231,   531,   233,   234,
     235,   236,   217,   218,   219,   220,   221,   222,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
     224,   225,   226,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,   217,   218,   219,   220,
     221,   222,     0,     0,     0,     0,   229,     0,     0,     0,
       0,     0,     0,   223,   224,   225,   226,   209,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,   210,
     211,     0,     0,     0,     0,     0,     0,   212,     0,     0,
     229,     0,     0,     0,     0,     0,     0,     0,   361,     0,
      24,     0,   213,   214,   215,   216,     0,   231,   232,   233,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   363,     0,     0,     0,     0,     0,     0,     0,
       0,   231,   232,   233,   234,   235,   236,   217,   218,   219,
     220,   221,   222,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,   224,   225,   226,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,   229,     0,     4,     5,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,    10,    11,    12,    13,
      14,     0,    15,    16,     0,    17,    18,     0,    19,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,     0,     0,     0,     0,
       0,     0,   231,   232,   233,   234,   235,   236,    25,     0,
       0,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,     0,     0,
      62,    63,    64,     1,     2,     3,     0,     0,     4,     5,
       0,     0,     0,     6,     0,     7,     8,     9,     0,     0,
       0,    10,    11,    12,    13,    14,     0,    15,    16,     0,
      17,    18,     0,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   826,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,     0,     0,    62,     0,    64,     1,     2,
       3,     0,     0,     4,     5,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,    10,    11,    12,    13,
      14,     0,    15,    16,     0,    17,    18,     0,    19,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,     0,     0,
      62,     0,    64,     1,     2,     3,     0,     0,     4,     5,
       0,     0,     0,     6,     0,     7,     8,     9,     0,     0,
       0,    10,    11,    12,    13,    14,     0,    15,    16,     0,
      17,    18,     0,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,    56,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,     1,     2,     3,     0,    64,     4,     5,
       0,     0,     0,     6,     0,     7,     8,     9,     0,     0,
       0,    10,    11,    12,    13,    14,     0,    15,    16,     0,
      17,    18,     0,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,     0,     0,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,    54,    55,    56,    57,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     0,     0,     4,     5,     0,
      59,    60,     6,     0,     0,     8,     9,    64,     0,     0,
      10,    11,    12,    13,    14,     0,    15,    16,     0,    17,
       0,     0,    19,     0,    21,    22,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,     0,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,     0,
       0,     0,     0,     2,     3,     0,     0,     4,     5,     0,
       0,     0,     6,     0,     7,     0,     9,    49,     0,     0,
       0,    11,    12,     0,    14,     0,    15,    16,    50,    51,
      18,     0,     0,    20,    21,    22,    23,     0,     0,     0,
      53,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,     0,    25,     0,     0,     0,    64,     0,    26,    27,
      28,    29,    30,    31,    32,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
      48,     0,     0,     2,     3,     0,     0,     4,     5,     0,
       0,     0,     6,     0,     7,     0,     9,    49,     0,     0,
       0,    11,    12,     0,    14,     0,    15,    16,     0,     0,
      18,     0,     0,    20,    21,    22,    23,     0,     0,    52,
      53,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    25,     0,    62,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,     0,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       2,     3,     0,     0,     4,     5,     0,     0,     0,     6,
       0,     0,     0,     9,     0,     0,     0,    49,    11,    12,
       0,    14,     0,    15,    16,     0,     0,     0,     0,     0,
       0,    21,    22,    23,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,     0,     0,     0,    26,    27,    28,    29,    30,
      31,     0,     0,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,    54,    55,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    60
};

static const yytype_int16 yycheck[] =
{
       0,   119,   212,   345,   473,     0,    79,    80,     0,   454,
      83,    84,    67,   117,   116,   508,   116,   197,    79,    80,
     128,   853,   143,   203,   433,   327,    51,    50,     0,   116,
       0,    91,   200,    33,    45,    46,    25,   200,   205,   230,
      79,    80,   145,   161,   489,    79,    80,    68,    51,   212,
     880,    65,   195,   269,    40,    11,    33,    90,    91,    67,
     519,   520,   521,   522,   115,    65,    25,    67,    68,    65,
      25,    62,     0,    62,    63,    51,   636,    77,    78,    79,
      80,   132,    62,  1063,    91,   195,   137,   138,   519,   520,
     521,   522,   116,   117,    67,   155,    62,    63,   928,   197,
      77,    78,   116,    62,    63,   203,   106,    62,    63,    79,
      80,   106,   197,   216,   106,  1095,   116,   117,   195,    19,
     116,   144,   155,   392,   195,    62,    63,   396,    40,    41,
      42,   202,   348,   218,   106,    91,   106,    37,   195,    67,
      68,   664,   202,   143,    90,    91,   116,   195,   155,   140,
     269,    79,    80,   676,   154,   200,   347,   499,   279,    83,
     140,    85,   269,    87,    88,    89,   998,     0,   272,   271,
     361,   271,   363,   198,   140,   279,   278,   340,   106,   230,
     197,   202,   373,   485,   201,   487,   488,   200,   597,   117,
     357,   278,   200,   360,   197,    91,   142,   143,   201,   155,
     200,   212,   213,   140,    67,   664,   665,   196,   197,   155,
     196,   269,   212,   199,   200,   143,   196,   676,   677,    62,
      63,   197,   197,   543,     0,   201,   154,   200,   548,   348,
     200,   791,  1064,   142,   143,   795,    62,   196,   197,   197,
       7,   348,   212,   218,    11,   197,   897,   271,   272,   900,
     664,   593,   206,   207,   278,   279,   202,   271,   195,   155,
     218,   212,   676,   197,   278,    91,   218,   137,   205,   139,
      91,   271,   272,   106,   274,   271,    62,   214,   278,   279,
     195,   218,   278,   195,   218,   200,   197,   199,   200,   195,
     348,    67,   508,   202,   200,    62,    63,   140,   195,   269,
     195,   271,   198,    79,    80,   142,   143,   218,   278,    68,
     361,   197,   363,   782,   140,   315,   197,   368,   195,   370,
     813,   372,   373,   974,    62,    63,   977,   772,     0,   155,
     106,   494,   218,   218,   155,   156,   142,   218,   315,   441,
     340,   117,    67,   119,   272,   447,   274,   447,   757,   349,
     195,   279,   195,   197,   140,   350,   196,   201,   350,   818,
     433,   434,   205,   822,   203,   202,    62,   143,   486,   195,
     340,   214,   433,   140,   143,   218,   152,   197,   348,   205,
     350,   201,   203,   159,   119,   161,   197,   818,   214,   508,
     201,   822,   392,   195,   433,   195,   396,   218,   200,   433,
     197,   508,   140,   205,   201,   377,   378,   377,   378,   195,
     196,   753,   214,   200,   200,   519,   520,   441,   194,   205,
     196,   195,   392,   447,   693,   195,   396,   441,   214,   205,
     503,   197,   505,   447,   879,   201,   269,   510,   511,   884,
     195,   441,   503,   195,   140,   441,   662,   447,   521,   522,
     508,   447,   197,   912,   195,   196,   201,   195,   195,   200,
     521,   522,   200,   433,   503,     9,   682,   205,   197,   503,
     204,   441,   201,   546,   547,   197,   214,   447,   195,   201,
     643,    25,   521,   522,   786,   546,   547,   521,   522,    25,
     214,   654,   655,    37,   494,   764,   272,   215,   274,   195,
     196,   970,   502,   279,   200,   613,   697,   546,   547,   205,
     286,   721,   546,   547,   514,   348,    49,   350,   214,   519,
     520,   521,   522,   196,   494,   502,    62,    63,    64,    73,
      74,    67,   723,   503,    91,   726,   196,   514,   508,   196,
     510,   708,   597,   662,   544,   545,   546,   547,   324,   325,
     217,   521,   522,   553,   205,   662,    62,    63,   721,   210,
     211,   665,   664,   682,   108,    43,    44,   544,   545,   541,
     542,   541,   542,   789,   350,   682,   546,   547,   196,   195,
     196,   357,   700,   553,   200,   195,   510,   511,   512,  1058,
     134,   519,   520,   521,   522,   195,   196,   813,   155,   156,
     200,   377,   378,   196,   662,   213,   150,   151,   269,   196,
     665,   115,   197,   882,   614,   217,   195,   196,   546,   547,
     620,   200,   677,   195,   682,   202,   130,   201,   711,   133,
     134,   135,   202,   137,   140,   798,   757,    47,    48,   690,
     691,   692,   202,   643,   614,   196,   203,   196,   197,   918,
     664,   920,   197,   198,   654,   655,   739,   433,   196,   197,
     660,   218,   676,   663,   664,   665,   666,   196,   664,   196,
     789,   196,   197,   643,   202,   508,   676,   677,   196,   197,
     676,   196,   789,   660,   654,   655,    19,   348,   683,   195,
      72,   683,   662,   693,   813,   196,   197,   818,    37,   205,
     195,   822,   196,   197,   218,   705,   813,   195,   214,   195,
     486,   711,   682,   683,   818,    97,   209,   210,   211,   101,
     195,   721,   104,   693,  1066,   195,   230,   503,   195,   222,
     202,   789,   196,   197,   944,   705,   202,   665,   666,   739,
     907,   711,   200,   713,   200,   521,   522,   196,   197,   677,
     202,   721,   196,   197,   196,   813,   947,   196,   949,   950,
     197,   844,   196,   930,   764,   541,   542,   875,   201,   739,
     546,   547,   196,   197,   156,   116,   117,   553,   201,     0,
     162,   944,   865,   165,   166,   196,   168,   196,   197,    62,
     172,   196,   955,   197,   764,   177,   196,   197,   798,   181,
     182,   197,   184,   185,   971,   196,   197,   189,   190,   191,
     192,   193,   197,   195,   197,   197,   196,   197,   818,   789,
     196,   597,   822,   197,   897,   196,   197,   196,   798,   662,
     196,   197,    67,   941,   196,   197,   897,    67,   416,   417,
     418,   419,   196,   813,   844,   196,   197,   508,   931,   682,
     683,   959,  1015,   223,   224,   225,   226,   361,   897,   363,
     196,   197,   196,   897,   217,   865,   196,   140,   203,   373,
      91,   202,    93,   197,   844,   412,   413,   420,   421,  1070,
     880,   196,   882,   414,   415,   106,   427,   428,   202,   665,
     818,  1054,   218,   397,   822,   865,   896,   897,   218,   114,
     900,   677,   902,   118,   198,   195,  1014,   683,    62,    63,
     880,  1019,   882,   195,    90,    91,   999,  1000,   918,   195,
     920,   195,   195,   699,   700,   429,   141,   897,   928,  1092,
     218,   931,   205,    62,   203,   711,   198,  1045,   197,   218,
     198,   214,  1050,   196,   944,   196,   196,   196,   918,   197,
     920,  1034,   198,   174,   175,   955,   789,  1040,   928,   198,
     198,   931,   344,   739,   934,  1073,   142,   143,  1076,   897,
     203,   196,   900,   196,   944,   218,   196,   203,   139,   155,
     813,   757,  1065,   217,   203,   955,   140,   227,   228,   196,
     196,   231,   232,   233,   234,   235,   236,   196,   196,   999,
    1000,   662,   196,   198,    62,    63,   198,   197,     9,    39,
     203,   140,   195,   218,   195,  1015,    68,   203,  1101,   198,
     195,   682,   196,    68,    25,   203,   202,   195,   195,   999,
    1000,   218,   197,    91,  1034,   198,    37,   196,   198,   141,
    1040,   195,   818,   198,   205,  1015,   822,   196,   269,   196,
     203,   205,   195,   201,  1054,   197,   218,   198,    14,   217,
     214,    62,    63,   195,  1034,  1065,   195,   196,   844,   196,
    1040,   200,    73,    74,   218,   201,   205,   197,   218,    62,
      63,   195,   140,   196,  1054,   214,  1086,   197,   218,   865,
      91,   196,  1092,   308,   195,  1065,   196,   155,   926,   422,
     425,  1101,   423,   357,   426,   345,   424,   108,   299,   286,
     199,  1032,   352,   510,   618,   619,  1086,   624,   795,   902,
     791,   897,  1092,   900,   628,   629,   977,   348,   789,   350,
     643,  1101,   510,   134,   798,   683,   705,   195,   705,   140,
     663,   934,  1086,   934,   719,   941,  1014,   205,  1050,   150,
     151,  1076,   813,  1092,   155,   931,   214,   140,   934,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   106,
     682,   695,   696,   697,   195,   117,   357,   348,   596,   360,
      -1,   596,    -1,    -1,   205,    -1,    -1,    -1,   369,   713,
     371,   715,   195,   214,    -1,   198,    -1,   432,   433,    -1,
     381,    -1,   205,   999,  1000,    -1,    -1,    -1,   443,   444,
      -1,   214,    -1,    -1,   395,    -1,    -1,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,    -1,    -1,
      -1,    -1,    -1,    62,   636,    -1,   638,    -1,  1034,   499,
     642,   765,    -1,    -1,  1040,    -1,   648,   649,    -1,   651,
     431,   653,    -1,    -1,   656,   657,   658,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,   668,   508,    -1,  1065,
      -1,   531,   674,   454,    -1,    16,   678,    -1,   680,    -1,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,
      -1,   551,    33,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,   483,    -1,   217,  1101,    -1,    -1,   489,    79,
      80,   140,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,   849,    -1,   729,   852,    -1,
      79,    80,    -1,   593,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    -1,    94,    -1,   117,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,   883,
      -1,   596,   597,    -1,    -1,    -1,   195,    -1,    -1,   198,
     605,    -1,    -1,   143,    25,    -1,   205,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,   214,    37,    -1,    -1,   791,
      -1,    -1,    -1,   795,    -1,   797,    -1,   921,    -1,    -1,
      -1,    -1,    -1,    -1,   806,   807,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,   157,    -1,    -1,    -1,
      -1,   662,    73,    74,   194,    -1,   196,    -1,    -1,    -1,
      -1,    25,    -1,   614,    -1,   205,    -1,   961,    -1,    -1,
      91,   682,   683,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   205,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      -1,   995,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    -1,    -1,   134,  1008,     9,    -1,    -1,    -1,  1013,
      -1,    -1,    -1,   753,    -1,    -1,   898,    91,  1022,   150,
     151,    25,   272,    -1,   155,    -1,    -1,   909,    -1,   279,
      -1,    -1,    -1,    37,   108,    -1,     9,    -1,    -1,    -1,
      -1,    -1,   757,    -1,   705,  1049,    -1,   708,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    62,    63,
     134,    -1,    -1,    -1,    37,    -1,   140,    -1,   789,    73,
      74,    -1,    -1,    -1,   324,   325,   150,   151,    -1,    -1,
      -1,   155,    -1,    -1,  1088,    -1,    -1,    91,    -1,   750,
      -1,   973,   813,    -1,   976,  1099,    -1,    -1,   348,   981,
      73,    74,    -1,    -1,   108,    -1,    -1,   357,    -1,    -1,
      -1,   772,    -1,    -1,    -1,    -1,    -1,    -1,    91,   348,
      -1,   195,    -1,    -1,    -1,    -1,   200,    -1,   357,    -1,
     134,   205,    -1,    -1,    -1,   108,   140,    -1,    -1,    -1,
     214,    -1,    -1,     9,    -1,  1027,   150,   151,  1030,    -1,
      -1,   155,    -1,    -1,    -1,    -1,   871,   872,    -1,    25,
      -1,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,   150,   151,    -1,
      -1,    -1,   155,   433,   434,   435,   436,    -1,    -1,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,   205,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,
     214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   879,   880,
      -1,    -1,   195,   884,    -1,    91,    -1,   200,    -1,    -1,
      -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   214,   108,    -1,    -1,    -1,   907,    -1,    -1,    -1,
      -1,    -1,    -1,   503,    -1,   505,   506,    -1,   508,    -1,
     510,   511,   512,   924,    -1,    -1,   927,   928,   134,   930,
      -1,   521,   522,    -1,   140,   504,   505,   506,    -1,   508,
      -1,   510,   511,   512,   150,   151,    -1,    -1,    -1,   155,
      -1,    -1,   521,   522,    -1,    -1,   546,   547,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
     971,    64,    65,    66,    67,    25,    -1,   546,   547,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1066,    37,    -1,   195,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   597,   214,    -1,
      -1,    -1,    62,    -1,    -1,    -1,   109,   110,   111,   112,
     113,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,   140,    -1,     3,
       4,     5,    -1,    -1,     8,     9,    -1,    -1,   108,    13,
     153,    15,    16,    17,    -1,    -1,    -1,    21,    22,    23,
      24,    25,   662,    27,    28,   665,    30,    31,    -1,    33,
      34,    35,    36,    37,   134,    -1,    -1,   677,    -1,    -1,
     140,    -1,   682,   662,    -1,    -1,    -1,    -1,    -1,    -1,
     150,   151,   195,    -1,    -1,   155,    -1,    -1,    62,    63,
      -1,    -1,    -1,   682,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,
     200,    -1,    -1,    -1,   108,   205,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,   214,   119,   120,   757,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,   130,   131,   132,   133,
     134,   135,    -1,    -1,    -1,    37,   140,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,   151,   152,    -1,
      -1,   155,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,   813,    -1,    -1,    -1,    -1,   818,    -1,
      -1,    -1,   822,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,   195,    -1,    -1,   813,    -1,    -1,    -1,   202,    -1,
      -1,   205,    -1,     3,     4,     5,   108,    -1,     8,     9,
     214,    -1,    -1,    13,   218,    15,    16,    17,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    27,    28,    -1,
      30,    31,   134,    33,    34,    35,    36,    37,   140,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,   151,
      -1,    -1,    -1,   155,    -1,    -1,    -1,   897,    -1,    -1,
      -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
     140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     150,   151,   152,    -1,    -1,   155,    -1,   157,     3,     4,
       5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    27,    28,    -1,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,   195,    -1,    -1,    -1,    -1,
     200,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   214,    -1,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    91,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,   151,   152,    -1,    -1,
     155,    -1,   157,     4,     5,    -1,    -1,     8,     9,    -1,
      -1,    -1,    13,    -1,    15,    -1,    17,    -1,    -1,    -1,
      -1,    22,    23,    -1,    25,    -1,    27,    28,    -1,    -1,
      31,    -1,    -1,    34,    35,    36,    37,    -1,    -1,    -1,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    -1,   105,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
     151,   152,     4,     5,   155,    -1,     8,     9,    -1,    -1,
      -1,    13,    -1,    15,    -1,    17,    -1,    -1,    -1,    -1,
      22,    23,    -1,    25,    -1,    27,    28,    -1,    -1,    31,
      -1,    -1,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   195,    -1,    -1,   198,    -1,    -1,
      -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,   214,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,   151,
     152,    -1,    -1,   155,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    39,   195,    41,    42,    -1,    -1,   200,    -1,
      -1,    -1,    49,   205,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,    -1,
      -1,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
      -1,   138,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,
      -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,    -1,   118,   119,
     120,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    -1,   138,    -1,
     140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,
      -1,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,    -1,   118,   119,   120,    -1,    -1,
      -1,    -1,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,    -1,   138,    -1,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   148,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,
      -1,   204,   205,   206,   207,   208,   209,     3,     4,     5,
      -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,    15,
      16,    17,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,   149,   150,   151,   152,   153,     3,   155,
     156,   157,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    24,
      25,    -1,    -1,    -1,    29,    30,    -1,    -1,    33,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    -1,   195,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,   204,   205,
     206,   207,   208,   209,    -1,    -1,    -1,    62,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,   109,   110,   111,   112,   113,   114,
      -1,    -1,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,
      -1,   126,   127,   128,   129,    -1,    -1,    -1,    -1,   134,
      -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,   149,   150,   151,     3,   153,    -1,
     155,    -1,   157,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
     195,    -1,    -1,    49,    -1,    -1,   201,    -1,    -1,   204,
     205,   206,   207,   208,   209,    -1,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,     3,    73,    74,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    -1,    89,    21,    91,    -1,    24,    25,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,
      37,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
     126,   127,   128,   129,    -1,    -1,    29,    -1,   134,    -1,
      -1,    -1,    -1,    -1,   140,    -1,    73,    74,    41,    42,
      -1,    -1,   148,   149,   150,   151,    49,   153,    -1,   155,
      -1,   157,    89,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,    -1,   201,    -1,   134,   204,   205,
     206,   207,   208,   209,    -1,    -1,   109,   110,   111,   112,
     113,   114,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,   126,   127,   128,   129,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    41,
      42,    -1,    -1,    -1,    -1,   148,   149,    49,    -1,    -1,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,   206,   207,   208,   209,   109,   110,   111,
     112,   113,   114,    -1,    -1,   218,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,   127,   128,   129,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,
      41,    42,    -1,    -1,    -1,    -1,   148,   149,    49,    -1,
      -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,    -1,
     202,    -1,   204,   205,   206,   207,   208,   209,   109,   110,
     111,   112,   113,   114,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,    41,    42,    -1,    -1,    -1,    -1,   148,   149,    49,
      -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,   199,   200,
      -1,   202,   203,   204,   205,   206,   207,   208,   209,   109,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,    -1,    41,    42,    -1,    -1,    -1,    -1,   148,   149,
      49,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,   199,
     200,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
     109,   110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,
     129,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,    41,    42,    -1,    -1,    -1,    -1,   148,
     149,    49,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,   195,    -1,    -1,    -1,
     199,   200,    -1,   202,    -1,   204,   205,   206,   207,   208,
     209,   109,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,
     128,   129,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,    41,    42,    -1,    -1,    -1,    -1,
     148,   149,    49,    -1,    -1,   153,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,   195,    -1,    -1,
      -1,    -1,    -1,    -1,   202,    -1,   204,   205,   206,   207,
     208,   209,   109,   110,   111,   112,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
     127,   128,   129,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,    -1,    41,    42,    -1,    -1,    -1,
      -1,   148,   149,    49,    -1,    -1,   153,    -1,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,   206,
     207,   208,   209,   109,   110,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,   127,   128,   129,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,    -1,    41,    42,    -1,    -1,
      -1,    -1,   148,   149,    49,    -1,    -1,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,   204,   205,
     206,   207,   208,   209,   109,   110,   111,   112,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,   127,   128,   129,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,    41,    42,    -1,
      -1,    -1,    -1,   148,   149,    49,    -1,    -1,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     195,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,   206,   207,   208,   209,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   126,   127,   128,   129,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    41,    42,
      -1,    -1,    -1,    -1,   148,   149,    49,    -1,    -1,   153,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,
     204,   205,   206,   207,   208,   209,   109,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   127,   128,   129,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    41,
      42,    -1,    -1,    -1,    -1,   148,   149,    49,    -1,    -1,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,
      -1,   204,   205,   206,   207,   208,   209,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,   127,   128,   129,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,
      41,    42,    -1,    -1,    -1,    -1,   148,   149,    49,    -1,
      -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,   204,   205,   206,   207,   208,   209,   109,   110,
     111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,    41,    42,    -1,    -1,    -1,    -1,   148,   149,    49,
      -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,
      -1,   202,    -1,   204,   205,   206,   207,   208,   209,   109,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,    -1,    41,    42,    -1,    -1,    -1,    -1,   148,   149,
      49,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,   206,   207,   208,   209,
     109,   110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,
     129,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,    41,    42,    -1,    -1,    -1,    -1,   148,
     149,    49,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,   206,   207,   208,
     209,   109,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,
     128,   129,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,    41,    42,    -1,    -1,    -1,    -1,
     148,   149,    49,    -1,    -1,   153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    29,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,    62,
      -1,    64,    65,    66,    67,    -1,   204,   205,   206,   207,
     208,   209,   109,   110,   111,   112,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,    -1,    -1,   109,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   127,   128,   129,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,
      62,    -1,    64,    65,    66,    67,    -1,   204,   205,   206,
     207,   208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,   206,   207,   208,   209,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,   153,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    27,    28,    -1,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,   206,   207,   208,   209,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,   151,   152,    -1,    -1,
     155,   156,   157,     3,     4,     5,    -1,    -1,     8,     9,
      -1,    -1,    -1,    13,    -1,    15,    16,    17,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    27,    28,    -1,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     150,   151,   152,    -1,    -1,   155,    -1,   157,     3,     4,
       5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    27,    28,    -1,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,   151,   152,    -1,    -1,
     155,    -1,   157,     3,     4,     5,    -1,    -1,     8,     9,
      -1,    -1,    -1,    13,    -1,    15,    16,    17,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    27,    28,    -1,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     150,   151,   152,     3,     4,     5,    -1,   157,     8,     9,
      -1,    -1,    -1,    13,    -1,    15,    16,    17,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    27,    28,    -1,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,    -1,     8,     9,    -1,
     150,   151,    13,    -1,    -1,    16,    17,   157,    -1,    -1,
      21,    22,    23,    24,    25,    -1,    27,    28,    -1,    30,
      -1,    -1,    33,    -1,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    -1,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,     4,     5,    -1,    -1,     8,     9,    -1,
      -1,    -1,    13,    -1,    15,    -1,    17,   108,    -1,    -1,
      -1,    22,    23,    -1,    25,    -1,    27,    28,   119,   120,
      31,    -1,    -1,    34,    35,    36,    37,    -1,    -1,    -1,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
     151,    -1,    63,    -1,    -1,    -1,   157,    -1,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      91,    -1,    -1,     4,     5,    -1,    -1,     8,     9,    -1,
      -1,    -1,    13,    -1,    15,    -1,    17,   108,    -1,    -1,
      -1,    22,    23,    -1,    25,    -1,    27,    28,    -1,    -1,
      31,    -1,    -1,    34,    35,    36,    37,    -1,    -1,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
     151,   152,    63,    -1,   155,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
       4,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    17,    -1,    -1,    -1,   108,    22,    23,
      -1,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
     151,   152,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,   151
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     8,     9,    13,    15,    16,    17,
      21,    22,    23,    24,    25,    27,    28,    30,    31,    33,
      34,    35,    36,    37,    62,    63,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,   108,
     119,   120,   130,   131,   132,   133,   134,   135,   140,   150,
     151,   152,   155,   156,   157,   195,   202,   205,   214,   218,
     220,   221,   222,   264,   265,   266,   273,   277,   278,   279,
     280,   283,   284,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   303,   305,   306,   307,   308,
     310,   314,   318,   330,   333,   386,   387,   388,   389,   390,
     401,   411,   412,   413,   414,   195,   195,   205,   222,   402,
     403,   404,   405,   406,   407,   408,   409,   411,   195,   195,
     195,   195,   212,   200,   200,   200,    67,   195,   195,   195,
     412,   414,    68,   281,   283,   285,   318,   411,   411,     0,
     318,   319,   320,   218,   197,   218,   197,   218,   218,   402,
     218,   402,   222,   282,   283,   296,   298,   305,   306,   307,
     318,   411,   222,   283,   296,   298,   305,   306,   307,   318,
     411,   282,   306,   283,   305,   306,   282,   283,   305,   282,
     282,   282,   283,   305,   280,   305,   280,   305,   319,   319,
     319,   388,   142,   239,   195,   200,   417,   419,   421,    29,
      41,    42,    49,    64,    65,    66,    67,   109,   110,   111,
     112,   113,   114,   126,   127,   128,   129,   148,   149,   153,
     195,   204,   205,   206,   207,   208,   209,   221,   223,   224,
     225,   226,   227,   228,   229,   232,   233,   234,   235,   237,
     241,   242,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   319,
     344,   195,   205,   222,   320,   406,   408,   410,   195,   281,
     403,   405,   408,   417,    90,   270,   271,   272,   318,   226,
     195,   261,    25,    62,    63,   196,   197,   300,   301,   302,
     344,   261,   261,   261,   261,   344,   344,   260,   196,   196,
     203,   285,   411,   318,   411,   319,   272,   272,   319,   319,
     319,   319,   267,   319,   280,   280,   319,   268,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   303,
     304,   221,   222,   331,   343,   195,   143,   240,   196,   418,
     420,   201,   205,   260,   262,   283,   286,   287,   305,   318,
     200,   195,   245,   195,   245,   245,   343,   366,   195,   195,
     195,   195,   195,   195,   245,   356,   356,   356,   356,   246,
     246,   195,   261,   344,   355,   356,   246,   246,   246,   246,
     246,   246,    40,    41,    42,   195,   199,   200,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,   217,   205,
     210,   211,   206,   207,    43,    44,    45,    46,   212,   213,
      47,    48,   204,   214,   215,    49,    50,   144,   145,   216,
     196,   197,   278,   280,   289,   291,   295,   297,   299,   196,
     410,   195,   411,   196,   196,   417,   410,   195,   405,   408,
      19,    37,   371,   270,   217,   196,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   105,   315,
     316,   317,   196,   195,   196,   301,   213,   201,   201,   201,
     196,   196,   196,   197,   417,   269,   402,   274,   275,   217,
     345,   345,   311,   343,   202,   319,   332,   246,   259,   195,
     355,   391,   278,   280,   283,   289,   295,   305,   393,   394,
     395,   396,   397,   398,   399,   400,   221,   339,   340,   277,
     278,   279,   280,   338,   341,   342,   201,   201,   201,   262,
     286,   205,   262,   344,   344,   344,   260,   344,   260,   344,
     344,   202,   202,   264,   277,   278,   279,   280,   264,   260,
     196,   196,   196,   202,   221,   222,   243,   196,   244,   260,
     243,   261,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   246,   246,   246,   247,   247,   248,   248,
     249,   249,   249,   249,   250,   250,   251,   252,   253,   254,
     255,   257,   257,   198,   261,   260,   195,   205,   214,   415,
     417,   422,   424,   415,   196,   196,   417,   417,   196,   196,
     410,    37,    19,   195,   202,   262,   346,   218,   195,   195,
     195,   195,   195,   196,   197,    64,    67,   300,   200,   200,
     260,   345,   272,   345,   345,   346,   202,   312,   313,   334,
     335,   336,   343,   202,   196,   259,   402,   305,   305,   305,
     394,   222,   282,   306,   314,   333,   282,   306,   282,   402,
     197,   218,   196,   197,   195,   205,   214,   405,   411,   416,
     419,   423,   425,   405,   411,   416,   195,   205,   411,   416,
     411,   416,   196,   197,   201,   201,   201,   196,   196,   196,
     197,   197,   197,   197,   196,   264,   264,   195,   228,   402,
     402,   411,   411,   228,   197,   202,   246,     6,     7,    10,
      11,    12,    18,    19,    20,    26,    32,    39,    68,    90,
      91,   106,   107,   115,   118,   136,   138,   203,   221,   222,
     261,   263,   264,   343,   351,   352,   353,   354,   355,   357,
     358,   359,   361,   363,   364,   367,   368,   369,   370,   196,
     197,   201,   259,   198,   417,   422,   424,   281,   415,   417,
     196,   226,   372,   373,   199,   200,   221,   243,   346,   347,
     348,   349,   350,   261,   261,   221,    67,    67,   196,   316,
     196,   196,   217,   261,   261,   196,   276,   218,   265,   319,
     321,   322,   323,   324,   325,   202,   319,   203,   197,   319,
     334,   196,   319,   319,   319,   319,   343,   343,   319,   319,
     319,   402,   392,   393,   340,   196,   423,   425,   281,   416,
     319,   319,   281,   319,   319,   392,    51,   342,   344,   344,
     344,   236,   243,   261,   261,    11,   230,   231,   344,   347,
     348,   218,   262,   218,   198,   351,   362,   222,   261,   195,
     218,   261,   195,   195,   203,   371,   195,   365,   366,    68,
     202,   355,   218,   355,   218,   198,   203,   351,   260,   259,
     196,   196,   196,   415,   196,   198,   374,   243,   261,   198,
     197,   203,   199,   200,   217,   346,   196,   196,   196,   196,
     196,   300,   201,   201,   345,   218,   278,   280,   203,   323,
     197,   218,   197,   218,   321,   319,   336,   217,   337,   203,
     319,   319,   196,   196,   416,   196,   196,   196,    40,   196,
     199,   200,   203,   203,   198,   196,   197,   198,   197,   203,
      51,   198,   351,    39,   195,   218,   218,   261,   218,   261,
     263,   195,   202,   195,   197,   218,    68,   116,   117,   137,
     139,   318,   351,   417,   417,   200,   226,   375,   376,   198,
     377,    51,   201,   346,   203,   349,   243,   261,   346,   196,
     197,   198,   326,   329,   402,   327,   329,   411,   319,   327,
     326,   203,   262,   319,   195,   419,   243,   243,   261,   260,
     231,   260,   203,   262,   351,   195,   352,   358,   360,   196,
     196,   196,   372,    68,   104,   366,   203,   355,   195,   355,
     355,   218,   343,   195,   197,   200,   226,   378,   379,   198,
     380,   261,    51,   201,   300,   262,   319,   328,   329,   319,
     328,   309,   319,   201,   198,   261,   263,   351,   351,   141,
     238,   196,   203,   196,   261,   201,   261,   375,   343,   195,
     197,   226,   381,   382,   198,   383,   201,   261,   217,   319,
     319,   309,   351,   196,   218,    14,   195,   351,   218,   196,
     196,   226,   196,   201,   261,   378,   197,   366,   384,   385,
     201,   300,   238,   263,   351,   259,   218,   355,   195,   226,
     196,   381,   197,   196,   218,   196,   196,   353,   261,   195,
     385,   238,   196,   261,   351,   196
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   219,   220,   221,   221,   222,   223,   224,   225,   226,
     227,   227,   227,   227,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   229,   230,   230,   231,   231,   232,
     232,   233,   234,   235,   236,   236,   236,   236,   237,   237,
     237,   237,   238,   238,   239,   239,   240,   240,   241,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   243,
     243,   244,   244,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   246,   246,   246,
     246,   247,   247,   247,   247,   248,   248,   248,   249,   249,
     249,   250,   250,   250,   250,   250,   251,   251,   251,   252,
     252,   253,   253,   254,   254,   255,   255,   256,   256,   257,
     257,   258,   258,   259,   259,   259,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   261,   261,
     262,   263,   263,   264,   264,   264,   264,   264,   265,   267,
     266,   268,   266,   269,   266,   270,   270,   271,   271,   272,
     272,   274,   273,   275,   273,   273,   276,   273,   277,   277,
     277,   277,   277,   278,   278,   278,   278,   278,   279,   279,
     279,   279,   279,   280,   280,   280,   281,   281,   282,   282,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   284,
     284,   285,   285,   286,   286,   286,   287,   287,   288,   288,
     288,   288,   289,   289,   289,   289,   290,   290,   290,   291,
     291,   291,   292,   292,   292,   293,   293,   293,   294,   294,
     294,   295,   295,   295,   296,   296,   297,   297,   297,   297,
     298,   299,   299,   299,   299,   300,   300,   300,   301,   301,
     301,   301,   301,   301,   302,   302,   303,   303,   304,   304,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   307,   307,   307,   308,   309,   311,   310,   312,   310,
     313,   310,   314,   314,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   316,   316,
     317,   317,   318,   318,   319,   319,   320,   320,   321,   321,
     322,   322,   323,   323,   323,   323,   324,   324,   325,   325,
     326,   326,   326,   327,   327,   328,   328,   329,   331,   330,
     332,   330,   330,   333,   334,   334,   335,   335,   335,   336,
     337,   337,   338,   338,   339,   339,   340,   341,   341,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   343,   343,   344,   344,   344,   344,   345,
     345,   346,   346,   346,   347,   347,   348,   348,   349,   349,
     349,   349,   350,   350,   350,   350,   350,   350,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   352,   353,   353,   353,   353,   353,   354,   355,   355,
     355,   356,   357,   357,   358,   359,   359,   359,   360,   360,
     361,   361,   362,   361,   363,   363,   363,   363,   363,   363,
     364,   365,   365,   366,   367,   367,   368,   368,   369,   369,
     369,   370,   370,   370,   371,   371,   371,   371,   371,   372,
     372,   372,   372,   372,   373,   374,   374,   375,   375,   376,
     376,   377,   377,   378,   378,   379,   379,   380,   380,   381,
     382,   382,   383,   383,   384,   384,   385,   386,   386,   387,
     387,   388,   388,   388,   388,   389,   389,   390,   391,   392,
     392,   393,   393,   394,   395,   395,   395,   396,   396,   396,
     396,   397,   397,   397,   398,   398,   399,   399,   399,   400,
     400,   400,   401,   401,   401,   401,   401,   402,   402,   402,
     403,   403,   403,   404,   404,   405,   405,   405,   406,   406,
     406,   407,   407,   408,   408,   408,   408,   408,   409,   409,
     409,   410,   410,   411,   411,   412,   412,   412,   412,   413,
     413,   413,   414,   414,   415,   415,   415,   416,   416,   417,
     417,   418,   417,   419,   419,   420,   419,   421,   421,   421,
     421,   421,   421,   421,   422,   422,   422,   422,   422,   423,
     423,   423,   423,   423,   424,   424,   424,   424,   424,   425,
     425,   425,   425
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     6,     1,     3,     3,     3,     6,
       6,     6,     4,     6,     1,     3,     4,     3,     6,     4,
       6,     4,     0,     4,     0,     4,     0,     4,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       1,     1,     3,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     2,     4,     1,     4,     2,
       2,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     0,     1,     2,     2,     2,     2,     2,     6,     0,
       4,     0,     4,     0,     5,     5,     1,     2,     1,     0,
       1,     0,     5,     0,     5,     5,     0,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     4,
       4,     1,     1,     1,     1,     1,     1,     2,     3,     3,
       3,     3,     2,     3,     2,     3,     2,     2,     2,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     4,     4,     1,     2,     3,     2,
       4,     1,     2,     3,     2,     1,     1,     1,     1,     4,
       4,     6,    10,     1,     1,     2,     4,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     7,     7,
       1,     1,     1,     1,     4,     0,     0,     9,     0,    10,
       0,     6,     1,     1,     1,     1,     4,     1,     4,     4,
       1,     1,     4,     4,     1,     1,     1,     1,     0,     1,
       1,     3,     6,     1,     0,     1,     1,     2,     0,     1,
       1,     2,     2,     2,     1,     2,     3,     3,     3,     3,
       3,     0,     2,     3,     2,     0,     1,     2,     0,     7,
       0,     8,     4,     1,     0,     1,     1,     3,     2,     3,
       0,     2,     1,     3,     1,     3,     1,     1,     3,     1,
       2,     3,     2,     1,     2,     3,     1,     2,     3,     2,
       1,     2,     3,     1,     1,     2,     3,     2,     3,     0,
       2,     1,     3,     4,     1,     3,     1,     0,     1,     3,
       2,     3,     2,     3,     5,     4,     6,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     4,     6,     3,     8,     3,     4,
       4,     0,     1,     2,     2,     5,     7,     5,     1,     1,
       6,     8,     0,    10,     3,     3,     2,     2,     2,     3,
       3,     1,     3,     1,     6,     5,     4,     2,     7,     4,
       1,     2,     4,     4,     0,     1,     1,     2,     2,     1,
       2,     3,     4,     5,     1,     2,     1,     4,     7,     1,
       3,     2,     1,     4,     7,     1,     3,     2,     1,     1,
       1,     3,     2,     1,     1,     3,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     5,     3,     4,     1,     0,
       1,     1,     2,     2,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     1,     1,     1,     2,
       2,     3,     1,     2,     2,     2,     2,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     1,     1,     2,
       3,     3,     4,     1,     4,     5,     2,     3,     3,     4,
       4,     1,     3,     1,     1,     1,     2,     2,     3,     2,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     0,     5,     1,     2,     0,     5,     2,     3,     3,
       3,     4,     4,     4,     1,     2,     2,     3,     1,     1,
       2,     2,     3,     1,     3,     3,     3,     4,     4,     3,
       3,     1,     4
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
        case 4:
#line 273 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack((yyval)).id(ID_symbol);
          irep_idt value=stack((yyvsp[0])).get(ID_value);
          stack((yyval)).set(ID_C_base_name, value);
          stack((yyval)).set(ID_identifier, value);
          stack((yyval)).set(
            ID_C_id_class, static_cast<int>(ansi_c_id_classt::ANSI_C_SYMBOL));
        }
#line 3508 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 318 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 3514 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 330 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_generic_selection);
          mto((yyval), (yyvsp[-3]));
          stack((yyval)).add(ID_generic_associations).get_sub().swap((irept::subt&)stack((yyvsp[-1])).operands());
        }
#line 3525 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 340 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval)); mto((yyval), (yyvsp[0]));
        }
#line 3533 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 344 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]); mto((yyval), (yyvsp[0]));
        }
#line 3541 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 351 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack((yyval)).id(ID_generic_association);
          stack((yyval)).set(ID_type_arg, stack((yyvsp[-2])));
          stack((yyval)).set(ID_value, stack((yyvsp[0])));
        }
#line 3552 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 358 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack((yyval)).id(ID_generic_association);
          stack((yyval)).set(ID_type_arg, irept(ID_default));
          stack((yyval)).set(ID_value, stack((yyvsp[0])));
        }
#line 3563 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 368 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          stack((yyval)).id(ID_gcc_builtin_va_arg);
          mto((yyval), (yyvsp[-3]));
          stack((yyval)).type().swap(stack((yyvsp[-1])));
        }
#line 3574 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 376 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          stack((yyval)).id(ID_gcc_builtin_types_compatible_p);
          typet &type_arg=(typet &)(stack((yyval)).add(ID_type_arg));
          typet::subtypest &subtypes=type_arg.subtypes();
          subtypes.resize(2);
          subtypes[0].swap(stack((yyvsp[-3])));
          subtypes[1].swap(stack((yyvsp[-1])));
        }
#line 3588 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 389 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          stack((yyval)).id(ID_clang_builtin_convertvector);
          mto((yyval), (yyvsp[-3]));
          stack((yyval)).type().swap(stack((yyvsp[-1])));
        }
#line 3599 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 399 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_cw_va_arg_typeof);
          stack((yyval)).add(ID_type_arg).swap(stack((yyvsp[-1])));
        }
#line 3609 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 408 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          stack((yyval)).id(ID_builtin_offsetof);
          stack((yyval)).add(ID_type_arg).swap(stack((yyvsp[-3])));
          stack((yyval)).add(ID_designator).swap(stack((yyvsp[-1])));
        }
#line 3620 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 418 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_designated_initializer);
          stack((yyval)).operands().resize(1);
          stack((yyval)).op0().id(ID_member);
          stack((yyval)).op0().add_source_location()=stack((yyvsp[0])).source_location();
          stack((yyval)).op0().set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
        }
#line 3632 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 426 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyvsp[-1]), ID_member);
          stack((yyvsp[-1])).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
          mto((yyval), (yyvsp[-1]));
        }
#line 3643 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 433 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyvsp[-2]), ID_index);
          mto((yyvsp[-2]), (yyvsp[-1]));
          mto((yyval), (yyvsp[-2]));
        }
#line 3654 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 440 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyvsp[-1]), ID_index);
          exprt tmp=convert_integer_literal("0");
          stack((yyvsp[-1])).move_to_operands(tmp);
          mto((yyval), (yyvsp[-1]));
          set((yyvsp[-1]), ID_member);
          stack((yyvsp[-1])).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
          mto((yyval), (yyvsp[-1]));
        }
#line 3669 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 454 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_forall);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[-1]));
          PARSER.pop_scope();
        }
#line 3681 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 462 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // The precedence of this operator is too high; it is meant
          // to bind only very weakly.
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_forall);
          mto((yyval), (yyvsp[-1]));
          mto((yyval), (yyvsp[0]));
          PARSER.pop_scope();
        }
#line 3695 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 472 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_exists);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[-1]));
          PARSER.pop_scope();
        }
#line 3707 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 480 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // The precedence of this operator is too high; it is meant
          // to bind only very weakly.
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_exists);
          mto((yyval), (yyvsp[-1]));
          mto((yyval), (yyvsp[0]));
          PARSER.pop_scope();
        }
#line 3721 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 493 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { init((yyval)); stack((yyval)).make_nil(); }
#line 3727 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 495 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); }
#line 3733 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 500 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { init((yyval)); stack((yyval)).make_nil(); }
#line 3739 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 502 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); }
#line 3745 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 507 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { init((yyval)); stack((yyval)).make_nil(); }
#line 3751 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 509 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); }
#line 3757 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 513 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { 
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_statement_expression);
          mto((yyval), (yyvsp[-1]));
        }
#line 3768 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 524 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-3]), (yyvsp[-2]), ID_index, (yyvsp[-1])); }
#line 3774 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 526 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_function_call);
          stack((yyval)).operands().resize(2);
          stack((yyval)).op0().swap(stack((yyvsp[-2])));
          stack((yyval)).op1().clear();
          stack((yyval)).op1().id(ID_arguments);
        }
#line 3787 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 535 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-2]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_function_call);
          stack((yyval)).operands().resize(2);
          stack((yyval)).op0().swap(stack((yyvsp[-3])));
          stack((yyval)).op1().swap(stack((yyvsp[-1])));
          stack((yyval)).op1().id(ID_arguments);
        }
#line 3800 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 544 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_member);
          mto((yyval), (yyvsp[-2]));
          stack((yyval)).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
        }
#line 3810 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 550 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_ptrmember);
          mto((yyval), (yyvsp[-2]));
          stack((yyval)).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
        }
#line 3820 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 556 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_postincrement);
          mto((yyval), (yyvsp[-1]));
        }
#line 3830 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 562 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_postdecrement);
          mto((yyval), (yyvsp[-1]));
        }
#line 3840 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 569 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          exprt tmp(ID_initializer_list);
          tmp.add_source_location()=stack((yyvsp[-2])).source_location();
          tmp.operands().swap(stack((yyvsp[-1])).operands());
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_typecast);
          stack((yyval)).move_to_operands(tmp);
          stack((yyval)).type().swap(stack((yyvsp[-4])));
        }
#line 3854 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 579 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // same as above
          exprt tmp(ID_initializer_list);
          tmp.add_source_location()=stack((yyvsp[-3])).source_location();
          tmp.operands().swap(stack((yyvsp[-2])).operands());
          (yyval)=(yyvsp[-6]);
          set((yyval), ID_typecast);
          stack((yyval)).move_to_operands(tmp);
          stack((yyval)).type().swap(stack((yyvsp[-5])));
        }
#line 3869 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 598 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_expression_list);
          mto((yyval), (yyvsp[0]));
        }
#line 3878 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 603 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 3887 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 612 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_preincrement);
          mto((yyval), (yyvsp[0]));
        }
#line 3897 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 618 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_predecrement);
          mto((yyval), (yyvsp[0]));
        }
#line 3907 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 624 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_address_of);
          mto((yyval), (yyvsp[0]));
        }
#line 3916 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 629 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { // this takes the address of a label (a gcc extension)
          (yyval)=(yyvsp[-1]);
          irep_idt identifier=PARSER.lookup_label(stack((yyvsp[0])).get(ID_C_base_name));
          set((yyval), ID_address_of);
          stack((yyval)).operands().resize(1);
          stack((yyval)).op0()=stack((yyvsp[0]));
          stack((yyval)).op0().id(ID_label);
          stack((yyval)).op0().set(ID_identifier, identifier);
        }
#line 3930 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 639 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_dereference);
          mto((yyval), (yyvsp[0]));
        }
#line 3939 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 644 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_unary_plus);
          mto((yyval), (yyvsp[0]));
        }
#line 3948 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 649 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_unary_minus);
          mto((yyval), (yyvsp[0]));
        }
#line 3957 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 654 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_bitnot);
          mto((yyval), (yyvsp[0]));
        }
#line 3966 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 659 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_not);
          mto((yyval), (yyvsp[0]));
        }
#line 3975 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 664 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_sizeof);
          mto((yyval), (yyvsp[0]));
        }
#line 3984 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 669 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]);
          set((yyval), ID_sizeof);
          stack((yyval)).add(ID_type_arg).swap(stack((yyvsp[-1])));
        }
#line 3993 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 674 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { // note no parentheses for expressions, just like sizeof
          (yyval)=(yyvsp[-1]);
          set((yyval), ID_alignof);
          mto((yyval), (yyvsp[0]));
        }
#line 4003 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 680 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_alignof);
          stack((yyval)).add(ID_type_arg).swap(stack((yyvsp[-1])));
        }
#line 4013 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 690 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_typecast);
          mto((yyval), (yyvsp[0]));
          stack((yyval)).type().swap(stack((yyvsp[-2])));
        }
#line 4024 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 697 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_complex_real);
          mto((yyval), (yyvsp[0]));
        }
#line 4033 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 702 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_complex_imag);
          mto((yyval), (yyvsp[0]));
        }
#line 4042 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 711 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_mult, (yyvsp[0])); }
#line 4048 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 713 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_div, (yyvsp[0])); }
#line 4054 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 715 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_mod, (yyvsp[0])); }
#line 4060 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 721 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_plus, (yyvsp[0])); }
#line 4066 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 723 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_minus, (yyvsp[0])); }
#line 4072 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 729 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_shl, (yyvsp[0])); }
#line 4078 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 731 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_shr, (yyvsp[0])); }
#line 4084 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 737 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_lt, (yyvsp[0])); }
#line 4090 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 739 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_gt, (yyvsp[0])); }
#line 4096 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 741 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_le, (yyvsp[0])); }
#line 4102 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 743 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_ge, (yyvsp[0])); }
#line 4108 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 749 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_equal, (yyvsp[0])); }
#line 4114 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 751 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_notequal, (yyvsp[0])); }
#line 4120 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 757 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_bitand, (yyvsp[0])); }
#line 4126 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 763 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_bitxor, (yyvsp[0])); }
#line 4132 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 769 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_bitor, (yyvsp[0])); }
#line 4138 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 775 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_and, (yyvsp[0])); }
#line 4144 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 781 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_or, (yyvsp[0])); }
#line 4150 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 790 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_implies, (yyvsp[0])); }
#line 4156 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 799 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_equal, (yyvsp[0])); }
#line 4162 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 805 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_if);
          mto((yyval), (yyvsp[-4]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 4173 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 812 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-2]);
          stack((yyval)).id(ID_side_effect);
          stack((yyval)).set(ID_statement, ID_gcc_conditional_expression);
          mto((yyval), (yyvsp[-3]));
          mto((yyval), (yyvsp[0]));
        }
#line 4184 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 823 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign); }
#line 4190 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 825 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_mult); }
#line 4196 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 827 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_div); }
#line 4202 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 829 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_mod); }
#line 4208 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 831 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_plus); }
#line 4214 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 833 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_minus); }
#line 4220 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 835 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_shl); }
#line 4226 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 837 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_shr); }
#line 4232 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 839 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_bitand); }
#line 4238 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 841 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_bitxor); }
#line 4244 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 843 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_bitor); }
#line 4250 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 849 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_comma, (yyvsp[0])); }
#line 4256 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 858 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { init((yyval)); stack((yyval)).make_nil(); }
#line 4262 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 866 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // type only, no declarator!
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
        }
#line 4272 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 872 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // type only, no identifier!
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
        }
#line 4282 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 884 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_static_assert(true);
          mto((yyval), (yyvsp[-3]));
          mto((yyval), (yyvsp[-1]));
        }
#line 4294 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 895 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            init((yyval), ID_declaration);
            stack((yyval)).type().swap(stack((yyvsp[-1])));
            PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          }
#line 4304 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 901 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // patch on the initializer
          (yyval)=(yyvsp[-1]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4314 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 907 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            init((yyval), ID_declaration);
            stack((yyval)).type().swap(stack((yyvsp[-1])));
            PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          }
#line 4324 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 913 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // patch on the initializer
          (yyval)=(yyvsp[-1]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4334 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 919 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            // just add the declarator
            PARSER.add_declarator(stack((yyvsp[-2])), stack((yyvsp[0])));
            // Needs to be done before initializer, as we want to see that identifier
            // already there!
          }
#line 4345 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 926 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // patch on the initializer
          (yyval)=(yyvsp[-4]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4355 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 935 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          stack((yyval)).id(ID_asm);
          stack((yyval)).set(ID_flavor, ID_gcc);
          stack((yyval)).operands().swap(stack((yyvsp[-1])).operands());
        }
#line 4366 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 946 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4374 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 954 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
        }
#line 4382 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 963 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute
            
            // the symbol has to be visible during initialization
            init((yyval), ID_declaration);
            stack((yyval)).type().swap(stack((yyvsp[-2])));
            PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
          }
#line 4395 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 972 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // add the initializer
          (yyval)=(yyvsp[-1]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4405 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 979 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1]));
            
            // the symbol has to be visible during initialization
            init((yyval), ID_declaration);
            stack((yyval)).type().swap(stack((yyvsp[-2])));
            PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
          }
#line 4418 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 988 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // add the initializer
          (yyval)=(yyvsp[-1]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4428 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 995 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // handled as typeof(initializer)
          stack((yyvsp[-4])).id(ID_typeof);
          stack((yyvsp[-4])).copy_to_operands(stack((yyvsp[0])));

          (yyvsp[-3])=merge((yyvsp[-2]), (yyvsp[-3]));

          // the symbol has to be visible during initialization
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-4])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-3])));
          // add the initializer
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4447 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1011 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            // type attribute goes into declarator
            (yyvsp[0])=merge((yyvsp[0]), (yyvsp[-2]));
            (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1]));
            PARSER.add_declarator(stack((yyvsp[-4])), stack((yyvsp[-1])));
          }
#line 4458 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1018 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // add in the initializer
          (yyval)=(yyvsp[-6]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4468 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1044 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4476 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1049 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4484 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1053 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4492 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1061 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4500 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1068 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4508 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1076 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4516 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1087 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_atomic); }
#line 4522 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1088 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_const); }
#line 4528 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1089 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_restrict); }
#line 4534 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1090 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_volatile); }
#line 4540 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1091 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_cprover_atomic); }
#line 4546 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1092 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_ptr32); }
#line 4552 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1093 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_ptr64); }
#line 4558 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1094 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]); set((yyval), ID_msc_based); mto((yyval), (yyvsp[-1])); }
#line 4564 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1100 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]);
          stack((yyval)).id(ID_aligned);
          stack((yyval)).set(ID_size, stack((yyvsp[-1])));
        }
#line 4573 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1105 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]);
          stack((yyval)).id(ID_aligned);
          stack((yyvsp[-1])).set(ID_type_arg, stack((yyvsp[-1])));
        }
#line 4582 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1125 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4590 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1132 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4598 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1136 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4606 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1140 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4614 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1144 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4622 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1151 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0])); // type attribute
        }
#line 4630 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1155 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4638 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1159 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4646 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1163 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4654 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1171 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4662 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1175 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4670 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1179 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4678 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1188 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4686 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1192 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4694 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1199 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4702 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1203 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4710 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1207 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4718 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1214 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4726 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1218 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4734 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1222 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4742 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1229 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4750 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1233 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4758 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1237 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4766 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1244 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4774 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1248 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4782 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1252 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4790 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1259 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]);
          stack((yyval)).id(ID_typeof);
          mto((yyval), (yyvsp[-1]));
        }
#line 4799 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1264 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]);
          stack((yyval)).id(ID_typeof);
          stack((yyval)).set(ID_type_arg, stack((yyvsp[-1])));
        }
#line 4808 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1273 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4816 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1277 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4824 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1281 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4832 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1288 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_atomic_type_specifier);
          stack_type((yyval)).subtype()=stack_type((yyvsp[-1]));
        }
#line 4842 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1298 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4850 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1302 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4858 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1306 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4866 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1313 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          stack((yyval)).id(stack((yyval)).get(ID_identifier));
        }
#line 4874 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1317 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          stack((yyval)).id(stack((yyval)).get(ID_identifier));
        }
#line 4882 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1321 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          stack((yyval)).id(ID_restrict);
        }
#line 4890 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1329 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]); mto((yyval), (yyvsp[-1]));
        }
#line 4898 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1333 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]); mto((yyval), (yyvsp[-1]));
        }
#line 4906 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1337 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]); mto((yyval), (yyvsp[-3])); mto((yyval), (yyvsp[-1]));
        }
#line 4914 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1341 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-9]); mto((yyval), (yyvsp[-7])); mto((yyval), (yyvsp[-5])); mto((yyval), (yyvsp[-3])); mto((yyval), (yyvsp[-1]));
        }
#line 4922 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1344 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { init((yyval), ID_nil); }
#line 4928 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1349 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval)); mto((yyval), (yyvsp[0]));
        }
#line 4936 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1353 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]); mto((yyval), (yyvsp[0]));
        }
#line 4944 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1360 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]); set((yyval), ID_msc_declspec);
          stack((yyval)).operands().swap(stack((yyvsp[-1])).operands());
        }
#line 4953 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1365 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]); set((yyval), ID_msc_declspec);
        }
#line 4961 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1372 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_nil);
        }
#line 4969 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1379 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_typedef); }
#line 4975 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1380 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_extern); }
#line 4981 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1381 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_static); }
#line 4987 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1382 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_auto); }
#line 4993 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1383 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_register); }
#line 4999 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1384 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_inline); }
#line 5005 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1385 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_thread_local); }
#line 5011 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1386 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_asm); }
#line 5017 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1387 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); }
#line 5023 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1389 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // equivalent to always_inline, and seemingly also has the semantics
          // of extern inline in that multiple definitions can be provided in
          // the same translation unit
          init((yyval));
          set((yyval), ID_static);
          set((yyvsp[0]), ID_inline);
          #if 0
          // enable once always_inline support is reinstantiated
          (yyvsp[0])=merge((yyvsp[0]), (yyval));

          init((yyval));
          set((yyval), ID_always_inline);
          (yyval)=merge((yyvsp[0]), (yyval));
          #else
          (yyval)=merge((yyvsp[0]), (yyval));
          #endif
        }
#line 5046 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1410 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int); }
#line 5052 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1411 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int8); }
#line 5058 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1412 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int16); }
#line 5064 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1413 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int32); }
#line 5070 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1414 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int64); }
#line 5076 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1415 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_char); }
#line 5082 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1416 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_short); }
#line 5088 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1417 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_long); }
#line 5094 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1418 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_float); }
#line 5100 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1419 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_float16); }
#line 5106 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1420 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_float32); }
#line 5112 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1421 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_float32x); }
#line 5118 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1422 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_float64); }
#line 5124 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1423 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_float64x); }
#line 5130 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1424 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_float80); }
#line 5136 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1425 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_float128); }
#line 5142 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1426 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_float128x); }
#line 5148 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1427 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_int128); }
#line 5154 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1428 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_decimal32); }
#line 5160 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1429 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_decimal64); }
#line 5166 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1430 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_decimal128); }
#line 5172 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1431 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_double); }
#line 5178 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1432 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_signed); }
#line 5184 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1433 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_unsigned); }
#line 5190 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1434 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_void); }
#line 5196 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1435 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_c_bool); }
#line 5202 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1436 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_complex); }
#line 5208 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1438 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_custom_bv);
          stack((yyval)).add(ID_size).swap(stack((yyvsp[-1])));
        }
#line 5218 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1444 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          set((yyval), ID_custom_floatbv);
          stack((yyval)).add(ID_size).swap(stack((yyvsp[-4])));
          stack((yyval)).add(ID_f).swap(stack((yyvsp[-1])));
        }
#line 5229 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1451 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          set((yyval), ID_custom_fixedbv);
          stack((yyval)).add(ID_size).swap(stack((yyvsp[-4])));
          stack((yyval)).add(ID_f).swap(stack((yyvsp[-1])));
        }
#line 5240 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1457 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_proper_bool); }
#line 5246 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1468 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]); stack_type((yyval)).subtype().swap(stack((yyvsp[-2]))); }
#line 5252 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1472 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          if(!PARSER.pragma_pack.empty() &&
             PARSER.pragma_pack.back().is_one())
            set((yyval), ID_packed);
        }
#line 5263 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1484 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            // an anon struct/union with body
          }
#line 5271 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1490 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // save the members
          stack((yyvsp[-8])).add(ID_components).get_sub().swap(
            (irept::subt &)stack((yyvsp[-3])).operands());

          // throw in the gcc attributes
          (yyval)=merge((yyvsp[-8]), merge((yyvsp[-7]), merge((yyvsp[-1]), (yyvsp[0]))));
        }
#line 5284 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1502 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            // A struct/union with tag and body.
            PARSER.add_tag_with_body(stack((yyvsp[0])));
            stack((yyvsp[-3])).set(ID_tag, stack((yyvsp[0])));
          }
#line 5294 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1510 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // save the members
          stack((yyvsp[-9])).add(ID_components).get_sub().swap(
            (irept::subt &)stack((yyvsp[-3])).operands());

          // throw in the gcc attributes
          (yyval)=merge((yyvsp[-9]), merge((yyvsp[-8]), merge((yyvsp[-1]), (yyvsp[0]))));
        }
#line 5307 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1522 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            // a struct/union with tag but without body
            stack((yyvsp[-3])).set(ID_tag, stack((yyvsp[0])));
          }
#line 5316 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1527 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-5])).set(ID_components, ID_nil);
          // type attributes
          (yyval)=merge((yyvsp[-5]), merge((yyvsp[-4]), (yyvsp[0])));
        }
#line 5326 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1536 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_struct); }
#line 5332 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1538 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_union); }
#line 5338 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1543 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_packed); }
#line 5344 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1545 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_transparent_union); }
#line 5350 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1547 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]); set((yyval), ID_vector); stack((yyval)).add(ID_size)=stack((yyvsp[-1])); }
#line 5356 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1549 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_aligned); }
#line 5362 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1551 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]); set((yyval), ID_aligned); stack((yyval)).set(ID_size, stack((yyvsp[-1]))); }
#line 5368 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1553 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]); set((yyval), ID_gcc_attribute_mode); stack((yyval)).set(ID_size, stack((yyvsp[-1])).get(ID_identifier)); }
#line 5374 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1555 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_static); }
#line 5380 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1557 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_weak); }
#line 5386 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1559 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]); set((yyval), ID_alias); mto((yyval), (yyvsp[-1])); }
#line 5392 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1561 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]); set((yyval), ID_section); mto((yyval), (yyvsp[-1])); }
#line 5398 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1563 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_noreturn); }
#line 5404 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1565 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_constructor); }
#line 5410 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1567 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_destructor); }
#line 5416 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1569 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_used); }
#line 5422 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1574 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
        }
#line 5430 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1583 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), (yyvsp[0]));
        }
#line 5438 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1590 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-2]); }
#line 5444 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1592 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_noreturn); }
#line 5450 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1597 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
        }
#line 5458 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1606 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 5466 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1613 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration_list);
        }
#line 5474 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1621 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration_list);
          mto((yyval), (yyvsp[0]));
        }
#line 5483 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1626 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          mto((yyval), (yyvsp[0]));
        }
#line 5492 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1636 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
        }
#line 5500 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1649 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2]));

          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_member(true);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5513 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1658 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5522 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1668 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          if(!PARSER.pragma_pack.empty() &&
             !PARSER.pragma_pack.back().is_zero())
          {
            // communicate #pragma pack(n) alignment constraints by
            // by both setting packing AND alignment; see padding.cpp
            // for more details
            init((yyval));
            set((yyval), ID_packed);
            (yyvsp[-1])=merge((yyvsp[-1]), (yyval));

            init((yyval));
            set((yyval), ID_aligned);
            stack((yyval)).set(ID_size, PARSER.pragma_pack.back());
            (yyvsp[-1])=merge((yyvsp[-1]), (yyval));
          }

          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2]));

          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_member(true);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5551 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1693 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5560 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1701 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);

          if(stack((yyvsp[-1])).is_not_nil())
            make_subtype((yyval), (yyvsp[-1]));

          if(stack((yyvsp[0])).is_not_nil()) // type attribute
            (yyval)=merge((yyvsp[0]), (yyval));
        }
#line 5574 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1711 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_abstract);
        }
#line 5582 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1715 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack_type((yyval)).subtype()=typet(ID_abstract);

          if(stack((yyvsp[0])).is_not_nil()) // type attribute
            (yyval)=merge((yyvsp[0]), (yyval));
        }
#line 5594 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1726 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          if(stack((yyvsp[-1])).is_not_nil())
            make_subtype((yyval), (yyvsp[-1]));
          
          if(stack((yyvsp[0])).is_not_nil()) // type attribute
            (yyval)=merge((yyvsp[0]), (yyval));
        }
#line 5607 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1735 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack_type((yyval)).subtype()=typet(ID_abstract);

          if(stack((yyvsp[0])).is_not_nil()) // type attribute
            (yyval)=merge((yyvsp[0]), (yyval));
        }
#line 5619 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1746 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_nil);
        }
#line 5627 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1754 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          set((yyval), ID_c_bit_field);
          stack_type((yyval)).set(ID_size, stack((yyvsp[0])));
          stack_type((yyval)).subtype().id(ID_abstract);
        }
#line 5638 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1765 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            // an anon enum
          }
#line 5646 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1770 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-6])).operands().swap(stack((yyvsp[-2])).operands());
          (yyval)=merge((yyvsp[-6]), merge((yyvsp[-5]), (yyvsp[0]))); // throw in the gcc attributes
        }
#line 5655 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1777 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            // an enum with tag
            stack((yyvsp[-2])).set(ID_tag, stack((yyvsp[0])));
          }
#line 5664 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1783 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-7])).operands().swap(stack((yyvsp[-2])).operands());
          (yyval)=merge((yyvsp[-7]), merge((yyvsp[-6]), (yyvsp[0]))); // throw in the gcc attributes
        }
#line 5673 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1791 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-3])).id(ID_c_enum_tag); // tag only
          stack((yyvsp[-3])).set(ID_tag, stack((yyvsp[-1])));
          (yyval)=merge((yyvsp[-3]), merge((yyvsp[-2]), (yyvsp[0]))); // throw in the gcc attributes
        }
#line 5683 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1799 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          set((yyval), ID_c_enum);
        }
#line 5692 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1807 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration_list);
        }
#line 5700 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1815 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration_list);
          mto((yyval), (yyvsp[0]));
        }
#line 5709 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1820 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 5718 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1825 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
        }
#line 5726 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1832 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_enum_constant(true);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-2])));
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 5737 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1842 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).make_nil();
        }
#line 5746 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1847 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
        }
#line 5754 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1855 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          typet tmp(ID_ellipsis);
          (yyval)=(yyvsp[-2]);
          stack_type((yyval)).move_to_subtypes(tmp);
        }
#line 5764 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1864 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_parameters);
          mts((yyval), (yyvsp[0]));
        }
#line 5773 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 1869 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mts((yyval), (yyvsp[0]));
        }
#line 5782 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 1876 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type()=typet(ID_KnR);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5792 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 1885 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_parameters);
          mts((yyval), (yyvsp[0]));
        }
#line 5801 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 1890 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mts((yyval), (yyvsp[0]));
        }
#line 5810 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 1898 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[0])));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack((yyval)), declarator);
        }
#line 5822 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 1906 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5833 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 1913 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute to go into declarator
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-2])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
        }
#line 5845 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 1921 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // the second tree is really the declarator -- not part
          // of the type!
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5858 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 1930 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[0])));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack((yyval)), declarator);
        }
#line 5870 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 1938 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5881 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 1945 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute to go into declarator
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-2])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
        }
#line 5893 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 1953 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[0])));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack((yyval)), declarator);
        }
#line 5905 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 1961 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5916 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 1968 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute to go into declarator
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-2])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
        }
#line 5928 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 1976 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // the second tree is really the declarator -- not part of the type!
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5940 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 1984 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[0])));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack((yyval)), declarator);
        }
#line 5952 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 1992 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5963 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 1999 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute to go into declarator
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-2])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
        }
#line 5975 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2015 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 5983 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2019 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[-2]));
          make_subtype((yyval), (yyvsp[0]));
        }
#line 5992 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2024 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 6000 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2028 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[-2]));
          make_subtype((yyval), (yyvsp[0]));
        }
#line 6009 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2036 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).make_nil();
        }
#line 6018 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2041 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6024 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2052 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_initializer_list);
          stack((yyval)).operands().swap(stack((yyvsp[-1])).operands());
        }
#line 6034 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2058 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_initializer_list);
          stack((yyval)).operands().swap(stack((yyvsp[-2])).operands());
        }
#line 6044 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2067 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          exprt tmp;
          tmp.swap(stack((yyval)));
          stack((yyval)).clear();
          stack((yyval)).move_to_operands(tmp);
        }
#line 6056 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2075 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 6065 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2084 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          set((yyval), ID_initializer_list);
          stack((yyval)).operands().clear();
        }
#line 6075 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2094 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack((yyval)).id(ID_designated_initializer);
          stack((yyval)).add(ID_designator).swap(stack((yyvsp[-2])));
          mto((yyval), (yyvsp[0]));
        }
#line 6086 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2102 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_designated_initializer);
          stack((yyval)).add(ID_designator).swap(stack((yyvsp[-1])));
          mto((yyval), (yyvsp[0]));
        }
#line 6096 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2108 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // yet another GCC speciality
          (yyval)=(yyvsp[-1]);
          stack((yyval)).id(ID_designated_initializer);
          exprt designator;
          exprt member(ID_member);
          member.set(ID_component_name, stack((yyvsp[-2])).get(ID_C_base_name));
          designator.move_to_operands(member);
          stack((yyval)).add(ID_designator).swap(designator);
          mto((yyval), (yyvsp[0]));
        }
#line 6112 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2123 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyvsp[-1])).id(ID_member);
          stack((yyvsp[-1])).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
          mto((yyval), (yyvsp[-1]));
        }
#line 6123 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2130 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyvsp[-2])).id(ID_index);
          mto((yyvsp[-2]), (yyvsp[-1]));
          mto((yyval), (yyvsp[-2]));
        }
#line 6134 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2137 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // TODO
          init((yyval));
          stack((yyvsp[-4])).id(ID_index);
          mto((yyvsp[-4]), (yyvsp[-3]));
          mto((yyval), (yyvsp[-4]));
        }
#line 6146 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2145 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyvsp[-2])).id(ID_index);
          mto((yyvsp[-2]), (yyvsp[-1]));
          mto((yyval), (yyvsp[-2]));
        }
#line 6157 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2152 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // TODO
          (yyval)=(yyvsp[-5]);
          stack((yyvsp[-4])).id(ID_index);
          mto((yyvsp[-4]), (yyvsp[-3]));
          mto((yyval), (yyvsp[-4]));
        }
#line 6169 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2160 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          stack((yyvsp[-1])).id(ID_member);
          stack((yyvsp[-1])).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
          mto((yyval), (yyvsp[-1]));
        }
#line 6180 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2188 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          statement((yyval), ID_decl);
          mto((yyval), (yyvsp[0]));
        }
#line 6190 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2197 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          /* Only semicolons permitted after the attribute:
             https://gcc.gnu.org/onlinedocs/gcc/Label-Attributes.html */
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_label);
          irep_idt identifier=PARSER.lookup_label(stack((yyvsp[-3])).get(ID_C_base_name));
          stack((yyval)).set(ID_label, identifier);
          // attribute ignored
          statement((yyvsp[-1]), ID_skip);
          mto((yyval), (yyvsp[-1]));
        }
#line 6206 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2209 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          statement((yyval), ID_label);
          irep_idt identifier=PARSER.lookup_label(stack((yyvsp[-2])).get(ID_C_base_name));
          stack((yyval)).set(ID_label, identifier);
          mto((yyval), (yyvsp[0]));
        }
#line 6218 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2217 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          statement((yyval), ID_switch_case);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6229 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2224 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // this is a GCC extension
          (yyval)=(yyvsp[-5]);
          statement((yyval), ID_gcc_switch_case_range);
          mto((yyval), (yyvsp[-4]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6242 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2233 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_switch_case);
          stack((yyval)).operands().push_back(nil_exprt());
          mto((yyval), (yyvsp[0]));
          stack((yyval)).set(ID_default, true);
        }
#line 6254 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2244 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // attribute ignored
          (yyval)=(yyvsp[0]);
        }
#line 6263 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2252 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          statement((yyval), ID_block);
          stack((yyval)).set(ID_C_end_location, stack((yyvsp[0])).source_location());
          PARSER.pop_scope();
        }
#line 6274 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2259 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_block);
          stack((yyval)).set(ID_C_end_location, stack((yyvsp[0])).source_location());
          stack((yyval)).operands().swap(stack((yyvsp[-1])).operands());
          PARSER.pop_scope();
        }
#line 6286 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2267 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_C_end_location, stack((yyvsp[0])).source_location());
          mto((yyval), (yyvsp[-1]));
          PARSER.pop_scope();
        }
#line 6298 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2278 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          unsigned prefix=++PARSER.current_scope().compound_counter;
          PARSER.new_scope(std::to_string(prefix)+"::");
        }
#line 6307 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2286 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          mto((yyval), (yyvsp[0]));
        }
#line 6316 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 2291 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          mto((yyval), (yyvsp[0]));
        }
#line 6324 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2298 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);

          if(stack((yyvsp[-1])).is_nil())
            statement((yyval), ID_skip);
          else
          {
            statement((yyval), ID_expression);
            mto((yyval), (yyvsp[-1]));
          }
        }
#line 6340 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2313 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          statement((yyval), ID_ifthenelse);
          stack((yyval)).operands().reserve(3);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
          stack((yyval)).copy_to_operands(nil_exprt());
        }
#line 6353 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2322 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          statement((yyval), ID_ifthenelse);
          stack((yyval)).operands().reserve(3);
          mto((yyval), (yyvsp[-4]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6366 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2331 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          statement((yyval), ID_switch);
          stack((yyval)).operands().reserve(2);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6378 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 2348 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          statement((yyval), ID_while);
          stack((yyval)).operands().reserve(2);
          mto((yyval), (yyvsp[-3]));
          mto((yyval), (yyvsp[0]));

          if(stack((yyvsp[-1])).is_not_nil())
            stack((yyval)).add(ID_C_spec_loop_invariant).swap(stack((yyvsp[-1])));
        }
#line 6393 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 2360 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-7]);
          statement((yyval), ID_dowhile);
          stack((yyval)).operands().reserve(2);
          mto((yyval), (yyvsp[-3]));
          mto((yyval), (yyvsp[-6]));

          if(stack((yyvsp[-1])).is_not_nil())
            stack((yyval)).add(ID_C_spec_loop_invariant).swap(stack((yyvsp[-1])));
        }
#line 6408 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 2371 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            // In C99 and upwards, for(;;) has a scope
            if(PARSER.for_has_scope)
            {
              unsigned prefix=++PARSER.current_scope().compound_counter;
              PARSER.new_scope(std::to_string(prefix)+"::");
            }
          }
#line 6421 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 2384 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-9]);
          statement((yyval), ID_for);
          stack((yyval)).operands().reserve(4);
          mto((yyval), (yyvsp[-6]));
          mto((yyval), (yyvsp[-5]));
          mto((yyval), (yyvsp[-3]));
          mto((yyval), (yyvsp[0]));

          if(stack((yyvsp[-1])).is_not_nil())
            stack((yyval)).add(ID_C_spec_loop_invariant).swap(stack((yyvsp[-1])));

          if(PARSER.for_has_scope)
            PARSER.pop_scope(); // remove the C99 for-scope
        }
#line 6441 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 2403 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          if(stack((yyvsp[-1])).id()==ID_symbol)
          {
            statement((yyval), ID_goto);
            irep_idt identifier=PARSER.lookup_label(stack((yyvsp[-1])).get(ID_C_base_name));
            stack((yyval)).set(ID_destination, identifier);
          }
          else
          {
            // this is a gcc extension.
            // the original grammar uses identifier_or_typedef_name
            statement((yyval), ID_gcc_computed_goto);
            mto((yyval), (yyvsp[-1]));
          }
        }
#line 6462 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 2420 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_goto);
          irep_idt identifier=PARSER.lookup_label(stack((yyvsp[-1])).get(ID_C_base_name));
          stack((yyval)).set(ID_destination, identifier);
        }
#line 6473 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 2427 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); statement((yyval), ID_continue); }
#line 6479 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 2429 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); statement((yyval), ID_break); }
#line 6485 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 2431 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); statement((yyval), ID_return); }
#line 6491 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 2433 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-2]); statement((yyval), ID_return); mto((yyval), (yyvsp[-1])); }
#line 6497 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 2438 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { 
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_gcc_local_label);
          
          // put these into the scope
          forall_operands(it, stack((yyvsp[-1])))
          {
            // labels have a separate name space
            irep_idt base_name=it->get(ID_identifier);
            irep_idt id="label-"+id2string(base_name);
            ansi_c_parsert::identifiert &i=PARSER.current_scope().name_map[id];
            i.id_class=ansi_c_id_classt::ANSI_C_LOCAL_LABEL;
            i.prefixed_name=PARSER.current_scope().prefix+id2string(id);
            i.base_name=base_name;
          }

          stack((yyval)).add(ID_label).get_sub().swap((irept::subt&)stack((yyvsp[-1])).operands());
        }
#line 6520 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 2460 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          mto((yyval), (yyvsp[0]));
        }
#line 6529 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 2465 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 6538 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 2476 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-5]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_flavor, ID_gcc);
          stack((yyval)).operands().swap(stack((yyvsp[-2])).operands());
        }
#line 6548 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 2482 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_flavor, ID_gcc);
          stack((yyval)).operands().resize(5);
          stack((yyval)).op0()=stack((yyvsp[-1]));
        }
#line 6560 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 2493 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_flavor, ID_msc);
          mto((yyval), (yyvsp[-1]));
        }
#line 6570 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 2499 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_flavor, ID_msc);
          mto((yyval), (yyvsp[0]));
        }
#line 6580 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 2509 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          statement((yyval), ID_msc_try_except);
          mto((yyval), (yyvsp[-5]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6592 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 2518 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          statement((yyval), ID_msc_try_finally);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6603 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 2525 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          statement((yyval), ID_msc_leave);
        }
#line 6612 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 2533 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          statement((yyval), ID_CPROVER_throw);
        }
#line 6621 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 2539 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          statement((yyval), ID_CPROVER_try_catch);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6632 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 2547 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          statement((yyval), ID_CPROVER_try_finally);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6643 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 2573 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).operands().resize(5);
          stack((yyval)).operands()[0]=stack((yyvsp[0]));
        }
#line 6653 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 2579 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).operands().resize(5);
          stack((yyval)).operands()[0]=stack((yyvsp[-1]));
          stack((yyval)).operands()[1]=stack((yyvsp[0]));
        }
#line 6664 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 2586 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).operands().resize(5);
          stack((yyval)).operands()[0]=stack((yyvsp[-2]));
          stack((yyval)).operands()[1]=stack((yyvsp[-1]));
          stack((yyval)).operands()[2]=stack((yyvsp[0]));
        }
#line 6676 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 2594 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).operands().resize(5);
          stack((yyval)).operands()[0]=stack((yyvsp[-3]));
          stack((yyval)).operands()[1]=stack((yyvsp[-2]));
          stack((yyval)).operands()[2]=stack((yyvsp[-1]));
          stack((yyval)).operands()[3]=stack((yyvsp[0]));
        }
#line 6689 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 2603 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).operands().resize(5);
          stack((yyval)).operands()[0]=stack((yyvsp[-4]));
          stack((yyval)).operands()[1]=stack((yyvsp[-3]));
          stack((yyval)).operands()[2]=stack((yyvsp[-2]));
          stack((yyval)).operands()[3]=stack((yyvsp[-1]));
          stack((yyval)).operands()[4]=stack((yyvsp[0]));
        }
#line 6703 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 2619 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
        }
#line 6711 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 2627 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          stack((yyval)).id(ID_gcc_asm_output);
          stack((yyval)).move_to_operands(stack((yyvsp[-3])), stack((yyvsp[-1]))); 
        }
#line 6721 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 2634 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          stack((yyval)).id(ID_gcc_asm_output);
          stack((yyval)).move_to_operands(stack((yyvsp[-3])), stack((yyvsp[-1]))); 
        }
#line 6731 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 2643 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), irep_idt());
          mto((yyval), (yyvsp[0]));
        }
#line 6740 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 2648 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 6749 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 2656 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
        }
#line 6757 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 2664 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          stack((yyval)).id(ID_gcc_asm_input);
          stack((yyval)).move_to_operands(stack((yyvsp[-3])), stack((yyvsp[-1]))); 
        }
#line 6767 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 2671 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          stack((yyval)).id(ID_gcc_asm_input);
          stack((yyval)).move_to_operands(stack((yyvsp[-3])), stack((yyvsp[-1]))); 
        }
#line 6777 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 2680 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), irep_idt());
          mto((yyval), (yyvsp[0]));
        }
#line 6786 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 2685 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 6795 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 2693 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
        }
#line 6803 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 2701 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_gcc_asm_clobbered_register);
          mto((yyval), (yyvsp[0]));
        }
#line 6812 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 2709 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), irep_idt());
          mto((yyval), (yyvsp[0]));
        }
#line 6821 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 2714 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 6830 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 2722 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
        }
#line 6838 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 2730 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          mto((yyval), (yyvsp[0]));
        }
#line 6847 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 2735 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 6856 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 2743 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          irep_idt identifier=PARSER.lookup_label(stack((yyval)).get(ID_C_base_name));
          stack((yyval)).id(ID_label);
          stack((yyval)).set(ID_identifier, identifier);
        }
#line 6867 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 2762 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // put into global list of items
          PARSER.copy_item(to_ansi_c_declaration(stack((yyvsp[0]))));
        }
#line 6876 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 2767 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          PARSER.copy_item(to_ansi_c_declaration(stack((yyvsp[0]))));
        }
#line 6884 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 2776 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // Not obvious what to do with this.
        }
#line 6892 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 2780 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // Not obvious what to do with this.
        }
#line 6900 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 2790 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          if(stack((yyvsp[-2])).is_not_nil())
            stack((yyvsp[-3])).add(ID_C_spec_requires).swap(stack((yyvsp[-2])));
          if(stack((yyvsp[-1])).is_not_nil())
            stack((yyvsp[-3])).add(ID_C_spec_ensures).swap(stack((yyvsp[-1])));
          // The head is a declaration with one declarator,
          // and the body becomes the 'value'.
          (yyval)=(yyvsp[-3]);
          ansi_c_declarationt &ansi_c_declaration=
            to_ansi_c_declaration(stack((yyval)));
            
          assert(ansi_c_declaration.declarators().size()==1);
          ansi_c_declaration.add_initializer(stack((yyvsp[0])));
          
          // Kill the scope that 'function_head' creates.
          PARSER.pop_scope();
          
          // We are no longer in any function.
          PARSER.set_function(irep_idt());
        }
#line 6925 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 2818 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval));
        }
#line 6933 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 2826 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_decl_block);
          mto((yyval), (yyvsp[0]));
        }
#line 6942 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 2831 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          mto((yyval), (yyvsp[0]));
        }
#line 6951 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 2845 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 6959 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 2849 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 6967 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 2856 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6975 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 2860 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6983 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 2864 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6991 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 2868 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6999 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 2876 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 7007 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 2880 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 7015 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 2884 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 7023 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 2892 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-2])).set(ID_tag, stack((yyvsp[-1])));
          (yyval)=merge((yyvsp[-3]), merge((yyvsp[-2]), (yyvsp[0])));
        }
#line 7032 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 2897 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-2])).id(ID_c_enum_tag);
          stack((yyvsp[-2])).set(ID_tag, stack((yyvsp[-1])));
          (yyval)=merge((yyvsp[-3]), merge((yyvsp[-2]), (yyvsp[0])));
        }
#line 7042 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 2913 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 7052 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 2919 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 7062 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 2925 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 7071 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 2933 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          irept return_type(ID_int);
          stack((yyval)).type().swap(return_type);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 7083 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 2941 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 7094 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 2948 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 7105 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 2955 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 7116 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 2962 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 7127 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 2978 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          stack_type((yyvsp[-3]))=typet(ID_abstract);
          (yyvsp[-2])=merge((yyvsp[-2]), (yyvsp[-3])); // dest=$2
          make_subtype((yyvsp[-1]), (yyvsp[-2])); // dest=$3
          (yyval)=(yyvsp[-1]);
        }
#line 7138 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 2985 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          stack_type((yyvsp[-4]))=typet(ID_abstract);
          (yyvsp[-3])=merge((yyvsp[-3]), (yyvsp[-4])); // dest=$2
          make_subtype((yyvsp[-2]), (yyvsp[-3])); // dest=$3
          /* note: this is (a pointer to) a function ($5) */
          /* or an array ($5) with name ($3) */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7152 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 2995 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 7161 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 3009 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7170 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 3019 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 7179 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 3024 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
          do_pointer((yyvsp[-2]), (yyvsp[-1]));
        }
#line 7188 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 3032 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7194 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 3034 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function ($4) */
          /* or an array ($4)! */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7205 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 3045 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          do_pointer((yyvsp[-3]), (yyvsp[-1]));
        }
#line 7214 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 3050 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // not sure where the type qualifiers belong
          (yyval)=merge((yyvsp[-3]), (yyvsp[-1]));
          do_pointer((yyvsp[-4]), (yyvsp[-3]));
        }
#line 7224 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 3056 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 7233 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 3061 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
          do_pointer((yyvsp[-2]), (yyvsp[-1]));
        }
#line 7242 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 3069 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7248 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 3071 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {        /* note: this is a function ($3) with a typedef name ($2) */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[-1]));
        }
#line 7257 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 3076 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function ($4) */
          /* or an array ($4)! */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7268 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 3087 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); }
#line 7274 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 3098 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 7283 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 3103 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // This is an Apple extension to C/C++/Objective C.
          // http://en.wikipedia.org/wiki/Blocks_(C_language_extension)
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 7294 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 3110 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // the type_qualifier_list is for the pointer,
          // and not the identifier_declarator
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type((yyvsp[-2])).id(ID_frontend_pointer);
          stack_type((yyvsp[-2])).subtype()=typet(ID_abstract);
          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2])); // dest=$2
          make_subtype((yyvsp[0]), (yyvsp[-1])); // dest=$3
          (yyval)=(yyvsp[0]);
        }
#line 7310 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 3125 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          /* note: this is a function or array ($2) with name ($1) */
          (yyval)=(yyvsp[-1]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7320 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 3131 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7326 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 3133 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function ($4) */
          /* or an array ($4)! */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7337 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 3143 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // We remember the last declarator for the benefit
          // of function argument scoping.
          PARSER.current_scope().last_declarator=
            stack((yyvsp[0])).get(ID_identifier);
        }
#line 7348 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 3150 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); }
#line 7354 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 3170 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_code);
          stack_type((yyval)).subtype()=typet(ID_abstract);
          stack_type((yyval)).add(ID_parameters);
          stack_type((yyval)).set(ID_C_KnR, true);
        }
#line 7366 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 3178 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            // Use last declarator (i.e., function name) to name
            // the scope.
            PARSER.new_scope(
              id2string(PARSER.current_scope().last_declarator)+"::");
          }
#line 7377 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 3187 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          set((yyval), ID_code);
          stack_type((yyval)).subtype()=typet(ID_abstract);
          stack_type((yyval)).add(ID_parameters).get_sub().
            swap((irept::subt &)(stack_type((yyvsp[-2])).subtypes()));
          PARSER.pop_scope();
          adjust_KnR_parameters(stack((yyval)).add(ID_parameters), stack((yyvsp[0])));
          stack((yyval)).set(ID_C_KnR, true);
        }
#line 7392 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 3202 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          set((yyval), ID_code);
          stack_type((yyval)).add(ID_parameters);
          stack_type((yyval)).subtype()=typet(ID_abstract);
        }
#line 7403 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 3209 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
            // Use last declarator (i.e., function name) to name
            // the scope.
            PARSER.new_scope(
              id2string(PARSER.current_scope().last_declarator)+"::");
          }
#line 7414 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 3217 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          set((yyval), ID_code);
          stack_type((yyval)).subtype()=typet(ID_abstract);
          stack_type((yyval)).add(ID_parameters).get_sub().
            swap((irept::subt &)(stack_type((yyvsp[-2])).subtypes()));
          PARSER.pop_scope();

          if(stack((yyvsp[0])).is_not_nil())
          {
            adjust_KnR_parameters(stack((yyval)).add(ID_parameters), stack((yyvsp[0])));
            stack((yyval)).set(ID_C_KnR, true);
          }
        }
#line 7433 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 3235 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          set((yyval), ID_array);
          stack_type((yyval)).subtype()=typet(ID_abstract);
          stack_type((yyval)).add(ID_size).make_nil();
        }
#line 7444 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 3242 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // this is C99: e.g., restrict, const, etc
          // The type qualifier belongs to the array, not the
          // contents of the array, nor the size.
          set((yyvsp[-2]), ID_array);
          stack_type((yyvsp[-2])).subtype()=typet(ID_abstract);
          stack_type((yyvsp[-2])).add(ID_size).make_nil();
          (yyval)=merge((yyvsp[-1]), (yyvsp[-2]));
        }
#line 7458 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 3252 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // these should be allowed in prototypes only
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_array);
          stack_type((yyval)).subtype()=typet(ID_abstract);
          stack_type((yyval)).add(ID_size).make_nil();
        }
#line 7470 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 3260 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_array);
          stack_type((yyval)).add(ID_size).swap(stack((yyvsp[-1])));
          stack_type((yyval)).subtype()=typet(ID_abstract);
        }
#line 7481 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 3267 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // The type qualifier belongs to the array, not the
          // contents of the array, nor the size.
          set((yyvsp[-3]), ID_array);
          stack_type((yyvsp[-3])).add(ID_size).swap(stack((yyvsp[-1])));
          stack_type((yyvsp[-3])).subtype()=typet(ID_abstract);
          (yyval)=merge((yyvsp[-2]), (yyvsp[-3])); // dest=$2
        }
#line 7494 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 592:
#line 3276 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // we need to push this down
          (yyval)=(yyvsp[-3]);
          set((yyvsp[-2]), ID_array);
          stack_type((yyvsp[-2])).add(ID_size).swap(stack((yyvsp[-1])));
          stack_type((yyvsp[-2])).subtype()=typet(ID_abstract);
          make_subtype((yyvsp[-3]), (yyvsp[-2]));
        }
#line 7507 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 593:
#line 3285 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // these should be allowed in prototypes only
          // we need to push this down
          (yyval)=(yyvsp[-3]);
          set((yyvsp[-2]), ID_array);
          stack_type((yyvsp[-2])).add(ID_size).make_nil();
          stack_type((yyvsp[-2])).subtype()=typet(ID_abstract);
          make_subtype((yyvsp[-3]), (yyvsp[-2]));
        }
#line 7521 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 594:
#line 3298 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type((yyval)).id(ID_frontend_pointer);
          stack_type((yyval)).subtype()=typet(ID_abstract);
        }
#line 7533 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 595:
#line 3306 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // The type_qualifier_list belongs to the pointer,
          // not to the (missing) abstract declarator.
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type((yyvsp[-1])).id(ID_frontend_pointer);
          stack_type((yyvsp[-1])).subtype()=typet(ID_abstract);
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 7547 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 596:
#line 3316 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 7556 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 597:
#line 3321 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // The type_qualifier_list belongs to the pointer,
          // not to the abstract declarator.
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type((yyvsp[-2])).id(ID_frontend_pointer);
          stack_type((yyvsp[-2])).subtype()=typet(ID_abstract);
          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2])); // dest=$2
          make_subtype((yyvsp[0]), (yyvsp[-1])); // dest=$3
          (yyval)=(yyvsp[0]);
        }
#line 7572 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 598:
#line 3333 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // This is an Apple extension to C/C++/Objective C.
          // http://en.wikipedia.org/wiki/Blocks_(C_language_extension)
          (yyval)=(yyvsp[0]);
          set((yyval), ID_block_pointer);
          stack_type((yyval)).subtype()=typet(ID_abstract);
        }
#line 7584 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 599:
#line 3344 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type((yyval)).id(ID_frontend_pointer);
          stack_type((yyval)).subtype()=typet(ID_abstract);
        }
#line 7596 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 600:
#line 3352 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // The type_qualifier_list belongs to the pointer,
          // not to the (missing) abstract declarator.
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type((yyvsp[-1])).id(ID_frontend_pointer);
          stack_type((yyvsp[-1])).subtype()=typet(ID_abstract);
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 7610 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 601:
#line 3362 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 7619 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 602:
#line 3367 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // The type_qualifier_list belongs to the pointer,
          // not to the (missing) abstract declarator.
          // The below is deliberately not using pointer_type();
          // the width is added during conversion.
          stack_type((yyvsp[-2])).id(ID_frontend_pointer);
          stack_type((yyvsp[-2])).subtype()=typet(ID_abstract);
          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2])); // dest=$2
          make_subtype((yyvsp[0]), (yyvsp[-1])); // dest=$3
          (yyval)=(yyvsp[0]);
        }
#line 7635 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 603:
#line 3379 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          // This is an Apple extension to C/C++/Objective C.
          // http://en.wikipedia.org/wiki/Blocks_(C_language_extension)
          (yyval)=(yyvsp[0]);
          set((yyval), ID_block_pointer);
          stack_type((yyval)).subtype()=typet(ID_abstract);
        }
#line 7647 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 604:
#line 3390 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7653 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 605:
#line 3392 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7659 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 606:
#line 3394 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7665 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 607:
#line 3396 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function or array ($4) */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7675 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 608:
#line 3402 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function or array ($4) */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7685 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 609:
#line 3411 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7691 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 610:
#line 3413 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7697 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 612:
#line 3416 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function ($4) */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7707 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;


#line 7711 "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/ansi_c_y.tab.cpp" /* yacc.c:1646  */
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
#line 3423 "/home/fhy18/gitRepo/cbmc-5.11/src/ansi-c/parser.y" /* yacc.c:1906  */

