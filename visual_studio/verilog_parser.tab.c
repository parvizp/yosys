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
#define yyparse         frontend_verilog_yyparse
#define yylex           frontend_verilog_yylex
#define yyerror         frontend_verilog_yyerror
#define yylval          frontend_verilog_yylval
#define yychar          frontend_verilog_yychar
#define yydebug         frontend_verilog_yydebug
#define yynerrs         frontend_verilog_yynerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 36 "verilog_parser.y"

#include <list>
#include <string.h>
#include "verilog_frontend.h"
#include "kernel/log.h"

USING_YOSYS_NAMESPACE
using namespace AST;
using namespace VERILOG_FRONTEND;

YOSYS_NAMESPACE_BEGIN
namespace VERILOG_FRONTEND {
	int port_counter;
	std::map<std::string, int> port_stubs;
	std::map<std::string, AstNode*> attr_list, default_attr_list;
	std::map<std::string, AstNode*> *albuf;
	std::vector<AstNode*> ast_stack;
	struct AstNode *astbuf1, *astbuf2, *astbuf3;
	struct AstNode *current_function_or_task;
	struct AstNode *current_ast, *current_ast_mod;
	int current_function_or_task_port_id;
	std::vector<char> case_type_stack;
	bool do_not_require_port_stubs;
	bool default_nettype_wire;
	bool sv_mode;
	std::istream *lexin;
}
YOSYS_NAMESPACE_END

static void append_attr(AstNode *ast, std::map<std::string, AstNode*> *al)
{
	for (auto &it : *al) {
		if (ast->attributes.count(it.first) > 0)
			delete ast->attributes[it.first];
		ast->attributes[it.first] = it.second;
	}
	delete al;
}

static void append_attr_clone(AstNode *ast, std::map<std::string, AstNode*> *al)
{
	for (auto &it : *al) {
		if (ast->attributes.count(it.first) > 0)
			delete ast->attributes[it.first];
		ast->attributes[it.first] = it.second->clone();
	}
}

static void free_attr(std::map<std::string, AstNode*> *al)
{
	for (auto &it : *al)
		delete it.second;
	delete al;
}


/* Line 371 of yacc.c  */
#line 132 "verilog_parser.tab.c"

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
   by #include "verilog_parser.tab.h".  */
#ifndef YY_FRONTEND_VERILOG_YY_VERILOG_PARSER_TAB_H_INCLUDED
# define YY_FRONTEND_VERILOG_YY_VERILOG_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int frontend_verilog_yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_STRING = 258,
     TOK_ID = 259,
     TOK_CONST = 260,
     TOK_REALVAL = 261,
     TOK_PRIMITIVE = 262,
     ATTR_BEGIN = 263,
     ATTR_END = 264,
     DEFATTR_BEGIN = 265,
     DEFATTR_END = 266,
     TOK_MODULE = 267,
     TOK_ENDMODULE = 268,
     TOK_PARAMETER = 269,
     TOK_LOCALPARAM = 270,
     TOK_DEFPARAM = 271,
     TOK_INPUT = 272,
     TOK_OUTPUT = 273,
     TOK_INOUT = 274,
     TOK_WIRE = 275,
     TOK_REG = 276,
     TOK_INTEGER = 277,
     TOK_SIGNED = 278,
     TOK_ASSIGN = 279,
     TOK_ALWAYS = 280,
     TOK_INITIAL = 281,
     TOK_BEGIN = 282,
     TOK_END = 283,
     TOK_IF = 284,
     TOK_ELSE = 285,
     TOK_FOR = 286,
     TOK_WHILE = 287,
     TOK_REPEAT = 288,
     TOK_DPI_FUNCTION = 289,
     TOK_POSEDGE = 290,
     TOK_NEGEDGE = 291,
     TOK_OR = 292,
     TOK_CASE = 293,
     TOK_CASEX = 294,
     TOK_CASEZ = 295,
     TOK_ENDCASE = 296,
     TOK_DEFAULT = 297,
     TOK_FUNCTION = 298,
     TOK_ENDFUNCTION = 299,
     TOK_TASK = 300,
     TOK_ENDTASK = 301,
     TOK_GENERATE = 302,
     TOK_ENDGENERATE = 303,
     TOK_GENVAR = 304,
     TOK_REAL = 305,
     TOK_SYNOPSYS_FULL_CASE = 306,
     TOK_SYNOPSYS_PARALLEL_CASE = 307,
     TOK_SUPPLY0 = 308,
     TOK_SUPPLY1 = 309,
     TOK_TO_SIGNED = 310,
     TOK_TO_UNSIGNED = 311,
     TOK_POS_INDEXED = 312,
     TOK_NEG_INDEXED = 313,
     TOK_ASSERT = 314,
     TOK_PROPERTY = 315,
     OP_LOR = 316,
     OP_LAND = 317,
     OP_NOR = 318,
     OP_XNOR = 319,
     OP_NAND = 320,
     OP_NEX = 321,
     OP_EQX = 322,
     OP_NE = 323,
     OP_EQ = 324,
     OP_GE = 325,
     OP_LE = 326,
     OP_SSHR = 327,
     OP_SSHL = 328,
     OP_SHR = 329,
     OP_SHL = 330,
     OP_POW = 331,
     UNARY_OPS = 332
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 95 "verilog_parser.y"

	std::string *string;
	struct YOSYS_NAMESPACE_PREFIX AST::AstNode *ast;
	std::map<std::string, YOSYS_NAMESPACE_PREFIX AST::AstNode*> *al;
	bool boolean;


