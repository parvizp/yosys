/* A Bison parser, made by GNU Bison 2.7.1.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         rtlil_frontend_ilang_yyparse
#define yylex           rtlil_frontend_ilang_yylex
#define yyerror         rtlil_frontend_ilang_yyerror
#define yylval          rtlil_frontend_ilang_yylval
#define yychar          rtlil_frontend_ilang_yychar
#define yydebug         rtlil_frontend_ilang_yydebug
#define yynerrs         rtlil_frontend_ilang_yynerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 25 "ilang_parser.y"

#include <list>
#include "ilang_frontend.h"
YOSYS_NAMESPACE_BEGIN
namespace ILANG_FRONTEND {
	std::istream *lexin;
	RTLIL::Design *current_design;
	RTLIL::Module *current_module;
	RTLIL::Wire *current_wire;
	RTLIL::Memory *current_memory;
	RTLIL::Cell *current_cell;
	RTLIL::Process *current_process;
	std::vector<std::vector<RTLIL::SwitchRule*>*> switch_stack;
	std::vector<RTLIL::CaseRule*> case_stack;
	std::map<RTLIL::IdString, RTLIL::Const> attrbuf;
}
using namespace ILANG_FRONTEND;
YOSYS_NAMESPACE_END
USING_YOSYS_NAMESPACE

/* Line 371 of yacc.c  */
#line 96 "ilang_parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "ilang_parser.tab.h".  */
#ifndef YY_RTLIL_FRONTEND_ILANG_YY_ILANG_PARSER_TAB_H_INCLUDED
# define YY_RTLIL_FRONTEND_ILANG_YY_ILANG_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int rtlil_frontend_ilang_yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_ID = 258,
     TOK_VALUE = 259,
     TOK_STRING = 260,
     TOK_INT = 261,
     TOK_AUTOIDX = 262,
     TOK_MODULE = 263,
     TOK_WIRE = 264,
     TOK_WIDTH = 265,
     TOK_INPUT = 266,
     TOK_OUTPUT = 267,
     TOK_INOUT = 268,
     TOK_CELL = 269,
     TOK_CONNECT = 270,
     TOK_SWITCH = 271,
     TOK_CASE = 272,
     TOK_ASSIGN = 273,
     TOK_SYNC = 274,
     TOK_LOW = 275,
     TOK_HIGH = 276,
     TOK_POSEDGE = 277,
     TOK_NEGEDGE = 278,
     TOK_EDGE = 279,
     TOK_ALWAYS = 280,
     TOK_INIT = 281,
     TOK_UPDATE = 282,
     TOK_PROCESS = 283,
     TOK_END = 284,
     TOK_INVALID = 285,
     TOK_EOL = 286,
     TOK_OFFSET = 287,
     TOK_PARAMETER = 288,
     TOK_ATTRIBUTE = 289,
     TOK_MEMORY = 290,
     TOK_SIZE = 291,
     TOK_SIGNED = 292,
     TOK_UPTO = 293
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 48 "ilang_parser.y"

	char *string;
	int integer;
	YOSYS_NAMESPACE_PREFIX RTLIL::Const *data;
	YOSYS_NAMESPACE_PREFIX RTLIL::SigSpec *sigspec;


