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
#line 1 "program_test.y" /* yacc.c:339  */

    #include "programServer.c"


#line 71 "y.tab.c" /* yacc.c:339  */

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
    IDE = 258,
    NUM = 259,
    HEADER = 260,
    REAL = 261,
    CHARVALUE = 262,
    CHAR = 263,
    INT = 264,
    FLOAT = 265,
    DOUBLE = 266,
    VOID = 267,
    RETURN = 268,
    EQ = 269,
    LE = 270,
    GE = 271,
    AND = 272,
    OR = 273,
    XOR = 274,
    ASSIGN = 275,
    L = 276,
    G = 277,
    NEQ = 278,
    IF = 279,
    ELSE = 280,
    SWITCH = 281,
    BREAK = 282,
    WHILE = 283,
    CASE = 284,
    DEFAULT = 285,
    FOR = 286,
    ADD = 287,
    SUB = 288,
    MUL = 289,
    DIV = 290,
    INC = 291,
    DEC = 292,
    SEMICOLON = 293,
    COMMA = 294,
    OP = 295,
    CP = 296,
    OB = 297,
    CB = 298,
    LOR = 299,
    LAND = 300
  };
#endif
/* Tokens.  */
#define IDE 258
#define NUM 259
#define HEADER 260
#define REAL 261
#define CHARVALUE 262
#define CHAR 263
#define INT 264
#define FLOAT 265
#define DOUBLE 266
#define VOID 267
#define RETURN 268
#define EQ 269
#define LE 270
#define GE 271
#define AND 272
#define OR 273
#define XOR 274
#define ASSIGN 275
#define L 276
#define G 277
#define NEQ 278
#define IF 279
#define ELSE 280
#define SWITCH 281
#define BREAK 282
#define WHILE 283
#define CASE 284
#define DEFAULT 285
#define FOR 286
#define ADD 287
#define SUB 288
#define MUL 289
#define DIV 290
#define INC 291
#define DEC 292
#define SEMICOLON 293
#define COMMA 294
#define OP 295
#define CP 296
#define OB 297
#define CB 298
#define LOR 299
#define LAND 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 5 "program_test.y" /* yacc.c:355  */

	char* txt;

#line 205 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 222 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   517

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  244

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    21,    21,    37,    41,    51,    56,    62,    68,   120,
     150,   155,   184,   191,   200,   216,   232,   273,   301,   306,
     332,   339,   346,   368,   369,   370,   371,   372,   375,   382,
     393,   394,   395,   399,   403,   407,   413,   417,   421,   427,
     434,   439,   447,   460,   465,   466,   470,   476,   480,   483,
     486,   494,   503,   506,   509,   517,   522,   527,   535,   543,
     548,   553,   558,   563,   567,   572,   577,   582,   587,   591,
     596,   601,   606,   610,   613,   615,   617,   620,   624,   625,
     626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     635,   645,   648,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   674,   690,
     699,   710,   720,   731,   741,   746,   752,   755,   761,   766,
     778,   784,   792,   799,   808,   813
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDE", "NUM", "HEADER", "REAL",
  "CHARVALUE", "CHAR", "INT", "FLOAT", "DOUBLE", "VOID", "RETURN", "EQ",
  "LE", "GE", "AND", "OR", "XOR", "ASSIGN", "L", "G", "NEQ", "IF", "ELSE",
  "SWITCH", "BREAK", "WHILE", "CASE", "DEFAULT", "FOR", "ADD", "SUB",
  "MUL", "DIV", "INC", "DEC", "SEMICOLON", "COMMA", "OP", "CP", "OB", "CB",
  "LOR", "LAND", "$accept", "program", "header", "nextPart", "declaration",
  "assignList", "dummyExpr", "declarationLoop", "assignListLoop", "type",
  "variable", "lhs", "exp", "exp1", "exp2", "function", "funcVariable",
  "returnFunc", "funcPara", "nextPara", "stateTemp", "statements",
  "loopStatement", "wloopStatement", "ifloopStatement", "condExp", "$@1",
  "condExp1", "forExp", "ForName", "for1", "for2", "for3", "whileExp",
  "whileName", "dummyLabel", "ifElse", "ifName", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300
};
# endif

#define YYPACT_NINF -138

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-138)))