/* Line 387 of yacc.c  */
#line 260 "verilog_parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE frontend_verilog_yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int frontend_verilog_yyparse (void *YYPARSE_PARAM);
#else
int frontend_verilog_yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int frontend_verilog_yyparse (void);
#else
int frontend_verilog_yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_FRONTEND_VERILOG_YY_VERILOG_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 288 "verilog_parser.tab.c"

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
#define YYLAST   1127

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  147
/* YYNRULES -- Number of rules.  */
#define YYNRULES  324
/* YYNRULES -- Number of states.  */
#define YYNSTATES  628

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   103,     2,    92,     2,    85,    67,     2,
      93,    94,    83,    81,    88,    82,    90,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    96,    91,
      73,    89,    74,   101,    98,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    95,     2,    97,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    99,    63,   100,   102,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    64,    66,
      68,    69,    70,    71,    72,    75,    76,    77,    78,    79,
      80,    86,    87
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    16,    17,    18,
      21,    26,    27,    28,    29,    35,    37,    38,    40,    44,
      46,    50,    52,    56,    57,    67,    72,    73,    75,    79,
      80,    81,    88,    91,    92,    97,    99,   103,   105,   106,
     109,   110,   111,   115,   116,   123,   127,   128,   131,   133,
     136,   138,   140,   142,   144,   146,   148,   150,   152,   158,
     164,   170,   174,   177,   180,   182,   183,   185,   187,   189,
     191,   194,   197,   198,   200,   202,   204,   206,   208,   210,
     212,   214,   218,   220,   222,   223,   231,   232,   242,   243,
     255,   256,   264,   265,   275,   278,   280,   284,   285,   289,
     292,   294,   295,   297,   298,   301,   302,   304,   305,   307,
     308,   310,   311,   313,   314,   323,   324,   333,   335,   339,
     343,   347,   349,   353,   358,   359,   366,   371,   376,   378,
     382,   384,   388,   391,   395,   397,   401,   405,   406,   413,
     414,   420,   422,   424,   426,   430,   431,   437,   438,   445,
     447,   451,   453,   454,   459,   464,   465,   466,   468,   472,
     474,   480,   481,   483,   487,   488,   492,   494,   500,   505,
     506,   507,   514,   515,   520,   525,   530,   534,   538,   541,
     542,   544,   548,   552,   555,   558,   560,   563,   564,   570,
     577,   581,   585,   587,   589,   591,   594,   595,   601,   602,
     610,   611,   612,   613,   627,   628,   636,   637,   645,   646,
     655,   656,   666,   668,   670,   672,   675,   678,   679,   681,
     683,   686,   687,   688,   692,   693,   696,   697,   698,   699,
     704,   707,   708,   709,   710,   715,   718,   720,   722,   724,
     728,   735,   738,   741,   743,   747,   749,   753,   758,   759,
     761,   762,   764,   768,   770,   773,   774,   776,   778,   779,
     780,   792,   793,   801,   802,   810,   811,   818,   819,   822,
     824,   826,   829,   830,   832,   839,   841,   846,   849,   852,
     854,   856,   858,   859,   867,   873,   879,   883,   887,   894,
     898,   903,   908,   913,   918,   922,   926,   930,   934,   938,
     942,   947,   952,   957,   962,   967,   972,   977,   982,   987,
     992,   997,  1002,  1007,  1012,  1017,  1022,  1027,  1032,  1036,
    1040,  1045,  1050,  1054,  1056
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     105,     0,    -1,    -1,   106,   107,    -1,   118,   107,    -1,
     111,   107,    -1,   142,   107,    -1,    -1,    -1,   109,   110,
      -1,   110,     8,   114,     9,    -1,    -1,    -1,    -1,    10,
     112,   114,   113,    11,    -1,   115,    -1,    -1,   116,    -1,
     115,    88,   116,    -1,   117,    -1,   117,    89,   247,    -1,
       4,    -1,   117,    90,     4,    -1,    -1,   108,    12,     4,
     119,   120,   124,    91,   140,    13,    -1,    92,    93,   121,
      94,    -1,    -1,   122,    -1,   122,    88,   121,    -1,    -1,
      -1,    14,   123,   153,   154,   156,   162,    -1,    93,    94,
      -1,    -1,    93,   125,   126,    94,    -1,   128,    -1,   125,
      88,   128,    -1,    88,    -1,    -1,    89,   247,    -1,    -1,
      -1,     4,   129,   127,    -1,    -1,   108,   131,   137,     4,
     130,   127,    -1,    90,    90,    90,    -1,    -1,   132,   133,
      -1,   134,    -1,   133,   134,    -1,    17,    -1,    18,    -1,
      19,    -1,    20,    -1,    21,    -1,    22,    -1,    49,    -1,
      23,    -1,    95,   247,    96,   247,    97,    -1,    95,   247,
      57,   247,    97,    -1,    95,   247,    58,   247,    97,    -1,
      95,   247,    97,    -1,   135,   135,    -1,   136,   135,    -1,
     135,    -1,    -1,   137,    -1,   136,    -1,   137,    -1,    22,
      -1,   140,   141,    -1,   140,   237,    -1,    -1,   142,    -1,
     157,    -1,   159,    -1,   163,    -1,   166,    -1,   171,    -1,
     174,    -1,   191,    -1,    47,   235,    48,    -1,   111,    -1,
     200,    -1,    -1,   108,    34,     4,     4,   143,   149,    91,
      -1,    -1,   108,    34,     4,    89,     4,     4,   144,   149,
      91,    -1,    -1,   108,    34,     4,    96,     4,    89,     4,
       4,   145,   149,    91,    -1,    -1,   108,    45,     4,    91,
     146,   152,    46,    -1,    -1,   108,    43,   151,   139,     4,
      91,   147,   152,    44,    -1,     4,     4,    -1,     4,    -1,
      93,   150,    94,    -1,    -1,   150,    88,   148,    -1,   150,
      88,    -1,   148,    -1,    -1,    23,    -1,    -1,   152,   202,
      -1,    -1,    23,    -1,    -1,    22,    -1,    -1,    50,    -1,
      -1,   137,    -1,    -1,    14,   158,   153,   154,   155,   156,
     161,    91,    -1,    -1,    15,   160,   153,   154,   155,   156,
     161,    91,    -1,   162,    -1,   161,    88,   162,    -1,     4,
      89,   247,    -1,    16,   164,    91,    -1,   165,    -1,   164,
      88,   165,    -1,   137,   117,    89,   247,    -1,    -1,   108,
     131,   137,   167,   168,    91,    -1,   108,    53,     4,    91,
      -1,   108,    54,     4,    91,    -1,   169,    -1,   168,    88,
     169,    -1,   170,    -1,   170,    89,   247,    -1,     4,   138,
      -1,    24,   172,    91,    -1,   173,    -1,   172,    88,   173,
      -1,   247,    89,   247,    -1,    -1,   108,     4,   175,   185,
     178,    91,    -1,    -1,   108,   177,   176,   182,    91,    -1,
       7,    -1,    37,    -1,   179,    -1,   178,    88,   179,    -1,
      -1,     4,   180,    93,   188,    94,    -1,    -1,     4,   135,
     181,    93,   188,    94,    -1,   183,    -1,   182,    88,   183,
      -1,   179,    -1,    -1,   184,    93,   188,    94,    -1,    92,
      93,   186,    94,    -1,    -1,    -1,   187,    -1,   187,    88,
     186,    -1,   247,    -1,    90,     4,    93,   247,    94,    -1,
      -1,   190,    -1,   190,    88,   188,    -1,    -1,    88,   189,
     188,    -1,   247,    -1,    90,     4,    93,   247,    94,    -1,
      90,     4,    93,    94,    -1,    -1,    -1,   108,    25,   192,
     195,   193,   202,    -1,    -1,   108,    26,   194,   202,    -1,
      98,    93,   196,    94,    -1,    98,    93,    83,    94,    -1,
      98,     8,    94,    -1,    98,    93,     9,    -1,    98,    83,
      -1,    -1,   197,    -1,   196,    37,   197,    -1,   196,    88,
     197,    -1,    35,   247,    -1,    36,   247,    -1,   247,    -1,
      96,     4,    -1,    -1,    59,    93,   247,    94,    91,    -1,
      59,    60,    93,   247,    94,    91,    -1,   229,    89,   247,
      -1,   229,    76,   247,    -1,   111,    -1,   199,    -1,   166,
      -1,   201,    91,    -1,    -1,   117,   108,   203,   231,    91,
      -1,    -1,   108,    27,   198,   204,   215,    28,   198,    -1,
      -1,    -1,    -1,   108,    31,    93,   205,   201,    91,   247,
     206,    91,   201,    94,   207,   202,    -1,    -1,   108,    32,
      93,   247,    94,   208,   202,    -1,    -1,   108,    33,    93,
     247,    94,   209,   202,    -1,    -1,   108,    29,    93,   247,
      94,   210,   202,   216,    -1,    -1,   108,   212,    93,   247,
      94,   211,   213,   218,    41,    -1,    38,    -1,    39,    -1,
      40,    -1,   213,    51,    -1,   213,    52,    -1,    -1,   202,
      -1,    91,    -1,   215,   202,    -1,    -1,    -1,    30,   217,
     202,    -1,    -1,   218,   219,    -1,    -1,    -1,    -1,   220,
     226,   221,   214,    -1,   222,   223,    -1,    -1,    -1,    -1,
     224,   226,   225,   245,    -1,   227,    96,    -1,    42,    -1,
      42,    -1,   247,    -1,   227,    88,   247,    -1,   117,    95,
     247,    97,    90,   228,    -1,   117,   137,    -1,   117,   136,
      -1,   228,    -1,    99,   230,   100,    -1,   247,    -1,   247,
      88,   230,    -1,    93,   232,   126,    94,    -1,    -1,   233,
      -1,    -1,   234,    -1,   232,    88,   234,    -1,   247,    -1,
     235,   236,    -1,    -1,   237,    -1,   141,    -1,    -1,    -1,
      31,    93,   238,   201,    91,   247,   239,    91,   201,    94,
     243,    -1,    -1,    29,    93,   247,    94,   240,   243,   246,
      -1,    -1,   212,    93,   247,    94,   241,   222,    41,    -1,
      -1,    27,   198,   242,   235,    28,   198,    -1,    -1,   244,
     236,    -1,   243,    -1,    91,    -1,    30,   245,    -1,    -1,
     248,    -1,   248,   101,   108,   247,    96,   247,    -1,   228,
      -1,    93,   247,    94,     5,    -1,   117,     5,    -1,     5,
       5,    -1,     5,    -1,     6,    -1,     3,    -1,    -1,   117,
     108,   249,    93,   232,   126,    94,    -1,    55,   108,    93,
     247,    94,    -1,    56,   108,    93,   247,    94,    -1,    93,
     247,    94,    -1,    99,   250,   100,    -1,    99,   247,    99,
     247,   100,   100,    -1,   102,   108,   248,    -1,   248,    67,
     108,   248,    -1,   248,    63,   108,   248,    -1,   248,    65,
     108,   248,    -1,   248,    66,   108,   248,    -1,    67,   108,
     248,    -1,    68,   108,   248,    -1,    63,   108,   248,    -1,
      64,   108,   248,    -1,    65,   108,   248,    -1,    66,   108,
     248,    -1,   248,    80,   108,   248,    -1,   248,    79,   108,
     248,    -1,   248,    78,   108,   248,    -1,   248,    77,   108,
     248,    -1,   248,    73,   108,   248,    -1,   248,    76,   108,
     248,    -1,   248,    72,   108,   248,    -1,   248,    71,   108,
     248,    -1,   248,    70,   108,   248,    -1,   248,    69,   108,
     248,    -1,   248,    75,   108,   248,    -1,   248,    74,   108,
     248,    -1,   248,    81,   108,   248,    -1,   248,    82,   108,
     248,    -1,   248,    83,   108,   248,    -1,   248,    84,   108,
     248,    -1,   248,    85,   108,   248,    -1,   248,    86,   108,
     248,    -1,    81,   108,   248,    -1,    82,   108,   248,    -1,
     248,    62,   108,   248,    -1,   248,    61,   108,   248,    -1,
     103,   108,   248,    -1,   247,    -1,   247,    88,   250,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   141,   141,   141,   152,   153,   154,   154,   158,   158,
     171,   171,   175,   182,   175,   188,   188,   191,   192,   195,
     201,   209,   212,   222,   222,   243,   243,   246,   247,   247,
     251,   251,   259,   259,   259,   262,   262,   265,   265,   268,
     278,   282,   282,   295,   295,   309,   314,   314,   321,   321,
     324,   327,   330,   334,   336,   339,   345,   351,   356,   361,
     366,   371,   377,   380,   386,   389,   394,   395,   398,   401,
     409,   411,   411,   415,   415,   415,   415,   415,   415,   415,
     416,   416,   416,   416,   419,   419,   429,   429,   440,   440,
     452,   452,   464,   464,   487,   492,   498,   498,   502,   503,
     504,   504,   508,   511,   516,   516,   520,   522,   525,   532,
     535,   539,   542,   551,   551,   559,   559,   567,   567,   570,
     580,   583,   583,   586,   597,   597,   618,   626,   636,   636,
     639,   640,   650,   692,   695,   695,   698,   703,   703,   712,
     712,   722,   725,   730,   731,   734,   734,   741,   741,   750,
     751,   754,   755,   755,   761,   761,   763,   764,   765,   768,
     773,   781,   782,   783,   784,   784,   790,   795,   802,   810,
     815,   810,   823,   823,   837,   838,   839,   840,   841,   841,
     845,   846,   847,   850,   855,   860,   867,   870,   875,   880,
     885,   889,   896,   896,   896,   897,   898,   898,   908,   908,
     924,   929,   931,   924,   939,   939,   952,   952,   965,   965,
     979,   979,   990,   993,   996,  1001,  1005,  1008,  1012,  1013,
    1016,  1016,  1020,  1020,  1026,  1030,  1030,  1034,  1038,  1034,
    1050,  1050,  1054,  1058,  1054,  1066,  1067,  1070,  1073,  1076,
    1081,  1086,  1091,  1098,  1101,  1106,  1110,  1116,  1116,  1120,
    1120,  1124,  1125,  1128,  1133,  1133,  1137,  1137,  1141,  1145,
    1141,  1150,  1150,  1158,  1158,  1166,  1166,  1180,  1180,  1189,
    1189,  1192,  1192,  1195,  1198,  1207,  1210,  1220,  1232,  1239,
    1245,  1256,  1260,  1260,  1270,  1274,  1278,  1281,  1284,  1287,
    1291,  1295,  1299,  1303,  1307,  1311,  1316,  1320,  1325,  1329,
    1333,  1337,  1341,  1345,  1349,  1353,  1357,  1361,  1365,  1369,
    1373,  1377,  1381,  1385,  1389,  1393,  1397,  1401,  1405,  1409,
    1413,  1417,  1421,  1427,  1430
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_STRING", "TOK_ID", "TOK_CONST",
  "TOK_REALVAL", "TOK_PRIMITIVE", "ATTR_BEGIN", "ATTR_END",
  "DEFATTR_BEGIN", "DEFATTR_END", "TOK_MODULE", "TOK_ENDMODULE",
  "TOK_PARAMETER", "TOK_LOCALPARAM", "TOK_DEFPARAM", "TOK_INPUT",
  "TOK_OUTPUT", "TOK_INOUT", "TOK_WIRE", "TOK_REG", "TOK_INTEGER",
  "TOK_SIGNED", "TOK_ASSIGN", "TOK_ALWAYS", "TOK_INITIAL", "TOK_BEGIN",
  "TOK_END", "TOK_IF", "TOK_ELSE", "TOK_FOR", "TOK_WHILE", "TOK_REPEAT",
  "TOK_DPI_FUNCTION", "TOK_POSEDGE", "TOK_NEGEDGE", "TOK_OR", "TOK_CASE",
  "TOK_CASEX", "TOK_CASEZ", "TOK_ENDCASE", "TOK_DEFAULT", "TOK_FUNCTION",
  "TOK_ENDFUNCTION", "TOK_TASK", "TOK_ENDTASK", "TOK_GENERATE",
  "TOK_ENDGENERATE", "TOK_GENVAR", "TOK_REAL", "TOK_SYNOPSYS_FULL_CASE",
  "TOK_SYNOPSYS_PARALLEL_CASE", "TOK_SUPPLY0", "TOK_SUPPLY1",
  "TOK_TO_SIGNED", "TOK_TO_UNSIGNED", "TOK_POS_INDEXED", "TOK_NEG_INDEXED",
  "TOK_ASSERT", "TOK_PROPERTY", "OP_LOR", "OP_LAND", "'|'", "OP_NOR",
  "'^'", "OP_XNOR", "'&'", "OP_NAND", "OP_NEX", "OP_EQX", "OP_NE", "OP_EQ",
  "'<'", "'>'", "OP_GE", "OP_LE", "OP_SSHR", "OP_SSHL", "OP_SHR", "OP_SHL",
  "'+'", "'-'", "'*'", "'/'", "'%'", "OP_POW", "UNARY_OPS", "','", "'='",
  "'.'", "';'", "'#'", "'('", "')'", "'['", "':'", "']'", "'@'", "'{'",
  "'}'", "'?'", "'~'", "'!'", "$accept", "input", "$@1", "design", "attr",
  "$@2", "attr_opt", "defattr", "$@3", "$@4", "opt_attr_list", "attr_list",
  "attr_assign", "hierarchical_id", "module", "$@5", "module_para_opt",
  "module_para_list", "single_module_para", "$@6", "module_args_opt",
  "module_args", "optional_comma", "module_arg_opt_assignment",
  "module_arg", "$@7", "$@8", "wire_type", "$@9", "wire_type_token_list",
  "wire_type_token", "non_opt_range", "non_opt_multirange", "range",
  "range_or_multirange", "range_or_signed_int", "module_body",
  "module_body_stmt", "task_func_decl", "$@10", "$@11", "$@12", "$@13",
  "$@14", "dpi_function_arg", "opt_dpi_function_args", "dpi_function_args",
  "opt_signed", "task_func_body", "param_signed", "param_integer",
  "param_real", "param_range", "param_decl", "$@15", "localparam_decl",
  "$@16", "param_decl_list", "single_param_decl", "defparam_decl",
  "defparam_decl_list", "single_defparam_decl", "wire_decl", "$@17",
  "wire_name_list", "wire_name_and_opt_assign", "wire_name", "assign_stmt",
  "assign_expr_list", "assign_expr", "cell_stmt", "$@18", "$@19",
  "tok_prim_wrapper", "cell_list", "single_cell", "$@20", "$@21",
  "prim_list", "single_prim", "$@22", "cell_parameter_list_opt",
  "cell_parameter_list", "cell_parameter", "cell_port_list", "$@23",
  "cell_port", "always_stmt", "$@24", "$@25", "$@26", "always_cond",
  "always_events", "always_event", "opt_label", "assert",
  "assert_property", "simple_behavioral_stmt", "behavioral_stmt", "$@27",
  "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35",
  "case_type", "opt_synopsys_attr", "behavioral_stmt_opt",
  "behavioral_stmt_list", "optional_else", "$@36", "case_body",
  "case_item", "$@37", "$@38", "gen_case_body", "gen_case_item", "$@39",
  "$@40", "case_select", "case_expr_list", "rvalue", "lvalue",
  "lvalue_concat_list", "opt_arg_list", "arg_list", "arg_list2",
  "single_arg", "module_gen_body", "gen_stmt_or_module_body_stmt",
  "gen_stmt", "$@41", "$@42", "$@43", "$@44", "$@45", "gen_stmt_block",
  "$@46", "gen_stmt_or_null", "opt_gen_else", "expr", "basic_expr", "$@47",
  "concat_list", YY_NULL
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   124,   318,    94,   319,    38,   320,   321,
     322,   323,   324,    60,    62,   325,   326,   327,   328,   329,
     330,    43,    45,    42,    47,    37,   331,   332,    44,    61,
      46,    59,    35,    40,    41,    91,    58,    93,    64,   123,
     125,    63,   126,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   106,   105,   107,   107,   107,   107,   109,   108,
     110,   110,   112,   113,   111,   114,   114,   115,   115,   116,
     116,   117,   117,   119,   118,   120,   120,   121,   121,   121,
     123,   122,   124,   124,   124,   125,   125,   126,   126,   127,
     127,   129,   128,   130,   128,   128,   132,   131,   133,   133,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   135,
     135,   135,   136,   136,   137,   137,   138,   138,   139,   139,
     140,   140,   140,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   143,   142,   144,   142,   145,   142,
     146,   142,   147,   142,   148,   148,   149,   149,   150,   150,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   156,   158,   157,   160,   159,   161,   161,   162,
     163,   164,   164,   165,   167,   166,   166,   166,   168,   168,
     169,   169,   170,   171,   172,   172,   173,   175,   174,   176,
     174,   177,   177,   178,   178,   180,   179,   181,   179,   182,
     182,   183,   184,   183,   185,   185,   186,   186,   186,   187,
     187,   188,   188,   188,   189,   188,   190,   190,   190,   192,
     193,   191,   194,   191,   195,   195,   195,   195,   195,   195,
     196,   196,   196,   197,   197,   197,   198,   198,   199,   200,
     201,   201,   202,   202,   202,   202,   203,   202,   204,   202,
     205,   206,   207,   202,   208,   202,   209,   202,   210,   202,
     211,   202,   212,   212,   212,   213,   213,   213,   214,   214,
     215,   215,   217,   216,   216,   218,   218,   220,   221,   219,
     222,   222,   224,   225,   223,   226,   226,   227,   227,   227,
     228,   228,   228,   229,   229,   230,   230,   231,   231,   232,
     232,   233,   233,   234,   235,   235,   236,   236,   238,   239,
     237,   240,   237,   241,   237,   242,   237,   244,   243,   245,
     245,   246,   246,   247,   247,   248,   248,   248,   248,   248,
     248,   248,   249,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   250,   250
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     0,     0,     2,
       4,     0,     0,     0,     5,     1,     0,     1,     3,     1,
       3,     1,     3,     0,     9,     4,     0,     1,     3,     0,
       0,     6,     2,     0,     4,     1,     3,     1,     0,     2,
       0,     0,     3,     0,     6,     3,     0,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     5,
       5,     3,     2,     2,     1,     0,     1,     1,     1,     1,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     0,     7,     0,     9,     0,    11,
       0,     7,     0,     9,     2,     1,     3,     0,     3,     2,
       1,     0,     1,     0,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     8,     0,     8,     1,     3,     3,
       3,     1,     3,     4,     0,     6,     4,     4,     1,     3,
       1,     3,     2,     3,     1,     3,     3,     0,     6,     0,
       5,     1,     1,     1,     3,     0,     5,     0,     6,     1,
       3,     1,     0,     4,     4,     0,     0,     1,     3,     1,
       5,     0,     1,     3,     0,     3,     1,     5,     4,     0,
       0,     6,     0,     4,     4,     4,     3,     3,     2,     0,
       1,     3,     3,     2,     2,     1,     2,     0,     5,     6,
       3,     3,     1,     1,     1,     2,     0,     5,     0,     7,
       0,     0,     0,    13,     0,     7,     0,     7,     0,     8,
       0,     9,     1,     1,     1,     2,     2,     0,     1,     1,
       2,     0,     0,     3,     0,     2,     0,     0,     0,     4,
       2,     0,     0,     0,     4,     2,     1,     1,     1,     3,
       6,     2,     2,     1,     3,     1,     3,     4,     0,     1,
       0,     1,     3,     1,     2,     0,     1,     1,     0,     0,
      11,     0,     7,     0,     7,     0,     6,     0,     2,     1,
       1,     2,     0,     1,     6,     1,     4,     2,     2,     1,
       1,     1,     0,     7,     5,     5,     3,     3,     6,     3,
       4,     4,     4,     4,     3,     3,     3,     3,     3,     3,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     3,     3,
       4,     4,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     8,     1,    12,     3,     0,    11,     8,     8,
       8,    16,     0,     0,   103,     0,     9,     5,     4,     6,
      21,    13,    15,    17,    19,    23,     0,   102,    65,     0,
      16,     0,     0,     0,     0,    26,    84,     0,     0,    69,
       0,    64,    68,     0,    90,     0,    14,    18,   281,   279,
     280,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     0,     0,     8,     8,    65,   275,    20,   273,    22,
       0,    33,    97,     0,     0,     0,     0,   105,    10,   278,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   323,     0,     0,     0,   277,     0,   282,    64,   242,
     241,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,    29,     8,     0,   101,
       0,    86,     0,     0,     0,     0,    61,    92,     8,     0,
       0,   296,   297,   298,   299,   294,   295,   318,   319,   286,
       0,     0,   287,   289,   322,     0,     0,    62,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,    27,    41,     0,    32,
      46,    38,    35,    72,    95,   100,     0,    85,    97,     0,
       0,     0,     0,   105,    91,     0,     0,    46,   192,     8,
     194,   193,     0,   104,   243,     0,     0,     0,   276,   323,
     324,     0,    61,   250,   321,   320,   291,   292,   293,   290,
     309,   308,   307,   306,   304,   311,   310,   305,   303,   302,
     301,   300,   312,   313,   314,   315,   316,   317,     0,   107,
      25,    29,    40,     0,    65,     0,     8,     0,     8,    94,
      99,    96,     0,    88,    59,    60,    58,     8,     0,     0,
     245,   187,     0,     0,     0,     0,   212,   213,   214,     0,
       0,    65,     0,   196,   195,     0,     0,   284,   285,     0,
       0,    38,   249,   251,   253,     0,   106,   109,    28,     0,
      42,    45,     0,    50,    51,    52,    53,    54,    55,    57,
      56,    47,    48,    36,    34,    24,   113,   115,    65,     0,
     187,     0,     0,   255,     0,    46,    82,    70,    73,    74,
      75,    76,    77,    78,    79,    80,    83,     0,    71,    98,
      87,    97,    93,     0,   244,     0,     0,   198,     0,   200,
       0,     0,     0,     0,   124,     0,   248,   191,   190,   288,
      65,   240,    37,     0,   274,   108,    65,    39,    43,    49,
     107,   107,     0,     0,   121,     0,   134,     0,   265,     0,
     258,     8,     0,   137,   141,   169,   172,   142,   139,     0,
       0,     0,   246,   186,   221,     0,     0,     0,     0,   126,
     127,     0,     0,   250,     0,   252,   283,   112,     0,    40,
     109,   109,     0,    65,   120,     0,   133,     0,   255,     0,
       0,    81,   257,   254,   256,     0,   155,   179,     8,   152,
       0,    89,   188,     8,   208,     0,   204,   206,    65,     0,
     128,   130,   210,    38,   197,     0,    31,    44,   111,   111,
       0,   122,   135,   136,     8,   261,     0,     0,     0,     0,
       0,   170,   173,   145,   151,     0,   149,     0,   263,   187,
     220,     8,     0,     8,     8,    67,    66,   132,     0,   125,
       0,   217,     0,     0,   110,    65,    65,   123,   187,   267,
       0,     0,   156,     0,   143,     0,   178,     0,     8,   147,
       0,   152,   140,   161,   231,   199,   224,   201,   205,   207,
     129,   131,   226,   247,   119,     0,     0,   266,   272,     8,
     259,   189,     0,     0,   157,   159,     0,   138,   176,   177,
       0,     0,     0,     0,   180,   185,   171,     0,   161,   150,
     164,     0,     0,   162,   166,   232,   222,   209,     0,   215,
     216,   227,     0,   117,     0,   267,   262,   268,     0,     0,
     154,   156,   144,   183,   184,   175,     0,     0,   174,   161,
       0,   161,     0,   153,   161,   264,   230,     0,     8,     0,
     211,   225,     0,     0,   114,   116,   270,   269,   271,     0,
       0,   158,   181,   182,     0,   146,   165,     0,   163,   236,
     233,     0,   238,   223,     0,   228,   118,     0,     0,   148,
     168,     0,   267,     0,   235,   202,     8,   267,   160,   167,
     234,   239,     8,   219,   218,   229,   260,   203
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,   207,     7,    16,   208,    11,    31,
      21,    22,    23,    65,     9,    35,    71,   185,   186,   249,
     128,   191,   257,   300,   192,   252,   409,   281,   255,   311,
     312,    41,    99,   100,   477,    43,   258,   422,    10,    72,
     198,   341,    77,   203,   195,   130,   196,    28,   138,   297,
     366,   485,   408,   329,   370,   330,   371,   552,   553,   331,
     373,   374,   210,   401,   439,   440,   441,   333,   375,   376,
     334,   426,   429,   388,   493,   464,   500,   537,   465,   466,
     467,   459,   523,   524,   542,   571,   543,   335,   427,   498,
     428,   461,   533,   534,   347,   211,   336,   212,   213,   356,
     394,   396,   548,   622,   473,   474,   471,   481,   337,   512,
     625,   433,   547,   578,   551,   581,   582,   616,   545,   576,
     577,   612,   600,   601,    66,   215,   269,   404,   291,   292,
     293,   381,   423,   424,   420,   558,   489,   504,   418,   587,
     519,   588,   556,   544,    68,   156,    92
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -473
static const yytype_int16 yypact[] =
{
    -473,    85,    76,  -473,  -473,  -473,   218,  -473,    76,    76,
      76,    45,   101,   107,    94,   122,   124,  -473,  -473,  -473,
    -473,  -473,    53,  -473,   143,  -473,    39,  -473,     1,    57,
      45,   170,    45,   799,   182,   111,  -473,   234,   247,  -473,
     799,  -473,  -473,   249,  -473,   250,  -473,  -473,  -473,   260,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,   799,   799,  -473,  -473,    49,  -473,  -473,   924,  -473,
     178,   196,   198,   286,   208,   -33,   209,  -473,  -473,  -473,
     206,   212,   799,   799,   799,   799,   799,   799,   799,   799,
     207,   -22,   202,   799,   799,  -473,   799,  -473,   211,   211,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,   293,    44,   217,   306,
     220,  -473,   308,   799,   799,   799,  -473,  -473,    16,   799,
     799,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,   310,
     799,   799,  -473,  -473,  -473,   -18,   223,  -473,  -473,   799,
     799,   799,   799,   799,   799,   799,   799,   799,   799,   799,
     799,   799,   799,   799,   799,   799,   799,   799,   799,   799,
     799,   799,   799,   799,  -473,   224,   233,  -473,   232,  -473,
    -473,   235,  -473,  -473,   321,  -473,     0,  -473,   198,   322,
     230,   231,   236,  -473,  -473,   237,   799,   656,  -473,   -34,
    -473,  -473,   238,  -473,  -473,   -29,   240,   241,  -473,   244,
    -473,   239,   246,   799,   957,   981,  1003,  1023,  1023,  1041,
     351,   351,   351,   351,   164,   164,   164,   164,   192,   192,
     192,   192,   197,   197,   251,   251,   251,  -473,   242,   317,
    -473,   293,   252,   253,   211,    51,    46,   248,   575,  -473,
     306,  -473,   255,  -473,  -473,  -473,  -473,    23,   799,   259,
     275,   268,   272,   273,   274,   276,  -473,  -473,  -473,   364,
     369,   211,   282,  -473,  -473,   799,   799,  -473,  -473,   278,
      45,   292,  -473,  -473,  -473,   799,  -473,   359,  -473,   799,
    -473,  -473,   383,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,    51,  -473,  -473,  -473,  -473,  -473,  -473,   211,   799,
     268,   296,   297,  -473,   333,   146,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,   302,  -473,  -473,
    -473,   198,  -473,   303,  -473,   799,   392,  -473,   799,  -473,
     799,   799,   309,   311,  -473,   799,   312,  -473,  -473,  -473,
      83,  -473,   799,   305,  -473,  -473,   211,  -473,  -473,  -473,
     317,   317,    45,    -7,  -473,    10,  -473,   314,  -473,   799,
    -473,   879,   313,  -473,  -473,  -473,  -473,  -473,  -473,   799,
     316,   319,  -473,  -473,  -473,   318,    11,   320,   324,  -473,
    -473,   400,   326,   799,   325,  -473,  -473,  -473,   404,   252,
     359,   359,   168,   211,  -473,   799,  -473,   799,  -473,   327,
      11,  -473,  -473,  -473,  -473,   799,   323,   340,    31,   407,
     345,  -473,  -473,    24,  -473,   349,  -473,  -473,   211,    30,
    -473,   353,  -473,   292,  -473,   354,  -473,  -473,   398,   398,
     799,  -473,  -473,  -473,   906,  -473,   360,   363,   365,   407,
      14,  -473,  -473,   211,  -473,    58,  -473,   371,  -473,   268,
    -473,    31,   799,    31,    31,   211,  -473,  -473,   400,  -473,
     799,  -473,   373,   799,  -473,   211,   211,  -473,   268,  -473,
     799,   362,   676,    86,  -473,   374,  -473,   441,    31,  -473,
     376,   407,  -473,   289,  -473,  -473,   442,  -473,  -473,  -473,
    -473,  -473,     7,  -473,  -473,   404,   404,  -473,   443,   933,
    -473,  -473,   470,   381,   390,  -473,   407,  -473,  -473,  -473,
     799,   799,   385,    43,  -473,  -473,  -473,   387,   289,  -473,
    -473,   477,   388,   395,  -473,   445,  -473,  -473,   393,  -473,
    -473,   447,    88,  -473,   113,   399,  -473,  -473,   402,   396,
    -473,   676,  -473,  -473,  -473,  -473,   635,   635,  -473,   289,
     397,   289,   401,  -473,   289,  -473,  -473,   717,    31,    11,
    -473,  -473,   717,   404,  -473,  -473,  -473,  -473,  -473,    11,
     799,  -473,  -473,  -473,   408,  -473,  -473,   758,  -473,   -43,
    -473,    -1,  -473,  -473,   409,  -473,  -473,   416,   417,  -473,
    -473,   418,   399,   799,  -473,  -473,    34,  -473,  -473,  -473,
    -473,  -473,    31,  -473,  -473,  -473,  -473,  -473
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -473,  -473,  -473,   185,   104,  -473,  -473,     2,  -473,  -473,
     465,  -473,   469,   -11,  -473,  -473,  -473,   262,  -473,  -473,
    -473,  -473,  -273,   105,   261,  -473,  -473,   328,  -473,  -473,
     204,   -62,    78,   -15,  -473,  -473,  -473,   267,  -257,  -473,
    -473,  -473,  -473,  -473,   266,  -190,  -473,  -473,   329,  -135,
    -141,    70,  -201,  -473,  -473,  -473,  -473,     4,  -401,  -473,
    -473,   114,  -252,  -473,  -473,    50,  -473,  -473,  -473,   116,
    -473,  -473,  -473,  -473,  -473,  -427,  -473,  -473,  -473,    28,
    -473,  -473,   -28,  -473,  -384,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,  -280,  -304,  -473,  -473,  -391,  -382,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,   330,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
    -473,  -473,   -44,  -473,  -124,  -473,   194,  -473,   138,  -473,
     180,   127,    29,   291,  -473,  -473,  -473,  -473,  -473,  -472,
    -473,   -65,  -473,   -31,   487,  -473,   403
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -238
static const yytype_int16 yytable[] =
{
      24,   328,    67,    98,     8,   435,   332,   446,   262,    75,
       8,     8,     8,    42,   214,    20,   378,   518,   363,    24,
      20,    24,   495,    39,   133,   134,     4,    20,    20,   456,
      90,    91,   494,     4,     4,    20,   157,   158,    20,   133,
     134,     4,   -65,    36,     4,  -237,   462,   285,   187,    20,
     187,   470,   469,  -237,    95,   -65,    34,    -8,   549,   550,
     286,    96,   204,   135,   136,   155,   150,   342,   303,   304,
     305,   306,   307,   308,   309,   205,    -7,   151,   135,   222,
     566,   413,   205,   205,   414,     3,     4,   613,   260,   506,
     205,   508,   509,   205,   261,   614,    40,   496,   415,   562,
     310,   416,   200,   201,   202,    25,     6,   497,   216,   217,
     206,    26,     6,     6,     6,   206,   536,    27,   478,   219,
     221,   479,   206,   206,   328,   623,    29,   209,    37,   332,
     206,   567,    30,   206,   188,    38,   188,   568,   189,    34,
     -37,    32,    -8,   214,    96,   626,   501,    98,    44,   502,
     383,   390,   248,   384,   570,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,   505,   361,    93,    94,    97,
     482,   385,   386,    34,   526,   270,   583,   527,    96,   584,
      13,    46,   606,   387,   517,   594,    69,   596,   604,    14,
     598,    15,   294,    17,    18,    19,   603,   328,   607,   279,
     280,   583,   332,    70,   585,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
      12,   190,    33,    34,   624,   410,   411,   343,    73,   302,
     627,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    74,    13,    76,   357,   358,   209,   450,    34,    78,
     326,    14,   328,    15,   364,    79,   354,   332,   367,   448,
     449,   126,   214,   119,   120,   121,   122,   123,   124,   360,
     121,   122,   123,   124,   515,   516,   592,   593,   377,   127,
     131,   129,    48,    20,    49,    50,   214,   132,    98,   139,
     137,   149,   152,   372,   214,   140,    40,   184,   193,   214,
     194,   197,   199,   283,   270,   218,   223,   395,   250,   397,
     398,   251,   253,   256,   402,   259,   263,   264,   265,   284,
     268,   294,   150,   266,   287,   288,   290,   124,   295,   289,
     296,   299,   314,   301,    51,    52,   340,   214,   419,   214,
     214,   407,    53,    54,    55,    56,    57,    58,   430,   344,
     190,   412,   325,   345,   346,   348,   349,   350,   352,   351,
      59,    60,   294,   353,   214,   355,    98,   540,   359,   541,
     362,   365,    61,   326,   377,   360,   453,   368,    62,   379,
     380,    63,    64,   382,   457,   389,   393,   391,   372,   406,
     399,   499,   400,   417,   438,   403,   425,   431,   445,   360,
     432,   463,   434,   158,   436,   458,   444,   209,   437,   487,
     442,   455,   209,   476,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   460,   468,
     472,   507,   480,   483,    48,    20,    49,    50,   484,   511,
     529,   490,   514,   521,   214,   214,   326,   491,   492,   520,
     209,   525,   209,   209,   503,   214,   535,   513,   528,   538,
     407,   407,   546,   555,   559,   560,   530,   531,   561,   565,
     569,   572,   573,   574,   579,   325,   575,   209,   580,   590,
     586,   595,   214,   589,   597,    45,    51,    52,   214,   563,
     564,    47,   609,   615,    53,    54,    55,    56,    57,    58,
     617,   618,   619,   298,   447,   369,   475,   313,   254,   486,
     554,   326,    59,    60,   532,   327,   339,   451,   510,   539,
     525,   452,   267,   591,    61,   535,   535,   282,   605,   392,
      62,   443,   405,    63,    64,   454,   602,   620,   557,   338,
       0,   602,     0,   220,     0,     0,     0,     0,   325,   608,
       0,     0,     0,     0,     0,     0,   611,   209,   360,   141,
     142,   143,   144,   145,   146,   147,   148,     0,   360,     0,
     153,   154,   621,     0,     0,     4,     0,     0,   315,   316,
     317,   318,     0,     0,     0,     0,     0,     0,     0,   319,
       0,     0,   320,     0,   321,   209,   322,     0,     0,     0,
       0,   209,     0,   276,   277,   278,     0,     0,     0,     0,
       0,     0,   323,   325,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   324,     0,     0,     0,    48,    20,
      49,    50,     0,     0,     0,     0,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     530,   531,     0,     0,     0,     0,     0,     0,     0,    48,
      20,    49,    50,   271,     0,   272,     0,   273,   274,   275,
      51,    52,     0,     0,   276,   277,   278,     0,    53,    54,
      55,    56,    57,    58,     0,     0,     0,     0,     0,   279,
     280,     0,     0,     0,     0,     0,    59,    60,     0,     0,
      48,    20,    49,    50,     0,     0,     0,     0,    61,     0,
       0,    51,    52,     0,    62,     0,     0,    63,    64,    53,
      54,    55,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,   599,
       0,    48,    20,    49,    50,     0,   522,     0,     0,    61,
       0,     0,    51,    52,     0,    62,     0,     0,    63,    64,
      53,    54,    55,    56,    57,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    60,
       0,     0,    48,    20,    49,    50,     0,     0,     0,     0,
      61,     0,     0,    51,    52,     0,    62,     0,     0,    63,
      64,    53,    54,    55,    56,    57,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,   610,     0,    51,    52,     0,    62,     0,     0,
      63,    64,    53,    54,    55,    56,    57,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,    61,   316,   317,   318,     0,     0,    62,     0,
       0,    63,    64,   319,     0,     0,   320,     0,   321,     0,
     322,     0,     0,     0,     0,     0,     4,   276,   277,   278,
     316,   317,   318,     0,     0,     0,   323,   421,     0,     0,
     319,     0,     0,   320,   488,   321,     0,   322,   324,     0,
       0,     0,     0,     4,   276,   277,   278,   316,   317,   318,
       0,     0,     0,   323,     0,     0,     0,   319,     0,     0,
     320,     0,   321,     0,   322,   324,     0,     0,     0,     0,
       0,   276,   277,   278,     0,     0,     0,     0,     0,     0,
     323,     0,     0,     0,     0,   101,   102,   103,     0,   104,
     105,   106,   324,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,     0,   104,   105,   106,   125,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   103,     0,   104,   105,   106,     0,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   104,   105,
     106,     0,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     106,     0,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-473)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      11,   258,    33,    65,     2,   396,   258,   408,   198,    40,
       8,     9,    10,    28,   138,     4,   320,   489,   291,    30,
       4,    32,     8,    22,    57,    58,    10,     4,     4,   420,
      61,    62,   459,    10,    10,     4,    98,    99,     4,    57,
      58,    10,    76,     4,    10,    88,   428,    76,     4,     4,
       4,   433,    28,    96,     5,    89,    90,     8,    51,    52,
      89,    95,    46,    96,    97,    96,    88,    44,    17,    18,
      19,    20,    21,    22,    23,    59,     0,    99,    96,    97,
      37,    88,    59,    59,    91,     0,    10,    88,    88,   471,
      59,   473,   474,    59,    94,    96,    95,    83,    88,   526,
      49,    91,   133,   134,   135,     4,     2,    93,   139,   140,
      99,     4,     8,     9,    10,    99,   498,    23,    88,   150,
     151,    91,    99,    99,   381,    91,     4,   138,    89,   381,
      99,    88,     8,    99,    90,    96,    90,    94,    94,    90,
      94,    88,    93,   267,    95,   617,    88,   209,    91,    91,
       4,   341,   183,     7,   538,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,   469,   290,    63,    64,    65,
     443,    25,    26,    90,    88,   206,    88,    91,    95,    91,
      34,    11,   583,    37,   488,   569,     4,   571,   579,    43,
     574,    45,   223,     8,     9,    10,   578,   454,   589,    53,
      54,    88,   454,    92,    91,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
      12,   127,    89,    90,   616,   370,   371,   268,     4,   254,
     622,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,     4,    34,     4,   285,   286,   267,    89,    90,     9,
     258,    43,   519,    45,   295,     5,   281,   519,   299,   410,
     411,    93,   396,    81,    82,    83,    84,    85,    86,   290,
      83,    84,    85,    86,   485,   486,   566,   567,   319,    93,
       4,    93,     3,     4,     5,     6,   420,    89,   360,    93,
      91,    94,   100,   318,   428,    93,    95,    14,    91,   433,
       4,    91,     4,   209,   345,     5,    93,   348,    94,   350,
     351,    88,    90,    88,   355,     4,     4,    97,    97,    91,
      93,   362,    88,    97,    94,    94,    90,    86,    96,   100,
      23,    89,    94,    90,    55,    56,    91,   471,   379,   473,
     474,   366,    63,    64,    65,    66,    67,    68,   389,   100,
     256,   372,   258,    88,    96,    93,    93,    93,     4,    93,
      81,    82,   403,     4,   498,    93,   438,    88,   100,    90,
      88,    22,    93,   381,   415,   396,   417,     4,    99,    93,
      93,   102,   103,    60,   425,    93,     4,    94,   413,    94,
      91,   463,    91,    89,     4,    93,    93,    91,     4,   420,
      91,     4,    94,   475,    94,    92,    91,   428,    94,   450,
      94,    94,   433,   438,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    98,    94,
      91,   472,    89,    89,     3,     4,     5,     6,    50,   480,
       9,    91,   483,    91,   578,   579,   454,    94,    93,   490,
     471,   492,   473,   474,    93,   589,   497,    94,    94,    93,
     485,   486,    30,    30,     4,    94,    35,    36,    88,    94,
      93,     4,    94,    88,    91,   381,    41,   498,    41,    93,
      91,    94,   616,    91,    93,    30,    55,    56,   622,   530,
     531,    32,    94,    94,    63,    64,    65,    66,    67,    68,
      94,    94,    94,   251,   409,   311,   438,   256,   190,   449,
     516,   519,    81,    82,    83,   258,   260,   413,   478,   501,
     561,   415,   203,   561,    93,   566,   567,   207,   582,   345,
      99,   403,   362,   102,   103,   418,   577,   612,   519,   258,
      -1,   582,    -1,   150,    -1,    -1,    -1,    -1,   454,   590,
      -1,    -1,    -1,    -1,    -1,    -1,   597,   578,   579,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,   589,    -1,
      93,    94,   613,    -1,    -1,    10,    -1,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    27,    -1,    29,   616,    31,    -1,    -1,    -1,
      -1,   622,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,   519,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    27,    -1,    29,    -1,    31,    32,    33,
      55,    56,    -1,    -1,    38,    39,    40,    -1,    63,    64,
      65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,    53,
      54,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    55,    56,    -1,    99,    -1,    -1,   102,   103,    63,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    42,
      -1,     3,     4,     5,     6,    -1,    90,    -1,    -1,    93,
      -1,    -1,    55,    56,    -1,    99,    -1,    -1,   102,   103,
      63,    64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    55,    56,    -1,    99,    -1,    -1,   102,
     103,    63,    64,    65,    66,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    -1,    55,    56,    -1,    99,    -1,    -1,
     102,   103,    63,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    93,    14,    15,    16,    -1,    -1,    99,    -1,
      -1,   102,   103,    24,    -1,    -1,    27,    -1,    29,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    10,    38,    39,    40,
      14,    15,    16,    -1,    -1,    -1,    47,    48,    -1,    -1,
      24,    -1,    -1,    27,    28,    29,    -1,    31,    59,    -1,
      -1,    -1,    -1,    10,    38,    39,    40,    14,    15,    16,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    24,    -1,    -1,
      27,    -1,    29,    -1,    31,    59,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,    65,
      66,    67,    59,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    65,    66,    67,   101,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    63,    -1,    65,    66,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    65,    66,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   105,   106,     0,    10,   107,   108,   109,   111,   118,
     142,   112,    12,    34,    43,    45,   110,   107,   107,   107,
       4,   114,   115,   116,   117,     4,     4,    23,   151,     4,
       8,   113,    88,    89,    90,   119,     4,    89,    96,    22,
      95,   135,   137,   139,    91,   114,    11,   116,     3,     5,
       6,    55,    56,    63,    64,    65,    66,    67,    68,    81,
      82,    93,    99,   102,   103,   117,   228,   247,   248,     4,
      92,   120,   143,     4,     4,   247,     4,   146,     9,     5,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     247,   247,   250,   108,   108,     5,    95,   108,   135,   136,
     137,    61,    62,    63,    65,    66,    67,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,   101,    93,    93,   124,    93,
     149,     4,    89,    57,    58,    96,    97,    91,   152,    93,
      93,   248,   248,   248,   248,   248,   248,   248,   248,    94,
      88,    99,   100,   248,   248,   247,   249,   135,   135,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,    14,   121,   122,     4,    90,    94,
     108,   125,   128,    91,     4,   148,   150,    91,   144,     4,
     247,   247,   247,   147,    46,    59,    99,   108,   111,   117,
     166,   199,   201,   202,   228,   229,   247,   247,     5,   247,
     250,   247,    97,    93,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   247,   123,
      94,    88,   129,    90,   131,   132,    88,   126,   140,     4,
      88,    94,   149,     4,    97,    97,    97,   152,    93,   230,
     247,    27,    29,    31,    32,    33,    38,    39,    40,    53,
      54,   131,   212,   108,    91,    76,    89,    94,    94,   100,
      90,   232,   233,   234,   247,    96,    23,   153,   121,    89,
     127,    90,   137,    17,    18,    19,    20,    21,    22,    23,
      49,   133,   134,   128,    94,    13,    14,    15,    16,    24,
      27,    29,    31,    47,    59,   108,   111,   141,   142,   157,
     159,   163,   166,   171,   174,   191,   200,   212,   237,   148,
      91,   145,    44,   247,   100,    88,    96,   198,    93,    93,
      93,    93,     4,     4,   137,    93,   203,   247,   247,   100,
     117,   228,    88,   126,   247,    22,   154,   247,     4,   134,
     158,   160,   137,   164,   165,   172,   173,   247,   198,    93,
      93,   235,    60,     4,     7,    25,    26,    37,   177,    93,
     149,    94,   230,     4,   204,   247,   205,   247,   247,    91,
      91,   167,   247,    93,   231,   234,    94,   137,   156,   130,
     153,   153,   117,    88,    91,    88,    91,    89,   242,   247,
     238,    48,   141,   236,   237,    93,   175,   192,   194,   176,
     247,    91,    91,   215,    94,   201,    94,    94,     4,   168,
     169,   170,    94,   232,    91,     4,   162,   127,   154,   154,
      89,   165,   173,   247,   235,    94,   201,   247,    92,   185,
      98,   195,   202,     4,   179,   182,   183,   184,    94,    28,
     202,   210,    91,   208,   209,   136,   137,   138,    88,    91,
      89,   211,   126,    89,    50,   155,   155,   247,    28,   240,
      91,    94,    93,   178,   179,     8,    83,    93,   193,   135,
     180,    88,    91,    93,   241,   198,   202,   247,   202,   202,
     169,   247,   213,    94,   247,   156,   156,   198,   243,   244,
     247,    91,    90,   186,   187,   247,    88,    91,    94,     9,
      35,    36,    83,   196,   197,   247,   202,   181,    93,   183,
      88,    90,   188,   190,   247,   222,    30,   216,   206,    51,
      52,   218,   161,   162,   161,    30,   246,   236,   239,     4,
      94,    88,   179,   247,   247,    94,    37,    88,    94,    93,
     188,   189,     4,    94,    88,    41,   223,   224,   217,    91,
      41,   219,   220,    88,    91,    91,    91,   243,   245,    91,
      93,   186,   197,   197,   188,    94,   188,    93,   188,    42,
     226,   227,   247,   202,   201,   226,   162,   201,   247,    94,
      94,   247,   225,    88,    96,    94,   221,    94,    94,    94,
     245,   247,   207,    91,   202,   214,   243,   202
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
#line 141 "verilog_parser.y"
    {
	ast_stack.push_back(current_ast);
}
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 143 "verilog_parser.y"
    {
	ast_stack.pop_back();
	log_assert(GetSize(ast_stack) == 0);
	for (auto &it : default_attr_list)
		delete it.second;
	default_attr_list.clear();
}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 158 "verilog_parser.y"
    {
		for (auto &it : attr_list)
			delete it.second;
		attr_list.clear();
		for (auto &it : default_attr_list)
			attr_list[it.first] = it.second->clone();
	}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 164 "verilog_parser.y"
    {
		std::map<std::string, AstNode*> *al = new std::map<std::string, AstNode*>;
		al->swap(attr_list);
		(yyval.al) = al;
	}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 175 "verilog_parser.y"
    {
		for (auto &it : default_attr_list)
			delete it.second;
		default_attr_list.clear();
		for (auto &it : attr_list)
			delete it.second;
		attr_list.clear();
	}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 182 "verilog_parser.y"
    {
		default_attr_list = attr_list;
		attr_list.clear();
	}
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 195 "verilog_parser.y"
    {
		if (attr_list.count(*(yyvsp[(1) - (1)].string)) != 0)
			delete attr_list[*(yyvsp[(1) - (1)].string)];
		attr_list[*(yyvsp[(1) - (1)].string)] = AstNode::mkconst_int(1, false);
		delete (yyvsp[(1) - (1)].string);
	}
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 201 "verilog_parser.y"
    {
		if (attr_list.count(*(yyvsp[(1) - (3)].string)) != 0)
			delete attr_list[*(yyvsp[(1) - (3)].string)];
		attr_list[*(yyvsp[(1) - (3)].string)] = (yyvsp[(3) - (3)].ast);
		delete (yyvsp[(1) - (3)].string);
	}
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 209 "verilog_parser.y"
    {
		(yyval.string) = (yyvsp[(1) - (1)].string);
	}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 212 "verilog_parser.y"
    {
		if ((yyvsp[(3) - (3)].string)->substr(0, 1) == "\\")
			*(yyvsp[(1) - (3)].string) += "." + (yyvsp[(3) - (3)].string)->substr(1);
		else
			*(yyvsp[(1) - (3)].string) += "." + *(yyvsp[(3) - (3)].string);
		delete (yyvsp[(3) - (3)].string);
		(yyval.string) = (yyvsp[(1) - (3)].string);
	}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 222 "verilog_parser.y"
    {
		do_not_require_port_stubs = false;
		AstNode *mod = new AstNode(AST_MODULE);
		ast_stack.back()->children.push_back(mod);
		ast_stack.push_back(mod);
		current_ast_mod = mod;
		port_stubs.clear();
		port_counter = 0;
		mod->str = *(yyvsp[(3) - (3)].string);
		append_attr(mod, (yyvsp[(1) - (3)].al));
		delete (yyvsp[(3) - (3)].string);
	}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 233 "verilog_parser.y"
    {
		if (port_stubs.size() != 0)
			frontend_verilog_yyerror("Missing details for module port `%s'.",
					port_stubs.begin()->first.c_str());
		ast_stack.pop_back();
		log_assert(ast_stack.size() == 1);
		current_ast_mod = NULL;
	}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 251 "verilog_parser.y"
    {
		astbuf1 = new AstNode(AST_PARAMETER);
		astbuf1->children.push_back(AstNode::mkconst_int(0, true));
	}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 254 "verilog_parser.y"
    {
		delete astbuf1;
	}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 268 "verilog_parser.y"
    {
		if (ast_stack.back()->children.size() > 0 && ast_stack.back()->children.back()->type == AST_WIRE) {
			AstNode *wire = new AstNode(AST_IDENTIFIER);
			wire->str = ast_stack.back()->children.back()->str;
			if (ast_stack.back()->children.back()->is_reg)
				ast_stack.back()->children.push_back(new AstNode(AST_INITIAL, new AstNode(AST_BLOCK, new AstNode(AST_ASSIGN_LE, wire, (yyvsp[(2) - (2)].ast)))));
			else
				ast_stack.back()->children.push_back(new AstNode(AST_ASSIGN, wire, (yyvsp[(2) - (2)].ast)));
		} else
			frontend_verilog_yyerror("Syntax error.");
	}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 282 "verilog_parser.y"
    {
		if (ast_stack.back()->children.size() > 0 && ast_stack.back()->children.back()->type == AST_WIRE) {
			AstNode *node = ast_stack.back()->children.back()->clone();
			node->str = *(yyvsp[(1) - (1)].string);
			node->port_id = ++port_counter;
			ast_stack.back()->children.push_back(node);
		} else {
			if (port_stubs.count(*(yyvsp[(1) - (1)].string)) != 0)
				frontend_verilog_yyerror("Duplicate module port `%s'.", (yyvsp[(1) - (1)].string)->c_str());
			port_stubs[*(yyvsp[(1) - (1)].string)] = ++port_counter;
		}
		delete (yyvsp[(1) - (1)].string);
	}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 295 "verilog_parser.y"
    {
		AstNode *node = (yyvsp[(2) - (4)].ast);
		node->str = *(yyvsp[(4) - (4)].string);
		node->port_id = ++port_counter;
		if ((yyvsp[(3) - (4)].ast) != NULL)
			node->children.push_back((yyvsp[(3) - (4)].ast));
		if (!node->is_input && !node->is_output)
			frontend_verilog_yyerror("Module port `%s' is neither input nor output.", (yyvsp[(4) - (4)].string)->c_str());
		if (node->is_reg && node->is_input && !node->is_output)
			frontend_verilog_yyerror("Input port `%s' is declared as register.", (yyvsp[(4) - (4)].string)->c_str());
		ast_stack.back()->children.push_back(node);
		append_attr(node, (yyvsp[(1) - (4)].al));
		delete (yyvsp[(4) - (4)].string);
	}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 309 "verilog_parser.y"
    {
		do_not_require_port_stubs = true;
	}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 314 "verilog_parser.y"
    {
		astbuf3 = new AstNode(AST_WIRE);
	}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 316 "verilog_parser.y"
    {
		(yyval.ast) = astbuf3;
	}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 324 "verilog_parser.y"
    {
		astbuf3->is_input = true;
	}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 327 "verilog_parser.y"
    {
		astbuf3->is_output = true;
	}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 330 "verilog_parser.y"
    {
		astbuf3->is_input = true;
		astbuf3->is_output = true;
	}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 334 "verilog_parser.y"
    {
	}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 336 "verilog_parser.y"
    {
		astbuf3->is_reg = true;
	}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 339 "verilog_parser.y"
    {
		astbuf3->is_reg = true;
		astbuf3->range_left = 31;
		astbuf3->range_right = 0;
		astbuf3->is_signed = true;
	}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 345 "verilog_parser.y"
    {
		astbuf3->type = AST_GENVAR;
		astbuf3->is_reg = true;
		astbuf3->range_left = 31;
		astbuf3->range_right = 0;
	}
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 351 "verilog_parser.y"
    {
		astbuf3->is_signed = true;
	}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 356 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_RANGE);
		(yyval.ast)->children.push_back((yyvsp[(2) - (5)].ast));
		(yyval.ast)->children.push_back((yyvsp[(4) - (5)].ast));
	}
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 361 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_RANGE);
		(yyval.ast)->children.push_back(new AstNode(AST_SUB, new AstNode(AST_ADD, (yyvsp[(2) - (5)].ast)->clone(), (yyvsp[(4) - (5)].ast)), AstNode::mkconst_int(1, true)));
		(yyval.ast)->children.push_back(new AstNode(AST_ADD, (yyvsp[(2) - (5)].ast), AstNode::mkconst_int(0, true)));
	}
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 366 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_RANGE);
		(yyval.ast)->children.push_back(new AstNode(AST_ADD, (yyvsp[(2) - (5)].ast), AstNode::mkconst_int(0, true)));
		(yyval.ast)->children.push_back(new AstNode(AST_SUB, new AstNode(AST_ADD, (yyvsp[(2) - (5)].ast)->clone(), AstNode::mkconst_int(1, true)), (yyvsp[(4) - (5)].ast)));
	}
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 371 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_RANGE);
		(yyval.ast)->children.push_back((yyvsp[(2) - (3)].ast));
	}
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 377 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_MULTIRANGE, (yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast));
	}
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 380 "verilog_parser.y"
    {
		(yyval.ast) = (yyvsp[(1) - (2)].ast);
		(yyval.ast)->children.push_back((yyvsp[(2) - (2)].ast));
	}
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 386 "verilog_parser.y"
    {
		(yyval.ast) = (yyvsp[(1) - (1)].ast);
	}
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 389 "verilog_parser.y"
    {
		(yyval.ast) = NULL;
	}
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 394 "verilog_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 395 "verilog_parser.y"
    { (yyval.ast) = (yyvsp[(1) - (1)].ast); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 398 "verilog_parser.y"
    {
		(yyval.ast) = (yyvsp[(1) - (1)].ast);
	}
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 401 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_RANGE);
		(yyval.ast)->children.push_back(AstNode::mkconst_int(31, true));
		(yyval.ast)->children.push_back(AstNode::mkconst_int(0, true));
		(yyval.ast)->is_signed = true;
	}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 419 "verilog_parser.y"
    {
		current_function_or_task = new AstNode(AST_DPI_FUNCTION, AstNode::mkconst_str(*(yyvsp[(3) - (4)].string)), AstNode::mkconst_str(*(yyvsp[(4) - (4)].string)));
		current_function_or_task->str = *(yyvsp[(4) - (4)].string);
		append_attr(current_function_or_task, (yyvsp[(1) - (4)].al));
		ast_stack.back()->children.push_back(current_function_or_task);
		delete (yyvsp[(3) - (4)].string);
		delete (yyvsp[(4) - (4)].string);
	}
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 426 "verilog_parser.y"
    {
		current_function_or_task = NULL;
	}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 429 "verilog_parser.y"
    {
		current_function_or_task = new AstNode(AST_DPI_FUNCTION, AstNode::mkconst_str(*(yyvsp[(5) - (6)].string)), AstNode::mkconst_str(*(yyvsp[(3) - (6)].string)));
		current_function_or_task->str = *(yyvsp[(6) - (6)].string);
		append_attr(current_function_or_task, (yyvsp[(1) - (6)].al));
		ast_stack.back()->children.push_back(current_function_or_task);
		delete (yyvsp[(3) - (6)].string);
		delete (yyvsp[(5) - (6)].string);
		delete (yyvsp[(6) - (6)].string);
	}
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 437 "verilog_parser.y"
    {
		current_function_or_task = NULL;
	}
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 440 "verilog_parser.y"
    {
		current_function_or_task = new AstNode(AST_DPI_FUNCTION, AstNode::mkconst_str(*(yyvsp[(7) - (8)].string)), AstNode::mkconst_str(*(yyvsp[(3) - (8)].string) + ":" + RTLIL::unescape_id(*(yyvsp[(5) - (8)].string))));
		current_function_or_task->str = *(yyvsp[(8) - (8)].string);
		append_attr(current_function_or_task, (yyvsp[(1) - (8)].al));
		ast_stack.back()->children.push_back(current_function_or_task);
		delete (yyvsp[(3) - (8)].string);
		delete (yyvsp[(5) - (8)].string);
		delete (yyvsp[(7) - (8)].string);
		delete (yyvsp[(8) - (8)].string);
	}
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 449 "verilog_parser.y"
    {
		current_function_or_task = NULL;
	}
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 452 "verilog_parser.y"
    {
		current_function_or_task = new AstNode(AST_TASK);
		current_function_or_task->str = *(yyvsp[(3) - (4)].string);
		append_attr(current_function_or_task, (yyvsp[(1) - (4)].al));
		ast_stack.back()->children.push_back(current_function_or_task);
		ast_stack.push_back(current_function_or_task);
		current_function_or_task_port_id = 1;
		delete (yyvsp[(3) - (4)].string);
	}
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 460 "verilog_parser.y"
    {
		current_function_or_task = NULL;
		ast_stack.pop_back();
	}
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 464 "verilog_parser.y"
    {
		current_function_or_task = new AstNode(AST_FUNCTION);
		current_function_or_task->str = *(yyvsp[(5) - (6)].string);
		append_attr(current_function_or_task, (yyvsp[(1) - (6)].al));
		ast_stack.back()->children.push_back(current_function_or_task);
		ast_stack.push_back(current_function_or_task);
		AstNode *outreg = new AstNode(AST_WIRE);
		outreg->str = *(yyvsp[(5) - (6)].string);
		outreg->is_signed = (yyvsp[(3) - (6)].boolean);
		if ((yyvsp[(4) - (6)].ast) != NULL) {
			outreg->children.push_back((yyvsp[(4) - (6)].ast));
			outreg->is_signed = (yyvsp[(3) - (6)].boolean) || (yyvsp[(4) - (6)].ast)->is_signed;
			(yyvsp[(4) - (6)].ast)->is_signed = false;
		}
		current_function_or_task->children.push_back(outreg);
		current_function_or_task_port_id = 1;
		delete (yyvsp[(5) - (6)].string);
	}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 481 "verilog_parser.y"
    {
		current_function_or_task = NULL;
		ast_stack.pop_back();
	}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 487 "verilog_parser.y"
    {
		current_function_or_task->children.push_back(AstNode::mkconst_str(*(yyvsp[(1) - (2)].string)));
		delete (yyvsp[(1) - (2)].string);
		delete (yyvsp[(2) - (2)].string);
	}
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 492 "verilog_parser.y"
    {
		current_function_or_task->children.push_back(AstNode::mkconst_str(*(yyvsp[(1) - (1)].string)));
		delete (yyvsp[(1) - (1)].string);
	}
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 508 "verilog_parser.y"
    {
		(yyval.boolean) = true;
	}
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 511 "verilog_parser.y"
    {
		(yyval.boolean) = false;
	}
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 520 "verilog_parser.y"
    {
		astbuf1->is_signed = true;
	}
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 525 "verilog_parser.y"
    {
		if (astbuf1->children.size() != 1)
			frontend_verilog_yyerror("Syntax error.");
		astbuf1->children.push_back(new AstNode(AST_RANGE));
		astbuf1->children.back()->children.push_back(AstNode::mkconst_int(31, true));
		astbuf1->children.back()->children.push_back(AstNode::mkconst_int(0, true));
		astbuf1->is_signed = true;
	}
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 535 "verilog_parser.y"
    {
		if (astbuf1->children.size() != 1)
			frontend_verilog_yyerror("Syntax error.");
		astbuf1->children.push_back(new AstNode(AST_REALVALUE));
	}
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 542 "verilog_parser.y"
    {
		if ((yyvsp[(1) - (1)].ast) != NULL) {
			if (astbuf1->children.size() != 1)
				frontend_verilog_yyerror("Syntax error.");
			astbuf1->children.push_back((yyvsp[(1) - (1)].ast));
		}
	}
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 551 "verilog_parser.y"
    {
		astbuf1 = new AstNode(AST_PARAMETER);
		astbuf1->children.push_back(AstNode::mkconst_int(0, true));
	}
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 554 "verilog_parser.y"
    {
		delete astbuf1;
	}
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 559 "verilog_parser.y"
    {
		astbuf1 = new AstNode(AST_LOCALPARAM);
		astbuf1->children.push_back(AstNode::mkconst_int(0, true));
	}
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 562 "verilog_parser.y"
    {
		delete astbuf1;
	}
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 570 "verilog_parser.y"
    {
		AstNode *node = astbuf1->clone();
		node->str = *(yyvsp[(1) - (3)].string);
		delete node->children[0];
		node->children[0] = (yyvsp[(3) - (3)].ast);
		ast_stack.back()->children.push_back(node);
		delete (yyvsp[(1) - (3)].string);
	}
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 586 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_DEFPARAM);
		node->str = *(yyvsp[(2) - (4)].string);
		node->children.push_back((yyvsp[(4) - (4)].ast));
		if ((yyvsp[(1) - (4)].ast) != NULL)
			node->children.push_back((yyvsp[(1) - (4)].ast));
		ast_stack.back()->children.push_back(node);
		delete (yyvsp[(2) - (4)].string);
	}
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 597 "verilog_parser.y"
    {
		albuf = (yyvsp[(1) - (3)].al);
		astbuf1 = (yyvsp[(2) - (3)].ast);
		astbuf2 = (yyvsp[(3) - (3)].ast);
		if (astbuf1->range_left >= 0 && astbuf1->range_right >= 0) {
			if (astbuf2) {
				frontend_verilog_yyerror("Syntax error.");
			} else {
				astbuf2 = new AstNode(AST_RANGE);
				astbuf2->children.push_back(AstNode::mkconst_int(astbuf1->range_left, true));
				astbuf2->children.push_back(AstNode::mkconst_int(astbuf1->range_right, true));
			}
		}
		if (astbuf2 && astbuf2->children.size() != 2)
			frontend_verilog_yyerror("Syntax error.");
	}
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 612 "verilog_parser.y"
    {
		delete astbuf1;
		if (astbuf2 != NULL)
			delete astbuf2;
		free_attr(albuf);
	}
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 618 "verilog_parser.y"
    {
		ast_stack.back()->children.push_back(new AstNode(AST_WIRE));
		ast_stack.back()->children.back()->str = *(yyvsp[(3) - (4)].string);
		append_attr(ast_stack.back()->children.back(), (yyvsp[(1) - (4)].al));
		ast_stack.back()->children.push_back(new AstNode(AST_ASSIGN, new AstNode(AST_IDENTIFIER), AstNode::mkconst_int(0, false, 1)));
		ast_stack.back()->children.back()->children[0]->str = *(yyvsp[(3) - (4)].string);
		delete (yyvsp[(3) - (4)].string);
	}
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 626 "verilog_parser.y"
    {
		ast_stack.back()->children.push_back(new AstNode(AST_WIRE));
		ast_stack.back()->children.back()->str = *(yyvsp[(3) - (4)].string);
		append_attr(ast_stack.back()->children.back(), (yyvsp[(1) - (4)].al));
		ast_stack.back()->children.push_back(new AstNode(AST_ASSIGN, new AstNode(AST_IDENTIFIER), AstNode::mkconst_int(1, false, 1)));
		ast_stack.back()->children.back()->children[0]->str = *(yyvsp[(3) - (4)].string);
		delete (yyvsp[(3) - (4)].string);
	}
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 640 "verilog_parser.y"
    {
		AstNode *wire = new AstNode(AST_IDENTIFIER);
		wire->str = ast_stack.back()->children.back()->str;
		if (astbuf1->is_reg)
			ast_stack.back()->children.push_back(new AstNode(AST_INITIAL, new AstNode(AST_BLOCK, new AstNode(AST_ASSIGN_LE, wire, (yyvsp[(3) - (3)].ast)))));
		else
			ast_stack.back()->children.push_back(new AstNode(AST_ASSIGN, wire, (yyvsp[(3) - (3)].ast)));
	}
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 650 "verilog_parser.y"
    {
		AstNode *node = astbuf1->clone();
		node->str = *(yyvsp[(1) - (2)].string);
		append_attr_clone(node, albuf);
		if (astbuf2 != NULL)
			node->children.push_back(astbuf2->clone());
		if ((yyvsp[(2) - (2)].ast) != NULL) {
			if (node->is_input || node->is_output)
				frontend_verilog_yyerror("Syntax error.");
			if (!astbuf2) {
				AstNode *rng = new AstNode(AST_RANGE);
				rng->children.push_back(AstNode::mkconst_int(0, true));
				rng->children.push_back(AstNode::mkconst_int(0, true));
				node->children.push_back(rng);
			}
			node->type = AST_MEMORY;
			node->children.push_back((yyvsp[(2) - (2)].ast));
		}
		if (current_function_or_task == NULL) {
			if (do_not_require_port_stubs && (node->is_input || node->is_output) && port_stubs.count(*(yyvsp[(1) - (2)].string)) == 0) {
				port_stubs[*(yyvsp[(1) - (2)].string)] = ++port_counter;
			}
			if (port_stubs.count(*(yyvsp[(1) - (2)].string)) != 0) {
				if (!node->is_input && !node->is_output)
					frontend_verilog_yyerror("Module port `%s' is neither input nor output.", (yyvsp[(1) - (2)].string)->c_str());
				if (node->is_reg && node->is_input && !node->is_output)
					frontend_verilog_yyerror("Input port `%s' is declared as register.", (yyvsp[(1) - (2)].string)->c_str());
				node->port_id = port_stubs[*(yyvsp[(1) - (2)].string)];
				port_stubs.erase(*(yyvsp[(1) - (2)].string));
			} else {
				if (node->is_input || node->is_output)
					frontend_verilog_yyerror("Module port `%s' is not declared in module header.", (yyvsp[(1) - (2)].string)->c_str());
			}
		} else {
			if (node->is_input || node->is_output)
				node->port_id = current_function_or_task_port_id++;
		}
		ast_stack.back()->children.push_back(node);
		delete (yyvsp[(1) - (2)].string);
	}
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 698 "verilog_parser.y"
    {
		ast_stack.back()->children.push_back(new AstNode(AST_ASSIGN, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast)));
	}
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 703 "verilog_parser.y"
    {
		astbuf1 = new AstNode(AST_CELL);
		append_attr(astbuf1, (yyvsp[(1) - (2)].al));
		astbuf1->children.push_back(new AstNode(AST_CELLTYPE));
		astbuf1->children[0]->str = *(yyvsp[(2) - (2)].string);
		delete (yyvsp[(2) - (2)].string);
	}
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 709 "verilog_parser.y"
    {
		delete astbuf1;
	}
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 712 "verilog_parser.y"
    {
		astbuf1 = new AstNode(AST_PRIMITIVE);
		astbuf1->str = *(yyvsp[(2) - (2)].string);
		append_attr(astbuf1, (yyvsp[(1) - (2)].al));
		delete (yyvsp[(2) - (2)].string);
	}
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 717 "verilog_parser.y"
    {
		delete astbuf1;
	}
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 722 "verilog_parser.y"
    {
		(yyval.string) = (yyvsp[(1) - (1)].string);
	}
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 725 "verilog_parser.y"
    {
		(yyval.string) = new std::string("or");
	}
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 734 "verilog_parser.y"
    {
		astbuf2 = astbuf1->clone();
		if (astbuf2->type != AST_PRIMITIVE)
			astbuf2->str = *(yyvsp[(1) - (1)].string);
		delete (yyvsp[(1) - (1)].string);
		ast_stack.back()->children.push_back(astbuf2);
	}
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 741 "verilog_parser.y"
    {
		astbuf2 = astbuf1->clone();
		if (astbuf2->type != AST_PRIMITIVE)
			astbuf2->str = *(yyvsp[(1) - (2)].string);
		delete (yyvsp[(1) - (2)].string);
		ast_stack.back()->children.push_back(new AstNode(AST_CELLARRAY, (yyvsp[(2) - (2)].ast), astbuf2));
	}
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 755 "verilog_parser.y"
    {
		astbuf2 = astbuf1->clone();
		ast_stack.back()->children.push_back(astbuf2);
	}
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 768 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_PARASET);
		astbuf1->children.push_back(node);
		node->children.push_back((yyvsp[(1) - (1)].ast));
	}
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 773 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_PARASET);
		node->str = *(yyvsp[(2) - (5)].string);
		astbuf1->children.push_back(node);
		node->children.push_back((yyvsp[(4) - (5)].ast));
		delete (yyvsp[(2) - (5)].string);
	}
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 784 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_ARGUMENT);
		astbuf2->children.push_back(node);
	}
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 790 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_ARGUMENT);
		astbuf2->children.push_back(node);
		node->children.push_back((yyvsp[(1) - (1)].ast));
	}
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 795 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_ARGUMENT);
		node->str = *(yyvsp[(2) - (5)].string);
		astbuf2->children.push_back(node);
		node->children.push_back((yyvsp[(4) - (5)].ast));
		delete (yyvsp[(2) - (5)].string);
	}
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 802 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_ARGUMENT);
		node->str = *(yyvsp[(2) - (4)].string);
		astbuf2->children.push_back(node);
		delete (yyvsp[(2) - (4)].string);
	}
    break;

  case 169:
