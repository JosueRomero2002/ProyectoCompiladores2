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
void yyerror(const char *s);

#define yylex(arg) lexer.nextToken(arg)

void yyerror(const char* msg);

namespace Expr {
    void Parser::error (const std::string& msg)
    {
        std::cerr << "Error de sintaxis: " << msg << '\n';
    }
}

void yyerror(const char* msg) {
    std::cerr << "Syntax error: " << msg << std::endl;
}





#line 72 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"


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
#line 151 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"

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
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
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
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
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
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
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
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
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
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
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
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
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
      case symbol_kind::S_variable_decl: // variable_decl
      case symbol_kind::S_ident_list: // ident_list
      case symbol_kind::S_type: // type
      case symbol_kind::S_array_optional: // array_optional
      case symbol_kind::S_method_decl_list: // method_decl_list
      case symbol_kind::S_method_decl: // method_decl
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
#line 88 "MiniJavaParser.y"
               { root = yystack_[0].value.as < Ast::Node * > (); std::cout << "[Parser] - Parseo exitoso" << std::endl; }
#line 977 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 3: // program: KW_CLASS IDENTIFIER OPEN_CURLY variable_decl_list method_decl_list CLOSE_CURLY
#line 94 "MiniJavaParser.y"
                                                                                     {
            yylhs.value.as < Ast::Node * > () = new Ast::Program(yystack_[4].value.as < std::string > (), yystack_[2].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > ());
            std::cout << "[Parser] - Programa creado con declaraciones separadas" << std::endl;
      }
#line 986 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 4: // variable_decl_list: KW_INT IDENTIFIER variable_decl
#line 102 "MiniJavaParser.y"
                                    {
     //   std::cout << "[Parser] - Variable Lista declarada" << std::endl;    $$ = new Ast::VariableDeclList($1, $2);
      }
#line 994 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 5: // variable_decl_list: KW_INT OPEN_BRACKET INT_CONST CLOSE_BRACKET IDENTIFIER variable_decl_SimpleBody
#line 105 "MiniJavaParser.y"
                                                                                       {

      }
#line 1002 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 6: // variable_decl_list: %empty
#line 109 "MiniJavaParser.y"
               {}
#line 1008 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 7: // variable_decl_SimpleBody: ident_list SEMICOLON variable_decl_list
#line 114 "MiniJavaParser.y"
                                          { 
     //   $$ = new Ast::VariableDecl($1, $2, $3);
      }
#line 1016 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 8: // variable_decl: OPEN_PAR opt_param_decl_list CLOSE_PAR OPEN_CURLY variable_decl_list stmt_list CLOSE_CURLY
#line 122 "MiniJavaParser.y"
                                                                                                { 
       // $$ = new Ast::MethodDecl($1, $2, $4, $7, $8);
      }
#line 1024 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 9: // variable_decl: ident_list SEMICOLON variable_decl_list
#line 126 "MiniJavaParser.y"
                                              { 
     //   $$ = new Ast::VariableDecl($1, $2, $3);
      }
#line 1032 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 10: // ident_list: COMMA IDENTIFIER ident_list
#line 134 "MiniJavaParser.y"
                                  { 
            yylhs.value.as < Ast::Node * > () = new Ast::IdentList(yystack_[1].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ());  std::cout << "[Parser] - ident_list" << std::endl;
      }
#line 1040 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 11: // ident_list: %empty
#line 137 "MiniJavaParser.y"
               {}