#define YYTABLE_NINF -73

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,    17,    47,   118,  -138,  -138,     5,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,   118,    58,    46,   118,  -138,  -138,
      35,    42,   -13,    48,     2,  -138,  -138,     2,    88,   243,
    -138,  -138,  -138,     2,  -138,  -138,   145,    29,    45,  -138,
      88,    32,  -138,    38,     2,     2,  -138,    25,    25,  -138,
       1,    51,  -138,    29,    29,     2,  -138,  -138,  -138,    88,
     223,   243,   235,    70,  -138,    67,  -138,  -138,  -138,  -138,
     287,   235,    88,   100,  -138,   235,    77,   235,   102,   235,
     106,  -138,   243,    87,   287,    88,   111,   115,   287,   287,
     287,  -138,   223,   120,  -138,   140,  -138,   368,  -138,   368,
    -138,  -138,  -138,   116,    19,     2,  -138,  -138,  -138,  -138,
     127,  -138,    88,   148,   132,     2,     2,    88,   440,   130,
     133,  -138,     2,    88,   179,  -138,   162,   223,   368,    91,
      91,   170,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,  -138,  -138,     2,     2,  -138,   165,    57,  -138,
    -138,   223,   174,  -138,   176,     2,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,   173,   287,
      88,   177,   140,   413,    91,   358,   178,  -138,   140,  -138,
       2,     2,    88,   472,  -138,   184,  -138,   358,   189,   358,
     358,   358,   194,  -138,    91,    91,   222,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,  -138,  -138,     2,
       2,   207,  -138,  -138,  -138,  -138,  -138,    20,     2,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,   387,  -138,    91,   387,   213,   387,   387,   387,  -138,
    -138,  -138,  -138,  -138
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     4,     1,     0,    28,    24,    23,
      26,    25,    27,     2,     0,     0,     0,     0,    10,     5,
      28,     0,    14,     0,     0,     6,     8,     0,     0,    49,
      32,    30,    31,     0,    29,    38,     0,    35,    11,    12,
       0,     0,    48,     0,     0,     0,     9,     0,     0,    15,
      47,     0,    39,    33,    34,     0,    40,    36,    37,     0,
       0,    49,     0,     0,    13,    46,    51,   125,   120,   109,
       0,     0,     0,    45,    52,     0,     0,     0,     0,     0,
       0,    41,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,    55,   114,    56,     0,    57,     0,
      50,    18,    68,     0,    22,     0,   124,    69,    70,    71,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     0,    44,     0,     0,   116,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,    82,     0,     0,   121,     0,    19,    20,
      17,     0,   113,   115,     0,     0,    86,    77,    78,    73,
      75,    85,    88,    79,    80,    87,    76,    74,     0,     0,
       0,   111,   114,   118,    89,     0,     0,    21,   114,   112,
       0,     0,     0,     0,   117,     0,    90,     0,     0,     0,
       0,     0,   122,   110,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    99,   100,     0,
       0,     0,    63,   119,    64,    65,    66,     0,     0,   104,
      95,    96,    91,    93,   103,   106,    97,    98,   105,    94,
      92,     0,   123,   107,     0,     0,     0,     0,     0,    58,
     108,    59,    60,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,  -138,   256,     6,    43,   -18,  -138,  -137,  -121,   265,
      -3,   -44,     0,   -10,   210,  -138,  -138,  -138,   -46,  -138,
      82,  -138,   -42,    50,   -71,   -98,  -138,  -138,    85,  -138,
    -127,  -138,  -138,   114,  -138,  -138,    33,  -138
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    13,    71,    21,    59,    84,   103,    85,
      34,    35,   118,    37,    57,    17,    23,    93,    41,    42,
      73,    74,   235,   188,    87,   119,   186,   184,    88,    76,
     114,   154,   185,    89,    78,   168,    90,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,   120,   149,    56,    56,     7,    30,    27,    31,    32,
      39,    16,    22,   102,    16,    66,    65,   107,   108,   109,
      19,    60,     1,    25,    36,    22,    28,    38,     7,    30,
     153,    31,    32,    43,    53,    54,   100,    50,   187,   122,
      61,    64,    33,    18,    67,   179,    14,     5,   110,   177,
     187,   193,   187,   187,   187,    63,    22,    14,   123,    16,
      14,    20,    70,    47,    48,    55,    24,    86,    16,    22,
      44,    45,    16,    51,    16,   -43,    16,    44,    45,    52,
      26,    86,   104,   152,    49,    86,    86,    86,    29,    44,
      45,     7,   113,    62,   234,    79,   170,   234,   176,   234,
     234,   234,    44,    45,    79,   124,    82,   171,    79,   126,
      79,    81,    79,    92,   131,   129,   130,    95,    -7,     6,
     104,     7,   148,    44,    45,   101,     8,     9,    10,    11,
      12,   105,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,    97,     7,   166,   167,    99,    75,     8,     9,
      10,    11,    12,    91,   121,   174,    75,    94,   106,    96,
      75,    98,    75,   111,    75,   125,    86,   104,   127,   113,
     128,   146,    86,   183,   147,   113,    77,    44,    45,   196,
     194,   195,   151,    46,    86,    77,    86,    86,    86,    77,
     155,    77,   239,    77,   241,   242,   243,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   169,   191,   229,
     230,    44,    45,   172,   173,   175,   178,   150,   233,   217,
     191,   192,   191,   191,   191,   211,     7,    30,    86,    31,
      32,    86,   213,    86,    86,    86,     6,   212,     7,   214,
     215,   216,   218,     8,     9,    10,    11,    12,   -53,   231,
     232,     8,     9,    10,    11,    12,   240,     4,    58,    67,
     189,     0,     0,    68,   238,     0,    69,   238,    15,   238,
     238,   238,   189,     0,   189,   189,   189,    70,   -53,    15,
       0,     0,    15,     0,     0,     0,     0,     0,    83,   190,
       7,     0,     0,     0,    40,     8,     9,    10,    11,    12,
       0,   190,     0,   190,   190,   190,     0,     0,     0,     0,
       0,    67,     0,     0,     0,    68,   236,     0,    69,   236,
       0,   236,   236,   236,     0,     0,    40,    72,     0,    70,
     -72,     0,     0,     0,     0,     0,    72,     0,     0,     0,
      72,     0,    72,     0,    72,   237,     0,    40,   237,     0,
     237,   237,   237,     0,     0,     0,     0,     0,     0,    83,
     112,     7,   117,     0,   117,     0,     8,     9,    10,    11,
      12,     7,    30,     0,    31,    32,     8,     9,    10,    11,
      12,     0,    67,     0,     0,     0,    68,     0,    83,    69,
       7,     0,     0,   117,     0,     8,     9,    10,    11,    12,
      70,   -67,     0,     0,   115,   116,     0,     0,    33,     0,
       0,    67,     0,     0,     0,    68,     7,    30,    69,    31,
      32,     8,     9,    10,    11,    12,     0,     0,     0,    70,
     -62,     0,     0,     0,     0,     0,     0,   112,   182,     0,
       0,     0,     0,   112,     0,     0,     0,     0,     0,   180,
     181,     0,     0,    33,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
       0,     0,    44,    45,     0,     0,   142,   143,     0,     0,
       0,     0,     0,     0,   144,   145,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,     0,    44,    45,     0,     0,   207,   208,
       0,     0,     0,     0,     0,     0,   209,   210
};

