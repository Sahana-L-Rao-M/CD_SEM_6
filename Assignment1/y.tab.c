
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

	#include "sym_tab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define YYSTYPE char*
	int type=-1;	//initial declaration of type for symbol table
	char* vval="~";	//initial declaration of value for symbol table
	int vtype=-1;	//initial declaration for type checking for symbol table
	int scope=0;	//initial declaration for scope
	void yyerror(char* s); // error handling function
	int yylex(); // declare the function performing lexical analysis
	extern int yylineno; // track the line number
	extern char* yytext;
	int arrsize=1;
	int errCount=0;



/* Line 189 of yacc.c  */
#line 93 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_INT = 258,
     T_CHAR = 259,
     T_DOUBLE = 260,
     T_WHILE = 261,
     T_INC = 262,
     T_DEC = 263,
     T_OROR = 264,
     T_ANDAND = 265,
     T_EQCOMP = 266,
     T_NOTEQUAL = 267,
     T_GREATEREQ = 268,
     T_LESSEREQ = 269,
     T_LEFTSHIFT = 270,
     T_RIGHTSHIFT = 271,
     T_PRINTLN = 272,
     T_STRING = 273,
     T_FLOAT = 274,
     T_BOOLEAN = 275,
     T_IF = 276,
     T_ELSE = 277,
     T_STRLITERAL = 278,
     T_DO = 279,
     T_INCLUDE = 280,
     T_HEADER = 281,
     T_MAIN = 282,
     T_ID = 283,
     T_NUM = 284,
     T_FOR = 285,
     T_OR = 286,
     T_AND = 287,
     T_INCR = 288,
     T_DECR = 289,
     T_IFX = 290
   };
