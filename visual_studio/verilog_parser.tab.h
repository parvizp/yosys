/* A Bison parser, made by GNU Bison 2.7.1.  */

/* Bison interface for Yacc-like parsers in C
   
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
/* Line 2053 of yacc.c  */
#line 95 "verilog_parser.y"

	std::string *string;
	struct YOSYS_NAMESPACE_PREFIX AST::AstNode *ast;
	std::map<std::string, YOSYS_NAMESPACE_PREFIX AST::AstNode*> *al;
	bool boolean;


/* Line 2053 of yacc.c  */
#line 142 "verilog_parser.tab.h"
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
