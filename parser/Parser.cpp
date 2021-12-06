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
#line 2 "./parser/Parser.y"

#include <iostream>
#include <string>
#include <unistd.h>
#include <stdio.h>
#include "Utils/UnionStruct.hpp"
#include "../src/ChmrInterpreter.hpp"
#include "Utils/IntrBridge.hpp"

using namespace std;

int lineno = 0;
ChmrInterpreter i;

void PrintLineNo();
void yyerror(const char* err);
extern int yylex();
extern FILE *yyin;
extern void yyrestart(FILE* input);
extern char* yytext;

#line 92 "./parser/Parser.cpp"

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
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_PARSER_HPP_INCLUDED
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
    INT = 258,
    FLOAT = 259,
    DOUBLE = 260,
    BOOL = 261,
    CHAR = 262,
    STRING = 263,
    LIST = 264,
    MAP = 265,
    CAST = 266,
    LESS = 267,
    GREATER = 268,
    LESS_EQUAL = 269,
    GREATER_EQUAL = 270,
    EQUAL = 271,
    NOT_EQUAL = 272,
    PRINT = 273,
    AND = 274,
    OR = 275,
    NOT = 276,
    EXIT = 277,
    NEWLINE = 278,
    SEMICOLON = 279,
    EOPU = 280,
    REF = 281,
    ADD = 282,
    SUB = 283,
    MUL = 284,
    DIV = 285,
    POW = 286,
    ADD_LIST = 287,
    ADD_MAP = 288,
    SET = 289,
    GET = 290,
    POINTS_TO = 291,
    DO = 292,
    END = 293,
    IF = 294,
    ELSE_IF = 295,
    ELSE = 296,
    INT_VAL = 297,
    DOUBLE_VAL = 298,
    STRING_VAL = 299,
    CHAR_VAL = 300,
    BOOL_VAL = 301,
    FLOAT_VAL = 302,
    MULTI_WS = 303,
    SINGLE_WS = 304,
    ID = 305,
    UNKNOWN = 306
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_PARSER_HPP_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  68
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   663

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

#define YYUNDEFTOK  2
#define YYMAXUTOK   306


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
      61,    62,     2,     2,     2,     2,    63,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,     2,
      55,    54,    56,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,    52,    60,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    57,    57,    61,    65,    65,    65,    65,    67,    69,
      75,    85,    97,    97,    99,   100,   101,   102,   105,   105,
     107,   115,   123,   131,   143,   151,   159,   168,   169,   170,
     171,   172,   173,   177,   182,   188,   188,   190,   190,   192,
     197,   203,   209,   214,   219,   224,   229,   234,   242,   248,
     254,   263,   275,   276,   276,   277,   277,   279,   280,   291,
     296,   303,   310,   317,   324,   331,   338,   345,   352,   364,
     371,   378,   385,   392,   399,   410,   417,   424,   434,   437,
     440,   447,   450,   453,   460,   467,   474,   483,   484,   485,
     486,   487,   488,   489,   490,   493,   494,   496,   496
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "DOUBLE", "BOOL", "CHAR",
  "STRING", "LIST", "MAP", "CAST", "LESS", "GREATER", "LESS_EQUAL",
  "GREATER_EQUAL", "EQUAL", "NOT_EQUAL", "PRINT", "AND", "OR", "NOT",
  "EXIT", "NEWLINE", "SEMICOLON", "EOPU", "REF", "ADD", "SUB", "MUL",
  "DIV", "POW", "ADD_LIST", "ADD_MAP", "SET", "GET", "POINTS_TO", "DO",
  "END", "IF", "ELSE_IF", "ELSE", "INT_VAL", "DOUBLE_VAL", "STRING_VAL",
  "CHAR_VAL", "BOOL_VAL", "FLOAT_VAL", "MULTI_WS", "SINGLE_WS", "ID",
  "UNKNOWN", "'|'", "':'", "'='", "'<'", "'>'", "'['", "']'", "'{'", "'}'",
  "'('", "')'", "'.'", "$accept", "do", "end", "scope", "newScope",
  "ifMod", "elseMod", "elifMod", "elifChain", "if", "newline", "term",
  "types", "unionTypes", "any_ws", "opt_ws", "assign", "exprList",
  "opt_newline", "opt_ws_or_nl", "ws_or_nl", "statement", "math_expr",
  "compare_expr", "boolExpr", "expr", "prog", "line", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   124,    58,    61,    60,    62,    91,    93,   123,
     125,    40,    41,    46
};
# endif