static const yytype_int16 yycheck[] =
{
       3,    99,   123,    47,    48,     3,     4,    20,     6,     7,
      28,    14,    15,    84,    17,    61,    60,    88,    89,    90,
      14,    20,     5,    17,    24,    28,    39,    27,     3,     4,
     128,     6,     7,    33,    44,    45,    82,    40,   175,    20,
      39,    59,    40,    38,    24,   172,     3,     0,    92,   170,
     187,   178,   189,   190,   191,    55,    59,    14,    39,    62,
      17,     3,    42,    34,    35,    40,    20,    70,    71,    72,
      32,    33,    75,    41,    77,    40,    79,    32,    33,    41,
      38,    84,    85,   127,    39,    88,    89,    90,    40,    32,
      33,     3,    95,    42,   231,    62,    39,   234,   169,   236,
     237,   238,    32,    33,    71,   105,    39,   151,    75,   112,
      77,    41,    79,    13,   117,   115,   116,    40,     0,     1,
     123,     3,   122,    32,    33,    38,     8,     9,    10,    11,
      12,    20,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,    40,     3,   144,   145,    40,    62,     8,     9,
      10,    11,    12,    71,    38,   155,    71,    75,    43,    77,
      75,    79,    77,    43,    79,    38,   169,   170,    20,   172,
      38,    41,   175,   173,    41,   178,    62,    32,    33,   182,
     180,   181,    20,    38,   187,    71,   189,   190,   191,    75,
      20,    77,   234,    79,   236,   237,   238,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,    42,   175,   209,
     210,    32,    33,    39,    38,    42,    39,    38,   218,    25,
     187,    43,   189,   190,   191,    41,     3,     4,   231,     6,
       7,   234,    43,   236,   237,   238,     1,   187,     3,   189,
     190,   191,    20,     8,     9,    10,    11,    12,    13,    42,
     217,     8,     9,    10,    11,    12,    43,     1,    48,    24,
     175,    -1,    -1,    28,   231,    -1,    31,   234,     3,   236,
     237,   238,   187,    -1,   189,   190,   191,    42,    43,    14,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,     1,   175,
       3,    -1,    -1,    -1,    29,     8,     9,    10,    11,    12,
      -1,   187,    -1,   189,   190,   191,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    28,   231,    -1,    31,   234,
      -1,   236,   237,   238,    -1,    -1,    61,    62,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      75,    -1,    77,    -1,    79,   231,    -1,    82,   234,    -1,
     236,   237,   238,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      95,     3,    97,    -1,    99,    -1,     8,     9,    10,    11,
      12,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    -1,    24,    -1,    -1,    -1,    28,    -1,     1,    31,
       3,    -1,    -1,   128,    -1,     8,     9,    10,    11,    12,
      42,    43,    -1,    -1,    36,    37,    -1,    -1,    40,    -1,
      -1,    24,    -1,    -1,    -1,    28,     3,     4,    31,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,
      -1,    -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,    36,
      37,    -1,    -1,    40,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    47,    48,    48,     0,     1,     3,     8,     9,
      10,    11,    12,    49,    50,    55,    56,    61,    38,    49,
       3,    51,    56,    62,    20,    49,    38,    20,    39,    40,
       4,     6,     7,    40,    56,    57,    58,    59,    58,    51,
      55,    64,    65,    58,    32,    33,    38,    34,    35,    39,
      56,    41,    41,    59,    59,    40,    57,    60,    60,    52,
      20,    39,    42,    58,    51,    57,    64,    24,    28,    31,
      42,    50,    55,    66,    67,    74,    75,    79,    80,    82,
      83,    41,    39,     1,    53,    55,    56,    70,    74,    79,
      82,    66,    13,    63,    66,    40,    66,    40,    66,    40,
      64,    38,    70,    54,    56,    20,    43,    70,    70,    70,
      57,    43,    55,    56,    76,    36,    37,    55,    58,    71,
      71,    38,    20,    39,    58,    38,    56,    20,    38,    58,
      58,    56,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    36,    37,    44,    45,    41,    41,    58,    54,
      38,    20,    57,    71,    77,    20,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    81,    42,
      39,    57,    39,    38,    58,    42,    70,    54,    39,    76,
      36,    37,    55,    58,    73,    78,    72,    53,    69,    74,
      79,    82,    43,    76,    58,    58,    56,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    36,    37,    44,
      45,    41,    69,    43,    69,    69,    69,    25,    20,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    42,    82,    58,    53,    68,    74,    79,    82,    68,
      43,    68,    68,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    50,    50,
      50,    51,    51,    51,    51,    52,    53,    53,    53,    54,
      54,    54,    54,    55,    55,    55,    55,    55,    56,    57,
      57,    57,    57,    58,    58,    58,    59,    59,    59,    59,
      60,    60,    61,    62,    63,    63,    64,    64,    64,    64,
      65,    65,    66,    66,    67,    67,    67,    67,    68,    68,
      68,    68,    68,    69,    69,    69,    69,    69,    70,    70,
      70,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    72,
      71,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    75,
      76,    76,    76,    76,    76,    77,    77,    78,    78,    79,
      80,    81,    82,    82,    82,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     0,     3,     4,
       2,     3,     3,     6,     1,     0,     3,     4,     2,     3,
       3,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     9,     1,     3,     0,     4,     2,     1,     0,
       6,     4,     1,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     0,     2,     2,     2,     2,     0,     2,     2,
       2,     2,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     0,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     4,    11,     1,
       6,     4,     5,     3,     0,     1,     0,     1,     0,     8,
       1,     0,     7,     9,     3,     1
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
#line 21 "program_test.y" /* yacc.c:1646  */
    {
            CreateNode("Start", "nextPart", 2);
            CreateNode("Start", "header", 2);
            
            CreateNode("--", "Start", 2);
             
             displayTable();
             CreateTree();
             Inorder(treeLink[tl-1],0);
             addLevelNo();
             displayTree();

             OptimiseCode();
           
         }
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 38 "program_test.y" /* yacc.c:1646  */
    {
            CreateNode("header", (yyvsp[0].txt), 1);
        }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 42 "program_test.y" /* yacc.c:1646  */
    {
            CreateNode("header", (yyvsp[-1].txt), 2);
            CreateNode("header","header",2);
        }
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 52 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("nextPart","declaration",2);
        CreateNode("nextPart", "nextPart", 2);       
    }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 57 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("nextPart", "function", 4);
        CreateNode("nextPart", "nextPart", 2);

    }
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 68 "program_test.y" /* yacc.c:1646  */
    {
        
            if(!comaflag){
                if(T.dflag == 4){
                    insert((yyvsp[-2].txt), T.name, "--",1);
                }
            
                else if(checkType((yyvsp[-2].txt), T.value)){
                    insert((yyvsp[-2].txt), T.name, correct(T.value,(yyvsp[-2].txt)), 1);
                }
                
                else if(checkTableToAccess(T.value)){  
                                 
                    insert((yyvsp[-2].txt),T.name,getValue(T.value), 1);
                }
                  
                else{
                    printf("undefined %s assigned in line No %d\nline => %s\n",T.value,lineNo,prevToken);
                }
                //
                strcpy(tempArr, "declaration");
                
                CreateNode(tempArr, "AssignList", 3);
                CreateNode(tempArr, (yyvsp[-2].txt), 0);
                
            }
            else{
                for(int i=0;i<ck;i++){
                    if(checkType((yyvsp[-2].txt), Tarr[i].value)){
                        insert((yyvsp[-2].txt),Tarr[i].name, Tarr[i].value, 1);
                        
                
                        CreateNode("declaration", "AssignList", 3);
                        CreateNode("declaration", (yyvsp[-2].txt), 0);
                    }
                }
                if(checkType((yyvsp[-2].txt), T.value)){
                    insert((yyvsp[-2].txt), T.name, T.value, 1);
                    pck = ck;ck=0;comaflag=0;
                    CreateNode("declaration", "AssignList", 3);
                    CreateNode("declaration", (yyvsp[-2].txt), 0);
                }
                else if(checkTableToAccess(T.value)){
                    insert((yyvsp[-2].txt),T.name,getValue(T.value), 1);
                    pck=ck;ck=0;comaflag=0;
                    CreateNode("declaration", "AssignList", 3);
                    CreateNode("declaration", (yyvsp[-2].txt), 0);
                }          
            }       
           
    }
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 121 "program_test.y" /* yacc.c:1646  */
    {
        if(!checkTableToAccess((yyvsp[-3].txt))){
            printf("ERROR : Undclared Type \'%s\' in Line No %d\n",(yyvsp[-3].txt), lineNo);
        }
        else{
            insert("", (yyvsp[-3].txt), (yyvsp[-1].txt), 2); // flag 2 for updating variable.
            
                     AssignExprLinkHandle(explPrev, (yyvsp[-3].txt));
         
        node *TTT = CreateNode("AssignList", "expr", 1);
        //printf("entered\n");
        TTT->childArrLink[0] = exprLink[expL-1];
        strcpy(TTT->childArrLink[0]->parent, "expr");
        explPrev = expL;
        exprNo[exprNoTemp++] = explPrev;
        
        CreateNode("AssignList", "=", 0);
        CreateNode("AssignList",(yyvsp[-3].txt),0);
        
         CreateNode("declaration", "AssignList", 3);
        CreateNode("declaration", "int", 0);    
            
        
        
        insertOptim((yyvsp[-3].txt));
        }
    }
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 150 "program_test.y" /* yacc.c:1646  */
    {strcpy(prevToken, curToken); strcpy(curToken, "");}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 155 "program_test.y" /* yacc.c:1646  */
    { 
	    if(!comaflag){
      	    strcpy(T.name,(yyvsp[-2].txt));
	        strcpy(T.value,(yyvsp[0].txt));
	        T.dflag=2;
	        
	    }
	    else{
	        strcpy(Tarr[ck++].name , (yyvsp[-2].txt));
	        strcpy(Tarr[ck-1].value, (yyvsp[0].txt));
	        Tarr[ck-1].dflag = 2;
	    }
	    
        //
        
         AssignExprLinkHandle(explPrev, (yyvsp[-2].txt));
         
        node *TTT = CreateNode("AssignList", "expr", 1);
        //printf("entered\n");
        TTT->childArrLink[0] = exprLink[expL-1];
        strcpy(TTT->childArrLink[0]->parent, "expr");
        explPrev = expL;
        exprNo[exprNoTemp++] = explPrev;
       
        CreateNode("AssignList", "=", 0);
        CreateNode("AssignList",(yyvsp[-2].txt),0);
        
        insertOptim((yyvsp[-2].txt));
	}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 185 "program_test.y" /* yacc.c:1646  */
    {
	    comaflag = 1;   
	    strcpy(Tarr[ck++].name,(yyvsp[-2].txt));
	    Tarr[ck-1].dflag = 1;
	    
	}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 191 "program_test.y" /* yacc.c:1646  */
    {
	    comaflag = 1;
	    strcpy(Tarr[ck++].name,(yyvsp[-5].txt));
	    strcpy(Tarr[ck-1].value, (yyvsp[-3].txt));
	    Tarr[ck-1].dflag = 1;
	  
    
	}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 200 "program_test.y" /* yacc.c:1646  */
    {
	    if(!comaflag){
    	    strcpy(T.name , (yyvsp[0].txt));
	        T.dflag = 4;
	    }
	    else{
	        strcpy(Tarr[ck++].name ,(yyvsp[0].txt));
	        Tarr[ck-1].dflag = 4;
	    }    
	    }
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 216 "program_test.y" /* yacc.c:1646  */
    {
                 AssignExprLinkHandle(explPrev,"--"); //TODO
         
        node *TTT = CreateNode("AssignList", "expr", 1);
        //printf("entered\n");
        TTT->childArrLink[0] = exprLink[expL-1];
        strcpy(TTT->childArrLink[0]->parent, "expr");
        explPrev = expL;
        exprNo[exprNoTemp++] = explPrev;
	    
        CreateNode("AssignList", "=", 0);
        CreateNode("AssignList",vArr,0);	
    }
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 232 "program_test.y" /* yacc.c:1646  */
    {
        
            if(!comaflag){
                if(T.dflag == 4){
                    insert((yyvsp[-2].txt), T.name, "--",1);
                }
            
                else if(checkType((yyvsp[-2].txt), T.value)){
                    insert((yyvsp[-2].txt), T.name, correct(T.value,(yyvsp[-2].txt)), 1);
                }
                
                else if(checkTableToAccess(T.value)){  
                                 
                    insert((yyvsp[-2].txt),T.name,getValue(T.value), 1);
                }
                  
                else{
                    printf("undefined %s assigned in line No %d\nline => %s\n",T.value,lineNo,prevToken);
                }
                CreateNode(cat("declarationLoop",loopval), cat1("AssignListLoop", loopval), 3);
                CreateNode(cat("declarationLoop",loopval), (yyvsp[-2].txt), 0);
                
            }
            else{
                for(int i=0;i<ck;i++){
                    if(checkType((yyvsp[-2].txt), Tarr[i].value)){
                        insert((yyvsp[-2].txt),Tarr[i].name, Tarr[i].value, 1);
                    }
                }
                if(checkType((yyvsp[-2].txt), T.value)){
                    insert((yyvsp[-2].txt), T.name, T.value, 1);
                    ck=0;comaflag=0;
                }
                else if(checkTableToAccess(T.value)){
                    insert((yyvsp[-2].txt),T.name,getValue(T.value), 1);
                    ck=0;comaflag=0;
                }          
            }       
           
    }
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 274 "program_test.y" /* yacc.c:1646  */
    {
        if(!checkTableToAccess((yyvsp[-3].txt))){
            printf("ERROR : Undclared Type \'%s\' in Line No %d\n",(yyvsp[-3].txt), lineNo);
        }
        else{
            insert("", (yyvsp[-3].txt), (yyvsp[-1].txt), 2); // flag 2 for updating variable.
         AssignExprLinkHandle(explPrev, (yyvsp[-3].txt));
        
        node *TTT = CreateNode(cat1("AssignListLoop", loopval), "expr", 1);
        
        TTT->childArrLink[0] = exprLink[expL-1];
        strcpy(TTT->childArrLink[0]->parent, "expr");
        explPrev = expL;
        exprNo[exprNoTemp++] = explPrev;
        
        //CreateExprNode(strtok(exprToken,"!"), $3);
        //CreateNode(cat1("AssignListLoop", loopval),$3,exprCount);
        CreateNode(cat1("AssignListLoop", loopval), "=", 0);
        CreateNode(cat1("AssignListLoop", loopval),(yyvsp[-3].txt),0);
        CreateNode(cat("declarationLoop",loopval), cat1("AssignListLoop", loopval), 3);
        CreateNode(cat("declarationLoop",loopval), "int", 0);
            
            
        }
    }
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 301 "program_test.y" /* yacc.c:1646  */
    {strcpy(prevToken, curToken); strcpy(curToken, "");}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 306 "program_test.y" /* yacc.c:1646  */
    { 
	    if(!comaflag){
      	    strcpy(T.name,(yyvsp[-2].txt));
	        strcpy(T.value,(yyvsp[0].txt));
	        T.dflag=2;
	        
	    }
	    else{
	        strcpy(Tarr[ck++].name , (yyvsp[-2].txt));
	        strcpy(Tarr[ck-1].value, (yyvsp[0].txt));
	        Tarr[ck-1].dflag = 2;
	    }
	    
        //
        AssignExprLinkHandle(explPrev, (yyvsp[-2].txt));
        
        node *TTT = CreateNode(cat1("AssignListLoop", loopval), "expr", 1);
        
        TTT->childArrLink[0] = exprLink[expL-1];
        strcpy(TTT->childArrLink[0]->parent, "expr");
        explPrev = expL;
        exprNo[exprNoTemp++] = explPrev;
        
        CreateNode(cat1("AssignListLoop", loopval), "=", 0);
        CreateNode(cat1("AssignListLoop", loopval),(yyvsp[-2].txt),0);
	}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 333 "program_test.y" /* yacc.c:1646  */
    {
	    comaflag = 1;   
	    strcpy(Tarr[ck++].name,(yyvsp[-2].txt));
	    Tarr[ck-1].dflag = 1;
	    
	}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 339 "program_test.y" /* yacc.c:1646  */
    {
	    comaflag = 1;
	    strcpy(Tarr[ck++].name,(yyvsp[-4].txt));
	    strcpy(Tarr[ck-1].value, (yyvsp[-2].txt));
	    Tarr[ck-1].dflag = 1;
	}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 346 "program_test.y" /* yacc.c:1646  */
    {
	    if(!comaflag){
    	    strcpy(T.name , (yyvsp[0].txt));
	        T.dflag = 4;
	    }
	    else{
	        strcpy(Tarr[ck++].name ,(yyvsp[0].txt));
	        Tarr[ck-1].dflag = 4;
	    }
	     CreateNode(cat1("AssignListLoop", loopval), "expr", 1);
	     CreateNode(cat1("AssignListLoop", loopval), "=", 0);
        CreateNode(cat1("AssignListLoop", loopval),(yyvsp[0].txt),0);    
	    }
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 369 "program_test.y" /* yacc.c:1646  */
    { }
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 375 "program_test.y" /* yacc.c:1646  */
    {
    
        strcpy(vArr, (yyvsp[0].txt));
    }
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 382 "program_test.y" /* yacc.c:1646  */
    {
        if(!checkTableToAccess((yyvsp[0].txt))){
            printf("ERROR : variable \'%s\' not defined in lineNo %d\n",(yyvsp[0].txt),lineNo);
            defineflag = 0;
        }
        else{
            defineflag=1;
            updateOpt((yyvsp[0].txt), 1);
            strcpy((yyval.txt), getValue((yyvsp[0].txt)));
        }
    }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 395 "program_test.y" /* yacc.c:1646  */
    {(yyval.txt) = (yyvsp[0].txt);}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 399 "program_test.y" /* yacc.c:1646  */
    {
         (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 1);
         CreateExprNodeHandle("+");
    }
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 403 "program_test.y" /* yacc.c:1646  */
    {
        CreateExprNodeHandle("-");
       (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 2);
    }
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 407 "program_test.y" /* yacc.c:1646  */
    {
        strcpy((yyval.txt), (yyvsp[0].txt));
    }
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 413 "program_test.y" /* yacc.c:1646  */
    {
        CreateExprNodeHandle("*");
       (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 3);  
    }
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 417 "program_test.y" /* yacc.c:1646  */
    {
        CreateExprNodeHandle("/");
       (yyval.txt) = operate((yyvsp[-2].txt), (yyvsp[0].txt), 4);
    }
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 421 "program_test.y" /* yacc.c:1646  */
    {
        
        CreateExprNodeHandle((yyvsp[0].txt));
        strcpy((yyval.txt),(yyvsp[0].txt));
    }
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 427 "program_test.y" /* yacc.c:1646  */
    {
       
        strcpy((yyval.txt), (yyvsp[-1].txt));
    }
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 434 "program_test.y" /* yacc.c:1646  */
    {
       CreateExprNodeHandle((yyvsp[0].txt));
        strcpy((yyval.txt), (yyvsp[0].txt));
        
    }
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 439 "program_test.y" /* yacc.c:1646  */
    {
       
        strcpy((yyval.txt),(yyvsp[-1].txt));
        
    }
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 448 "program_test.y" /* yacc.c:1646  */
    {
        
        insert((yyvsp[-8].txt),(yyvsp[-7].txt),"--",3 );
        CreateNode("function","Statement", 2);
        CreateNode("function", "funcPara", 4);
        CreateNode("function", (yyvsp[-7].txt), 0);
        CreateNode("function", (yyvsp[-8].txt),0);
        funcFlag = false;
       
    }
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 460 "program_test.y" /* yacc.c:1646  */
    {funcFlag = true;
        
    }
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 470 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("funcPara",(yyvsp[0].txt),0);
        CreateNode("funcPara","=",0);
        CreateNode("funcPara", (yyvsp[-2].txt), 0);
        CreateNode("funcPara", (yyvsp[-3].txt), 0);
    }
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 476 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("funcPara",(yyvsp[0].txt),0);
        CreateNode("funcPara", (yyvsp[-1].txt), 0);
    }
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 480 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("funcPara","nextPara",6);
    }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 486 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("nextPara","funcPara",3);
        CreateNode("nextPara", ",", 0);
        CreateNode("nextPara", (yyvsp[-2].txt),0);
        CreateNode("nextPara", "=",0);
        CreateNode("nextPara",(yyvsp[-4].txt), 0);
        CreateNode("nextPara", (yyvsp[-5].txt), 0);
    }
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 494 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("nextPara","funcPara",3);
        CreateNode("nextPara", ",", 0);
        CreateNode("nextPara",(yyvsp[-2].txt), 0);
        CreateNode("nextPara", (yyvsp[-3].txt), 0);
    }
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 503 "program_test.y" /* yacc.c:1646  */
    {
        
    }
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 510 "program_test.y" /* yacc.c:1646  */
    {
        for(int i=0;i<=pck;i++){
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "declaration", 2);
        }
        pck=0;
    }
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 518 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "forExp", 5);
    }
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 523 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "whileExp", 5);
    }
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 528 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "ifElse", 7);
    }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 535 "program_test.y" /* yacc.c:1646  */
    {
        
        strcpy(tempArr2, cat1("declarationLoop",loopval));
        
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), tempArr2, 2);
        //printf("%s\n",tempArr2);
    }
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 544 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval),"forExp",5 );
    }
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 549 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), "whileExp", 5);
    }
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 554 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), "ifElse", 7);
    }
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 563 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("wLoopStatement",loopval), cat1("declarationLoop",loopval), 2);
    }
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 568 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("wLoopStatement",loopval),"forExp",5 );
    }
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 573 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), "whileExp", 5);
    }
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 578 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("wLoopStatement",loopval), "ifElse", 7);
    }
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 587 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval), cat1("declarationLoop",loopval), 2);
    }
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 592 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval),"forExp",5 );
    }
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 597 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval), "whileExp", 5);
    }
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 602 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval), "ifElse", 7);
    }
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 610 "program_test.y" /* yacc.c:1646  */
    {
       strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));
     }
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 613 "program_test.y" /* yacc.c:1646  */
    { strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));
    }
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 615 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt)); 
    }
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 618 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));
    }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 621 "program_test.y" /* yacc.c:1646  */
    {
    strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));
    }
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 624 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 625 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 626 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 627 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, " ");}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 628 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, " ");}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 629 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, " ");}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 630 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, " ");}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 631 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 632 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 633 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 634 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 635 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-3].txt));strcpy(tempArr2, (yyvsp[-2].txt));strcpy(tempArr3, (yyvsp[-1].txt));}
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 636 "program_test.y" /* yacc.c:1646  */
    {
        insert((yyvsp[-4].txt), (yyvsp[-3].txt), (yyvsp[-1].txt), 4);
        {strcpy(tempArr1, (yyvsp[-4].txt));strcpy(tempArr2, (yyvsp[-3].txt));strcpy(tempArr3, (yyvsp[-2].txt));}
    }
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 645 "program_test.y" /* yacc.c:1646  */
    {
        strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));
     }
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 648 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 649 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 650 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 651 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 652 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 653 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 654 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 655 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, "--");}
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 656 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, "--");}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 657 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, "--");}
#line 2449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 658 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-1].txt));strcpy(tempArr2, (yyvsp[0].txt));strcpy(tempArr3, "--");}
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 659 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 660 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 661 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 662 "program_test.y" /* yacc.c:1646  */
    {strcpy(tempArr1, (yyvsp[-2].txt));strcpy(tempArr2, (yyvsp[-1].txt));strcpy(tempArr3, (yyvsp[0].txt));}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 664 "program_test.y" /* yacc.c:1646  */
    {
        insert((yyvsp[-3].txt), (yyvsp[-2].txt), (yyvsp[0].txt), 4);
        strcpy(tempArr1, (yyvsp[-3].txt));strcpy(tempArr2, (yyvsp[-2].txt));strcpy(tempArr3, (yyvsp[-1].txt));
    }
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 675 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("look", "forOpen", 0);
        CreateNode("forExp", cat("LoopStatement",loopval), 2);
        CreateNode("forExp", "for3", 6);
        CreateNode("forExp", "for2", 6);
        CreateNode("forExp", "for1", 6);
        CreateNode("forExp", "for", 0);
        loopFlag = false;
        fprintf(IcodeFile, "T_ = %s %c %s\n",varFor, tempArr3[0], tempArr1);
        fprintf(IcodeFile, "%s = T_\n", varFor);     
        fprintf(IcodeFile, "goto %s\n%s : ",cat5("L",labelTemp-3), cat6("L",labelTemp-1));  
    }
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 690 "program_test.y" /* yacc.c:1646  */
    {loopFlag = true; 
        ++loopval;
        
     }
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 700 "program_test.y" /* yacc.c:1646  */
    {
        insert((yyvsp[-5].txt), (yyvsp[-4].txt), (yyvsp[-2].txt), 4);
        CreateNode("for1", "for1", 6);
        CreateNode("for1", ",", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-4].txt), 0);
        CreateNode("for1", (yyvsp[-5].txt), 0);
        fprintf(IcodeFile, "%s : %s = %s\n",cat5("L",labelTemp++), (yyvsp[-4].txt), (yyvsp[-2].txt));       
    }
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 711 "program_test.y" /* yacc.c:1646  */
    {
         insert((yyvsp[-3].txt), (yyvsp[-2].txt), (yyvsp[0].txt), 4);
        CreateNode("for1", (yyvsp[0].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
        CreateNode("for1", (yyvsp[-3].txt),0);
        fprintf(IcodeFile, "%s : %s = %s\n",cat5("L",labelTemp++), (yyvsp[-2].txt), (yyvsp[0].txt)); 
        strcpy(varFor, (yyvsp[-2].txt));
    }
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 721 "program_test.y" /* yacc.c:1646  */
    {
        if(checkTableToAccess((yyvsp[-4].txt))){}
        else
            printf("ERROR : undefined variable \'%s\' in line No %d\n",(yyvsp[-4].txt), lineNo);
        CreateNode("for1", "for1", 6);
        CreateNode("for1", ",", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-4].txt), 0);
    }