#line 1046 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 12: // type: KW_INT array_optional
#line 141 "MiniJavaParser.y"
                            { 
            yylhs.value.as < Ast::Node * > () = new Ast::Type("INT", yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - type" << std::endl;
      }
#line 1054 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 13: // array_optional: OPEN_BRACKET INT_CONST CLOSE_BRACKET
#line 148 "MiniJavaParser.y"
                                           { 
            yylhs.value.as < Ast::Node * > () = new Ast::ArrayOptional(yystack_[1].value.as < int > ()); std::cout << "[Parser] - array_optional" << std::endl;
      }
#line 1062 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 14: // array_optional: %empty
#line 151 "MiniJavaParser.y"
               {}
#line 1068 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 15: // method_decl_list: method_decl method_decl_list
#line 155 "MiniJavaParser.y"
                                   {
          std::cout << "[Parser] - method_decl_list" << std::endl;  yylhs.value.as < Ast::Node * > () = new Ast::MethodDeclList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - method_decl_list" << std::endl;
      }
#line 1076 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 16: // method_decl_list: %empty
#line 158 "MiniJavaParser.y"
                 {}
#line 1082 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 17: // method_decl: method_type IDENTIFIER OPEN_PAR opt_param_decl_list CLOSE_PAR OPEN_CURLY variable_decl_list stmt_list CLOSE_CURLY
#line 162 "MiniJavaParser.y"
                                                                                                                        {
        std::cout << "[Parser] - method_decl" << std::endl;    yylhs.value.as < Ast::Node * > () = new Ast::MethodDecl(yystack_[8].value.as < Ast::Node * > (), yystack_[7].value.as < std::string > (), yystack_[5].value.as < Ast::Node * > (), yystack_[2].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > ()); std::cout << "[Parser] - method_decl" << std::endl;
      }
#line 1090 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 18: // method_type: KW_INT
#line 168 "MiniJavaParser.y"
             { 
            yylhs.value.as < Ast::Node * > () = new Ast::MethodType("INT"); std::cout << "[Parser] - INT method_type" << std::endl;
      }
#line 1098 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 19: // method_type: KW_VOID
#line 171 "MiniJavaParser.y"
              { 
            yylhs.value.as < Ast::Node * > () = new Ast::MethodType("VOID"); std::cout << "[Parser] - VOID method_type" << std::endl;
      }
#line 1106 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 20: // opt_param_decl_list: param_decl param_list
#line 177 "MiniJavaParser.y"
                            { 
         std::cout << "[Parser] - opt_param_decl_list" << std::endl;   yylhs.value.as < Ast::Node * > () = new Ast::OptParamDeclList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - opt_param_decl_list" << std::endl;
      }
#line 1114 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 21: // opt_param_decl_list: %empty
#line 180 "MiniJavaParser.y"
              {}
#line 1120 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 22: // param_list: COMMA param_decl param_list
#line 184 "MiniJavaParser.y"
                                  { 
            yylhs.value.as < Ast::Node * > () = new Ast::ParamList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - param_list" << std::endl;
      }
#line 1128 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 23: // param_list: %empty
#line 187 "MiniJavaParser.y"
                {}
#line 1134 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 24: // param_decl: ref_optional type IDENTIFIER
#line 191 "MiniJavaParser.y"
                                   { 
            yylhs.value.as < Ast::Node * > () = new Ast::ParamDecl(yystack_[2].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < std::string > ()); std::cout << "[Parser] - param_decl" << std::endl;
      }
#line 1142 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 25: // ref_optional: KW_REF
#line 197 "MiniJavaParser.y"
             { 
            yylhs.value.as < Ast::Node * > () = new Ast::RefOptional(true); std::cout << "[Parser] - ref_optional" << std::endl;
      }
#line 1150 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 26: // ref_optional: %empty
#line 200 "MiniJavaParser.y"
               {}
#line 1156 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 27: // stmt_list: stmt stmt_list
#line 204 "MiniJavaParser.y"
                     { 
        std::cout << "[Parser] - stmt_list" << std::endl;    yylhs.value.as < Ast::Node * > () = new Ast::StmtList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
      }
#line 1164 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 28: // stmt_list: %empty
#line 207 "MiniJavaParser.y"
                 {}
#line 1170 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 29: // array_access: OPEN_BRACKET expression CLOSE_BRACKET
#line 210 "MiniJavaParser.y"
                                            {
            yylhs.value.as < Ast::Node * > () = new Ast::ArrayAccess(yystack_[1].value.as < Ast::Node * > ());
            std::cout << "[Parser] - array_access" << std::endl;
      }
#line 1179 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 30: // array_access_opt: array_access
#line 217 "MiniJavaParser.y"
                   { yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); }