#define YYPACT_NINF (-192)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-39)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     123,  -192,    57,   -40,  -192,  -192,  -192,  -192,    57,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,   172,   255,    17,
       1,  -192,     7,  -192,  -192,  -192,  -192,  -192,    86,  -192,
    -192,  -192,    92,  -192,     8,  -192,    -4,    57,   286,    57,
     286,   103,    18,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,   473,   536,
    -192,  -192,    85,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
      57,    22,   -50,    57,    13,    20,    24,    30,    32,    57,
      57,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   569,   602,    57,  -192,    57,
       7,    87,    47,    57,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,    40,    44,    57,    31,    57,  -192,    57,   286,
      57,   286,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,   286,     7,     1,
      57,     7,    57,  -192,   286,    64,  -192,    69,   150,   150,
      88,   117,   -18,     9,    55,    57,   286,    89,   136,    64,
    -192,   150,   286,   286,   286,   286,   286,   286,   286,   286,
      99,   -24,   101,   -24,   112,   -24,   113,   -24,   114,   286,
      57,     1,  -192,     7,  -192,   286,  -192,    57,  -192,    93,
      57,    57,    94,    57,    57,    57,    57,  -192,   128,   286,
      57,   151,    57,    57,    57,    57,    57,    57,    57,    57,
      57,  -192,    57,  -192,   -20,  -192,    11,  -192,    57,  -192,
      57,  -192,  -192,     1,  -192,   286,    57,   154,   286,    57,
     150,   286,   150,   286,    57,   135,   286,   139,   176,   147,
     149,   153,   155,   157,   160,   161,   166,   168,   -13,  -192,
    -192,   169,   171,  -192,  -192,   159,    57,  -192,   180,  -192,
    -192,  -192,  -192,   286,  -192,    57,  -192,    57,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
      57,   150,    57,   184,  -192,   254,   181,   286,  -192,   195,
    -192,    57,  -192,  -192,   201,    57,   179,   196,  -192
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    96,    38,     0,    18,    19,    94,     2,     0,    20,
      21,    23,    24,    25,    22,    35,    36,    26,     0,     0,
       0,    91,     0,    93,    92,    78,    95,    57,     0,    79,
      81,    82,     0,    97,     0,    37,     0,    38,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     8,     0,    14,    90,    89,    88,    87,     1,    98,
      38,     0,    26,     0,     0,     0,     0,     0,     0,    38,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,    38,    59,     9,    27,    28,    29,    30,
      31,    32,     0,     0,    38,    38,    38,    85,    38,     0,
      38,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,    38,    38,    38,    38,    38,     0,     0,     0,    12,
       0,     0,    38,    48,    37,    53,    54,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,    42,    55,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    38,     0,    38,     0,    38,     0,     0,
       0,     0,    16,     0,    13,     0,    50,    38,    58,     0,
      38,    38,     0,    38,    38,    38,    38,    83,     0,     0,
       0,     0,    38,    38,    38,    38,    38,    38,    38,    38,
      38,    76,    38,    61,    38,    63,    38,    65,    38,    67,
      38,    11,    15,     0,    49,    52,    38,     0,     0,    38,
       0,     0,     0,     0,    38,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
      64,     0,     0,    17,    51,     0,    38,    40,     0,    33,
      39,    34,    41,     0,    84,    38,    47,    38,    80,    69,
      70,    71,    72,    73,    74,    75,    77,    60,    66,    68,
      38,     0,    38,     0,    52,     0,     0,     0,    86,     0,
      46,    38,    43,    44,     0,    38,     0,     0,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -192,  -192,  -135,   -19,   235,  -192,   163,   186,  -192,  -192,
      43,  -192,  -147,  -192,   353,    -2,  -192,   -75,   137,  -191,
    -192,  -192,  -192,  -192,  -192,   158,   -28,    80
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    61,    20,    21,    22,    99,   100,   101,    23,
      24,    25,   115,   116,    35,   102,    27,   103,   146,   147,
     161,    28,    29,    30,    31,    32,    33,    34
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,   189,   190,    62,   182,   122,    69,    40,    68,     1,
     234,   239,    37,    41,   202,    42,   106,   107,   108,   109,
     110,   111,   112,   113,    15,    16,     2,   251,    15,    16,
       3,     4,     5,     6,   193,    71,   194,    74,   -37,    60,
       4,     5,   249,   154,     7,     7,   222,     8,    70,   277,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    15,
      16,   195,    58,   196,   114,    15,    16,    69,    69,    18,
     142,    65,    79,   250,   104,    67,   118,   121,   117,    15,
      16,   139,   119,   259,   120,   261,   151,   187,   253,     9,
      10,    11,    12,    13,    14,   148,   212,    72,   214,   149,
     216,   145,   218,    15,    16,    15,    16,   197,    18,     4,
       5,    64,   150,   152,   153,     4,     5,    66,   156,   181,
     159,   188,   184,    60,     1,    97,    98,    97,    98,   170,
     172,   174,   176,   178,   286,    76,    77,    78,    95,    96,
     185,     2,   191,   192,   201,     3,     4,     5,     6,   226,
     229,   234,   198,   106,   107,   108,   109,   110,   111,   -37,
       7,   211,     8,   213,   223,     9,    10,    11,    12,    13,
      14,    15,    16,    17,   215,   217,   219,   237,     9,    10,
      11,    12,    13,    14,    18,   225,    72,   264,   227,   228,
     256,   230,   231,   232,   233,   266,    73,    18,    75,   267,
     238,   240,   241,   242,   243,   244,   245,   246,   247,   268,
     248,   269,   198,   280,   198,   270,   145,   271,   252,   272,
      15,    16,   273,   274,   255,    39,   -38,   258,   275,    40,
     276,   278,   263,   279,   282,    41,   288,   291,   297,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   293,   281,   295,   298,    63,     0,   160,
     143,     0,     0,   283,   140,   284,    43,    44,    45,    46,
      47,    48,    49,     0,    50,    51,    52,   155,   285,   157,
     287,     0,    53,    54,    55,    56,    57,   141,     0,   294,
       0,     0,     0,   296,     0,   180,     9,    10,    11,    12,
      13,    14,   186,     0,    72,     0,     0,     0,     0,     0,
       0,   289,     0,     0,   200,    18,   186,     0,     0,     0,
     203,   204,   205,   206,   207,   208,   209,   210,     9,    10,
      11,    12,    13,    14,     0,     0,    72,   220,     0,     0,
       0,     0,     0,   224,     0,     0,     0,    18,     0,     0,
       0,     0,     0,    26,     0,     0,     0,   235,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   254,     0,     0,   257,    26,     0,   260,
       0,   262,     0,     0,   265,     0,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    26,    26,     0,     0,     0,     0,     0,     0,     0,
       0,   254,     0,     0,     0,     0,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   290,     0,   292,     0,     0,    26,    26,
     137,     0,   138,     0,     0,     0,   144,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,   158,   162,   163,   164,   165,
     166,   167,   168,   169,     0,   171,   173,   175,   177,   179,
       0,     2,     0,   183,     0,     3,     4,     5,     6,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   199,     0,
       7,    -6,     8,    -6,    -6,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   221,    18,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   236,     2,     0,     0,     0,     3,     4,
       5,     6,     0,     0,     0,   144,     0,   144,     0,   144,
       1,   144,     0,     7,    -7,     8,    -7,    -7,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     2,     0,     0,
       0,     3,     4,     5,     6,     0,     0,    18,     0,     0,
       0,     0,     0,     1,     0,     0,     7,    -4,     8,    -4,
      -4,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       2,     0,     0,     0,     3,     4,     5,     6,     0,     0,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     7,
      -5,     8,    -5,    -5,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18
};