#line 2558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 732 "program_test.y" /* yacc.c:1646  */
    {
        if(checkTableToAccess((yyvsp[-2].txt))){}
        else
            printf("ERROR : undefined variable \'%s\' in line No %d\n",(yyvsp[-2].txt), lineNo);

        CreateNode("for1", (yyvsp[0].txt), 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", (yyvsp[-2].txt), 0);
    }
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 746 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("for2", tempArr3, 0);
        CreateNode("for2", tempArr2, 0);
        CreateNode("for2", tempArr1, 0);
        fprintf(IcodeFile, "%s : if (%s %s %s) goto %s\ngoto %s\n%s : ",cat5("L",labelTemp), tempArr1, tempArr2, tempArr3,cat6("L",labelTemp+1), cat7("L",labelTemp+2), cat6("L",labelTemp-1)); labelTemp +=3;
    }
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 756 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("for3", tempArr3, 0);
        CreateNode("for3", tempArr2, 0);
        CreateNode("for3", tempArr1, 0);
    }
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 766 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("whileExp", cat("wLoopStatement", loopval), 2);
        CreateNode("whileExp", tempArr3, 0);
        CreateNode("whileExp", tempArr2, 0);
        CreateNode("whileExp", tempArr1, 0);
        //printf("%s\n", tempArr1);
        CreateNode("whileExp", "while", 0);
        fprintf(IcodeFile, "goto %s\n%s:\n",cat5("L",labelTemp-3), cat6("L", labelTemp-2) );
    }
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 778 "program_test.y" /* yacc.c:1646  */
    {loopval++;
        fprintf(IcodeFile, "%s : if",cat5("L",labelTemp++));
    }