#line 1185 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 31: // array_access_opt: %empty
#line 218 "MiniJavaParser.y"
             { yylhs.value.as < Ast::Node * > () = nullptr; }
#line 1191 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 32: // assign_stmt: IDENTIFIER array_access_opt OP_ASSIGN expression SEMICOLON
#line 223 "MiniJavaParser.y"
                                                                 {
            yylhs.value.as < Ast::Node * > () = new Ast::AssignStmt(yystack_[4].value.as < std::string > (), yystack_[3].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > ());
      }
#line 1199 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 33: // call_stmt: IDENTIFIER OPEN_PAR call_param_list CLOSE_PAR SEMICOLON
#line 230 "MiniJavaParser.y"
                                                            {
         yylhs.value.as < Ast::Node * > () = new Ast::CallStmt(yystack_[4].value.as < std::string > (), yystack_[2].value.as < Ast::Node * > ());
    }
#line 1207 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 34: // stmt: call_stmt
#line 235 "MiniJavaParser.y"
          {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1216 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 35: // stmt: assign_stmt
#line 240 "MiniJavaParser.y"
                  {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1225 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 36: // stmt: return_stmt
#line 245 "MiniJavaParser.y"
                  {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1234 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 37: // stmt: if_stmt
#line 249 "MiniJavaParser.y"
              {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1243 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 38: // stmt: while_stmt
#line 253 "MiniJavaParser.y"
                 {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1252 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 39: // stmt: print_stmt
#line 257 "MiniJavaParser.y"
                 {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1261 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 40: // stmt: read_stmt
#line 261 "MiniJavaParser.y"
                {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 1270 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 41: // return_stmt: KW_RETURN expression SEMICOLON
#line 274 "MiniJavaParser.y"
                                     {
            yylhs.value.as < Ast::Node * > () = new Ast::ReturnStmt(yystack_[1].value.as < Ast::Node * > ()); std::cout << "[Parser] - return_stmt" << std::endl;
      }
#line 1278 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 42: // if_stmt: KW_IF OPEN_PAR expression CLOSE_PAR block else_optional
#line 280 "MiniJavaParser.y"
                                                              {
            yylhs.value.as < Ast::Node * > () = new Ast::IfStmt(yystack_[3].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - if_stmt" << std::endl;
      }
#line 1286 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 43: // else_optional: KW_ELSE block
#line 286 "MiniJavaParser.y"
                    {
            yylhs.value.as < Ast::Node * > () = new Ast::ElseOptional(yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - else_optional" << std::endl;
      }
#line 1294 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 44: // else_optional: %empty
#line 289 "MiniJavaParser.y"
               {}
#line 1300 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 45: // block: OPEN_CURLY stmt_list CLOSE_CURLY
#line 293 "MiniJavaParser.y"
                                       {
            yylhs.value.as < Ast::Node * > () = new Ast::Block(yystack_[1].value.as < Ast::Node * > ()); std::cout << "[Parser] - block" << std::endl;
      }
#line 1308 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 46: // while_stmt: KW_WHILE OPEN_PAR expression CLOSE_PAR block
#line 299 "MiniJavaParser.y"
                                                   {
            yylhs.value.as < Ast::Node * > () = new Ast::WhileStmt(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - while_stmt" << std::endl;
      }
#line 1316 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 47: // call_param_list: expression call_param_rest
#line 307 "MiniJavaParser.y"
                                 {
            yylhs.value.as < Ast::Node * > () = new Ast::CallParamList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - call_param_list" << std::endl;
      }
#line 1324 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 48: // call_param_list: %empty
#line 310 "MiniJavaParser.y"
               {}
#line 1330 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 49: // call_param_rest: COMMA expression call_param_rest
#line 314 "MiniJavaParser.y"
                                       {
            yylhs.value.as < Ast::Node * > () = new Ast::CallParamRest(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - call_param_rest" << std::endl;
      }
#line 1338 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 50: // call_param_rest: %empty
#line 317 "MiniJavaParser.y"
                {}
#line 1344 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 51: // print_stmt: KW_PRINT OPEN_PAR print_param CLOSE_PAR SEMICOLON
#line 321 "MiniJavaParser.y"
                                                        {
    //   std::cout << "[Parser] - print_stmt" << std::endl;     $$ = new Ast::PrintStmt($3); std::cout << "[Parser] - print_stmt" << std::endl;
      }
#line 1352 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 52: // print_param: expression
#line 327 "MiniJavaParser.y"
                 {
    //  std::cout << "[Parser] - print_param" << std::endl;      $$ = new Ast::PrintParam(  $1, nullptr); std::cout << "[Parser] - print_param" << std::endl;
      }
#line 1360 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 53: // print_param: STRING_LITERAL
#line 330 "MiniJavaParser.y"
                     {
    std::cout << "[Parser] - print_param" << std::endl;
  //      $$ = new Ast::PrintParam(nullptr, $1); std::cout << "[Parser] - print_param" << std::endl;
      }
#line 1369 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 54: // read_stmt: KW_READ OPEN_PAR IDENTIFIER CLOSE_PAR SEMICOLON
#line 337 "MiniJavaParser.y"
                                                      {
            yylhs.value.as < Ast::Node * > () = new Ast::ReadStmt(yystack_[2].value.as < std::string > ()); std::cout << "[Parser] - read_stmt" << std::endl;
      }
#line 1377 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 55: // expression: boolean_expression
#line 343 "MiniJavaParser.y"
                         { 
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); std::cout << "[Parser] - expression" << std::endl;
      }
#line 1385 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 56: // boolean_expression: boolean_expression OP_BOOL_OR boolean_term
#line 348 "MiniJavaParser.y"
                                                 { 
            yylhs.value.as < Ast::Node * > () = new Ast::OrBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - boolean_expression" << std::endl;
        }
#line 1393 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 57: // boolean_expression: boolean_term
#line 352 "MiniJavaParser.y"
                     { 
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); std::cout << "[Parser] - boolean_expression" << std::endl;
      }
#line 1401 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 58: // boolean_term: boolean_term OP_BOOL_AND boolean_factor
#line 359 "MiniJavaParser.y"
                                              { 
            yylhs.value.as < Ast::Node * > () = new Ast::AndBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - boolean_term" << std::endl;
        }
#line 1409 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 59: // boolean_term: boolean_factor
#line 362 "MiniJavaParser.y"
                       { 
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); std::cout << "[Parser] - boolean_term" << std::endl;
        }
#line 1417 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 60: // boolean_factor: OP_BOOL_NOT boolean_factor
#line 368 "MiniJavaParser.y"
                                 { 
            yylhs.value.as < Ast::Node * > () = new Ast::UnaryNotBoolean(yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - boolean_factor" << std::endl;
        }
#line 1425 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 61: // boolean_factor: OPEN_PAR boolean_expression CLOSE_PAR
#line 371 "MiniJavaParser.y"
                                              { 
            yylhs.value.as < Ast::Node * > () = yystack_[1].value.as < Ast::Node * > (); std::cout << "[Parser] - boolean_factor" << std::endl;
        }
#line 1433 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 62: // boolean_factor: relational_expression
#line 374 "MiniJavaParser.y"
                              { 
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); std::cout << "[Parser] - boolean_factor" << std::endl;
        }
#line 1441 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 63: // arithmetic_expression: arithmetic_expression OP_SUB term
#line 380 "MiniJavaParser.y"
                                     {  
            yylhs.value.as < Ast::Node * > () = new Ast::SubExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());  std::cout << "[Parser] - expression" << std::endl;
        }
#line 1449 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 64: // arithmetic_expression: arithmetic_expression OP_ADD term
#line 383 "MiniJavaParser.y"
                                            { 
            yylhs.value.as < Ast::Node * > () = new Ast::SumExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - expression" << std::endl;
        }
#line 1457 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 65: // arithmetic_expression: term
#line 386 "MiniJavaParser.y"
           { 
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); 
        }
#line 1465 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 66: // relational_expression: arithmetic_expression OP_EQUAL arithmetic_expression
#line 393 "MiniJavaParser.y"
                                                                  { 
                  yylhs.value.as < Ast::Node * > () = yystack_[2].value.as < Ast::Node * > (); std::cout << "[Parser] - relational_expression" << std::endl;
            }
#line 1473 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 67: // relational_expression: arithmetic_expression OP_NOT_EQUAL arithmetic_expression
#line 396 "MiniJavaParser.y"
                                                                       { 
                  yylhs.value.as < Ast::Node * > () = yystack_[2].value.as < Ast::Node * > (); std::cout << "[Parser] - relational_expression" << std::endl;
            }
#line 1481 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 68: // relational_expression: arithmetic_expression OP_LESS_THAN arithmetic_expression
#line 399 "MiniJavaParser.y"
                                                                       { 
                  yylhs.value.as < Ast::Node * > () = yystack_[2].value.as < Ast::Node * > (); std::cout << "[Parser] - relational_expression" << std::endl;
            }
#line 1489 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 69: // relational_expression: arithmetic_expression OP_GREATER_THAN arithmetic_expression
#line 402 "MiniJavaParser.y"
                                                                          { 
                  yylhs.value.as < Ast::Node * > () = yystack_[2].value.as < Ast::Node * > (); std::cout << "[Parser] - relational_expression" << std::endl;
            }
#line 1497 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 70: // relational_expression: arithmetic_expression OP_LESS_EQUAL arithmetic_expression
#line 405 "MiniJavaParser.y"
                                                                        { 
                  yylhs.value.as < Ast::Node * > () = yystack_[2].value.as < Ast::Node * > (); std::cout << "[Parser] - relational_expression" << std::endl;
            }
#line 1505 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 71: // relational_expression: arithmetic_expression OP_GREATER_EQUAL arithmetic_expression
#line 408 "MiniJavaParser.y"
                                                                           { 
                  yylhs.value.as < Ast::Node * > () = yystack_[2].value.as < Ast::Node * > (); std::cout << "[Parser] - relational_expression" << std::endl;
            }
#line 1513 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 72: // relational_expression: arithmetic_expression
#line 411 "MiniJavaParser.y"
                              { 
                  yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); std::cout << "[Parser] - relational_expression" << std::endl;
            }
#line 1521 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 73: // term: term OP_MUL factor
#line 423 "MiniJavaParser.y"
                         { 
            yylhs.value.as < Ast::Node * > () = new Ast::MulExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - term" << std::endl;
        }
#line 1529 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 74: // term: term OP_DIV factor
#line 426 "MiniJavaParser.y"
                         {
            yylhs.value.as < Ast::Node * > () = new Ast::DivExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - term" << std::endl;
        }
#line 1537 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 75: // term: term OP_MOD factor
#line 429 "MiniJavaParser.y"
                             {
            yylhs.value.as < Ast::Node * > () = new Ast::DivExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - term" << std::endl;
        }
#line 1545 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 76: // term: unaryOptional factor
#line 432 "MiniJavaParser.y"
                           { 
          //  $$ = $1; 
        }
#line 1553 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 77: // unaryOptional: OP_ADD
#line 438 "MiniJavaParser.y"
             {  }
#line 1559 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 78: // unaryOptional: OP_SUB
#line 439 "MiniJavaParser.y"
             {  }
#line 1565 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 79: // unaryOptional: %empty
#line 440 "MiniJavaParser.y"
             {  }
#line 1571 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 80: // factor: INT_CONST
#line 444 "MiniJavaParser.y"
                { yylhs.value.as < Ast::Node * > () = new Ast::Number(yystack_[0].value.as < int > ()); std::cout<< "[Parser] - factor" << std::endl; 
      
      }
#line 1579 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 81: // factor: OPEN_PAR arithmetic_expression CLOSE_PAR
#line 447 "MiniJavaParser.y"
                                               { yylhs.value.as < Ast::Node * > () = yystack_[1].value.as < Ast::Node * > (); std::cout<< "[Parser] - factor" << std::endl; }
#line 1585 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 82: // factor: IDENTIFIER
#line 448 "MiniJavaParser.y"
                 {
          yylhs.value.as < Ast::Node * > () = new Ast::Identifier(yystack_[0].value.as < std::string > ()); std::cout<< "[Parser] - factor" << std::endl; 
      }
#line 1593 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 83: // factor: IDENTIFIER OPEN_PAR call_param_list CLOSE_PAR
#line 451 "MiniJavaParser.y"
                                                      { 
            yylhs.value.as < Ast::Node * > () = new Ast::CallStmt(yystack_[3].value.as < std::string > (), yystack_[1].value.as < Ast::Node * > ()); std::cout<< "[Parser] - factor" << std::endl; 
        }
#line 1601 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;

  case 84: // factor: IDENTIFIER array_access
#line 454 "MiniJavaParser.y"
                                { 
            yylhs.value.as < Ast::Node * > () = new Ast::ArrayVariable(yystack_[1].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ()); std::cout<< "[Parser] - factor" << std::endl; 
        }
#line 1609 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"
    break;


#line 1613 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"

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


  const signed char Parser::yypact_ninf_ = -126;

  const signed char Parser::yytable_ninf_ = -49;

  const signed char
  Parser::yypact_[] =
  {
      -5,   -26,    22,  -126,    -3,  -126,    15,    19,    73,    -7,
       8,  -126,  -126,    55,    73,    49,    57,    50,    52,  -126,
      54,  -126,  -126,    62,    59,  -126,    63,    61,    89,    65,
      15,    50,    65,    68,    91,  -126,    69,    64,  -126,  -126,
      71,  -126,    70,    15,    61,    67,  -126,  -126,    72,    15,
      -6,  -126,    74,    15,  -126,    76,    78,    13,    79,    80,
      43,    82,  -126,  -126,    -6,  -126,  -126,  -126,  -126,  -126,
    -126,    -6,    13,    13,    13,  -126,  -126,    13,    77,    99,
     100,  -126,    45,  -126,    14,    20,    -9,    75,     4,    13,
    -126,   103,  -126,  -126,    88,    87,    90,  -126,   -14,  -126,
      13,    13,    56,    56,    56,    56,    56,    56,    56,    56,
      20,    20,    20,    56,  -126,    44,  -126,  -126,    92,  -126,
      93,    94,    85,    95,    13,  -126,    98,    98,  -126,   100,
    -126,    58,    58,    58,    58,    58,    58,    14,    14,  -126,
    -126,  -126,    29,     4,  -126,    96,    97,   101,    13,  -126,
    -126,   102,    -6,   112,  -126,  -126,   104,  -126,  -126,  -126,
      85,  -126,   105,    98,  -126,  -126,  -126,  -126,  -126
  };

  const signed char
  Parser::yydefact_[] =
  {
       0,     0,     0,     2,     0,     1,     6,     0,    16,     0,
      11,    18,    19,     0,    16,     0,     0,    21,     0,     4,
       0,     3,    15,     0,     0,    25,     0,    23,     0,    11,
       6,    21,    11,     0,    26,    20,    14,     0,    10,     9,
       0,     5,     0,     6,    23,     0,    12,    24,     0,     6,
      28,    22,     0,     6,     7,     0,     0,    79,     0,     0,
      31,     0,    35,    34,    28,    36,    37,    38,    39,    40,
      13,    28,    79,    79,    79,    77,    78,    79,     0,    55,
      57,    59,    72,    62,    65,     0,    79,     0,    79,    79,
      30,     0,     8,    27,     0,     0,     0,    60,     0,    41,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
       0,     0,     0,    79,    80,    82,    76,    53,     0,    52,
       0,     0,    50,     0,    79,    17,     0,     0,    61,    56,
      58,    66,    67,    68,    69,    70,    71,    64,    63,    73,
      74,    75,     0,    79,    84,     0,     0,     0,    79,    47,
      29,     0,    28,    44,    46,    81,     0,    51,    54,    33,
      50,    32,     0,     0,    42,    83,    49,    45,    43
  };

  const signed char
  Parser::yypgoto_[] =
  {
    -126,  -126,  -126,   -25,  -126,  -126,   -15,  -126,  -126,   114,
    -126,  -126,   108,   106,   110,  -126,   -63,    18,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -125,  -126,    -8,   -24,  -126,
    -126,  -126,   -57,    81,    46,   -71,   -52,  -126,   -16,  -126,
     -34
  };

  const unsigned char
  Parser::yydefgoto_[] =
  {
       0,     2,     3,     8,    41,    19,    20,    37,    46,    13,
      14,    15,    26,    35,    27,    28,    61,    90,    91,    62,
      63,    64,    65,    66,   164,   153,    67,   121,   149,    68,
     118,    69,   122,    79,    80,    81,    82,    83,    84,    85,
     116
  };

  const short
  Parser::yytable_[] =
  {
      78,    93,   154,    97,     1,    39,   100,    55,    94,    56,
      57,    58,    59,    74,    38,    95,    96,    42,    50,     4,
      75,    76,     5,   128,    54,     7,    74,    77,    71,   119,
     130,     6,   123,    75,    76,    74,    16,   117,   168,    60,
      77,   -48,    75,    76,    17,   110,   111,   112,    18,    77,
     131,   132,   133,   134,   135,   136,   113,     9,   108,   109,
     -26,   142,    25,   114,    10,   115,   155,   151,   102,   103,
     104,   105,   106,   107,   108,   109,   139,   140,   141,    88,
     143,    89,    89,    11,    12,    75,    76,   108,   109,   162,
      21,   160,   137,   138,    23,    30,    24,    29,    31,    36,
      33,    34,    43,    25,    32,    18,    53,    45,    48,    47,
      52,    49,    72,    70,    73,    86,    87,    92,    99,   100,
     120,   101,   124,   125,   126,   148,   163,   127,    22,   145,
     146,   147,   152,   144,   150,   156,   166,   157,   158,    40,
     167,   165,   159,   161,    44,     0,   129,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,     0,    98
  };

  const short
  Parser::yycheck_[] =
  {
      57,    64,   127,    74,     9,    30,    20,    13,    71,    15,
      16,    17,    18,    22,    29,    72,    73,    32,    43,    45,
      29,    30,     0,    37,    49,    10,    22,    36,    53,    86,
     101,    34,    89,    29,    30,    22,    43,    46,   163,    45,
      36,    37,    29,    30,    36,    31,    32,    33,    40,    36,
     102,   103,   104,   105,   106,   107,    36,    38,    29,    30,
      10,   113,    12,    43,    45,    45,    37,   124,    23,    24,
      25,    26,    27,    28,    29,    30,   110,   111,   112,    36,
      36,    38,    38,    10,    11,    29,    30,    29,    30,   152,
      35,   148,   108,   109,    45,    41,    39,    45,    36,    10,
      37,    40,    34,    12,    45,    40,    34,    38,    37,    45,
      43,    41,    36,    39,    36,    36,    36,    35,    41,    20,
      45,    21,    19,    35,    37,    40,    14,    37,    14,    37,
      37,    37,    34,   115,    39,   143,   160,    41,    41,    31,
      35,    37,    41,    41,    34,    -1,   100,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77
  };

  const signed char
  Parser::yystos_[] =
  {
       0,     9,    50,    51,    45,     0,    34,    10,    52,    38,
      45,    10,    11,    58,    59,    60,    43,    36,    40,    54,
      55,    35,    58,    45,    39,    12,    61,    63,    64,    45,
      41,    36,    45,    37,    40,    62,    10,    56,    55,    52,
      61,    53,    55,    34,    63,    38,    57,    45,    37,    41,
      52,    62,    43,    34,    52,    13,    15,    16,    17,    18,
      45,    65,    68,    69,    70,    71,    72,    75,    78,    80,
      39,    52,    36,    36,    22,    29,    30,    36,    81,    82,
      83,    84,    85,    86,    87,    88,    36,    36,    36,    38,
      66,    67,    35,    65,    65,    81,    81,    84,    82,    41,
      20,    21,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    36,    43,    45,    89,    46,    79,    81,
      45,    76,    81,    81,    19,    35,    37,    37,    37,    83,
      84,    85,    85,    85,    85,    85,    85,    87,    87,    89,
      89,    89,    85,    36,    66,    37,    37,    37,    40,    77,
      39,    81,    34,    74,    74,    37,    76,    41,    41,    41,
      81,    41,    65,    14,    73,    37,    77,    35,    74
  };

  const signed char
  Parser::yyr1_[] =
  {
       0,    49,    50,    51,    52,    52,    52,    53,    54,    54,
      55,    55,    56,    57,    57,    58,    58,    59,    60,    60,
      61,    61,    62,    62,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    69,    70,    70,    70,    70,    70,    70,
      70,    71,    72,    73,    73,    74,    75,    76,    76,    77,
      77,    78,    79,    79,    80,    81,    82,    82,    83,    83,
      84,    84,    84,    85,    85,    85,    86,    86,    86,    86,
      86,    86,    86,    87,    87,    87,    87,    88,    88,    88,
      89,    89,    89,    89,    89
  };

  const signed char
  Parser::yyr2_[] =
  {
       0,     2,     1,     6,     3,     6,     0,     3,     7,     3,
       3,     0,     2,     3,     0,     2,     0,     9,     1,     1,
       2,     0,     3,     0,     3,     1,     0,     2,     0,     3,
       1,     0,     5,     5,     1,     1,     1,     1,     1,     1,
       1,     3,     6,     2,     0,     3,     5,     2,     0,     3,
       0,     5,     1,     1,     5,     1,     3,     1,     3,     1,
       2,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     2,     1,     1,     0,
       1,     3,     1,     4,     2
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
  "variable_decl_list", "variable_decl_SimpleBody", "variable_decl",
  "ident_list", "type", "array_optional", "method_decl_list",
  "method_decl", "method_type", "opt_param_decl_list", "param_list",
  "param_decl", "ref_optional", "stmt_list", "array_access",
  "array_access_opt", "assign_stmt", "call_stmt", "stmt", "return_stmt",
  "if_stmt", "else_optional", "block", "while_stmt", "call_param_list",
  "call_param_rest", "print_stmt", "print_param", "read_stmt",
  "expression", "boolean_expression", "boolean_term", "boolean_factor",
  "arithmetic_expression", "relational_expression", "term",
  "unaryOptional", "factor", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  Parser::yyrline_[] =
  {
       0,    88,    88,    94,   102,   105,   109,   114,   122,   126,
     134,   137,   141,   148,   151,   155,   158,   162,   168,   171,
     177,   180,   184,   187,   191,   197,   200,   204,   207,   210,
     217,   218,   223,   230,   235,   240,   245,   249,   253,   257,
     261,   274,   280,   286,   289,   293,   299,   307,   310,   314,
     317,   321,   327,   330,   337,   343,   348,   352,   359,   362,
     368,   371,   374,   380,   383,   386,   393,   396,   399,   402,
     405,   408,   411,   423,   426,   429,   432,   438,   439,   440,
     444,   447,   448,   451,   454
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
#line 2248 "/mnt/c/Users/josue/OneDrive/Documentos/VCode Proyectos/ProyectoCompiladores2/build/MiniJavaParser.cpp"

#line 463 "MiniJavaParser.y"