#endif
/* Tokens.  */
#define T_INT 258
#define T_CHAR 259
#define T_DOUBLE 260
#define T_WHILE 261
#define T_INC 262
#define T_DEC 263
#define T_OROR 264
#define T_ANDAND 265
#define T_EQCOMP 266
#define T_NOTEQUAL 267
#define T_GREATEREQ 268
#define T_LESSEREQ 269
#define T_LEFTSHIFT 270
#define T_RIGHTSHIFT 271
#define T_PRINTLN 272
#define T_STRING 273
#define T_FLOAT 274
#define T_BOOLEAN 275
#define T_IF 276
#define T_ELSE 277
#define T_STRLITERAL 278
#define T_DO 279
#define T_INCLUDE 280
#define T_HEADER 281
#define T_MAIN 282
#define T_ID 283
#define T_NUM 284
#define T_FOR 285
#define T_OR 286
#define T_AND 287
#define T_INCR 288
#define T_DECR 289
#define T_IFX 290




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 205 "y.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   229

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNRULES -- Number of states.  */
#define YYNSTATES  166

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,     2,     2,     2,     2,     2,
      38,    39,    48,    46,    44,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
      35,    45,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    11,    14,    18,    22,    23,    24,
      39,    40,    44,    47,    50,    53,    58,    63,    64,    68,
      70,    74,    76,    78,    80,    82,    84,    85,    90,    91,
      97,   101,   103,   107,   110,   113,   117,   121,   123,   127,
     131,   133,   137,   139,   141,   143,   145,   147,   149,   151,
     153,   155,   157,   159,   161,   163,   165,   167,   169,   171,
     173,   175,   176,   186,   188,   189,   192,   193,   197,   198,
     201,   204,   207,   210,   213,   216,   219,   222,   223,   227,
     228,   234,   235,   244,   245,   249,   250,   255,   257,   259,
     265,   266,   271
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    -1,    25,    35,    26,    36,    54,
      -1,    75,    54,    -1,    59,    37,    54,    -1,    65,    37,
      54,    -1,    -1,    -1,    30,    38,    57,    37,    28,    72,
      68,    37,    68,    39,    40,    56,    78,    41,    -1,    -1,
      58,    64,    62,    -1,    64,    62,    -1,    64,    60,    -1,
      28,    61,    -1,    42,    29,    43,    61,    -1,    42,    28,
      43,    61,    -1,    -1,    62,    44,    63,    -1,    63,    -1,
      28,    45,    68,    -1,    28,    -1,     3,    -1,    19,    -1,
       5,    -1,     4,    -1,    -1,    28,    66,    45,    68,    -1,
      -1,    28,    61,    67,    45,    68,    -1,    68,    72,    69,
      -1,    69,    -1,    68,    74,    69,    -1,    69,    73,    -1,
      73,    69,    -1,    69,    46,    70,    -1,    69,    47,    70,
      -1,    70,    -1,    70,    48,    71,    -1,    70,    49,    71,
      -1,    71,    -1,    38,    68,    39,    -1,    28,    -1,    29,
      -1,    23,    -1,    14,    -1,    13,    -1,    35,    -1,    36,
      -1,    11,    -1,    12,    -1,    33,    -1,    34,    -1,    47,
      -1,    46,    -1,    50,    -1,    32,    -1,    31,    -1,    50,
      -1,    33,    -1,    34,    -1,    -1,    64,    27,    38,    77,
      39,    40,    76,    78,    41,    -1,    62,    -1,    -1,    80,
      78,    -1,    -1,    85,    79,    78,    -1,    -1,    59,    37,
      -1,    65,    37,    -1,    82,    78,    -1,    88,    78,    -1,
      55,    78,    -1,    84,    78,    -1,    68,    37,    -1,    57,
      37,    -1,    -1,     1,    81,    37,    -1,    -1,    21,    38,
      87,    39,    85,    -1,    -1,    21,    38,    87,    39,    85,
      22,    83,    85,    -1,    -1,    24,    85,    88,    -1,    -1,
      40,    86,    78,    41,    -1,    68,    -1,    65,    -1,     6,
      38,    87,    39,    89,    -1,    -1,    40,    90,    78,    41,
      -1,    37,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    30,    31,    32,    33,    34,    37,    37,
      39,    39,    41,    42,    45,    60,    61,    62,    64,    65,
      68,    82,    94,    95,    96,    97,   100,   100,   111,   111,
     123,   124,   125,   126,   129,   135,   147,   159,   163,   175,
     187,   190,   191,   212,   221,   232,   233,   234,   235,   236,
     237,   240,   241,   242,   243,   244,   247,   248,   249,   252,
     260,   273,   273,   275,   276,   279,   280,   280,   281,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   295,   296,
     298,   299,   299,   300,   302,   304,   304,   306,   307,   310,
     312,   312,   313
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INT", "T_CHAR", "T_DOUBLE", "T_WHILE",
  "T_INC", "T_DEC", "T_OROR", "T_ANDAND", "T_EQCOMP", "T_NOTEQUAL",
  "T_GREATEREQ", "T_LESSEREQ", "T_LEFTSHIFT", "T_RIGHTSHIFT", "T_PRINTLN",
  "T_STRING", "T_FLOAT", "T_BOOLEAN", "T_IF", "T_ELSE", "T_STRLITERAL",
  "T_DO", "T_INCLUDE", "T_HEADER", "T_MAIN", "T_ID", "T_NUM", "T_FOR",
  "T_OR", "T_AND", "T_INCR", "T_DECR", "'<'", "'>'", "';'", "'('", "')'",
  "'{'", "'}'", "'['", "']'", "','", "'='", "'+'", "'-'", "'*'", "'/'",
  "'!'", "T_IFX", "$accept", "START", "PROG", "FOR", "$@1", "DEC_ASGN",
  "$@2", "DECLR", "ARRAY", "BRACKET", "LISTVAR", "VAR", "TYPE", "ASSGN",
  "$@3", "$@4", "EXPR", "E", "T", "F", "REL_OP", "UNARY_OP", "LOGICAL_OP",
  "MAIN", "$@5", "EMPTY_LISTVAR", "STMT", "$@6", "STMT_NO_BLOCK", "$@7",
  "IFELSE", "$@8", "DO", "BLOCK", "$@9", "CONDITION", "WHILE", "WHILE_2",
  "$@10", 0
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
     285,   286,   287,   288,   289,    60,    62,    59,    40,    41,
     123,   125,    91,    93,    44,    61,    43,    45,    42,    47,
      33,   290
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    54,    54,    56,    55,
      58,    57,    59,    59,    60,    61,    61,    61,    62,    62,
      63,    63,    64,    64,    64,    64,    66,    65,    67,    65,
      68,    68,    68,    68,    68,    69,    69,    69,    70,    70,
      70,    71,    71,    71,    71,    72,    72,    72,    72,    72,
      72,    73,    73,    73,    73,    73,    74,    74,    74,    73,
      73,    76,    75,    77,    77,    78,    79,    78,    78,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    80,    80,
      82,    83,    82,    82,    84,    86,    85,    87,    87,    88,
      90,    89,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     5,     2,     3,     3,     0,     0,    14,
       0,     3,     2,     2,     2,     4,     4,     0,     3,     1,
       3,     1,     1,     1,     1,     1,     0,     4,     0,     5,
       3,     1,     3,     2,     2,     3,     3,     1,     3,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     9,     1,     0,     2,     0,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     0,     3,     0,
       5,     0,     8,     0,     3,     0,     4,     1,     1,     5,
       0,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,    22,    25,    24,    23,     0,    17,     0,     2,     0,
       0,     0,     7,     0,     0,    28,     0,     1,     7,     0,
      17,    13,    12,    19,     7,     4,     0,     0,     0,     0,
       0,     5,    64,     0,    14,     0,     6,     7,    17,    17,
       0,    44,    42,    43,    51,    52,     0,    54,    53,    55,
      27,    31,    37,    40,     0,    21,    63,     0,    20,    18,
       3,    16,    15,    29,     0,    49,    50,    46,    45,    57,
      56,    47,    48,    58,     0,     0,    54,    53,    33,     0,
       0,    34,     0,    41,    30,    32,    35,    36,    38,    39,
       0,     0,    61,     0,    77,     0,     0,     0,    42,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,     0,     0,     0,     0,     0,    10,     0,
      73,    76,     0,    69,    70,    75,    62,    65,    71,    74,
       0,    72,    78,    88,    87,     0,     0,    84,     0,     0,
      11,    67,     0,     0,     0,    86,    92,    90,    89,    80,
       0,     0,    81,     0,     0,     0,     0,    91,    82,     0,
       0,     0,     8,     0,     0,     9
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,   101,   163,   102,   103,   104,    21,    15,
      22,    23,   105,   106,    16,    29,   107,    51,    52,    53,
      74,    54,    75,    12,    93,    57,   108,   130,   109,   114,
     110,   155,   111,   112,   119,   135,   113,   148,   151
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -92
static const yytype_int16 yypact[] =
{
     135,   -92,   -92,   -92,   -92,   -23,   -37,     7,   -92,   -13,
      62,     0,   135,    22,    63,   -92,    -4,   -92,   135,    38,
       5,   -92,    25,   -92,   135,   -92,    60,    58,    66,    61,
     153,   -92,    85,   153,   -92,    85,   -92,   135,   -37,   -37,
     153,   -92,   -92,   -92,   -92,   -92,   153,   -92,   -92,   -92,
     161,   172,    51,   -92,   156,    77,    25,    91,   161,   -92,
     -92,   -92,   -92,   161,    31,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   156,   156,   156,   156,   -92,   156,
     156,    64,    96,   -92,    64,    64,    51,    51,   -92,   -92,
     156,   156,   -92,    74,   -92,    93,    99,   107,   -27,   110,
     -92,    74,   118,    52,   122,   139,   131,   114,   129,    74,
      74,    74,   -92,    74,   140,   179,   179,   177,   -92,    74,
     -92,   -92,    85,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
      74,   -92,   -92,   -92,   161,   149,   150,   -92,   141,   154,
      25,   -92,    28,   107,   162,   -92,   -92,   -92,   -92,   176,
      47,    74,   -92,   153,   160,   107,   121,   -92,   -92,   153,
     130,   164,   -92,    74,   168,   -92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,    -1,   -92,   -92,    92,   -92,     9,   -92,    15,
     -28,   180,     2,     1,   -92,   -92,   -30,   -46,    -3,    39,
      70,   163,   -92,   -92,   -92,   -92,   -79,   -92,   -92,   -92,
     -92,   -92,   -92,   -91,   -92,   100,   104,   -92,   -92
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -69
static const yytype_int16 yytable[] =
{
      50,    11,    10,    58,    56,    14,   117,    17,    81,     9,
      63,    25,    13,    11,    10,    14,    64,    31,   -17,    11,
      10,     9,   120,    36,    18,    11,    10,     9,    84,    85,
     127,   128,   129,     9,   131,    34,    60,    24,    11,    10,
     139,    30,    65,    66,    67,    68,     9,    14,    26,   -21,
      33,   141,   149,    61,    62,     1,     2,     3,    65,    66,
      67,    68,    69,    70,   158,   146,    71,    72,   147,    35,
      83,     4,   154,    86,    87,    94,    32,     1,     2,     3,
      95,    73,    71,    72,   164,   134,   134,    86,    87,    19,
      20,    27,    28,     4,   140,    96,    37,    41,    97,    79,
      80,    38,    98,    43,    99,   122,    40,    44,    45,    39,
      90,    91,    46,    55,   100,   -68,   133,   133,    88,    89,
      47,    48,    33,   156,    49,    65,    66,    67,    68,   160,
      82,   115,    65,    66,    67,    68,    92,   116,     1,     2,
       3,    65,    66,    67,    68,    69,    70,   100,   118,    71,
      72,   125,    69,    70,     4,   121,    71,    72,   159,   123,
       5,    69,    70,     6,    73,    71,    72,    20,   124,   161,
     126,    73,    65,    66,    67,    68,    41,   132,   144,    41,
      73,    42,    43,    95,    42,    43,    44,    45,   142,   143,
     150,    46,    69,    70,    46,   145,    71,    72,   152,    47,
      48,   157,    41,    49,   162,    44,    45,    98,    43,   165,
     138,    73,    44,    45,    78,    59,   136,    46,    76,    77,
     153,   137,    49,     0,     0,    47,    48,     0,     0,    49
};

static const yytype_int16 yycheck[] =
{
      30,     0,     0,    33,    32,    42,    97,     0,    54,     0,
      40,    12,    35,    12,    12,    42,    46,    18,    45,    18,
      18,    12,   101,    24,    37,    24,    24,    18,    74,    75,
     109,   110,   111,    24,   113,    20,    37,    37,    37,    37,
     119,    45,    11,    12,    13,    14,    37,    42,    26,    44,
      45,   130,   143,    38,    39,     3,     4,     5,    11,    12,
      13,    14,    31,    32,   155,    37,    35,    36,    40,    44,
      39,    19,   151,    76,    77,     1,    38,     3,     4,     5,
       6,    50,    35,    36,   163,   115,   116,    90,    91,    27,
      28,    28,    29,    19,   122,    21,    36,    23,    24,    48,
      49,    43,    28,    29,    30,   103,    45,    33,    34,    43,
      46,    47,    38,    28,    40,    41,   115,   116,    79,    80,
      46,    47,    45,   153,    50,    11,    12,    13,    14,   159,
      39,    38,    11,    12,    13,    14,    40,    38,     3,     4,
       5,    11,    12,    13,    14,    31,    32,    40,    38,    35,
      36,    37,    31,    32,    19,    37,    35,    36,    37,    37,
      25,    31,    32,    28,    50,    35,    36,    28,    37,    39,
      41,    50,    11,    12,    13,    14,    23,    37,    37,    23,
      50,    28,    29,     6,    28,    29,    33,    34,    39,    39,
      28,    38,    31,    32,    38,    41,    35,    36,    22,    46,
      47,    41,    23,    50,    40,    33,    34,    28,    29,    41,
     118,    50,    33,    34,    51,    35,   116,    38,    46,    47,
     150,   117,    50,    -1,    -1,    46,    47,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    19,    25,    28,    53,    54,    59,
      64,    65,    75,    35,    42,    61,    66,     0,    37,    27,
      28,    60,    62,    63,    37,    54,    26,    28,    29,    67,
      45,    54,    38,    45,    61,    44,    54,    36,    43,    43,
      45,    23,    28,    29,    33,    34,    38,    46,    47,    50,
      68,    69,    70,    71,    73,    28,    62,    77,    68,    63,
      54,    61,    61,    68,    68,    11,    12,    13,    14,    31,
      32,    35,    36,    50,    72,    74,    46,    47,    73,    48,
      49,    69,    39,    39,    69,    69,    70,    70,    71,    71,
      46,    47,    40,    76,     1,     6,    21,    24,    28,    30,
      40,    55,    57,    58,    59,    64,    65,    68,    78,    80,
      82,    84,    85,    88,    81,    38,    38,    85,    38,    86,
      78,    37,    64,    37,    37,    37,    41,    78,    78,    78,
      79,    78,    37,    65,    68,    87,    87,    88,    57,    78,
      62,    78,    39,    39,    37,    41,    37,    40,    89,    85,
      28,    90,    22,    72,    78,    83,    68,    41,    85,    37,
      68,    39,    40,    56,    78,    41
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 8:

/* Line 1455 of yacc.c  */
#line 37 "parser.y"
    {scope++;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 39 "parser.y"
    {printf(" ");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 45 "parser.y"
    {
		if(check_sym_tab((yyvsp[(1) - (2)])))
			{
				printf("Already declared variable %s\n",(yyvsp[(1) - (2)]));
				yyerror((yyvsp[(1) - (2)]));
			}
			else
			{
				insert_symbol((yyvsp[(1) - (2)]),size(type)*arrsize,type,yylineno,scope);
				arrsize=1;
				type=-1;
			}
		}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    { arrsize*=atoi((yyvsp[(2) - (4)]));}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 61 "parser.y"
    { arrsize*=atoi((yyvsp[(2) - (4)]));}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 68 "parser.y"
    {
				if(check_sym_tab((yyvsp[(1) - (3)])))
				{
					printf("Already declared variable %s\n",(yyvsp[(1) - (3)]));
					yyerror((yyvsp[(1) - (3)]));
				}
				else
				{
				insert_symbol((yyvsp[(1) - (3)]),size(type),type,yylineno,scope);
				insert_val((yyvsp[(1) - (3)]),vval,yylineno);
				vval="~";
				type=-1;
				}
			}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    {
				if(check_sym_tab((yyvsp[(1) - (1)])))
				{
					printf("Already declared variable %s\n",(yyvsp[(1) - (1)]));
					yyerror((yyvsp[(1) - (1)]));
				}
				else{
				insert_symbol((yyvsp[(1) - (1)]),size(type),type,yylineno,scope);
				type=-1;
				}
			}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    {type = INT;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    {type = FLOAT;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    {type = DOUBLE;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {type = CHAR;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {type=retrieve_type((yyvsp[(1) - (1)]));}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {
				//printf("%s here \n", $1);
				if(!check_sym_tab((yyvsp[(1) - (4)])))
				{
					printf("Variable %s is not declared\n",(yyvsp[(1) - (4)]));
					yyerror((yyvsp[(1) - (4)]));
				}
				insert_val((yyvsp[(1) - (4)]),vval,yylineno);
				vval="~";
				type=-1;
			}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {type=retrieve_type((yyvsp[(1) - (2)]));}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {
				if(!check_sym_tab((yyvsp[(1) - (5)])))
				{
					printf("Variable %s is not declared\n",(yyvsp[(1) - (5)]));
					yyerror((yyvsp[(1) - (5)]));
				}
				insert_val((yyvsp[(1) - (5)]),vval,yylineno);
				vval="~";
				type=-1;
			}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    {vval=(yyvsp[(1) - (1)]);}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {
		int xyz = atoi(retrieve_val((yyvsp[(1) - (2)])))+1;
	sprintf((yyval),"%d",xyz);}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {
		int xyz = atoi(retrieve_val((yyvsp[(1) - (2)])))+1;
	sprintf((yyval),"%d",xyz);}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    { 
			if(vtype==2)				//integer
				sprintf((yyval),"%d",(atoi((yyvsp[(1) - (3)]))+atoi((yyvsp[(3) - (3)]))));
			else if(vtype==3)			//float or double
				sprintf((yyval),"%lf",(atof((yyvsp[(1) - (3)]))+atof((yyvsp[(3) - (3)]))));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror((yyval));
				(yyval)="~";
			}
		}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 147 "parser.y"
    { 
			if(vtype==2)				//integer
				sprintf((yyval),"%d",(atoi((yyvsp[(1) - (3)]))-atoi((yyvsp[(3) - (3)]))));
			else if(vtype==3)
				sprintf((yyval),"%lf",(atof((yyvsp[(1) - (3)]))-atof((yyvsp[(3) - (3)]))));			//float or double
			else
			{
				printf("Character used in arithmetic\n");
				yyerror((yyval));
				(yyval)="~";
			}
		}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    { 
			if(vtype==2)				//integer
				sprintf((yyval),"%d",(atoi((yyvsp[(1) - (3)]))*atoi((yyvsp[(3) - (3)]))));
			else if(vtype==3)			//float or double
				sprintf((yyval),"%lf",(atof((yyvsp[(1) - (3)]))*atof((yyvsp[(3) - (3)]))));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror((yyval));
				(yyval)="~";
			}
		}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    { 
			if(vtype==2)				//integer
				sprintf((yyval),"%d",(atoi((yyvsp[(1) - (3)]))/atoi((yyvsp[(3) - (3)]))));
			else if(vtype==3)			//float or double
				sprintf((yyval),"%lf",(atof((yyvsp[(1) - (3)]))/atof((yyvsp[(3) - (3)]))));
			else
			{
				printf("Character used in arithmetic\n");
				yyerror((yyval));
				(yyval)="~";
			}
		}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    {
			if(check_sym_tab((yyvsp[(1) - (1)])))		//check if variable is in symbol table
			{
				char* check=retrieve_val((yyvsp[(1) - (1)]));
				if(check=="~")		//if variable has no value then can't be used for assignment
				{
					printf("Variable %s not initialised",(yyvsp[(1) - (1)]));
					yyerror((yyvsp[(1) - (1)]));
				}
				else
				{	
					(yyval)=strdup(check);
					vtype=type_check(check);	
					if(vtype!=type && type!=-1)	//checks for matching type
					{
						printf("Mismatch type\n");
						yyerror((yyvsp[(1) - (1)]));
					}	
				}
			}
		}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {
    			(yyval)=strdup((yyvsp[(1) - (1)])); 
    			vtype=type_check((yyvsp[(1) - (1)]));
    			if(vtype!=type && type!=-1)	//checks for matching type
			{
				printf("Mismatch type\n");
				yyerror((yyvsp[(1) - (1)]));
			}
		}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 221 "parser.y"
    {
    			(yyval)=strdup((yyvsp[(1) - (1)])); 
    			vtype=1;
			if(vtype!=type)		//checks for matching type
			{
				printf("Mismatch type\n");	
				yyerror((yyvsp[(1) - (1)]));
			}
		}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    {
			int i = atoi(retrieve_val((yyvsp[(1) - (1)])))+1;
			char arr[50];
			sprintf(arr, "%d", i);
			insert_val((yyval), arr, yylineno);
			vval = retrieve_val((yyval));
					
		}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    {
			int i = atoi(retrieve_val((yyvsp[(1) - (1)])))+1;
			char arr[50];
			sprintf(arr, "%d", i);
			insert_val((yyval), arr, yylineno);
			vval = retrieve_val((yyval));
					
		}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    {scope++;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    {scope--;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    {scope++;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    {scope--;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 295 "parser.y"
    {yyerrok;yyclearin;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    {scope--;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    {scope++;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    {scope--;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 312 "parser.y"
    {scope++;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 312 "parser.y"
    {scope--;}
    break;



/* Line 1455 of yacc.c  */
#line 1988 "y.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 316 "parser.y"


void yyerror(char* s)
{
	errCount+=1;
	printf("Error :%s at %d \n",s,yylineno);
}
int yywrap()
{
    return(1);
}


char *strdup(const char *str)
{
    int n = strlen(str) + 1;
    char *dup = malloc(n);
    if(dup)
    {
        strcpy(dup, str);
    }
    return dup;
}

/* main function - calls the yyparse() function which will in turn drive yylex() as well */
int main(int argc, char* argv[])
{
	t=init_table();
	//printf("here \n");
	yyparse();
	display_symbol_table();
	if(errCount > 0)
	{
		printf("Compilation failed at Syntax Analyser with a total of %d errors\n", errCount);	
	}
	else
	{
		printf("Compilation successful w.r.t. Syntax Analyser\n");
	}
	return 0;

}