static const yytype_int16 yycheck[] =
{
       2,   148,   149,    22,   139,    80,    34,    57,     0,     1,
      23,   202,    52,    63,   161,    17,     3,     4,     5,     6,
       7,     8,     9,    10,    48,    49,    18,   218,    48,    49,
      22,    23,    24,    25,    52,    37,    54,    39,    62,    38,
      23,    24,    62,   118,    37,    37,   181,    39,    52,    62,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    48,
      49,    52,    19,    54,    51,    48,    49,    95,    96,    61,
      23,    28,    54,    62,    52,    32,    52,    79,    58,    48,
      49,   100,    52,   230,    52,   232,    55,    23,   223,    42,
      43,    44,    45,    46,    47,    55,   171,    50,   173,    55,
     175,   103,   177,    48,    49,    48,    49,    52,    61,    23,
      24,    25,   114,   115,   116,    23,    24,    25,   120,   138,
     122,    52,   141,    38,     1,    40,    41,    40,    41,   131,
     132,   133,   134,   135,   281,    32,    33,    34,    58,    59,
     142,    18,    54,    26,    55,    22,    23,    24,    25,    56,
      56,    23,   154,     3,     4,     5,     6,     7,     8,    23,
      37,    62,    39,    62,   183,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    62,    62,    62,    26,    42,    43,
      44,    45,    46,    47,    61,   187,    50,    52,   190,   191,
      36,   193,   194,   195,   196,    56,    38,    61,    40,    23,
     202,   203,   204,   205,   206,   207,   208,   209,   210,    62,
     212,    62,   214,    54,   216,    62,   218,    62,   220,    62,
      48,    49,    62,    62,   226,    53,    54,   229,    62,    57,
      62,    62,   234,    62,    54,    63,    52,    56,    59,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    58,   256,    54,    60,    22,    -1,   122,
     102,    -1,    -1,   265,   101,   267,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,   119,   280,   121,
     282,    -1,    27,    28,    29,    30,    31,   101,    -1,   291,
      -1,    -1,    -1,   295,    -1,   137,    42,    43,    44,    45,
      46,    47,   144,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,   156,    61,   158,    -1,    -1,    -1,
     162,   163,   164,   165,   166,   167,   168,   169,    42,    43,
      44,    45,    46,    47,    -1,    -1,    50,   179,    -1,    -1,
      -1,    -1,    -1,   185,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,     0,    -1,    -1,    -1,   199,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,   228,    34,    -1,   231,
      -1,   233,    -1,    -1,   236,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   263,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   285,    -1,   287,    -1,    -1,    95,    96,
      97,    -1,    99,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,   122,   123,   124,   125,   126,
     127,   128,   129,   130,    -1,   132,   133,   134,   135,   136,
      -1,    18,    -1,   140,    -1,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,   155,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   180,    61,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   200,    18,    -1,    -1,    -1,    22,    23,
      24,    25,    -1,    -1,    -1,   212,    -1,   214,    -1,   216,
       1,   218,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    18,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      18,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    18,    22,    23,    24,    25,    37,    39,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    61,    65,
      67,    68,    69,    73,    74,    75,    78,    80,    85,    86,
      87,    88,    89,    90,    91,    78,    79,    52,    78,    53,
      57,    63,    79,    11,    12,    13,    14,    15,    16,    17,
      19,    20,    21,    27,    28,    29,    30,    31,    74,    78,
      38,    66,    67,    68,    25,    74,    25,    74,     0,    90,
      52,    79,    50,    89,    79,    89,    32,    33,    34,    54,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    91,    91,    40,    41,    70,
      71,    72,    79,    81,    52,    78,     3,     4,     5,     6,
       7,     8,     9,    10,    51,    76,    77,    58,    52,    52,
      52,    79,    81,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    78,    78,    67,
      70,    71,    23,    89,    78,    79,    82,    83,    55,    55,
      79,    55,    79,    79,    81,    89,    79,    89,    78,    79,
      82,    84,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    78,    79,    78,    79,    78,    79,    78,    79,    78,
      89,    67,    66,    78,    67,    79,    89,    23,    52,    76,
      76,    54,    26,    52,    54,    52,    54,    52,    79,    78,
      89,    55,    76,    89,    89,    89,    89,    89,    89,    89,
      89,    62,    81,    62,    81,    62,    81,    62,    81,    62,
      89,    78,    66,    67,    89,    79,    56,    79,    79,    56,
      79,    79,    79,    79,    23,    89,    78,    26,    79,    83,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    62,
      62,    83,    79,    66,    89,    79,    36,    89,    79,    76,
      89,    76,    89,    79,    52,    89,    56,    23,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      54,    79,    54,    79,    79,    79,    76,    79,    52,    57,
      89,    56,    89,    58,    79,    54,    79,    59,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    66,    67,    67,    67,    67,    68,    69,
      70,    71,    72,    72,    73,    73,    73,    73,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    76,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    81,    81,
      81,    81,    82,    83,    83,    84,    84,    85,    85,    85,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     3,     2,     2,     2,     4,
       1,     4,     2,     3,     2,     6,     5,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     5,     1,     1,     1,     0,     8,
       8,     8,     5,    11,    12,    16,    11,     8,     2,     4,
       3,     5,     3,     1,     1,     1,     1,     1,     6,     4,
       8,     6,     7,     6,     7,     6,     8,     6,     8,     8,
       8,     8,     8,     8,     8,     8,     6,     8,     1,     1,
       8,     1,     1,     6,     8,     4,    10,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     2
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
#line 57 "./parser/Parser.y"
                                   {
                                    CreateScope(i);
                                }
#line 1622 "./parser/Parser.cpp"
    break;

  case 3:
#line 61 "./parser/Parser.y"
                                    {
                                    DestroyScope(i);
                                }
#line 1630 "./parser/Parser.cpp"
    break;

  case 9:
#line 69 "./parser/Parser.y"
                                                      {
                                    if (SetNextScopeRunState((yyvsp[-1].tmp_id), i) == 1) {
                                        return 1;
                                    }
                                }
#line 1640 "./parser/Parser.cpp"
    break;

  case 10:
#line 75 "./parser/Parser.y"
                                     {
                                    // will only be true when the previous if statement couldn't run
                                    bool next_run_stat = i.NonRunnableScope();
                                    DestroyScope(i);
                                    StrWrapper expr;
                                    expr = CreateTempVar(next_run_stat, i);
                                    SetNextScopeRunState(expr, i);
                                    CreateScope(i);
                                }
#line 1654 "./parser/Parser.cpp"
    break;

  case 11:
#line 85 "./parser/Parser.y"
                                                           {
                                    StrWrapper part_1;
                                    StrWrapper res;
                                    bool runnable = i.NonRunnableScope();

                                    DestroyScope(i);
                                    part_1 = CreateTempVar(runnable, i);
                                    res = And(part_1, (yyvsp[-1].tmp_id), i);
                                    SetNextScopeRunState(res, i);
                                    CreateScope(i);
                                }
#line 1670 "./parser/Parser.cpp"
    break;

  case 20:
#line 107 "./parser/Parser.y"
                                                { 
                                                    string tmp_name = CreateTempVar((yyvsp[0].int_val), i);
                                                    if (tmp_name.empty()) {
                                                        cout << "Error: couldn't create temp var\n";
                                                        return 1;
                                                    }
                                                    (yyval.tmp_id) = tmp_name;
                                                }
#line 1683 "./parser/Parser.cpp"
    break;

  case 21:
#line 115 "./parser/Parser.y"
                                                { 
                                                    string tmp_name = CreateTempVar((yyvsp[0].dou_val), i);
                                                    if (tmp_name.empty()) {
                                                        cout << "Error: couldn't create temp var\n";
                                                        return 1;
                                                    }
                                                    (yyval.tmp_id) = tmp_name;
                                                }
#line 1696 "./parser/Parser.cpp"
    break;

  case 22:
#line 123 "./parser/Parser.y"
                                                { 
                                                    string tmp_name = CreateTempVar((yyvsp[0].flo_val), i);
                                                    if (tmp_name.empty()) {
                                                        cout << "Error: couldn't create temp var\n";
                                                        return 1;
                                                    }
                                                    (yyval.tmp_id) = tmp_name;
                                                }
#line 1709 "./parser/Parser.cpp"
    break;

  case 23:
#line 131 "./parser/Parser.y"
                                                { 
                                                    // deliberately declared data type here
                                                    // because $1 is a StrWrapper, not a string. 
                                                    // so implicit conversion will cause bugs that don't
                                                    // allow for compilation
                                                     string tmp_name = CreateTempVar<string>((yyvsp[0].str_val), i);
                                                     if (tmp_name.empty()) {
                                                         cout << "Error: couldn't create temp var\n";
                                                         return 1;
                                                     }
                                                     (yyval.tmp_id) = tmp_name;
                                                }
#line 1726 "./parser/Parser.cpp"
    break;

  case 24:
#line 143 "./parser/Parser.y"
                                                { 
                                                    string tmp_name = CreateTempVar((yyvsp[0].char_val), i);
                                                    if (tmp_name.empty()) {
                                                        cout << "Error: couldn't create temp var\n";
                                                        return 1;
                                                    }
                                                    (yyval.tmp_id) = tmp_name;
                                                }
#line 1739 "./parser/Parser.cpp"
    break;

  case 25:
#line 151 "./parser/Parser.y"
                                                { 
                                                    string tmp_name = CreateTempVar((yyvsp[0].bol_val), i);
                                                    if (tmp_name.empty()) {
                                                        cout << "Error: couldn't create temp var\n";
                                                        return 1;
                                                    }
                                                    (yyval.tmp_id) = tmp_name;
                                                }
#line 1752 "./parser/Parser.cpp"
    break;

  case 26:
#line 159 "./parser/Parser.y"
                                                { 
                                                    string tmp = CloneToTemp((yyvsp[0].id), i);
                                                    if (tmp.empty()) {
                                                        return 1;
                                                    }
                                                    (yyval.tmp_id) = tmp;
                                                }
#line 1764 "./parser/Parser.cpp"
    break;

  case 27:
#line 168 "./parser/Parser.y"
                                                { (yyval.types) = (yyvsp[0].types); }
#line 1770 "./parser/Parser.cpp"
    break;

  case 28:
#line 169 "./parser/Parser.y"
                                                { (yyval.types) = (yyvsp[0].types); }
#line 1776 "./parser/Parser.cpp"
    break;

  case 29:
#line 170 "./parser/Parser.y"
                                                { (yyval.types) = (yyvsp[0].types); }
#line 1782 "./parser/Parser.cpp"
    break;

  case 30:
#line 171 "./parser/Parser.y"
                                                { (yyval.types) = (yyvsp[0].types); }
#line 1788 "./parser/Parser.cpp"
    break;

  case 31:
#line 172 "./parser/Parser.y"
                                                { (yyval.types) = (yyvsp[0].types); }
#line 1794 "./parser/Parser.cpp"
    break;

  case 32:
#line 173 "./parser/Parser.y"
                                                { (yyval.types) = (yyvsp[0].types); }
#line 1800 "./parser/Parser.cpp"
    break;

  case 33:
#line 177 "./parser/Parser.y"
                                                             {
                                    (yyvsp[-4].types).AddPending((yyvsp[-4].types));
                                    (yyvsp[-4].types).AddPending((yyvsp[0].types));
                                    (yyval.tmp_id) = (yyvsp[-4].types);
                                }
#line 1810 "./parser/Parser.cpp"
    break;

  case 34:
#line 182 "./parser/Parser.y"
                                                                     {
                                    (yyvsp[-4].tmp_id).AddPending((yyvsp[0].types));
                                    (yyval.tmp_id) = (yyvsp[-4].tmp_id);
                                }
#line 1819 "./parser/Parser.cpp"
    break;

  case 39:
#line 192 "./parser/Parser.y"
                                                                           {
                                    if (Assign((yyvsp[-7].id), (yyvsp[0].tmp_id), (yyvsp[-4].types), i).empty()) {
                                        return 1;
                                    }
                                }
#line 1829 "./parser/Parser.cpp"
    break;

  case 40:
#line 197 "./parser/Parser.y"
                                                                               {
                                    bool made_union = !MakeUnknown((yyvsp[-7].id), (yyvsp[0].tmp_id), i).empty();
                                    if(!made_union) {
                                        return 1;
                                    }
                                }
#line 1840 "./parser/Parser.cpp"
    break;

  case 41:
#line 203 "./parser/Parser.y"
                                                                                  {
                                    auto union_name = MakeUnion((yyvsp[-7].id), (yyvsp[-4].tmp_id), (yyvsp[0].tmp_id), i);
                                    if (union_name.empty()) {
                                        return 1;
                                    }
                                }
#line 1851 "./parser/Parser.cpp"
    break;

  case 42:
#line 209 "./parser/Parser.y"
                                                            {
                                    if(Reassign((yyvsp[-4].id), (yyvsp[0].tmp_id), i).empty()) {
                                        return 1;
                                    }
                                }
#line 1861 "./parser/Parser.cpp"
    break;

  case 43:
#line 214 "./parser/Parser.y"
                                                                                         {
                                    if (RefBind((yyvsp[-10].id), (yyvsp[0].tmp_id), (yyvsp[-7].types), i).empty()) {
                                        return 1;
                                    }
                                }
#line 1871 "./parser/Parser.cpp"
    break;

  case 44:
#line 219 "./parser/Parser.y"
                                                                                             {
                                    if(MakeList((yyvsp[-11].id), (yyvsp[-6].types), i).empty()) {
                                        return 1;
                                    }
                                }
#line 1881 "./parser/Parser.cpp"
    break;

  case 45:
#line 224 "./parser/Parser.y"
                                                                                                                                    {
                                    if (MakeMap((yyvsp[-15].id), (yyvsp[-10].types), (yyvsp[-6].types), i).empty()) {
                                        return 1;
                                    }
                                }
#line 1891 "./parser/Parser.cpp"
    break;

  case 46:
#line 229 "./parser/Parser.y"
                                                                                          {
                                    if(ReassignContainer((yyvsp[-10].id), (yyvsp[-5].types), (yyvsp[0].tmp_id), i).empty()) {
                                        return 1;
                                    }
                                }
#line 1901 "./parser/Parser.cpp"
    break;

  case 47:
#line 234 "./parser/Parser.y"
                                                                        {
                                    if (RefBind((yyvsp[-7].id), (yyvsp[-3].tmp_id), i).empty()) {
                                        return 1;
                                    }
                                }
#line 1911 "./parser/Parser.cpp"
    break;

  case 48:
#line 242 "./parser/Parser.y"
                                           {
                                    if(!(yyvsp[0].tmp_id).GetFinalResult().empty()) { 
                                        (yyvsp[0].tmp_id).AddPending((yyvsp[0].tmp_id)); 
                                    }
                                    (yyval.tmp_id) = (yyvsp[0].tmp_id); 
                                }
#line 1922 "./parser/Parser.cpp"
    break;

  case 49:
#line 248 "./parser/Parser.y"
                                                             {
                                    if(!(yyvsp[0].tmp_id).GetFinalResult().empty()) {
                                        (yyvsp[0].tmp_id).AddPending((yyvsp[0].tmp_id));
                                    }
                                    (yyval.tmp_id) = (yyvsp[0].tmp_id);
                                }
#line 1933 "./parser/Parser.cpp"
    break;

  case 50:
#line 254 "./parser/Parser.y"
                                                             {  
                                    if(!(yyvsp[-2].tmp_id).GetFinalResult().empty()) { 
                                        (yyvsp[-2].tmp_id).AddPending((yyvsp[0].tmp_id)); 
                                    }
                                    for(unsigned int i = 0; i < (yyvsp[0].tmp_id).PendingDataSize(); i++) {
                                        (yyvsp[-2].tmp_id).AddPending((yyvsp[0].tmp_id)[i]);
                                    }
                                    (yyval.tmp_id) = (yyvsp[-2].tmp_id);
                                }
#line 1947 "./parser/Parser.cpp"
    break;

  case 51:
#line 263 "./parser/Parser.y"
                                                                            {
                                    auto list = (yyvsp[-4].tmp_id);
                                    if(!list.GetFinalResult().empty()) { 
                                        list.AddPending((yyvsp[0].tmp_id)); 
                                    }
                                    for(unsigned int i = 0; i < (yyvsp[0].tmp_id).PendingDataSize(); i++) {
                                        list.AddPending((yyvsp[0].tmp_id)[i]);
                                    }
                                    (yyval.tmp_id) = list;
                                }
#line 1962 "./parser/Parser.cpp"
    break;

  case 58:
#line 280 "./parser/Parser.y"
                                                                             { 
                                    int err = Print((yyvsp[-2].tmp_id), ' ', i);
                                    
                                    if (err == 1) {
                                        cout << "Error: print error\n";
                                        return 1;
                                    }
                                    else if ((yyvsp[-2].tmp_id).PendingDataSize() > 0 && err == SUCCEED) {
                                        cout << '\n';
                                    }
                                }
#line 1978 "./parser/Parser.cpp"
    break;

  case 59:
#line 291 "./parser/Parser.y"
                                                     { return 0; }
#line 1984 "./parser/Parser.cpp"
    break;

  case 60:
#line 296 "./parser/Parser.y"
                                                                                           {
                                    string tmp = Add((yyvsp[-4].tmp_id), (yyvsp[-2].tmp_id), i);
                                    if(tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 1996 "./parser/Parser.cpp"
    break;

  case 61:
#line 303 "./parser/Parser.y"
                                                                 {
                                    string tmp = Add((yyvsp[-2].tmp_id), i);
                                    if (tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2008 "./parser/Parser.cpp"
    break;

  case 62:
#line 310 "./parser/Parser.y"
                                                                          {
                                    string tmp = Subtract((yyvsp[-3].tmp_id), (yyvsp[-1].tmp_id), i);
                                    if(tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2020 "./parser/Parser.cpp"
    break;

  case 63:
#line 317 "./parser/Parser.y"
                                                                 {
                                    string tmp = Subtract((yyvsp[-2].tmp_id), i);
                                    if (tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2032 "./parser/Parser.cpp"
    break;

  case 64:
#line 324 "./parser/Parser.y"
                                                                          {
                                    string tmp = Multiply((yyvsp[-3].tmp_id), (yyvsp[-1].tmp_id), i);
                                    if(tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2044 "./parser/Parser.cpp"
    break;

  case 65:
#line 331 "./parser/Parser.y"
                                                                 {
                                    string tmp = Multiply((yyvsp[-2].tmp_id), i);
                                    if (tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2056 "./parser/Parser.cpp"
    break;

  case 66:
#line 338 "./parser/Parser.y"
                                                                                       {
                                    string tmp = Divide((yyvsp[-4].tmp_id), (yyvsp[-2].tmp_id), i);
                                    if(tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2068 "./parser/Parser.cpp"
    break;

  case 67:
#line 345 "./parser/Parser.y"
                                                                 {
                                    string tmp = Divide((yyvsp[-2].tmp_id), i);
                                    if (tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2080 "./parser/Parser.cpp"
    break;

  case 68:
#line 352 "./parser/Parser.y"
                                                                                           {
                                    auto res = Pow((yyvsp[-4].tmp_id), (yyvsp[-2].tmp_id), i);
                                    if (res.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = res;
                                }
#line 2092 "./parser/Parser.cpp"
    break;

  case 69:
#line 364 "./parser/Parser.y"
                                                                            {
                                    string tmp = Less((yyvsp[-4].tmp_id), (yyvsp[-2].tmp_id), i);
                                    if (tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2104 "./parser/Parser.cpp"
    break;

  case 70:
#line 371 "./parser/Parser.y"
                                                                                 {
                                    string tmp = Greater((yyvsp[-4].tmp_id), (yyvsp[-2].tmp_id), i);
                                    if (tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2116 "./parser/Parser.cpp"
    break;

  case 71:
#line 378 "./parser/Parser.y"
                                                                                   {
                                    string tmp = LessEqual((yyvsp[-4].tmp_id), (yyvsp[-2].tmp_id), i);
                                    if (tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2128 "./parser/Parser.cpp"
    break;

  case 72:
#line 385 "./parser/Parser.y"
                                                                                       {
                                    string tmp = GreaterEqual((yyvsp[-4].tmp_id), (yyvsp[-2].tmp_id), i);
                                    if (tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2140 "./parser/Parser.cpp"
    break;

  case 73:
#line 392 "./parser/Parser.y"
                                                                              {
                                    string tmp = Equal((yyvsp[-4].tmp_id), (yyvsp[-2].tmp_id), i);
                                    if (tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2152 "./parser/Parser.cpp"
    break;

  case 74:
#line 399 "./parser/Parser.y"
                                                                                   {
                                    string tmp = NotEqual((yyvsp[-4].tmp_id), (yyvsp[-2].tmp_id), i);
                                    if (tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2164 "./parser/Parser.cpp"
    break;

  case 75:
#line 410 "./parser/Parser.y"
                                                                          {
                                    string tmp = And((yyvsp[-4].tmp_id), (yyvsp[-2].tmp_id), i);
                                    if (tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2176 "./parser/Parser.cpp"
    break;

  case 76:
#line 417 "./parser/Parser.y"
                                                                 {
                                    string tmp = Not((yyvsp[-2].tmp_id), i);
                                    if (tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2188 "./parser/Parser.cpp"
    break;

  case 77:
#line 424 "./parser/Parser.y"
                                                                            {
                                    string tmp = Or((yyvsp[-4].tmp_id), (yyvsp[-2].tmp_id), i);
                                    if (tmp.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = tmp;
                                }
#line 2200 "./parser/Parser.cpp"
    break;

  case 78:
#line 434 "./parser/Parser.y"
                                     {
                                    (yyval.tmp_id) = (yyvsp[0].tmp_id);
                                }
#line 2208 "./parser/Parser.cpp"
    break;

  case 79:
#line 437 "./parser/Parser.y"
                                            {
                                    (yyval.tmp_id) = (yyvsp[0].tmp_id);
                                }
#line 2216 "./parser/Parser.cpp"
    break;

  case 80:
#line 440 "./parser/Parser.y"
                                                                                           {
                                    string tmp = Cast((yyval.tmp_id), (yyvsp[-4].tmp_id), (yyvsp[-2].types), i);
                                    if (tmp.empty()) {
                                        cout << "Error: couldn't cast\n";
                                        return 1;
                                    }
                                }
#line 2228 "./parser/Parser.cpp"
    break;

  case 81:
#line 447 "./parser/Parser.y"
                                               {
                                    (yyval.tmp_id) = (yyvsp[0].tmp_id);
                                }
#line 2236 "./parser/Parser.cpp"
    break;

  case 82:
#line 450 "./parser/Parser.y"
                                           {
                                    (yyval.tmp_id) = (yyvsp[0].tmp_id);
                                }
#line 2244 "./parser/Parser.cpp"
    break;

  case 83:
#line 453 "./parser/Parser.y"
                                                                               {
                                    string list_id = PutInContainer((yyvsp[-5].id), (yyvsp[-1].tmp_id), i);
                                    if (list_id.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = list_id;
                                }
#line 2256 "./parser/Parser.cpp"
    break;

  case 84:
#line 460 "./parser/Parser.y"
                                                                                          {
                                    string id = PutInMap((yyvsp[-7].id), (yyvsp[-3].tmp_id), (yyvsp[-1].tmp_id), i);
                                    if (id.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = id;
                                }
#line 2268 "./parser/Parser.cpp"
    break;

  case 85:
#line 467 "./parser/Parser.y"
                                                               {
                                    string list_id = GetFromContainer((yyvsp[-3].id), (yyvsp[-1].tmp_id), i);
                                    if (list_id.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = list_id;
                                }
#line 2280 "./parser/Parser.cpp"
    break;

  case 86:
#line 474 "./parser/Parser.y"
                                                                                                          {
                                    string list_id = SetInContainer((yyvsp[-9].id), (yyvsp[-4].tmp_id), (yyvsp[-2].tmp_id), i);
                                    if (list_id.empty()) {
                                        return 1;
                                    }
                                    (yyval.tmp_id) = list_id;
                                }
#line 2292 "./parser/Parser.cpp"
    break;

  case 94:
#line 490 "./parser/Parser.y"
                                       { 
                                    return 0 ;
                                }
#line 2300 "./parser/Parser.cpp"
    break;

  case 96:
#line 494 "./parser/Parser.y"
                                        { GarbageCollect(i); return 1; }
#line 2306 "./parser/Parser.cpp"
    break;

  case 97:
#line 496 "./parser/Parser.y"
                                     { GarbageCollect(i); }
#line 2312 "./parser/Parser.cpp"
    break;

  case 98:
#line 496 "./parser/Parser.y"
                                                                        { GarbageCollect(i); }
#line 2318 "./parser/Parser.cpp"
    break;


#line 2322 "./parser/Parser.cpp"

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
#line 497 "./parser/Parser.y"



void PrintLineNo() {
    cout << "line num: " << lineno << "\n";
    lineno++;
}

void yyerror(const char* err) {
    cout << err << '\n';
    //cout << yytext << '\n';
}

#include <vector>
using namespace std;

template<class R, class ... cparams,  class ... params>
void Test(R(*f)(cparams...), params ... p) {
    vector<string> cor_p = {typeid(cparams).name()...};
    vector<string> passed_p = {typeid(p).name()...};

    bool input = false;
    if (passed_p.size() == cor_p.size()) {
        input = true;
        for(size_t i = 0; i < passed_p.size(); i++) {
            if (passed_p[i] != cor_p[i]) {
                input = false;
                break;
            }
        }
    }

    if (!input) {
        cout << "Error: couldn't run func\n";
    }
    else {
        //(*f)(p...);
    }
}

int main(int argc, char *argv[]) {
    bool in_file_mode = false;
    FILE *file = nullptr;
    
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        
        if (file != nullptr) {
            yyin = file;
            in_file_mode = true;
        }
        else {
            cout << "Error: file doesn't exist\n";
            return 1;
        }
    }
    int x = yyparse();
    while(x != 0 && !in_file_mode) {
        // makes sure to clear the token buffer
        // so that when a parser or interpreter error
        // happens, tokens aren't trying to be read again
        yyrestart(yyin);
        
        x = yyparse();
    }

    if (file != nullptr) {
        fclose(file);
    }
    return x;
}