/* Line 1787 of yacc.c  */
#line 810 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_ALWAYS);
		append_attr(node, (yyvsp[(1) - (2)].al));
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
    break;

  case 170:
/* Line 1787 of yacc.c  */
#line 815 "verilog_parser.y"
    {
		AstNode *block = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back(block);
		ast_stack.push_back(block);
	}
    break;

  case 171:
/* Line 1787 of yacc.c  */
#line 819 "verilog_parser.y"
    {
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
    break;

  case 172:
/* Line 1787 of yacc.c  */
#line 823 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_INITIAL);
		append_attr(node, (yyvsp[(1) - (2)].al));
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		AstNode *block = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back(block);
		ast_stack.push_back(block);
	}
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 831 "verilog_parser.y"
    {
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 850 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_POSEDGE);
		ast_stack.back()->children.push_back(node);
		node->children.push_back((yyvsp[(2) - (2)].ast));
	}
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 855 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_NEGEDGE);
		ast_stack.back()->children.push_back(node);
		node->children.push_back((yyvsp[(2) - (2)].ast));
	}
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 860 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_EDGE);
		ast_stack.back()->children.push_back(node);
		node->children.push_back((yyvsp[(1) - (1)].ast));
	}
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 867 "verilog_parser.y"
    {
		(yyval.string) = (yyvsp[(2) - (2)].string);
	}
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 870 "verilog_parser.y"
    {
		(yyval.string) = NULL;
	}
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 875 "verilog_parser.y"
    {
		ast_stack.back()->children.push_back(new AstNode(AST_ASSERT, (yyvsp[(3) - (5)].ast)));
	}
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 880 "verilog_parser.y"
    {
		ast_stack.back()->children.push_back(new AstNode(AST_ASSERT, (yyvsp[(4) - (6)].ast)));
	}
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 885 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_ASSIGN_EQ, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast));
		ast_stack.back()->children.push_back(node);
	}
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 889 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_ASSIGN_LE, (yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast));
		ast_stack.back()->children.push_back(node);
	}
    break;

  case 196:
/* Line 1787 of yacc.c  */
#line 898 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_TCALL);
		node->str = *(yyvsp[(1) - (2)].string);
		delete (yyvsp[(1) - (2)].string);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[(2) - (2)].al));
	}
    break;

  case 197:
/* Line 1787 of yacc.c  */
#line 905 "verilog_parser.y"
    {
		ast_stack.pop_back();
	}
    break;

  case 198:
/* Line 1787 of yacc.c  */
#line 908 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[(1) - (3)].al));
		if ((yyvsp[(3) - (3)].string) != NULL)
			node->str = *(yyvsp[(3) - (3)].string);
	}
    break;

  case 199:
/* Line 1787 of yacc.c  */
#line 915 "verilog_parser.y"
    {
		if ((yyvsp[(3) - (7)].string) != NULL && (yyvsp[(7) - (7)].string) != NULL && *(yyvsp[(3) - (7)].string) != *(yyvsp[(7) - (7)].string))
			frontend_verilog_yyerror("Syntax error.");
		if ((yyvsp[(3) - (7)].string) != NULL)
			delete (yyvsp[(3) - (7)].string);
		if ((yyvsp[(7) - (7)].string) != NULL)
			delete (yyvsp[(7) - (7)].string);
		ast_stack.pop_back();
	}
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 924 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_FOR);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[(1) - (3)].al));
	}
    break;

  case 201:
/* Line 1787 of yacc.c  */
#line 929 "verilog_parser.y"
    {
		ast_stack.back()->children.push_back((yyvsp[(7) - (7)].ast));
	}
    break;

  case 202:
/* Line 1787 of yacc.c  */
#line 931 "verilog_parser.y"
    {
		AstNode *block = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back(block);
		ast_stack.push_back(block);
	}
    break;

  case 203:
/* Line 1787 of yacc.c  */
#line 935 "verilog_parser.y"
    {
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
    break;

  case 204:
/* Line 1787 of yacc.c  */
#line 939 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_WHILE);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[(1) - (5)].al));
		AstNode *block = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back((yyvsp[(4) - (5)].ast));
		ast_stack.back()->children.push_back(block);
		ast_stack.push_back(block);
	}
    break;

  case 205:
/* Line 1787 of yacc.c  */
#line 948 "verilog_parser.y"
    {
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
    break;

  case 206:
/* Line 1787 of yacc.c  */
#line 952 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_REPEAT);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[(1) - (5)].al));
		AstNode *block = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back((yyvsp[(4) - (5)].ast));
		ast_stack.back()->children.push_back(block);
		ast_stack.push_back(block);
	}
    break;

  case 207:
/* Line 1787 of yacc.c  */
#line 961 "verilog_parser.y"
    {
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
    break;

  case 208:
/* Line 1787 of yacc.c  */
#line 965 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_CASE);
		AstNode *block = new AstNode(AST_BLOCK);
		AstNode *cond = new AstNode(AST_COND, AstNode::mkconst_int(1, false, 1), block);
		ast_stack.back()->children.push_back(node);
		node->children.push_back(new AstNode(AST_REDUCE_BOOL, (yyvsp[(4) - (5)].ast)));
		node->children.push_back(cond);
		ast_stack.push_back(node);
		ast_stack.push_back(block);
		append_attr(node, (yyvsp[(1) - (5)].al));
	}
    break;

  case 209:
/* Line 1787 of yacc.c  */
#line 975 "verilog_parser.y"
    {
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
    break;

  case 210:
/* Line 1787 of yacc.c  */
#line 979 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_CASE, (yyvsp[(4) - (5)].ast));
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[(1) - (5)].al));
	}
    break;

  case 211:
/* Line 1787 of yacc.c  */
#line 984 "verilog_parser.y"
    {
		case_type_stack.pop_back();
		ast_stack.pop_back();
	}
    break;

  case 212:
/* Line 1787 of yacc.c  */
#line 990 "verilog_parser.y"
    { 
		case_type_stack.push_back(0);
	}
    break;

  case 213:
/* Line 1787 of yacc.c  */
#line 993 "verilog_parser.y"
    { 
		case_type_stack.push_back('x');
	}
    break;

  case 214:
/* Line 1787 of yacc.c  */
#line 996 "verilog_parser.y"
    { 
		case_type_stack.push_back('z');
	}
    break;

  case 215:
/* Line 1787 of yacc.c  */
#line 1001 "verilog_parser.y"
    {
		if (ast_stack.back()->attributes.count("\\full_case") == 0)
			ast_stack.back()->attributes["\\full_case"] = AstNode::mkconst_int(1, false);
	}
    break;

  case 216:
/* Line 1787 of yacc.c  */
#line 1005 "verilog_parser.y"
    {
		if (ast_stack.back()->attributes.count("\\parallel_case") == 0)
			ast_stack.back()->attributes["\\parallel_case"] = AstNode::mkconst_int(1, false);
	}
    break;

  case 222:
/* Line 1787 of yacc.c  */
#line 1020 "verilog_parser.y"
    {
		AstNode *block = new AstNode(AST_BLOCK);
		AstNode *cond = new AstNode(AST_COND, new AstNode(AST_DEFAULT), block);
		ast_stack.pop_back();
		ast_stack.back()->children.push_back(cond);
		ast_stack.push_back(block);
	}
    break;

  case 227:
/* Line 1787 of yacc.c  */
#line 1034 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_COND);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 1038 "verilog_parser.y"
    {
		AstNode *block = new AstNode(AST_BLOCK);
		ast_stack.back()->children.push_back(block);
		ast_stack.push_back(block);
		case_type_stack.push_back(0);
	}
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 1043 "verilog_parser.y"
    {
		case_type_stack.pop_back();
		ast_stack.pop_back();
		ast_stack.pop_back();
	}
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 1054 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_COND);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 1058 "verilog_parser.y"
    {
		case_type_stack.push_back(0);
	}
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 1060 "verilog_parser.y"
    {
		case_type_stack.pop_back();
		ast_stack.pop_back();
	}
    break;

  case 237:
/* Line 1787 of yacc.c  */
#line 1070 "verilog_parser.y"
    {
		ast_stack.back()->children.push_back(new AstNode(AST_DEFAULT));
	}
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 1073 "verilog_parser.y"
    {
		ast_stack.back()->children.push_back((yyvsp[(1) - (1)].ast));
	}
    break;

  case 239:
/* Line 1787 of yacc.c  */
#line 1076 "verilog_parser.y"
    {
		ast_stack.back()->children.push_back((yyvsp[(3) - (3)].ast));
	}
    break;

  case 240:
/* Line 1787 of yacc.c  */
#line 1081 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_PREFIX, (yyvsp[(3) - (6)].ast), (yyvsp[(6) - (6)].ast));
		(yyval.ast)->str = *(yyvsp[(1) - (6)].string);
		delete (yyvsp[(1) - (6)].string);
	}
    break;

  case 241:
/* Line 1787 of yacc.c  */
#line 1086 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_IDENTIFIER, (yyvsp[(2) - (2)].ast));
		(yyval.ast)->str = *(yyvsp[(1) - (2)].string);
		delete (yyvsp[(1) - (2)].string);
	}
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 1091 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_IDENTIFIER, (yyvsp[(2) - (2)].ast));
		(yyval.ast)->str = *(yyvsp[(1) - (2)].string);
		delete (yyvsp[(1) - (2)].string);
	}
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 1098 "verilog_parser.y"
    {
		(yyval.ast) = (yyvsp[(1) - (1)].ast);
	}
    break;

  case 244:
/* Line 1787 of yacc.c  */
#line 1101 "verilog_parser.y"
    {
		(yyval.ast) = (yyvsp[(2) - (3)].ast);
	}
    break;

  case 245:
/* Line 1787 of yacc.c  */
#line 1106 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_CONCAT);
		(yyval.ast)->children.push_back((yyvsp[(1) - (1)].ast));
	}
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 1110 "verilog_parser.y"
    {
		(yyval.ast) = (yyvsp[(3) - (3)].ast);
		(yyval.ast)->children.push_back((yyvsp[(1) - (3)].ast));
	}
    break;

  case 253:
/* Line 1787 of yacc.c  */
#line 1128 "verilog_parser.y"
    {
		ast_stack.back()->children.push_back((yyvsp[(1) - (1)].ast));
	}
    break;

  case 258:
/* Line 1787 of yacc.c  */
#line 1141 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_GENFOR);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
    break;

  case 259:
/* Line 1787 of yacc.c  */
#line 1145 "verilog_parser.y"
    {
		ast_stack.back()->children.push_back((yyvsp[(6) - (6)].ast));
	}
    break;

  case 260:
/* Line 1787 of yacc.c  */
#line 1147 "verilog_parser.y"
    {
		ast_stack.pop_back();
	}
    break;

  case 261:
/* Line 1787 of yacc.c  */
#line 1150 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_GENIF);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
		ast_stack.back()->children.push_back((yyvsp[(3) - (4)].ast));
	}
    break;

  case 262:
/* Line 1787 of yacc.c  */
#line 1155 "verilog_parser.y"
    {
		ast_stack.pop_back();
	}
    break;

  case 263:
/* Line 1787 of yacc.c  */
#line 1158 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_GENCASE, (yyvsp[(3) - (4)].ast));
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
    break;

  case 264:
/* Line 1787 of yacc.c  */
#line 1162 "verilog_parser.y"
    {
		case_type_stack.pop_back();
		ast_stack.pop_back();
	}
    break;

  case 265:
/* Line 1787 of yacc.c  */
#line 1166 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_GENBLOCK);
		node->str = (yyvsp[(2) - (2)].string) ? *(yyvsp[(2) - (2)].string) : std::string();
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
    break;

  case 266:
/* Line 1787 of yacc.c  */
#line 1171 "verilog_parser.y"
    {
		if ((yyvsp[(2) - (6)].string) != NULL)
			delete (yyvsp[(2) - (6)].string);
		if ((yyvsp[(6) - (6)].string) != NULL)
			delete (yyvsp[(6) - (6)].string);
		ast_stack.pop_back();
	}
    break;

  case 267:
/* Line 1787 of yacc.c  */
#line 1180 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_GENBLOCK);
		ast_stack.back()->children.push_back(node);
		ast_stack.push_back(node);
	}
    break;

  case 268:
/* Line 1787 of yacc.c  */
#line 1184 "verilog_parser.y"
    {
		ast_stack.pop_back();
	}
    break;

  case 273:
/* Line 1787 of yacc.c  */
#line 1195 "verilog_parser.y"
    {
		(yyval.ast) = (yyvsp[(1) - (1)].ast);
	}
    break;

  case 274:
/* Line 1787 of yacc.c  */
#line 1198 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_TERNARY);
		(yyval.ast)->children.push_back((yyvsp[(1) - (6)].ast));
		(yyval.ast)->children.push_back((yyvsp[(4) - (6)].ast));
		(yyval.ast)->children.push_back((yyvsp[(6) - (6)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (6)].al));
	}
    break;

  case 275:
/* Line 1787 of yacc.c  */
#line 1207 "verilog_parser.y"
    {
		(yyval.ast) = (yyvsp[(1) - (1)].ast);
	}
    break;

  case 276:
/* Line 1787 of yacc.c  */
#line 1210 "verilog_parser.y"
    {
		if ((yyvsp[(4) - (4)].string)->substr(0, 1) != "'")
			frontend_verilog_yyerror("Syntax error.");
		AstNode *bits = (yyvsp[(2) - (4)].ast);
		AstNode *val = const2ast(*(yyvsp[(4) - (4)].string), case_type_stack.size() == 0 ? 0 : case_type_stack.back());
		if (val == NULL)
			log_error("Value conversion failed: `%s'\n", (yyvsp[(4) - (4)].string)->c_str());
		(yyval.ast) = new AstNode(AST_TO_BITS, bits, val);
		delete (yyvsp[(4) - (4)].string);
	}
    break;

  case 277:
/* Line 1787 of yacc.c  */
#line 1220 "verilog_parser.y"
    {
		if ((yyvsp[(2) - (2)].string)->substr(0, 1) != "'")
			frontend_verilog_yyerror("Syntax error.");
		AstNode *bits = new AstNode(AST_IDENTIFIER);
		bits->str = *(yyvsp[(1) - (2)].string);
		AstNode *val = const2ast(*(yyvsp[(2) - (2)].string), case_type_stack.size() == 0 ? 0 : case_type_stack.back());
		if (val == NULL)
			log_error("Value conversion failed: `%s'\n", (yyvsp[(2) - (2)].string)->c_str());
		(yyval.ast) = new AstNode(AST_TO_BITS, bits, val);
		delete (yyvsp[(1) - (2)].string);
		delete (yyvsp[(2) - (2)].string);
	}
    break;

  case 278:
/* Line 1787 of yacc.c  */
#line 1232 "verilog_parser.y"
    {
		(yyval.ast) = const2ast(*(yyvsp[(1) - (2)].string) + *(yyvsp[(2) - (2)].string), case_type_stack.size() == 0 ? 0 : case_type_stack.back());
		if ((yyval.ast) == NULL || (*(yyvsp[(2) - (2)].string))[0] != '\'')
			log_error("Value conversion failed: `%s%s'\n", (yyvsp[(1) - (2)].string)->c_str(), (yyvsp[(2) - (2)].string)->c_str());
		delete (yyvsp[(1) - (2)].string);
		delete (yyvsp[(2) - (2)].string);
	}
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 1239 "verilog_parser.y"
    {
		(yyval.ast) = const2ast(*(yyvsp[(1) - (1)].string), case_type_stack.size() == 0 ? 0 : case_type_stack.back());
		if ((yyval.ast) == NULL)
			log_error("Value conversion failed: `%s'\n", (yyvsp[(1) - (1)].string)->c_str());
		delete (yyvsp[(1) - (1)].string);
	}
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 1245 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_REALVALUE);
		char *p = strdup((yyvsp[(1) - (1)].string)->c_str()), *q;
		for (int i = 0, j = 0; !p[j]; j++)
			if (p[j] != '_')
				p[i++] = p[j], p[i] = 0;
		(yyval.ast)->realvalue = strtod(p, &q);
		log_assert(*q == 0);
		delete (yyvsp[(1) - (1)].string);
		free(p);
	}
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 1256 "verilog_parser.y"
    {
		(yyval.ast) = AstNode::mkconst_str(*(yyvsp[(1) - (1)].string));
		delete (yyvsp[(1) - (1)].string);
	}
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 1260 "verilog_parser.y"
    {
		AstNode *node = new AstNode(AST_FCALL);
		node->str = *(yyvsp[(1) - (2)].string);
		delete (yyvsp[(1) - (2)].string);
		ast_stack.push_back(node);
		append_attr(node, (yyvsp[(2) - (2)].al));
	}
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 1266 "verilog_parser.y"
    {
		(yyval.ast) = ast_stack.back();
		ast_stack.pop_back();
	}
    break;

  case 284:
/* Line 1787 of yacc.c  */
#line 1270 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_TO_SIGNED, (yyvsp[(4) - (5)].ast));
		append_attr((yyval.ast), (yyvsp[(2) - (5)].al));
	}
    break;

  case 285:
/* Line 1787 of yacc.c  */
#line 1274 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_TO_UNSIGNED, (yyvsp[(4) - (5)].ast));
		append_attr((yyval.ast), (yyvsp[(2) - (5)].al));
	}
    break;

  case 286:
/* Line 1787 of yacc.c  */
#line 1278 "verilog_parser.y"
    {
		(yyval.ast) = (yyvsp[(2) - (3)].ast);
	}
    break;

  case 287:
/* Line 1787 of yacc.c  */
#line 1281 "verilog_parser.y"
    {
		(yyval.ast) = (yyvsp[(2) - (3)].ast);
	}
    break;

  case 288:
/* Line 1787 of yacc.c  */
#line 1284 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_REPLICATE, (yyvsp[(2) - (6)].ast), (yyvsp[(4) - (6)].ast));
	}
    break;

  case 289:
/* Line 1787 of yacc.c  */
#line 1287 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_BIT_NOT, (yyvsp[(3) - (3)].ast));
		append_attr((yyval.ast), (yyvsp[(2) - (3)].al));
	}
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 1291 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_BIT_AND, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 1295 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_BIT_OR, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 1299 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_BIT_XOR, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 1303 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_BIT_XNOR, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 1307 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_REDUCE_AND, (yyvsp[(3) - (3)].ast));
		append_attr((yyval.ast), (yyvsp[(2) - (3)].al));
	}
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 1311 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_REDUCE_AND, (yyvsp[(3) - (3)].ast));
		append_attr((yyval.ast), (yyvsp[(2) - (3)].al));
		(yyval.ast) = new AstNode(AST_LOGIC_NOT, (yyval.ast));
	}
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 1316 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_REDUCE_OR, (yyvsp[(3) - (3)].ast));
		append_attr((yyval.ast), (yyvsp[(2) - (3)].al));
	}
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 1320 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_REDUCE_OR, (yyvsp[(3) - (3)].ast));
		append_attr((yyval.ast), (yyvsp[(2) - (3)].al));
		(yyval.ast) = new AstNode(AST_LOGIC_NOT, (yyval.ast));
	}
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 1325 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_REDUCE_XOR, (yyvsp[(3) - (3)].ast));
		append_attr((yyval.ast), (yyvsp[(2) - (3)].al));
	}
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 1329 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_REDUCE_XNOR, (yyvsp[(3) - (3)].ast));
		append_attr((yyval.ast), (yyvsp[(2) - (3)].al));
	}
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 1333 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_SHIFT_LEFT, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 301:
/* Line 1787 of yacc.c  */
#line 1337 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_SHIFT_RIGHT, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 302:
/* Line 1787 of yacc.c  */
#line 1341 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_SHIFT_SLEFT, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 1345 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_SHIFT_SRIGHT, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 1349 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_LT, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 1353 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_LE, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 1357 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_EQ, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 1361 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_NE, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 308:
/* Line 1787 of yacc.c  */
#line 1365 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_EQX, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 309:
/* Line 1787 of yacc.c  */
#line 1369 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_NEX, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 1373 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_GE, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 1377 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_GT, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 1381 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_ADD, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 1385 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_SUB, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 314:
/* Line 1787 of yacc.c  */
#line 1389 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_MUL, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 315:
/* Line 1787 of yacc.c  */
#line 1393 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_DIV, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 316:
/* Line 1787 of yacc.c  */
#line 1397 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_MOD, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 317:
/* Line 1787 of yacc.c  */
#line 1401 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_POW, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 318:
/* Line 1787 of yacc.c  */
#line 1405 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_POS, (yyvsp[(3) - (3)].ast));
		append_attr((yyval.ast), (yyvsp[(2) - (3)].al));
	}
    break;

  case 319:
/* Line 1787 of yacc.c  */
#line 1409 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_NEG, (yyvsp[(3) - (3)].ast));
		append_attr((yyval.ast), (yyvsp[(2) - (3)].al));
	}
    break;

  case 320:
/* Line 1787 of yacc.c  */
#line 1413 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_LOGIC_AND, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 321:
/* Line 1787 of yacc.c  */
#line 1417 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_LOGIC_OR, (yyvsp[(1) - (4)].ast), (yyvsp[(4) - (4)].ast));
		append_attr((yyval.ast), (yyvsp[(3) - (4)].al));
	}
    break;

  case 322:
/* Line 1787 of yacc.c  */
#line 1421 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_LOGIC_NOT, (yyvsp[(3) - (3)].ast));
		append_attr((yyval.ast), (yyvsp[(2) - (3)].al));
	}
    break;

  case 323:
/* Line 1787 of yacc.c  */
#line 1427 "verilog_parser.y"
    {
		(yyval.ast) = new AstNode(AST_CONCAT, (yyvsp[(1) - (1)].ast));
	}
    break;

  case 324:
/* Line 1787 of yacc.c  */
#line 1430 "verilog_parser.y"
    {
		(yyval.ast) = (yyvsp[(3) - (3)].ast);
		(yyval.ast)->children.push_back((yyvsp[(1) - (3)].ast));
	}
    break;


/* Line 1787 of yacc.c  */
#line 4261 "verilog_parser.tab.c"
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


