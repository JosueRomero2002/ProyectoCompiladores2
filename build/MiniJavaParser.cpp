// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.



// First part of user prologue.
#line 18 "MiniJavaParser.y"

#include <iostream>
#include <stdexcept>
#include "MiniJavaLexer.hpp"
#include "error.h"
#include "tokens.hpp" 

// Declaramos la función de análisis léxico.
int yylex();

#define yylex(arg) lexer.nextToken(arg) 

namespace Expr {
    void Parser::error (const std::string& msg)
    {
       std::cerr << "Error: " << msg << " on line " << lexer.lineno() << '\n';
    }
}



void yyerror(const char* msg) {
     std::cerr << "Error: " << msg << " on line " << '\n';
}





#line 71 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"


#include "MiniJavaParser.hpp"




#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 10 "MiniJavaParser.y"
namespace Expr {
#line 150 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"

  /// Build a parser object.
  Parser::Parser (MiniJavaLexer& lexer_yyarg, Ast::Node *&root_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      lexer (lexer_yyarg),
      root (root_yyarg)
  {}

  Parser::~Parser ()
  {}

  Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/

  // basic_symbol.
  template <typename Base>
  Parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
  {
    switch (this->kind ())
    {
      case symbol_kind::S_program: // program
      case symbol_kind::S_variable_decl_list: // variable_decl_list
      case symbol_kind::S_variable_decl_Body: // variable_decl_Body
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
      case symbol_kind::S_method_body: // method_body
      case symbol_kind::S_method_type: // method_type
      case symbol_kind::S_opt_param_decl_list: // opt_param_decl_list
      case symbol_kind::S_param_list: // param_list
      case symbol_kind::S_param_decl: // param_decl
      case symbol_kind::S_ref_optional: // ref_optional
      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_array_access: // array_access
      case symbol_kind::S_array_access_opt: // array_access_opt
      case symbol_kind::S_assign_stmt: // assign_stmt
      case symbol_kind::S_call_stmt: // call_stmt
      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_return_stmt: // return_stmt
      case symbol_kind::S_if_stmt: // if_stmt
      case symbol_kind::S_else_optional: // else_optional
      case symbol_kind::S_block: // block
      case symbol_kind::S_while_stmt: // while_stmt
      case symbol_kind::S_call_param_list: // call_param_list
      case symbol_kind::S_call_param_rest: // call_param_rest
      case symbol_kind::S_print_stmt: // print_stmt
      case symbol_kind::S_print_param: // print_param
      case symbol_kind::S_read_stmt: // read_stmt
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_boolean_expression: // boolean_expression
      case symbol_kind::S_boolean_term: // boolean_term
      case symbol_kind::S_boolean_factor: // boolean_factor
      case symbol_kind::S_arithmetic_expression: // arithmetic_expression
      case symbol_kind::S_relational_expression: // relational_expression
      case symbol_kind::S_term: // term
      case symbol_kind::S_factor: // factor
        value.copy< Ast::Node * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
      case symbol_kind::S_CONSTANT: // CONSTANT
        value.copy< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }




  template <typename Base>
  Parser::symbol_kind_type
  Parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
  Parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  Parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->kind ())
    {
      case symbol_kind::S_program: // program
      case symbol_kind::S_variable_decl_list: // variable_decl_list
      case symbol_kind::S_variable_decl_Body: // variable_decl_Body
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
      case symbol_kind::S_method_body: // method_body
      case symbol_kind::S_method_type: // method_type
      case symbol_kind::S_opt_param_decl_list: // opt_param_decl_list
      case symbol_kind::S_param_list: // param_list
      case symbol_kind::S_param_decl: // param_decl
      case symbol_kind::S_ref_optional: // ref_optional
      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_array_access: // array_access
      case symbol_kind::S_array_access_opt: // array_access_opt
      case symbol_kind::S_assign_stmt: // assign_stmt
      case symbol_kind::S_call_stmt: // call_stmt
      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_return_stmt: // return_stmt
      case symbol_kind::S_if_stmt: // if_stmt
      case symbol_kind::S_else_optional: // else_optional
      case symbol_kind::S_block: // block
      case symbol_kind::S_while_stmt: // while_stmt
      case symbol_kind::S_call_param_list: // call_param_list
      case symbol_kind::S_call_param_rest: // call_param_rest
      case symbol_kind::S_print_stmt: // print_stmt
      case symbol_kind::S_print_param: // print_param
      case symbol_kind::S_read_stmt: // read_stmt
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_boolean_expression: // boolean_expression
      case symbol_kind::S_boolean_term: // boolean_term
      case symbol_kind::S_boolean_factor: // boolean_factor
      case symbol_kind::S_arithmetic_expression: // arithmetic_expression
      case symbol_kind::S_relational_expression: // relational_expression
      case symbol_kind::S_term: // term
      case symbol_kind::S_factor: // factor
        value.move< Ast::Node * > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
      case symbol_kind::S_CONSTANT: // CONSTANT
        value.move< int > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        value.move< std::string > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

  }

  // by_kind.
  Parser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  Parser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  Parser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  Parser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  void
  Parser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  void
  Parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  Parser::symbol_kind_type
  Parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  Parser::symbol_kind_type
  Parser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }



  // by_state.
  Parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  Parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  Parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  Parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  Parser::symbol_kind_type
  Parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  Parser::stack_symbol_type::stack_symbol_type ()
  {}

  Parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_program: // program
      case symbol_kind::S_variable_decl_list: // variable_decl_list
      case symbol_kind::S_variable_decl_Body: // variable_decl_Body
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
      case symbol_kind::S_method_body: // method_body
      case symbol_kind::S_method_type: // method_type
      case symbol_kind::S_opt_param_decl_list: // opt_param_decl_list
      case symbol_kind::S_param_list: // param_list
      case symbol_kind::S_param_decl: // param_decl
      case symbol_kind::S_ref_optional: // ref_optional
      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_array_access: // array_access
      case symbol_kind::S_array_access_opt: // array_access_opt
      case symbol_kind::S_assign_stmt: // assign_stmt
      case symbol_kind::S_call_stmt: // call_stmt
      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_return_stmt: // return_stmt
      case symbol_kind::S_if_stmt: // if_stmt
      case symbol_kind::S_else_optional: // else_optional
      case symbol_kind::S_block: // block
      case symbol_kind::S_while_stmt: // while_stmt
      case symbol_kind::S_call_param_list: // call_param_list
      case symbol_kind::S_call_param_rest: // call_param_rest
      case symbol_kind::S_print_stmt: // print_stmt
      case symbol_kind::S_print_param: // print_param
      case symbol_kind::S_read_stmt: // read_stmt
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_boolean_expression: // boolean_expression
      case symbol_kind::S_boolean_term: // boolean_term
      case symbol_kind::S_boolean_factor: // boolean_factor
      case symbol_kind::S_arithmetic_expression: // arithmetic_expression
      case symbol_kind::S_relational_expression: // relational_expression
      case symbol_kind::S_term: // term
      case symbol_kind::S_factor: // factor
        value.YY_MOVE_OR_COPY< Ast::Node * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
      case symbol_kind::S_CONSTANT: // CONSTANT
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  Parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s)
  {
    switch (that.kind ())
    {
      case symbol_kind::S_program: // program
      case symbol_kind::S_variable_decl_list: // variable_decl_list
      case symbol_kind::S_variable_decl_Body: // variable_decl_Body
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
      case symbol_kind::S_method_body: // method_body
      case symbol_kind::S_method_type: // method_type
      case symbol_kind::S_opt_param_decl_list: // opt_param_decl_list
      case symbol_kind::S_param_list: // param_list
      case symbol_kind::S_param_decl: // param_decl
      case symbol_kind::S_ref_optional: // ref_optional
      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_array_access: // array_access
      case symbol_kind::S_array_access_opt: // array_access_opt
      case symbol_kind::S_assign_stmt: // assign_stmt
      case symbol_kind::S_call_stmt: // call_stmt
      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_return_stmt: // return_stmt
      case symbol_kind::S_if_stmt: // if_stmt
      case symbol_kind::S_else_optional: // else_optional
      case symbol_kind::S_block: // block
      case symbol_kind::S_while_stmt: // while_stmt
      case symbol_kind::S_call_param_list: // call_param_list
      case symbol_kind::S_call_param_rest: // call_param_rest
      case symbol_kind::S_print_stmt: // print_stmt
      case symbol_kind::S_print_param: // print_param
      case symbol_kind::S_read_stmt: // read_stmt
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_boolean_expression: // boolean_expression
      case symbol_kind::S_boolean_term: // boolean_term
      case symbol_kind::S_boolean_factor: // boolean_factor
      case symbol_kind::S_arithmetic_expression: // arithmetic_expression
      case symbol_kind::S_relational_expression: // relational_expression
      case symbol_kind::S_term: // term
      case symbol_kind::S_factor: // factor
        value.move< Ast::Node * > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
      case symbol_kind::S_CONSTANT: // CONSTANT
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_program: // program
      case symbol_kind::S_variable_decl_list: // variable_decl_list
      case symbol_kind::S_variable_decl_Body: // variable_decl_Body
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
      case symbol_kind::S_method_body: // method_body
      case symbol_kind::S_method_type: // method_type
      case symbol_kind::S_opt_param_decl_list: // opt_param_decl_list
      case symbol_kind::S_param_list: // param_list
      case symbol_kind::S_param_decl: // param_decl
      case symbol_kind::S_ref_optional: // ref_optional
      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_array_access: // array_access
      case symbol_kind::S_array_access_opt: // array_access_opt
      case symbol_kind::S_assign_stmt: // assign_stmt
      case symbol_kind::S_call_stmt: // call_stmt
      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_return_stmt: // return_stmt
      case symbol_kind::S_if_stmt: // if_stmt
      case symbol_kind::S_else_optional: // else_optional
      case symbol_kind::S_block: // block
      case symbol_kind::S_while_stmt: // while_stmt
      case symbol_kind::S_call_param_list: // call_param_list
      case symbol_kind::S_call_param_rest: // call_param_rest
      case symbol_kind::S_print_stmt: // print_stmt
      case symbol_kind::S_print_param: // print_param
      case symbol_kind::S_read_stmt: // read_stmt
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_boolean_expression: // boolean_expression
      case symbol_kind::S_boolean_term: // boolean_term
      case symbol_kind::S_boolean_factor: // boolean_factor
      case symbol_kind::S_arithmetic_expression: // arithmetic_expression
      case symbol_kind::S_relational_expression: // relational_expression
      case symbol_kind::S_term: // term
      case symbol_kind::S_factor: // factor
        value.copy< Ast::Node * > (that.value);
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
      case symbol_kind::S_CONSTANT: // CONSTANT
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }

  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_program: // program
      case symbol_kind::S_variable_decl_list: // variable_decl_list
      case symbol_kind::S_variable_decl_Body: // variable_decl_Body
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
      case symbol_kind::S_method_body: // method_body
      case symbol_kind::S_method_type: // method_type
      case symbol_kind::S_opt_param_decl_list: // opt_param_decl_list
      case symbol_kind::S_param_list: // param_list
      case symbol_kind::S_param_decl: // param_decl
      case symbol_kind::S_ref_optional: // ref_optional
      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_array_access: // array_access
      case symbol_kind::S_array_access_opt: // array_access_opt
      case symbol_kind::S_assign_stmt: // assign_stmt
      case symbol_kind::S_call_stmt: // call_stmt
      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_return_stmt: // return_stmt
      case symbol_kind::S_if_stmt: // if_stmt
      case symbol_kind::S_else_optional: // else_optional
      case symbol_kind::S_block: // block
      case symbol_kind::S_while_stmt: // while_stmt
      case symbol_kind::S_call_param_list: // call_param_list
      case symbol_kind::S_call_param_rest: // call_param_rest
      case symbol_kind::S_print_stmt: // print_stmt
      case symbol_kind::S_print_param: // print_param
      case symbol_kind::S_read_stmt: // read_stmt
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_boolean_expression: // boolean_expression
      case symbol_kind::S_boolean_term: // boolean_term
      case symbol_kind::S_boolean_factor: // boolean_factor
      case symbol_kind::S_arithmetic_expression: // arithmetic_expression
      case symbol_kind::S_relational_expression: // relational_expression
      case symbol_kind::S_term: // term
      case symbol_kind::S_factor: // factor
        value.move< Ast::Node * > (that.value);
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
      case symbol_kind::S_CONSTANT: // CONSTANT
        value.move< int > (that.value);
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  Parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " (";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  Parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  Parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  Parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Parser::debug_level_type
  Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  Parser::state_type
  Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  Parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  Parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Parser::operator() ()
  {
    return parse ();
  }

  int
  Parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.kind_ = yytranslate_ (yylex (&yyla.value));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_program: // program
      case symbol_kind::S_variable_decl_list: // variable_decl_list
      case symbol_kind::S_variable_decl_Body: // variable_decl_Body
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
      case symbol_kind::S_method_body: // method_body
      case symbol_kind::S_method_type: // method_type
      case symbol_kind::S_opt_param_decl_list: // opt_param_decl_list
      case symbol_kind::S_param_list: // param_list
      case symbol_kind::S_param_decl: // param_decl
      case symbol_kind::S_ref_optional: // ref_optional
      case symbol_kind::S_stmt_list: // stmt_list
      case symbol_kind::S_array_access: // array_access
      case symbol_kind::S_array_access_opt: // array_access_opt
      case symbol_kind::S_assign_stmt: // assign_stmt
      case symbol_kind::S_call_stmt: // call_stmt
      case symbol_kind::S_stmt: // stmt
      case symbol_kind::S_return_stmt: // return_stmt
      case symbol_kind::S_if_stmt: // if_stmt
      case symbol_kind::S_else_optional: // else_optional
      case symbol_kind::S_block: // block
      case symbol_kind::S_while_stmt: // while_stmt
      case symbol_kind::S_call_param_list: // call_param_list
      case symbol_kind::S_call_param_rest: // call_param_rest
      case symbol_kind::S_print_stmt: // print_stmt
      case symbol_kind::S_print_param: // print_param
      case symbol_kind::S_read_stmt: // read_stmt
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_boolean_expression: // boolean_expression
      case symbol_kind::S_boolean_term: // boolean_term
      case symbol_kind::S_boolean_factor: // boolean_factor
      case symbol_kind::S_arithmetic_expression: // arithmetic_expression
      case symbol_kind::S_relational_expression: // relational_expression
      case symbol_kind::S_term: // term
      case symbol_kind::S_factor: // factor
        yylhs.value.emplace< Ast::Node * > ();
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
      case symbol_kind::S_CONSTANT: // CONSTANT
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // input: program
#line 87 "MiniJavaParser.y"
               { root = yystack_[0].value.as < Ast::Node * > (); std::cout << "[Parser] - Parseo exitoso" << std::endl; }
#line 990 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 3: // program: KW_CLASS IDENTIFIER OPEN_CURLY variable_decl_list method_decl_list CLOSE_CURLY
#line 93 "MiniJavaParser.y"
                                                                                     {
             std::cout << "[Parser] - Programa creado con declaraciones separadas" << std::endl;
             yylhs.value.as < Ast::Node * > () = new Ast::Program(yystack_[4].value.as < std::string > (), yystack_[2].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > ());
      }
#line 999 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 4: // variable_decl_list: KW_INT IDENTIFIER method_body method_decl_list
#line 100 "MiniJavaParser.y"
                                                     { //Es Metodo entonces se detiene

        std::cout << "[Parser] - variable_decl_list "<< std::endl;

         yylhs.value.as < Ast::Node * > () = new Ast::MethodDeclList(    new Ast::MethodDecl(new Ast::MethodType("INT"), yystack_[2].value.as < std::string > (), yystack_[1].value.as < Ast::Node * > ()) , yystack_[0].value.as < Ast::Node * > ());
      }
#line 1010 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 5: // variable_decl_list: KW_INT IDENTIFIER method_body
#line 107 "MiniJavaParser.y"
                                    { //Es Metodo entonces se detiene

        std::cout << "[Parser] - variable_decl_list "<< std::endl;

         yylhs.value.as < Ast::Node * > () = new Ast::MethodDeclList(  new Ast::MethodDecl(new Ast::MethodType("INT"), yystack_[1].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ()) , nullptr);     
      }
#line 1021 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 6: // variable_decl_list: variable_decl variable_decl_list
#line 115 "MiniJavaParser.y"
                                       { 
        std::cout << "[Parser] - variable_decl_list "<< std::endl;
        yylhs.value.as < Ast::Node * > () = new Ast::VariableDeclList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
      }
#line 1030 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 7: // variable_decl_list: variable_decl
#line 119 "MiniJavaParser.y"
                     { 
        std::cout << "[Parser] - variable_decl_list "<< std::endl;
      yylhs.value.as < Ast::Node * > () = new Ast::VariableDeclList(yystack_[0].value.as < Ast::Node * > (), nullptr);
      }
#line 1039 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 8: // variable_decl_list: %empty
#line 124 "MiniJavaParser.y"
               {}
#line 1045 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 9: // variable_decl_Body: ident_list SEMICOLON
#line 129 "MiniJavaParser.y"
                       { 

      yylhs.value.as < Ast::Node * > () = new Ast::VariableDecl_Body(yystack_[1].value.as < Ast::Node * > ()); std::cout << "[Parser] - variable_decl_Body" << std::endl;
      }
#line 1054 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 10: // variable_decl: KW_INT OPEN_BRACKET INT_CONST CLOSE_BRACKET IDENTIFIER variable_decl_Body
#line 137 "MiniJavaParser.y"
                                                                                   {
            std::cout << "[Parser] - variable_decl -ARRAY" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::VariableDecl(new Ast::Type("INT", new Ast::ArrayOptional(yystack_[3].value.as < int > ())), yystack_[1].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - variable_decl" << std::endl;
      }
#line 1063 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 11: // variable_decl: KW_INT IDENTIFIER variable_decl_Body
#line 141 "MiniJavaParser.y"
                                              {
            std::cout << "[Parser] - variable_decl -NORMAL" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::VariableDecl(new Ast::Type("INT", nullptr), yystack_[1].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - variable_decl" << std::endl;
       }
#line 1072 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 12: // array_optional: OPEN_BRACKET INT_CONST CLOSE_BRACKET
#line 149 "MiniJavaParser.y"
                                           { 
            std::cout << "[Parser] - array_optional" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ArrayOptional(yystack_[1].value.as < int > ()); 
      }
#line 1081 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 13: // array_optional: %empty
#line 153 "MiniJavaParser.y"
               {}
#line 1087 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 14: // ident_list: COMMA IDENTIFIER ident_list
#line 173 "MiniJavaParser.y"
                                  { 
            yylhs.value.as < Ast::Node * > () = new Ast::IdentList(yystack_[1].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ());  std::cout << "[Parser] - ident_list" << std::endl;
      }
#line 1095 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 15: // ident_list: %empty
#line 176 "MiniJavaParser.y"
               {}
#line 1101 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 16: // type: KW_INT array_optional
#line 180 "MiniJavaParser.y"
                            { 
            yylhs.value.as < Ast::Node * > () = new Ast::Type("INT", yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - type" << std::endl;
      }
#line 1109 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 17: // method_decl_list: method_decl method_decl_list
#line 189 "MiniJavaParser.y"
                                   {
          std::cout << "[Parser] - method_decl_list" << std::endl;  
          yylhs.value.as < Ast::Node * > () = new Ast::MethodDeclList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
       
      }
#line 1119 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 18: // method_decl_list: %empty
#line 194 "MiniJavaParser.y"
                 {}
#line 1125 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 19: // method_decl: method_type IDENTIFIER method_body
#line 198 "MiniJavaParser.y"
                                        {
        std::cout << "[Parser] - method_decl" << std::endl;    
        yylhs.value.as < Ast::Node * > () = new Ast::MethodDecl(yystack_[2].value.as < Ast::Node * > (), yystack_[1].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ());
      }
#line 1134 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 20: // method_body: OPEN_PAR opt_param_decl_list CLOSE_PAR OPEN_CURLY variable_decl_list stmt_list CLOSE_CURLY
#line 205 "MiniJavaParser.y"
                                                                                                 {
      std::cout << "[Parser] - method_body" << std::endl;
      yylhs.value.as < Ast::Node * > () = new Ast::MethodDecl_Body(yystack_[5].value.as < Ast::Node * > (), yystack_[2].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > ()); 
      }
#line 1143 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 21: // method_type: KW_INT
#line 212 "MiniJavaParser.y"
             { 
            std::cout << "[Parser] - INT method_type" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::MethodType("INT");
      }
#line 1152 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 22: // method_type: KW_VOID
#line 216 "MiniJavaParser.y"
              { 
       std::cout << "[Parser] - VOID method_type" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::MethodType("VOID"); 
      }
#line 1161 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 23: // opt_param_decl_list: param_decl param_list
#line 223 "MiniJavaParser.y"
                            { 
         std::cout << "[Parser] - opt_param_decl_list" << std::endl;   
         yylhs.value.as < Ast::Node * > () = new Ast::OptParamDeclList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
      }
#line 1170 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 24: // opt_param_decl_list: %empty
#line 227 "MiniJavaParser.y"
              {}
#line 1176 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 25: // param_list: COMMA param_decl param_list
#line 231 "MiniJavaParser.y"
                                  { 
             std::cout << "[Parser] - param_list" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ParamList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
      }
#line 1185 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 26: // param_list: %empty
#line 235 "MiniJavaParser.y"
                {}
#line 1191 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 27: // param_decl: ref_optional type IDENTIFIER
#line 239 "MiniJavaParser.y"
                                   { 
             std::cout << "[Parser] - param_decl" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ParamDecl(yystack_[2].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < std::string > ());
      }
#line 1200 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 28: // ref_optional: KW_REF
#line 246 "MiniJavaParser.y"
             { 
            std::cout << "[Parser] - ref_optional" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::RefOptional(true); 
      }
#line 1209 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 29: // ref_optional: %empty
#line 250 "MiniJavaParser.y"
               {}
#line 1215 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 30: // stmt_list: stmt stmt_list
#line 254 "MiniJavaParser.y"
                     { 
        std::cout << "[Parser] - stmt_list" << std::endl;   
         yylhs.value.as < Ast::Node * > () = new Ast::StmtList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
      }
#line 1224 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 31: // stmt_list: %empty
#line 258 "MiniJavaParser.y"
                 {}
#line 1230 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 32: // array_access: OPEN_BRACKET expression CLOSE_BRACKET
#line 261 "MiniJavaParser.y"
                                            {
             std::cout << "[Parser] - array_access" << std::endl;
             std::cout << "Array access2: " << yystack_[1].value.as < Ast::Node * > () << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ArrayAccess(yystack_[1].value.as < Ast::Node * > ());
           
      }
#line 1241 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 33: // array_access_opt: array_access
#line 270 "MiniJavaParser.y"
                   { yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); }
#line 1247 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 34: // array_access_opt: %empty
#line 271 "MiniJavaParser.y"
             {  }
#line 1253 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 35: // assign_stmt: IDENTIFIER array_access_opt OP_ASSIGN expression SEMICOLON
#line 276 "MiniJavaParser.y"
                                                                 {
            yylhs.value.as < Ast::Node * > () = new Ast::AssignStmt(yystack_[4].value.as < std::string > (), yystack_[3].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > ());
      }
#line 1261 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 36: // call_stmt: IDENTIFIER OPEN_PAR call_param_list CLOSE_PAR SEMICOLON
#line 283 "MiniJavaParser.y"
                                                            {
         yylhs.value.as < Ast::Node * > () = new Ast::CallStmt(yystack_[4].value.as < std::string > (), yystack_[2].value.as < Ast::Node * > ());
    }
#line 1269 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 37: // stmt: call_stmt
#line 288 "MiniJavaParser.y"
                {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1278 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 38: // stmt: assign_stmt
#line 293 "MiniJavaParser.y"
                  {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1287 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 39: // stmt: return_stmt
#line 298 "MiniJavaParser.y"
                  {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1296 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 40: // stmt: if_stmt
#line 302 "MiniJavaParser.y"
              {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1305 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 41: // stmt: while_stmt
#line 306 "MiniJavaParser.y"
                 {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1314 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 42: // stmt: print_stmt
#line 310 "MiniJavaParser.y"
                 {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1323 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 43: // stmt: read_stmt
#line 314 "MiniJavaParser.y"
                {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1332 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 44: // return_stmt: KW_RETURN expression SEMICOLON
#line 327 "MiniJavaParser.y"
                                     {
            std::cout << "[Parser] - return_stmt" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ReturnStmt(yystack_[1].value.as < Ast::Node * > ()); 
      }
#line 1341 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 45: // if_stmt: KW_IF OPEN_PAR expression CLOSE_PAR block else_optional
#line 334 "MiniJavaParser.y"
                                                              {
            std::cout << "[Parser] - if_stmt" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::IfStmt(yystack_[3].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
      }
#line 1350 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 46: // else_optional: KW_ELSE block
#line 341 "MiniJavaParser.y"
                    {
           std::cout << "[Parser] - else_optional" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ElseOptional(yystack_[0].value.as < Ast::Node * > ());
      }
#line 1359 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 47: // else_optional: %empty
#line 345 "MiniJavaParser.y"
               {}
#line 1365 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 48: // block: OPEN_CURLY stmt_list CLOSE_CURLY
#line 349 "MiniJavaParser.y"
                                       {
             std::cout << "[Parser] - block" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::Block(yystack_[1].value.as < Ast::Node * > ());
      }
#line 1374 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 49: // while_stmt: KW_WHILE OPEN_PAR expression CLOSE_PAR block
#line 356 "MiniJavaParser.y"
                                                   {
         std::cout << "[Parser] - while_stmt" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::WhileStmt(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
      }
#line 1383 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 50: // call_param_list: expression call_param_rest
#line 365 "MiniJavaParser.y"
                                 {
        std::cout << "[Parser] - call_param_list" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::CallParamList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
      }
#line 1392 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 51: // call_param_list: %empty
#line 369 "MiniJavaParser.y"
               {}
#line 1398 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 52: // call_param_rest: COMMA expression call_param_rest
#line 373 "MiniJavaParser.y"
                                       {
            std::cout << "[Parser] - call_param_rest" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::CallParamRest(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
      }
#line 1407 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 53: // call_param_rest: %empty
#line 377 "MiniJavaParser.y"
                {}
#line 1413 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 54: // print_stmt: KW_PRINT OPEN_PAR print_param CLOSE_PAR SEMICOLON
#line 381 "MiniJavaParser.y"
                                                        {
    //   std::cout << "[Parser] - print_stmt" << std::endl;     $$ = new Ast::PrintStmt($3); std::cout << "[Parser] - print_stmt" << std::endl;
    std::cout << "[Parser] - print_stmt" << std::endl;
     yylhs.value.as < Ast::Node * > () = new Ast::PrintStmt(yystack_[2].value.as < Ast::Node * > ()); 
      }
#line 1423 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 55: // print_param: expression
#line 389 "MiniJavaParser.y"
                 {
      std::cout << "[Parser] - print_param EXPR" << std::endl;
      yylhs.value.as < Ast::Node * > () = new Ast::PrintParam(yystack_[0].value.as < Ast::Node * > (), ""); 
      }
#line 1432 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 56: // print_param: STRING_LITERAL
#line 393 "MiniJavaParser.y"
                     {
    std::cout << "[Parser] - print_param LITERAL" << std::endl;
       yylhs.value.as < Ast::Node * > () = new Ast::PrintParam(nullptr, yystack_[0].value.as < std::string > ()); std::cout << "[Parser] - print_param" << std::endl;
   }
#line 1441 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 57: // read_stmt: KW_READ OPEN_PAR IDENTIFIER CLOSE_PAR SEMICOLON
#line 400 "MiniJavaParser.y"
                                                      {
            std::cout << "[Parser] - read_stmt" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ReadStmt(yystack_[2].value.as < std::string > ()); 
      }
#line 1450 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 58: // expression: boolean_expression
#line 407 "MiniJavaParser.y"
                         { 
            std::cout << "[Parser] - expression" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); 

      }
#line 1460 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 59: // boolean_expression: boolean_expression OP_BOOL_OR boolean_term
#line 414 "MiniJavaParser.y"
                                                 { 
             std::cout << "[Parser] - boolean_expression" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::OrBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
        }
#line 1469 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 60: // boolean_expression: boolean_term
#line 419 "MiniJavaParser.y"
                     { 
             std::cout << "[Parser] - boolean_expression" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1478 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 61: // boolean_term: boolean_term OP_BOOL_AND boolean_factor
#line 427 "MiniJavaParser.y"
                                              { 
             std::cout << "[Parser] - boolean_term" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::AndBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
        }
#line 1487 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 62: // boolean_term: boolean_factor
#line 431 "MiniJavaParser.y"
                       { 
             std::cout << "[Parser] - boolean_term" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
        }
#line 1496 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 63: // boolean_factor: OP_BOOL_NOT boolean_factor
#line 438 "MiniJavaParser.y"
                                 { 
            std::cout << "[Parser] - boolean_factor" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::UnaryNotBoolean(yystack_[0].value.as < Ast::Node * > ()); 
        }
#line 1505 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 64: // boolean_factor: OPEN_PAR boolean_expression CLOSE_PAR
#line 442 "MiniJavaParser.y"
                                              { 
             std::cout << "[Parser] - boolean_factor" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[1].value.as < Ast::Node * > ();
        }
#line 1514 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 65: // boolean_factor: relational_expression
#line 446 "MiniJavaParser.y"
                              { 
            std::cout << "[Parser] - boolean_factor" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); 
        }
#line 1523 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 66: // arithmetic_expression: arithmetic_expression OP_SUB term
#line 453 "MiniJavaParser.y"
                                     {  
         std::cout << "[Parser] - arithmetic_expression" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::SubExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
        }
#line 1532 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 67: // arithmetic_expression: arithmetic_expression OP_ADD term
#line 457 "MiniJavaParser.y"
                                            { 
               std::cout << "[Parser] - arithmetic_expression" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::SumExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
        }
#line 1541 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 68: // arithmetic_expression: term
#line 461 "MiniJavaParser.y"
           { 
            std::cout << "[Parser] - arithmetic_expression term" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); 
        }
#line 1550 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 69: // relational_expression: arithmetic_expression OP_EQUAL arithmetic_expression
#line 469 "MiniJavaParser.y"
                                                                  { 
                  std::cout << "[Parser] - relational_expression" << std::endl;
                  yylhs.value.as < Ast::Node * > () = new Ast::EqualBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
            }
#line 1559 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 70: // relational_expression: arithmetic_expression OP_NOT_EQUAL arithmetic_expression
#line 473 "MiniJavaParser.y"
                                                                       { 
                std::cout << "[Parser] - relational_expression" << std::endl;
                  yylhs.value.as < Ast::Node * > () = new Ast::NEqualBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
            }
#line 1568 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 71: // relational_expression: arithmetic_expression OP_LESS_THAN arithmetic_expression
#line 477 "MiniJavaParser.y"
                                                                       { 
                  std::cout << "[Parser] - relational_expression" << std::endl;
                   yylhs.value.as < Ast::Node * > () = new Ast::Less_ThanBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
            }
#line 1577 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 72: // relational_expression: arithmetic_expression OP_GREATER_THAN arithmetic_expression
#line 481 "MiniJavaParser.y"
                                                                          { 
                   std::cout << "[Parser] - relational_expression" << std::endl;
                   yylhs.value.as < Ast::Node * > () = new Ast::Greater_ThanBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
            }
#line 1586 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 73: // relational_expression: arithmetic_expression OP_LESS_EQUAL arithmetic_expression
#line 485 "MiniJavaParser.y"
                                                                        { 
                  std::cout << "[Parser] - relational_expression" << std::endl;
                   yylhs.value.as < Ast::Node * > () = new Ast::LessEqualBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
            }
#line 1595 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 74: // relational_expression: arithmetic_expression OP_GREATER_EQUAL arithmetic_expression
#line 489 "MiniJavaParser.y"
                                                                           { 
                  std::cout << "[Parser] - relational_expression" << std::endl;
                  yylhs.value.as < Ast::Node * > () = new Ast::GreaterEqualBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
            }
#line 1604 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 75: // relational_expression: arithmetic_expression
#line 493 "MiniJavaParser.y"
                              { 
                   std::cout << "[Parser] - relational_expression" << std::endl;
                   yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
            }
#line 1613 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 76: // term: term OP_MUL factor
#line 506 "MiniJavaParser.y"
                         { 
            std::cout << "[Parser] - term" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::MulExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
        }
#line 1622 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 77: // term: term OP_DIV factor
#line 510 "MiniJavaParser.y"
                         {
      std::cout << "[Parser] - term" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::DivExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
        }
#line 1631 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 78: // term: term OP_MOD factor
#line 514 "MiniJavaParser.y"
                             {
            std::cout << "[Parser] - term" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ModExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
        }
#line 1640 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 79: // term: factor
#line 518 "MiniJavaParser.y"
             { 
      std::cout << "[Parser] - term" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); 
        }
#line 1649 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 80: // factor: OP_ADD factor
#line 528 "MiniJavaParser.y"
                      {  // Unario positivo
            yylhs.value.as < Ast::Node * > () = new Ast::UnaryAddExpr(yystack_[0].value.as < Ast::Node * > ());
      }
#line 1657 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 81: // factor: OP_SUB factor
#line 531 "MiniJavaParser.y"
                      {  // Unario negativo
            yylhs.value.as < Ast::Node * > () = new Ast::UnarySubExpr(yystack_[0].value.as < Ast::Node * > ()); 
      }
#line 1665 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 82: // factor: INT_CONST
#line 535 "MiniJavaParser.y"
                { yylhs.value.as < Ast::Node * > () = new Ast::Number(yystack_[0].value.as < int > ()); std::cout<< "[Parser] - factor" << std::endl; 
      //      Print value
            std::cout << "Value: " << yystack_[0].value.as < int > () << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::Number(yystack_[0].value.as < int > ()); std::cout<< "[Parser] - factor" << std::endl;
      }
#line 1675 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 83: // factor: OPEN_PAR arithmetic_expression CLOSE_PAR
#line 540 "MiniJavaParser.y"
                                               { yylhs.value.as < Ast::Node * > () = yystack_[1].value.as < Ast::Node * > (); std::cout<< "[Parser] - factor" << std::endl; }
#line 1681 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 84: // factor: IDENTIFIER
#line 541 "MiniJavaParser.y"
                 {
          yylhs.value.as < Ast::Node * > () = new Ast::Identifier(yystack_[0].value.as < std::string > ()); std::cout<< "[Parser] - factor" << std::endl; 
      }
#line 1689 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 85: // factor: IDENTIFIER OPEN_PAR call_param_list CLOSE_PAR
#line 544 "MiniJavaParser.y"
                                                      { 
            yylhs.value.as < Ast::Node * > () = new Ast::CallStmt(yystack_[3].value.as < std::string > (), yystack_[1].value.as < Ast::Node * > ()); std::cout<< "[Parser] - factor" << std::endl; 
        }
#line 1697 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 86: // factor: IDENTIFIER array_access
#line 547 "MiniJavaParser.y"
                                { 

            std::cout<< "[Parser] - array access" << std::endl;
            std::cout<< "Array access: " << yystack_[1].value.as < std::string > () << std::endl;
            
            yylhs.value.as < Ast::Node * > () = new Ast::ArrayVariable(yystack_[1].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ()); std::cout<< "[Parser] - factor" << std::endl; 
        }
#line 1709 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;


#line 1713 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (YY_MOVE (msg));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;


      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  Parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  Parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // Parser::context.
  Parser::context::context (const Parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  Parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  Parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  Parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char Parser::yypact_ninf_ = -114;

  const signed char Parser::yytable_ninf_ = -30;

  const signed char
  Parser::yypact_[] =
  {
      -2,   -35,    22,  -114,    -6,  -114,    52,   -34,    25,    52,
      32,   -27,  -114,  -114,    42,    25,    34,  -114,    50,    19,
      46,  -114,    53,    25,  -114,  -114,    57,    59,  -114,    71,
      69,   100,    72,  -114,  -114,  -114,    72,    77,   101,  -114,
      76,    70,  -114,  -114,    52,    69,    75,  -114,  -114,     3,
    -114,    78,    80,    83,    31,    84,    85,    14,    87,  -114,
    -114,     3,  -114,  -114,  -114,  -114,  -114,  -114,    31,    31,
      31,    35,    35,    31,  -114,    30,    82,   104,   105,  -114,
      73,  -114,    74,  -114,    27,    86,    31,    31,  -114,   106,
    -114,  -114,    90,    91,  -114,    35,  -114,  -114,   -14,    58,
      31,  -114,  -114,    31,    31,    35,    35,    35,    35,    35,
      35,    35,    35,    35,    35,    35,  -114,    92,  -114,    93,
      95,    94,    96,    31,    99,    99,    -5,  -114,  -114,   102,
     105,  -114,    29,    29,    29,    29,    29,    29,    74,    74,
    -114,  -114,  -114,    97,   103,   107,    31,  -114,  -114,   108,
       3,   122,  -114,  -114,  -114,  -114,  -114,    94,  -114,   110,
      99,  -114,  -114,  -114,  -114
  };

  const signed char
  Parser::yydefact_[] =
  {
       0,     0,     0,     2,     0,     1,     8,     0,    18,     7,
       0,    15,    21,    22,     0,    18,     0,     6,     0,    24,
       0,    11,     0,     5,     3,    17,     0,     0,    28,     0,
      26,     0,    15,     9,     4,    19,    15,     0,    29,    23,
      13,     0,    14,    10,     8,    26,     0,    16,    27,    31,
      25,     0,     0,     0,     0,     0,     0,    34,     0,    38,
      37,    31,    39,    40,    41,    42,    43,    12,     0,     0,
       0,     0,     0,     0,    82,    84,     0,    58,    60,    62,
      75,    65,    68,    79,     0,     0,    51,     0,    33,     0,
      20,    30,     0,     0,    63,     0,    80,    81,     0,    75,
      51,    86,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,     0,    55,     0,
       0,    53,     0,     0,     0,     0,     0,    64,    83,     0,
      59,    61,    69,    70,    71,    72,    73,    74,    67,    66,
      76,    77,    78,     0,     0,     0,     0,    50,    32,     0,
      31,    47,    49,    85,    54,    57,    36,    53,    35,     0,
       0,    45,    52,    48,    46
  };

  const signed char
  Parser::yypgoto_[] =
  {
    -114,  -114,  -114,    -1,   111,  -114,  -114,   109,  -114,    11,
    -114,   114,  -114,  -114,    98,   112,  -114,   -60,    62,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -113,  -114,    51,   -15,
    -114,  -114,  -114,   -54,    79,    43,   -53,   -68,  -114,   -57,
     -69
  };

  const unsigned char
  Parser::yydefgoto_[] =
  {
       0,     2,     3,     8,    21,     9,    47,    22,    41,    14,
      15,    23,    16,    29,    39,    30,    31,    58,    88,    89,
      59,    60,    61,    62,    63,   161,   151,    64,   120,   147,
      65,   117,    66,   121,    77,    78,    79,    80,    81,    82,
      83
  };

  const short
  Parser::yytable_[] =
  {
      76,    91,    96,    97,    10,    99,   103,     1,    17,    19,
       4,    11,   152,    20,    92,    93,    52,    94,    53,    54,
      55,    56,     5,   127,   111,   112,    25,   126,     6,   -29,
     118,    28,   128,   122,    34,    12,    13,   132,   133,   134,
     135,   136,   137,    49,   140,   141,   142,   164,    57,    70,
      86,   131,    87,    70,   138,   139,    71,    72,   111,   112,
      71,    72,     7,    73,    71,    72,   100,    73,    87,   149,
      74,    95,    75,   116,    74,    18,    75,    24,    74,    26,
      75,   105,   106,   107,   108,   109,   110,   111,   112,    27,
     159,    32,   157,    19,    33,   128,   105,   106,   107,   108,
     109,   110,   111,   112,    36,   113,   114,   115,    37,    38,
      40,    44,    20,    28,    46,    48,    68,    67,    51,    69,
      84,    85,    90,   102,   103,   123,   104,   124,   125,   143,
     144,   119,   145,   150,   146,   148,   160,   101,   154,   153,
      35,    42,   162,    50,   155,   163,   130,    43,   156,   158,
      45,   129,    98
  };

  const unsigned char
  Parser::yycheck_[] =
  {
      54,    61,    71,    72,    38,    73,    20,     9,     9,    36,
      45,    45,   125,    40,    68,    69,    13,    70,    15,    16,
      17,    18,     0,    37,    29,    30,    15,    95,    34,    10,
      84,    12,    37,    87,    23,    10,    11,   105,   106,   107,
     108,   109,   110,    44,   113,   114,   115,   160,    45,    22,
      36,   104,    38,    22,   111,   112,    29,    30,    29,    30,
      29,    30,    10,    36,    29,    30,    36,    36,    38,   123,
      43,    36,    45,    46,    43,    43,    45,    35,    43,    45,
      45,    23,    24,    25,    26,    27,    28,    29,    30,    39,
     150,    45,   146,    36,    41,    37,    23,    24,    25,    26,
      27,    28,    29,    30,    45,    31,    32,    33,    37,    40,
      10,    34,    40,    12,    38,    45,    36,    39,    43,    36,
      36,    36,    35,    41,    20,    19,    21,    37,    37,    37,
      37,    45,    37,    34,    40,    39,    14,    75,    41,    37,
      26,    32,   157,    45,    41,    35,   103,    36,    41,    41,
      38,   100,    73
  };

  const signed char
  Parser::yystos_[] =
  {
       0,     9,    50,    51,    45,     0,    34,    10,    52,    54,
      38,    45,    10,    11,    58,    59,    61,    52,    43,    36,
      40,    53,    56,    60,    35,    58,    45,    39,    12,    62,
      64,    65,    45,    41,    58,    60,    45,    37,    40,    63,
      10,    57,    56,    53,    34,    64,    38,    55,    45,    52,
      63,    43,    13,    15,    16,    17,    18,    45,    66,    69,
      70,    71,    72,    73,    76,    79,    81,    39,    36,    36,
      22,    29,    30,    36,    43,    45,    82,    83,    84,    85,
      86,    87,    88,    89,    36,    36,    36,    38,    67,    68,
      35,    66,    82,    82,    85,    36,    89,    89,    83,    86,
      36,    67,    41,    20,    21,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    46,    80,    82,    45,
      77,    82,    82,    19,    37,    37,    86,    37,    37,    77,
      84,    85,    86,    86,    86,    86,    86,    86,    88,    88,
      89,    89,    89,    37,    37,    37,    40,    78,    39,    82,
      34,    75,    75,    37,    41,    41,    41,    82,    41,    66,
      14,    74,    78,    35,    75
  };

  const signed char
  Parser::yyr1_[] =
  {
       0,    49,    50,    51,    52,    52,    52,    52,    52,    53,
      54,    54,    55,    55,    56,    56,    57,    58,    58,    59,
      60,    61,    61,    62,    62,    63,    63,    64,    65,    65,
      66,    66,    67,    68,    68,    69,    70,    71,    71,    71,
      71,    71,    71,    71,    72,    73,    74,    74,    75,    76,
      77,    77,    78,    78,    79,    80,    80,    81,    82,    83,
      83,    84,    84,    85,    85,    85,    86,    86,    86,    87,
      87,    87,    87,    87,    87,    87,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89
  };

  const signed char
  Parser::yyr2_[] =
  {
       0,     2,     1,     6,     4,     3,     2,     1,     0,     2,
       6,     3,     3,     0,     3,     0,     2,     2,     0,     3,
       7,     1,     1,     2,     0,     3,     0,     3,     1,     0,
       2,     0,     3,     1,     0,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     3,     6,     2,     0,     3,     5,
       2,     0,     3,     0,     5,     1,     1,     5,     1,     3,
       1,     3,     1,     2,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     1,     3,     1,     4,     2
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const Parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "EndOfFile", "Error",
  "Hex", "Oct", "Dec", "Bin", "KW_CLASS", "KW_INT", "KW_VOID", "KW_REF",
  "KW_IF", "KW_ELSE", "KW_WHILE", "KW_RETURN", "KW_PRINT", "KW_READ",
  "OP_ASSIGN", "OP_BOOL_OR", "OP_BOOL_AND", "OP_BOOL_NOT", "OP_EQUAL",
  "OP_NOT_EQUAL", "OP_LESS_THAN", "OP_GREATER_THAN", "OP_LESS_EQUAL",
  "OP_GREATER_EQUAL", "OP_ADD", "OP_SUB", "OP_MUL", "OP_DIV", "OP_MOD",
  "OPEN_CURLY", "CLOSE_CURLY", "OPEN_PAR", "CLOSE_PAR", "OPEN_BRACKET",
  "CLOSE_BRACKET", "COMMA", "SEMICOLON", "COMMENT", "INT_CONST",
  "CONSTANT", "IDENTIFIER", "STRING_LITERAL", "ERROR",
  "LOWER_THAN_OPEN_PAR", "$accept", "input", "program",
  "variable_decl_list", "variable_decl_Body", "variable_decl",
  "array_optional", "ident_list", "type", "method_decl_list",
  "method_decl", "method_body", "method_type", "opt_param_decl_list",
  "param_list", "param_decl", "ref_optional", "stmt_list", "array_access",
  "array_access_opt", "assign_stmt", "call_stmt", "stmt", "return_stmt",
  "if_stmt", "else_optional", "block", "while_stmt", "call_param_list",
  "call_param_rest", "print_stmt", "print_param", "read_stmt",
  "expression", "boolean_expression", "boolean_term", "boolean_factor",
  "arithmetic_expression", "relational_expression", "term", "factor", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  Parser::yyrline_[] =
  {
       0,    87,    87,    93,   100,   107,   115,   119,   124,   129,
     137,   141,   149,   153,   173,   176,   180,   189,   194,   198,
     205,   212,   216,   223,   227,   231,   235,   239,   246,   250,
     254,   258,   261,   270,   271,   276,   283,   288,   293,   298,
     302,   306,   310,   314,   327,   334,   341,   345,   349,   356,
     365,   369,   373,   377,   381,   389,   393,   400,   407,   414,
     419,   427,   431,   438,   442,   446,   453,   457,   461,   469,
     473,   477,   481,   485,   489,   493,   506,   510,   514,   518,
     528,   531,   535,   540,   541,   544,   547
  };

  void
  Parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  Parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  Parser::symbol_kind_type
  Parser::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const signed char
    translate_table[] =
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
      45,    46,    47,    48
    };
    // Last valid token kind.
    const int code_max = 303;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

#line 10 "MiniJavaParser.y"
} // Expr
#line 2347 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"

#line 560 "MiniJavaParser.y"