#line 2615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 784 "program_test.y" /* yacc.c:1646  */
    {
        char array[100];
        strcpy(array, tempArr1);strcat(array, tempArr2);strcat(array, tempArr3);
        fprintf(IcodeFile, "(%s) goto %s\ngoto %s\n%s : ",array,cat5("L",labelTemp++), cat6("L", ++labelTemp-1), cat5("L",labelTemp-2));
    }
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 792 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("ifElse", cat("ifLoopStatement",loopval), 2);
        CreateNode("ifElse", tempArr3, 0);
        CreateNode("ifElse", tempArr2, 0);
        CreateNode("ifElse", tempArr1, 0);
        CreateNode("ifElse", "if",0 );
    }
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 799 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("ifElse", "ifElse", 7);
        CreateNode("ifElse", "else", 0);
        CreateNode("ifElse", cat("ifLoopStatement",loopval), 2);
        CreateNode("ifElse", tempArr3, 0);
        CreateNode("ifElse", tempArr2, 0);
        CreateNode("ifElse", tempArr1, 0);
        CreateNode("ifElse", "if",0 );
    }
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 808 "program_test.y" /* yacc.c:1646  */
    {
        CreateNode("ifElse", cat("ifLoopStatement",loopval), 2);
    }
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 813 "program_test.y" /* yacc.c:1646  */
    {loopval++;}
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2669 "y.tab.c" /* yacc.c:1646  */
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
#line 815 "program_test.y" /* yacc.c:1906  */




int main() 
{  
    yyin = fopen("program.c", "r"); // input file for program
    yyout = fopen("out.txt","w"); //for SymbolTable
    tempFile = fopen("token.txt","w"); // all the tokens available here
    treeFile = fopen("tree.txt","w"); // used by tree.py for creating tree
    IcodeFile = fopen("Icode.txt","w"); // intermediate code can be found
    
	yyparse(); 

	fclose(yyout);
	fclose(yyin);
	
	return 0;
} 