/* Line 387 of yacc.c  */
#line 185 "ilang_parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE rtlil_frontend_ilang_yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int rtlil_frontend_ilang_yyparse (void *YYPARSE_PARAM);
#else
int rtlil_frontend_ilang_yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int rtlil_frontend_ilang_yyparse (void);
#else
int rtlil_frontend_ilang_yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_RTLIL_FRONTEND_ILANG_YY_ILANG_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 213 "ilang_parser.tab.c"

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   136

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNRULES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,    11,    14,    15,    18,    21,
      24,    25,    26,    27,    36,    39,    40,    42,    44,    46,
      48,    50,    52,    57,    61,    62,    68,    72,    75,    79,
      83,    87,    91,    92,    93,    99,   103,   107,   108,   109,
     118,   124,   131,   137,   138,   139,   148,   149,   158,   159,
     162,   163,   170,   171,   173,   177,   178,   181,   184,   185,
     190,   191,   199,   200,   207,   208,   215,   216,   218,   220,
     222,   224,   226,   232,   233,   235,   237,   239,   241,   243,
     248,   255,   259,   262,   263
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    -1,    49,    47,    50,    -1,    49,    31,
      -1,    49,    31,    -1,    -1,    50,    51,    -1,    50,    56,
      -1,    50,    57,    -1,    -1,    -1,    -1,     8,     3,    48,
      52,    54,    29,    53,    48,    -1,    54,    55,    -1,    -1,
      56,    -1,    58,    -1,    61,    -1,    64,    -1,    67,    -1,
      86,    -1,    34,     3,    83,    48,    -1,     7,     6,    48,
      -1,    -1,     9,    59,    60,     3,    48,    -1,    60,    10,
       6,    -1,    60,    38,    -1,    60,    32,     6,    -1,    60,
      11,     6,    -1,    60,    12,     6,    -1,    60,    13,     6,
      -1,    -1,    -1,    35,    62,    63,     3,    48,    -1,    63,
      10,     6,    -1,    63,    36,     6,    -1,    -1,    -1,    14,
       3,     3,    48,    65,    66,    29,    48,    -1,    66,    33,
       3,    83,    48,    -1,    66,    33,    37,     3,    83,    48,
      -1,    66,    15,     3,    84,    48,    -1,    -1,    -1,    28,
       3,    48,    68,    75,    77,    29,    48,    -1,    -1,    71,
      16,    84,    48,    70,    72,    29,    48,    -1,    -1,    71,
      56,    -1,    -1,    72,    17,    73,    74,    48,    75,    -1,
      -1,    84,    -1,    74,    39,    84,    -1,    -1,    69,    75,
      -1,    76,    75,    -1,    -1,    18,    84,    84,    48,    -1,
      -1,    77,    19,    81,    84,    48,    78,    82,    -1,    -1,
      77,    19,    25,    48,    79,    82,    -1,    -1,    77,    19,
      26,    48,    80,    82,    -1,    -1,    20,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    82,    27,    84,    84,
      48,    -1,    -1,     4,    -1,     6,    -1,     5,    -1,    83,
      -1,     3,    -1,     3,    40,     6,    41,    -1,     3,    40,
       6,    42,     6,    41,    -1,    43,    85,    44,    -1,    85,
      84,    -1,    -1,    15,    84,    84,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    73,    81,    84,    84,    87,    88,    89,
      89,    93,   102,    93,   109,   109,   113,   113,   113,   113,
     113,   113,   116,   123,   128,   128,   140,   143,   146,   149,
     154,   159,   163,   167,   167,   180,   183,   185,   189,   189,
     200,   205,   211,   217,   221,   221,   237,   237,   246,   248,
     251,   251,   259,   263,   267,   270,   274,   275,   275,   279,
     286,   286,   293,   293,   299,   299,   304,   308,   309,   310,
     311,   312,   315,   319,   323,   354,   357,   363,   367,   373,
     379,   385,   390,   397,   402
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_ID", "TOK_VALUE", "TOK_STRING",
  "TOK_INT", "TOK_AUTOIDX", "TOK_MODULE", "TOK_WIRE", "TOK_WIDTH",
  "TOK_INPUT", "TOK_OUTPUT", "TOK_INOUT", "TOK_CELL", "TOK_CONNECT",
  "TOK_SWITCH", "TOK_CASE", "TOK_ASSIGN", "TOK_SYNC", "TOK_LOW",
  "TOK_HIGH", "TOK_POSEDGE", "TOK_NEGEDGE", "TOK_EDGE", "TOK_ALWAYS",
  "TOK_INIT", "TOK_UPDATE", "TOK_PROCESS", "TOK_END", "TOK_INVALID",
  "TOK_EOL", "TOK_OFFSET", "TOK_PARAMETER", "TOK_ATTRIBUTE", "TOK_MEMORY",
  "TOK_SIZE", "TOK_SIGNED", "TOK_UPTO", "','", "'['", "']'", "':'", "'{'",
  "'}'", "$accept", "input", "$@1", "EOL", "optional_eol", "design",
  "module", "$@2", "$@3", "module_body", "module_stmt", "attr_stmt",
  "autoidx_stmt", "wire_stmt", "$@4", "wire_options", "memory_stmt", "$@5",
  "memory_options", "cell_stmt", "$@6", "cell_body", "proc_stmt", "$@7",
  "switch_stmt", "$@8", "attr_list", "switch_body", "$@9", "compare_list",
  "case_body", "assign_stmt", "sync_list", "$@10", "$@11", "$@12",
  "sync_type", "update_list", "constant", "sigspec", "sigspec_list",
  "conn_stmt", YY_NULL
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,    44,
      91,    93,    58,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    47,    46,    48,    49,    49,    50,    50,    50,
      50,    52,    53,    51,    54,    54,    55,    55,    55,    55,
      55,    55,    56,    57,    59,    58,    60,    60,    60,    60,
      60,    60,    60,    62,    61,    63,    63,    63,    65,    64,
      66,    66,    66,    66,    68,    67,    70,    69,    71,    71,
      73,    72,    72,    74,    74,    74,    75,    75,    75,    76,
      78,    77,    79,    77,    80,    77,    77,    81,    81,    81,
      81,    81,    82,    82,    83,    83,    83,    84,    84,    84,
      84,    84,    85,    85,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     2,     2,     0,     2,     2,     2,
       0,     0,     0,     8,     2,     0,     1,     1,     1,     1,
       1,     1,     4,     3,     0,     5,     3,     2,     3,     3,
       3,     3,     0,     0,     5,     3,     3,     0,     0,     8,
       5,     6,     5,     0,     0,     8,     0,     8,     0,     2,
       0,     6,     0,     1,     3,     0,     2,     2,     0,     4,
       0,     7,     0,     6,     0,     6,     0,     1,     1,     1,
       1,     1,     5,     0,     1,     1,     1,     1,     1,     4,
       6,     3,     2,     0,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     2,     1,     5,    10,     3,     0,     0,     0,
       7,     8,     9,     6,     6,     0,    23,     0,    11,    74,
      76,    75,     6,     4,    15,    22,     0,    24,     0,     0,
       0,    12,    33,    14,    16,    17,    18,    19,    20,    21,
      32,     0,    78,    83,    77,     0,     6,     6,    37,     0,
       6,     0,     0,     6,    44,    13,     0,     6,     0,     0,
       0,     0,     0,    27,    38,     0,    81,    82,    84,    48,
       6,     0,     0,    25,    26,    29,    30,    31,    28,    43,
      79,     0,     0,    58,     0,    66,    58,    34,    35,    36,
       0,     0,     0,    56,     0,    49,     0,    57,     0,     6,
       0,    80,     6,     6,     0,     6,     0,    39,     0,     0,
      59,    46,    67,    68,    69,    70,    71,     6,     6,     0,
      45,     6,     6,     0,    52,    62,    64,     6,    42,    40,
       6,     0,    73,    73,    60,    41,    50,     6,    63,    65,
      73,    55,    47,     0,    61,     6,    53,     0,     0,    48,
       6,    54,    51,    72
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     5,    16,    17,     6,    10,    24,    47,    26,
      33,    11,    12,    35,    40,    49,    36,    48,    56,    37,
      79,    90,    38,    69,    83,   124,    84,   131,   141,   145,
      85,    86,    96,   140,   132,   133,   119,   138,    44,    45,
      52,    39
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -83
static const yytype_int8 yypact[] =
{
     -83,    21,   -25,   -83,   -83,   -83,    17,    28,    39,    62,
     -83,   -83,   -83,   -83,   -83,    69,   -83,    37,   -83,   -83,
     -83,   -83,   -83,    59,   -83,   -83,    83,   -83,    73,    14,
      90,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,    91,     8,   -83,   -83,    14,   -83,   -83,   -83,    34,
     -83,    94,    10,   -83,   -83,   -83,    19,   -83,    96,   103,
     108,   109,   113,   -83,   -83,    45,   -83,   -83,   -83,    42,
     -83,   114,   115,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   116,    14,    -7,    15,   -83,    -7,   -83,   -83,   -83,
      -3,    55,    14,   -83,    14,   -83,     9,   -83,   121,   -83,
       4,   -83,   -83,   -83,    58,   -83,    14,   -83,    69,   122,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,    14,
     -83,   -83,   -83,    69,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     6,   -83,   -83,   -83,   -83,   -83,   -83,    99,    99,
     -83,    14,   -83,    14,    99,    88,   -83,    14,    14,    41,
     -83,   -83,   -83,   -83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   -83,   -14,   128,   -83,   -83,   -83,   -83,   -83,
     -83,   -21,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -82,   -83,   -83,   -83,   -83,   -83,   -83,   -71,   -13,   -42,
     -83,   -83
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -59
static const yytype_int16 yytable[] =
{
      18,    93,    22,    53,    97,    34,     4,   108,    25,   -48,
      67,    82,    98,    42,    19,    20,    21,    42,    19,    20,
      21,     3,    70,   136,     7,     8,    99,   -48,   104,    71,
     100,    94,    54,    55,    13,   137,    64,    57,   105,    68,
      92,   109,    14,    73,    58,    59,    60,    61,    51,     9,
     102,     9,   103,    43,    66,    72,    87,    43,   -58,    82,
      82,   -58,   139,    95,   121,    15,    62,   152,    23,   144,
     -58,   -58,    63,    19,    20,    21,    41,   127,   112,   113,
     114,   115,   116,   117,   118,   107,    80,    81,   110,   111,
      -5,   120,    27,    46,    50,   122,   101,    28,    29,   146,
      65,   147,    74,   125,   126,   150,   151,   128,   129,    75,
     130,    30,    31,   134,    76,    77,   135,     9,    32,    78,
      88,    89,    91,   142,   106,   123,   143,   148,     2,     0,
       0,   149,     0,     0,     0,     0,   153
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-83)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      14,    83,    15,    45,    86,    26,    31,     3,    22,    16,
      52,    18,    15,     3,     4,     5,     6,     3,     4,     5,
       6,     0,     3,    17,     7,     8,    29,    34,    19,    10,
      33,    16,    46,    47,     6,    29,    50,     3,    29,    53,
      82,    37,     3,    57,    10,    11,    12,    13,    40,    34,
      92,    34,    94,    43,    44,    36,    70,    43,    17,    18,
      18,    19,   133,    84,   106,     3,    32,   149,    31,   140,
      29,    29,    38,     4,     5,     6,     3,   119,    20,    21,
      22,    23,    24,    25,    26,    99,    41,    42,   102,   103,
      31,   105,     9,     3,     3,   108,    41,    14,    15,   141,
       6,   143,     6,   117,   118,   147,   148,   121,   122,     6,
     123,    28,    29,   127,     6,     6,   130,    34,    35,     6,
       6,     6,     6,   137,     3,     3,    27,    39,     0,    -1,
      -1,   145,    -1,    -1,    -1,    -1,   150
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    49,     0,    31,    47,    50,     7,     8,    34,
      51,    56,    57,     6,     3,     3,    48,    49,    48,     4,
       5,     6,    83,    31,    52,    48,    54,     9,    14,    15,
      28,    29,    35,    55,    56,    58,    61,    64,    67,    86,
      59,     3,     3,    43,    83,    84,     3,    53,    62,    60,
       3,    40,    85,    84,    48,    48,    63,     3,    10,    11,
      12,    13,    32,    38,    48,     6,    44,    84,    48,    68,
       3,    10,    36,    48,     6,     6,     6,     6,     6,    65,
      41,    42,    18,    69,    71,    75,    76,    48,     6,     6,
      66,     6,    84,    75,    16,    56,    77,    75,    15,    29,
      33,    41,    84,    84,    19,    29,     3,    48,     3,    37,
      48,    48,    20,    21,    22,    23,    24,    25,    26,    81,
      48,    84,    83,     3,    70,    48,    48,    84,    48,    48,
      83,    72,    79,    80,    48,    48,    17,    29,    82,    82,
      78,    73,    48,    27,    82,    74,    84,    84,    39,    48,
      84,    84,    75,    48
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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
        case 2:
/* Line 1787 of yacc.c  */
#line 73 "ilang_parser.y"
    {
		attrbuf.clear();
	}
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 75 "ilang_parser.y"
    {
		if (attrbuf.size() != 0)
			rtlil_frontend_ilang_yyerror("dangling attribute");
	}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 93 "ilang_parser.y"
    {
		if (current_design->has((yyvsp[(2) - (3)].string)))
			rtlil_frontend_ilang_yyerror(stringf("ilang error: redefinition of module %s.", (yyvsp[(2) - (3)].string)).c_str());
		current_module = new RTLIL::Module;
		current_module->name = (yyvsp[(2) - (3)].string);
		current_module->attributes = attrbuf;
		current_design->add(current_module);
		attrbuf.clear();
		free((yyvsp[(2) - (3)].string));
	}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 102 "ilang_parser.y"
    {
		if (attrbuf.size() != 0)
			rtlil_frontend_ilang_yyerror("dangling attribute");
		current_module->fixup_ports();
	}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 116 "ilang_parser.y"
    {
		attrbuf[(yyvsp[(2) - (4)].string)] = *(yyvsp[(3) - (4)].data);
		delete (yyvsp[(3) - (4)].data);
		free((yyvsp[(2) - (4)].string));
	}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 123 "ilang_parser.y"
    {
		autoidx = std::max(autoidx, (yyvsp[(2) - (3)].integer));
	}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 128 "ilang_parser.y"
    {
		current_wire = current_module->addWire("$__ilang_frontend_tmp__");
		current_wire->attributes = attrbuf;
		attrbuf.clear();
	}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 132 "ilang_parser.y"
    {
		if (current_module->wires_.count((yyvsp[(4) - (5)].string)) != 0)
			rtlil_frontend_ilang_yyerror(stringf("ilang error: redefinition of wire %s.", (yyvsp[(4) - (5)].string)).c_str());
		current_module->rename(current_wire, (yyvsp[(4) - (5)].string));
		free((yyvsp[(4) - (5)].string));
	}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 140 "ilang_parser.y"
    {
		current_wire->width = (yyvsp[(3) - (3)].integer);
	}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 143 "ilang_parser.y"
    {
		current_wire->upto = true;
	}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 146 "ilang_parser.y"
    {
		current_wire->start_offset = (yyvsp[(3) - (3)].integer);
	}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 149 "ilang_parser.y"
    {
		current_wire->port_id = (yyvsp[(3) - (3)].integer);
		current_wire->port_input = true;
		current_wire->port_output = false;
	}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 154 "ilang_parser.y"
    {
		current_wire->port_id = (yyvsp[(3) - (3)].integer);
		current_wire->port_input = false;
		current_wire->port_output = true;
	}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 159 "ilang_parser.y"
    {
		current_wire->port_id = (yyvsp[(3) - (3)].integer);
		current_wire->port_input = true;
		current_wire->port_output = true;
	}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 167 "ilang_parser.y"
    {
		current_memory = new RTLIL::Memory;
		current_memory->attributes = attrbuf;
		attrbuf.clear();
	}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 171 "ilang_parser.y"
    {
		if (current_module->memories.count((yyvsp[(4) - (5)].string)) != 0)
			rtlil_frontend_ilang_yyerror(stringf("ilang error: redefinition of memory %s.", (yyvsp[(4) - (5)].string)).c_str());
		current_memory->name = (yyvsp[(4) - (5)].string);
		current_module->memories[(yyvsp[(4) - (5)].string)] = current_memory;
		free((yyvsp[(4) - (5)].string));
	}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 180 "ilang_parser.y"
    {
		current_memory->width = (yyvsp[(3) - (3)].integer);
	}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 183 "ilang_parser.y"
    {
		current_memory->size = (yyvsp[(3) - (3)].integer);
	}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 189 "ilang_parser.y"
    {
		if (current_module->cells_.count((yyvsp[(3) - (4)].string)) != 0)
			rtlil_frontend_ilang_yyerror(stringf("ilang error: redefinition of cell %s.", (yyvsp[(3) - (4)].string)).c_str());
		current_cell = current_module->addCell((yyvsp[(3) - (4)].string), (yyvsp[(2) - (4)].string));
		current_cell->attributes = attrbuf;
		attrbuf.clear();
		free((yyvsp[(2) - (4)].string));
		free((yyvsp[(3) - (4)].string));
	}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 200 "ilang_parser.y"
    {
		current_cell->parameters[(yyvsp[(3) - (5)].string)] = *(yyvsp[(4) - (5)].data);
		free((yyvsp[(3) - (5)].string));
		delete (yyvsp[(4) - (5)].data);
	}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 205 "ilang_parser.y"
    {
		current_cell->parameters[(yyvsp[(4) - (6)].string)] = *(yyvsp[(5) - (6)].data);
		current_cell->parameters[(yyvsp[(4) - (6)].string)].flags |= RTLIL::CONST_FLAG_SIGNED;
		free((yyvsp[(4) - (6)].string));
		delete (yyvsp[(5) - (6)].data);
	}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 211 "ilang_parser.y"
    {
		if (current_cell->hasPort((yyvsp[(3) - (5)].string)))
			rtlil_frontend_ilang_yyerror(stringf("ilang error: redefinition of cell port %s.", (yyvsp[(3) - (5)].string)).c_str());
		current_cell->setPort((yyvsp[(3) - (5)].string), *(yyvsp[(4) - (5)].sigspec));
		delete (yyvsp[(4) - (5)].sigspec);
		free((yyvsp[(3) - (5)].string));
	}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 221 "ilang_parser.y"
    {
		if (current_module->processes.count((yyvsp[(2) - (3)].string)) != 0)
			rtlil_frontend_ilang_yyerror(stringf("ilang error: redefinition of process %s.", (yyvsp[(2) - (3)].string)).c_str());
		current_process = new RTLIL::Process;
		current_process->name = (yyvsp[(2) - (3)].string);
		current_process->attributes = attrbuf;
		current_module->processes[(yyvsp[(2) - (3)].string)] = current_process;
		switch_stack.clear();
		switch_stack.push_back(&current_process->root_case.switches);
		case_stack.clear();
		case_stack.push_back(&current_process->root_case);
		attrbuf.clear();
		free((yyvsp[(2) - (3)].string));
	}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 237 "ilang_parser.y"
    {
		RTLIL::SwitchRule *rule = new RTLIL::SwitchRule;
		rule->signal = *(yyvsp[(3) - (4)].sigspec);
		rule->attributes = attrbuf;
		switch_stack.back()->push_back(rule);
		attrbuf.clear();
		delete (yyvsp[(3) - (4)].sigspec);
	}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 251 "ilang_parser.y"
    {
		RTLIL::CaseRule *rule = new RTLIL::CaseRule;
		switch_stack.back()->back()->cases.push_back(rule);
		switch_stack.push_back(&rule->switches);
		case_stack.push_back(rule);
	}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 256 "ilang_parser.y"
    {
		switch_stack.pop_back();
		case_stack.pop_back();
	}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 263 "ilang_parser.y"
    {
		case_stack.back()->compare.push_back(*(yyvsp[(1) - (1)].sigspec));
		delete (yyvsp[(1) - (1)].sigspec);
	}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 267 "ilang_parser.y"
    {
		case_stack.back()->compare.push_back(*(yyvsp[(3) - (3)].sigspec));
		delete (yyvsp[(3) - (3)].sigspec);
	}
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 279 "ilang_parser.y"
    {
		case_stack.back()->actions.push_back(RTLIL::SigSig(*(yyvsp[(2) - (4)].sigspec), *(yyvsp[(3) - (4)].sigspec)));
		delete (yyvsp[(2) - (4)].sigspec);
		delete (yyvsp[(3) - (4)].sigspec);
	}
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 286 "ilang_parser.y"
    {
		RTLIL::SyncRule *rule = new RTLIL::SyncRule;
		rule->type = RTLIL::SyncType((yyvsp[(3) - (5)].integer));
		rule->signal = *(yyvsp[(4) - (5)].sigspec);
		current_process->syncs.push_back(rule);
		delete (yyvsp[(4) - (5)].sigspec);
	}
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 293 "ilang_parser.y"
    {
		RTLIL::SyncRule *rule = new RTLIL::SyncRule;
		rule->type = RTLIL::SyncType::STa;
		rule->signal = RTLIL::SigSpec();
		current_process->syncs.push_back(rule);
	}
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 299 "ilang_parser.y"
    {
		RTLIL::SyncRule *rule = new RTLIL::SyncRule;
		rule->type = RTLIL::SyncType::STi;
		rule->signal = RTLIL::SigSpec();
		current_process->syncs.push_back(rule);
	}
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 308 "ilang_parser.y"
    { (yyval.integer) = RTLIL::ST0; }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 309 "ilang_parser.y"
    { (yyval.integer) = RTLIL::ST1; }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 310 "ilang_parser.y"
    { (yyval.integer) = RTLIL::STp; }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 311 "ilang_parser.y"
    { (yyval.integer) = RTLIL::STn; }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 312 "ilang_parser.y"
    { (yyval.integer) = RTLIL::STe; }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 315 "ilang_parser.y"
    {
		current_process->syncs.back()->actions.push_back(RTLIL::SigSig(*(yyvsp[(3) - (5)].sigspec), *(yyvsp[(4) - (5)].sigspec)));
		delete (yyvsp[(3) - (5)].sigspec);
		delete (yyvsp[(4) - (5)].sigspec);
	}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 323 "ilang_parser.y"
    {
		char *ep;
		int width = strtol((yyvsp[(1) - (1)].string), &ep, 10);
		std::list<RTLIL::State> bits;
		while (*(++ep) != 0) {
			RTLIL::State bit = RTLIL::Sx;
			switch (*ep) {
			case '0': bit = RTLIL::S0; break;
			case '1': bit = RTLIL::S1; break;
			case 'x': bit = RTLIL::Sx; break;
			case 'z': bit = RTLIL::Sz; break;
			case '-': bit = RTLIL::Sa; break;
			case 'm': bit = RTLIL::Sm; break;
			}
			bits.push_front(bit);
		}
		if (bits.size() == 0)
			bits.push_back(RTLIL::Sx);
		while ((int)bits.size() < width) {
			RTLIL::State bit = bits.back();
			if (bit == RTLIL::S1)
				bit = RTLIL::S0;
			bits.push_back(bit);
		}
		while ((int)bits.size() > width)
			bits.pop_back();
		(yyval.data) = new RTLIL::Const;
		for (auto it = bits.begin(); it != bits.end(); it++)
			(yyval.data)->bits.push_back(*it);
		free((yyvsp[(1) - (1)].string));
	}
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 354 "ilang_parser.y"
    {
		(yyval.data) = new RTLIL::Const((yyvsp[(1) - (1)].integer), 32);
	}
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 357 "ilang_parser.y"
    {
		(yyval.data) = new RTLIL::Const((yyvsp[(1) - (1)].string));
		free((yyvsp[(1) - (1)].string));
	}
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 363 "ilang_parser.y"
    {
		(yyval.sigspec) = new RTLIL::SigSpec(*(yyvsp[(1) - (1)].data));
		delete (yyvsp[(1) - (1)].data);
	}
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 367 "ilang_parser.y"
    {
		if (current_module->wires_.count((yyvsp[(1) - (1)].string)) == 0)
			rtlil_frontend_ilang_yyerror(stringf("ilang error: wire %s not found", (yyvsp[(1) - (1)].string)).c_str());
		(yyval.sigspec) = new RTLIL::SigSpec(current_module->wires_[(yyvsp[(1) - (1)].string)]);
		free((yyvsp[(1) - (1)].string));
	}
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 373 "ilang_parser.y"
    {
		if (current_module->wires_.count((yyvsp[(1) - (4)].string)) == 0)
			rtlil_frontend_ilang_yyerror(stringf("ilang error: wire %s not found", (yyvsp[(1) - (4)].string)).c_str());
		(yyval.sigspec) = new RTLIL::SigSpec(current_module->wires_[(yyvsp[(1) - (4)].string)], (yyvsp[(3) - (4)].integer));
		free((yyvsp[(1) - (4)].string));
	}
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 379 "ilang_parser.y"
    {
		if (current_module->wires_.count((yyvsp[(1) - (6)].string)) == 0)
			rtlil_frontend_ilang_yyerror(stringf("ilang error: wire %s not found", (yyvsp[(1) - (6)].string)).c_str());
		(yyval.sigspec) = new RTLIL::SigSpec(current_module->wires_[(yyvsp[(1) - (6)].string)], (yyvsp[(5) - (6)].integer), (yyvsp[(3) - (6)].integer) - (yyvsp[(5) - (6)].integer) + 1);
		free((yyvsp[(1) - (6)].string));
	}
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 385 "ilang_parser.y"
    {
		(yyval.sigspec) = (yyvsp[(2) - (3)].sigspec);
	}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 390 "ilang_parser.y"
    {
		(yyval.sigspec) = new RTLIL::SigSpec;
		(yyval.sigspec)->append(*(yyvsp[(2) - (2)].sigspec));
		(yyval.sigspec)->append(*(yyvsp[(1) - (2)].sigspec));
		delete (yyvsp[(1) - (2)].sigspec);
		delete (yyvsp[(2) - (2)].sigspec);
	}
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 397 "ilang_parser.y"
    {
		(yyval.sigspec) = new RTLIL::SigSpec;
	}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 402 "ilang_parser.y"
    {
		if (attrbuf.size() != 0)
			rtlil_frontend_ilang_yyerror("dangling attribute");
		current_module->connect(*(yyvsp[(2) - (4)].sigspec), *(yyvsp[(3) - (4)].sigspec));
		delete (yyvsp[(2) - (4)].sigspec);
		delete (yyvsp[(3) - (4)].sigspec);
	}
    break;


/* Line 1787 of yacc.c  */
#line 2056 "ilang_parser.tab.c"
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


