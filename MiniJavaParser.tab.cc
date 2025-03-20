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





#line 71 "MiniJavaParser.tab.cc"


// "%code requires" blocks.
#line 12 "MiniJavaParser.y"

    #include <unordered_map>
    #include "ExprAst.hpp"
    class MiniJavaLexer;

#line 81 "MiniJavaParser.tab.cc"


# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

#line 10 "MiniJavaParser.y"
namespace Expr {
#line 217 "MiniJavaParser.tab.cc"




  /// A Bison parser.
  class Parser
  {
  public:
#ifdef YYSTYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define YYSTYPE in C++, use %define api.value.type"
# endif
    typedef YYSTYPE value_type;
#else
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class value_type
  {
  public:
    /// Type of *this.
    typedef value_type self_type;

    /// Empty construction.
    value_type () YY_NOEXCEPT
      : yyraw_ ()
    {}

    /// Construct and fill.
    template <typename T>
    value_type (YY_RVREF (T) t)
    {
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    value_type (const self_type&) = delete;
    /// Non copyable.
    self_type& operator= (const self_type&) = delete;
#endif

    /// Destruction, allowed only if empty.
    ~value_type () YY_NOEXCEPT
    {}

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
    }

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    value_type (const self_type&);
    /// Non copyable.
    self_type& operator= (const self_type&);
#endif

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yyraw_;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yyraw_;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // program
      // varmethod_decl_list
      // variable_decl_list
      // variable_decl_Body
      // variable_decl
      // array_optional
      // ident_list
      // type
      // method_decl_list
      // method_decl
      // method_body
      // method_type
      // opt_param_decl_list
      // param_list
      // param_decl
      // ref_optional
      // stmt_list
      // array_access
      // array_access_opt
      // assign_stmt
      // call_stmt
      // stmt
      // return_stmt
      // if_stmt
      // else_optional
      // block
      // while_stmt
      // call_param_list
      // call_param_rest
      // print_stmt
      // print_param
      // read_stmt
      // expression
      // boolean_expression
      // boolean_term
      // boolean_factor
      // arithmetic_expression
      // relational_expression
      // term
      // factor
      char dummy1[sizeof (Ast::Node *)];

      // INT_CONST
      // CONSTANT
      char dummy2[sizeof (int)];

      // IDENTIFIER
      // STRING_LITERAL
      char dummy3[sizeof (std::string)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me_;
      /// A buffer large enough to store any of the semantic values.
      char yyraw_[size];
    };
  };

#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;


    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const std::string& m)
        : std::runtime_error (m)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        YYEMPTY = -2,
    YYEOF = 0,                     // "end of file"
    YYerror = 256,                 // error
    YYUNDEF = 257,                 // "invalid token"
    EndOfFile = 258,               // EndOfFile
    Error = 259,                   // Error
    Hex = 260,                     // Hex
    Oct = 261,                     // Oct
    Dec = 262,                     // Dec
    Bin = 263,                     // Bin
    KW_CLASS = 264,                // KW_CLASS
    KW_INT = 265,                  // KW_INT
    KW_VOID = 266,                 // KW_VOID
    KW_REF = 267,                  // KW_REF
    KW_IF = 268,                   // KW_IF
    KW_ELSE = 269,                 // KW_ELSE
    KW_WHILE = 270,                // KW_WHILE
    KW_RETURN = 271,               // KW_RETURN
    KW_PRINT = 272,                // KW_PRINT
    KW_READ = 273,                 // KW_READ
    OP_ASSIGN = 274,               // OP_ASSIGN
    OP_BOOL_OR = 275,              // OP_BOOL_OR
    OP_BOOL_AND = 276,             // OP_BOOL_AND
    OP_BOOL_NOT = 277,             // OP_BOOL_NOT
    OP_EQUAL = 278,                // OP_EQUAL
    OP_NOT_EQUAL = 279,            // OP_NOT_EQUAL
    OP_LESS_THAN = 280,            // OP_LESS_THAN
    OP_GREATER_THAN = 281,         // OP_GREATER_THAN
    OP_LESS_EQUAL = 282,           // OP_LESS_EQUAL
    OP_GREATER_EQUAL = 283,        // OP_GREATER_EQUAL
    OP_ADD = 284,                  // OP_ADD
    OP_SUB = 285,                  // OP_SUB
    OP_MUL = 286,                  // OP_MUL
    OP_DIV = 287,                  // OP_DIV
    OP_MOD = 288,                  // OP_MOD
    OPEN_CURLY = 289,              // OPEN_CURLY
    CLOSE_CURLY = 290,             // CLOSE_CURLY
    OPEN_PAR = 291,                // OPEN_PAR
    CLOSE_PAR = 292,               // CLOSE_PAR
    OPEN_BRACKET = 293,            // OPEN_BRACKET
    CLOSE_BRACKET = 294,           // CLOSE_BRACKET
    COMMA = 295,                   // COMMA
    SEMICOLON = 296,               // SEMICOLON
    COMMENT = 297,                 // COMMENT
    INT_CONST = 298,               // INT_CONST
    CONSTANT = 299,                // CONSTANT
    IDENTIFIER = 300,              // IDENTIFIER
    STRING_LITERAL = 301,          // STRING_LITERAL
    ERROR = 302,                   // ERROR
    LOWER_THAN_OPEN_PAR = 303      // LOWER_THAN_OPEN_PAR
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 49, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_EndOfFile = 3,                         // EndOfFile
        S_Error = 4,                             // Error
        S_Hex = 5,                               // Hex
        S_Oct = 6,                               // Oct
        S_Dec = 7,                               // Dec
        S_Bin = 8,                               // Bin
        S_KW_CLASS = 9,                          // KW_CLASS
        S_KW_INT = 10,                           // KW_INT
        S_KW_VOID = 11,                          // KW_VOID
        S_KW_REF = 12,                           // KW_REF
        S_KW_IF = 13,                            // KW_IF
        S_KW_ELSE = 14,                          // KW_ELSE
        S_KW_WHILE = 15,                         // KW_WHILE
        S_KW_RETURN = 16,                        // KW_RETURN
        S_KW_PRINT = 17,                         // KW_PRINT
        S_KW_READ = 18,                          // KW_READ
        S_OP_ASSIGN = 19,                        // OP_ASSIGN
        S_OP_BOOL_OR = 20,                       // OP_BOOL_OR
        S_OP_BOOL_AND = 21,                      // OP_BOOL_AND
        S_OP_BOOL_NOT = 22,                      // OP_BOOL_NOT
        S_OP_EQUAL = 23,                         // OP_EQUAL
        S_OP_NOT_EQUAL = 24,                     // OP_NOT_EQUAL
        S_OP_LESS_THAN = 25,                     // OP_LESS_THAN
        S_OP_GREATER_THAN = 26,                  // OP_GREATER_THAN
        S_OP_LESS_EQUAL = 27,                    // OP_LESS_EQUAL
        S_OP_GREATER_EQUAL = 28,                 // OP_GREATER_EQUAL
        S_OP_ADD = 29,                           // OP_ADD
        S_OP_SUB = 30,                           // OP_SUB
        S_OP_MUL = 31,                           // OP_MUL
        S_OP_DIV = 32,                           // OP_DIV
        S_OP_MOD = 33,                           // OP_MOD
        S_OPEN_CURLY = 34,                       // OPEN_CURLY
        S_CLOSE_CURLY = 35,                      // CLOSE_CURLY
        S_OPEN_PAR = 36,                         // OPEN_PAR
        S_CLOSE_PAR = 37,                        // CLOSE_PAR
        S_OPEN_BRACKET = 38,                     // OPEN_BRACKET
        S_CLOSE_BRACKET = 39,                    // CLOSE_BRACKET
        S_COMMA = 40,                            // COMMA
        S_SEMICOLON = 41,                        // SEMICOLON
        S_COMMENT = 42,                          // COMMENT
        S_INT_CONST = 43,                        // INT_CONST
        S_CONSTANT = 44,                         // CONSTANT
        S_IDENTIFIER = 45,                       // IDENTIFIER
        S_STRING_LITERAL = 46,                   // STRING_LITERAL
        S_ERROR = 47,                            // ERROR
        S_LOWER_THAN_OPEN_PAR = 48,              // LOWER_THAN_OPEN_PAR
        S_YYACCEPT = 49,                         // $accept
        S_input = 50,                            // input
        S_program = 51,                          // program
        S_varmethod_decl_list = 52,              // varmethod_decl_list
        S_variable_decl_list = 53,               // variable_decl_list
        S_variable_decl_Body = 54,               // variable_decl_Body
        S_variable_decl = 55,                    // variable_decl
        S_array_optional = 56,                   // array_optional
        S_ident_list = 57,                       // ident_list
        S_type = 58,                             // type
        S_method_decl_list = 59,                 // method_decl_list
        S_method_decl = 60,                      // method_decl
        S_method_body = 61,                      // method_body
        S_method_type = 62,                      // method_type
        S_opt_param_decl_list = 63,              // opt_param_decl_list
        S_param_list = 64,                       // param_list
        S_param_decl = 65,                       // param_decl
        S_ref_optional = 66,                     // ref_optional
        S_stmt_list = 67,                        // stmt_list
        S_array_access = 68,                     // array_access
        S_array_access_opt = 69,                 // array_access_opt
        S_assign_stmt = 70,                      // assign_stmt
        S_call_stmt = 71,                        // call_stmt
        S_stmt = 72,                             // stmt
        S_return_stmt = 73,                      // return_stmt
        S_if_stmt = 74,                          // if_stmt
        S_else_optional = 75,                    // else_optional
        S_block = 76,                            // block
        S_while_stmt = 77,                       // while_stmt
        S_call_param_list = 78,                  // call_param_list
        S_call_param_rest = 79,                  // call_param_rest
        S_print_stmt = 80,                       // print_stmt
        S_print_param = 81,                      // print_param
        S_read_stmt = 82,                        // read_stmt
        S_expression = 83,                       // expression
        S_boolean_expression = 84,               // boolean_expression
        S_boolean_term = 85,                     // boolean_term
        S_boolean_factor = 86,                   // boolean_factor
        S_arithmetic_expression = 87,            // arithmetic_expression
        S_relational_expression = 88,            // relational_expression
        S_term = 89,                             // term
        S_factor = 90                            // factor
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol () YY_NOEXCEPT
        : value ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value ()
      {
        switch (this->kind ())
    {
      case symbol_kind::S_program: // program
      case symbol_kind::S_varmethod_decl_list: // varmethod_decl_list
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
        value.move< Ast::Node * > (std::move (that.value));
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
      case symbol_kind::S_CONSTANT: // CONSTANT
        value.move< int > (std::move (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        value.move< std::string > (std::move (that.value));
        break;

      default:
        break;
    }

      }
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructors for typed symbols.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t)
        : Base (t)
      {}
#else
      basic_symbol (typename Base::kind_type t)
        : Base (t)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Ast::Node *&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Ast::Node *& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, int&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const int& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v)
        : Base (t)
        , value (v)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }



      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        // User destructor.
        symbol_kind_type yykind = this->kind ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yykind)
        {
       default:
          break;
        }

        // Value type destructor.
switch (yykind)
    {
      case symbol_kind::S_program: // program
      case symbol_kind::S_varmethod_decl_list: // varmethod_decl_list
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
        value.template destroy< Ast::Node * > ();
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
      case symbol_kind::S_CONSTANT: // CONSTANT
        value.template destroy< int > ();
        break;

      case symbol_kind::S_IDENTIFIER: // IDENTIFIER
      case symbol_kind::S_STRING_LITERAL: // STRING_LITERAL
        value.template destroy< std::string > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// The user-facing name of this symbol.
      std::string name () const YY_NOEXCEPT
      {
        return Parser::symbol_name (this->kind ());
      }

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      value_type value;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Default constructor.
      by_kind () YY_NOEXCEPT;

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that) YY_NOEXCEPT;
#endif

      /// Copy constructor.
      by_kind (const by_kind& that) YY_NOEXCEPT;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t) YY_NOEXCEPT;



      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {
      /// Superclass.
      typedef basic_symbol<by_kind> super_type;

      /// Empty symbol.
      symbol_type () YY_NOEXCEPT {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok)
        : super_type (token_kind_type (tok))
#else
      symbol_type (int tok)
        : super_type (token_kind_type (tok))
#endif
      {}
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, int v)
        : super_type (token_kind_type (tok), std::move (v))
#else
      symbol_type (int tok, const int& v)
        : super_type (token_kind_type (tok), v)
#endif
      {}
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v)
        : super_type (token_kind_type (tok), std::move (v))
#else
      symbol_type (int tok, const std::string& v)
        : super_type (token_kind_type (tok), v)
#endif
      {}
    };

    /// Build a parser object.
    Parser (MiniJavaLexer& lexer_yyarg, Ast::Node *&root_yyarg);
    virtual ~Parser ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    Parser (const Parser&) = delete;
    /// Non copyable.
    Parser& operator= (const Parser&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param msg    a description of the syntax error.
    virtual void error (const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static std::string symbol_name (symbol_kind_type yysymbol);

    // Implementation of make_symbol for each token kind.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYEOF ()
      {
        return symbol_type (token::YYEOF);
      }
#else
      static
      symbol_type
      make_YYEOF ()
      {
        return symbol_type (token::YYEOF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYerror ()
      {
        return symbol_type (token::YYerror);
      }
#else
      static
      symbol_type
      make_YYerror ()
      {
        return symbol_type (token::YYerror);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYUNDEF ()
      {
        return symbol_type (token::YYUNDEF);
      }
#else
      static
      symbol_type
      make_YYUNDEF ()
      {
        return symbol_type (token::YYUNDEF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EndOfFile ()
      {
        return symbol_type (token::EndOfFile);
      }
#else
      static
      symbol_type
      make_EndOfFile ()
      {
        return symbol_type (token::EndOfFile);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_Error ()
      {
        return symbol_type (token::Error);
      }
#else
      static
      symbol_type
      make_Error ()
      {
        return symbol_type (token::Error);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_Hex ()
      {
        return symbol_type (token::Hex);
      }
#else
      static
      symbol_type
      make_Hex ()
      {
        return symbol_type (token::Hex);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_Oct ()
      {
        return symbol_type (token::Oct);
      }
#else
      static
      symbol_type
      make_Oct ()
      {
        return symbol_type (token::Oct);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_Dec ()
      {
        return symbol_type (token::Dec);
      }
#else
      static
      symbol_type
      make_Dec ()
      {
        return symbol_type (token::Dec);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_Bin ()
      {
        return symbol_type (token::Bin);
      }
#else
      static
      symbol_type
      make_Bin ()
      {
        return symbol_type (token::Bin);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_KW_CLASS ()
      {
        return symbol_type (token::KW_CLASS);
      }
#else
      static
      symbol_type
      make_KW_CLASS ()
      {
        return symbol_type (token::KW_CLASS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_KW_INT ()
      {
        return symbol_type (token::KW_INT);
      }
#else
      static
      symbol_type
      make_KW_INT ()
      {
        return symbol_type (token::KW_INT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_KW_VOID ()
      {
        return symbol_type (token::KW_VOID);
      }
#else
      static
      symbol_type
      make_KW_VOID ()
      {
        return symbol_type (token::KW_VOID);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_KW_REF ()
      {
        return symbol_type (token::KW_REF);
      }
#else
      static
      symbol_type
      make_KW_REF ()
      {
        return symbol_type (token::KW_REF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_KW_IF ()
      {
        return symbol_type (token::KW_IF);
      }
#else
      static
      symbol_type
      make_KW_IF ()
      {
        return symbol_type (token::KW_IF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_KW_ELSE ()
      {
        return symbol_type (token::KW_ELSE);
      }
#else
      static
      symbol_type
      make_KW_ELSE ()
      {
        return symbol_type (token::KW_ELSE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_KW_WHILE ()
      {
        return symbol_type (token::KW_WHILE);
      }
#else
      static
      symbol_type
      make_KW_WHILE ()
      {
        return symbol_type (token::KW_WHILE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_KW_RETURN ()
      {
        return symbol_type (token::KW_RETURN);
      }
#else
      static
      symbol_type
      make_KW_RETURN ()
      {
        return symbol_type (token::KW_RETURN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_KW_PRINT ()
      {
        return symbol_type (token::KW_PRINT);
      }
#else
      static
      symbol_type
      make_KW_PRINT ()
      {
        return symbol_type (token::KW_PRINT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_KW_READ ()
      {
        return symbol_type (token::KW_READ);
      }
#else
      static
      symbol_type
      make_KW_READ ()
      {
        return symbol_type (token::KW_READ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_ASSIGN ()
      {
        return symbol_type (token::OP_ASSIGN);
      }
#else
      static
      symbol_type
      make_OP_ASSIGN ()
      {
        return symbol_type (token::OP_ASSIGN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_BOOL_OR ()
      {
        return symbol_type (token::OP_BOOL_OR);
      }
#else
      static
      symbol_type
      make_OP_BOOL_OR ()
      {
        return symbol_type (token::OP_BOOL_OR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_BOOL_AND ()
      {
        return symbol_type (token::OP_BOOL_AND);
      }
#else
      static
      symbol_type
      make_OP_BOOL_AND ()
      {
        return symbol_type (token::OP_BOOL_AND);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_BOOL_NOT ()
      {
        return symbol_type (token::OP_BOOL_NOT);
      }
#else
      static
      symbol_type
      make_OP_BOOL_NOT ()
      {
        return symbol_type (token::OP_BOOL_NOT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_EQUAL ()
      {
        return symbol_type (token::OP_EQUAL);
      }
#else
      static
      symbol_type
      make_OP_EQUAL ()
      {
        return symbol_type (token::OP_EQUAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_NOT_EQUAL ()
      {
        return symbol_type (token::OP_NOT_EQUAL);
      }
#else
      static
      symbol_type
      make_OP_NOT_EQUAL ()
      {
        return symbol_type (token::OP_NOT_EQUAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_LESS_THAN ()
      {
        return symbol_type (token::OP_LESS_THAN);
      }
#else
      static
      symbol_type
      make_OP_LESS_THAN ()
      {
        return symbol_type (token::OP_LESS_THAN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_GREATER_THAN ()
      {
        return symbol_type (token::OP_GREATER_THAN);
      }
#else
      static
      symbol_type
      make_OP_GREATER_THAN ()
      {
        return symbol_type (token::OP_GREATER_THAN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_LESS_EQUAL ()
      {
        return symbol_type (token::OP_LESS_EQUAL);
      }
#else
      static
      symbol_type
      make_OP_LESS_EQUAL ()
      {
        return symbol_type (token::OP_LESS_EQUAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_GREATER_EQUAL ()
      {
        return symbol_type (token::OP_GREATER_EQUAL);
      }
#else
      static
      symbol_type
      make_OP_GREATER_EQUAL ()
      {
        return symbol_type (token::OP_GREATER_EQUAL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_ADD ()
      {
        return symbol_type (token::OP_ADD);
      }
#else
      static
      symbol_type
      make_OP_ADD ()
      {
        return symbol_type (token::OP_ADD);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_SUB ()
      {
        return symbol_type (token::OP_SUB);
      }
#else
      static
      symbol_type
      make_OP_SUB ()
      {
        return symbol_type (token::OP_SUB);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_MUL ()
      {
        return symbol_type (token::OP_MUL);
      }
#else
      static
      symbol_type
      make_OP_MUL ()
      {
        return symbol_type (token::OP_MUL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_DIV ()
      {
        return symbol_type (token::OP_DIV);
      }
#else
      static
      symbol_type
      make_OP_DIV ()
      {
        return symbol_type (token::OP_DIV);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OP_MOD ()
      {
        return symbol_type (token::OP_MOD);
      }
#else
      static
      symbol_type
      make_OP_MOD ()
      {
        return symbol_type (token::OP_MOD);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OPEN_CURLY ()
      {
        return symbol_type (token::OPEN_CURLY);
      }
#else
      static
      symbol_type
      make_OPEN_CURLY ()
      {
        return symbol_type (token::OPEN_CURLY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CLOSE_CURLY ()
      {
        return symbol_type (token::CLOSE_CURLY);
      }
#else
      static
      symbol_type
      make_CLOSE_CURLY ()
      {
        return symbol_type (token::CLOSE_CURLY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OPEN_PAR ()
      {
        return symbol_type (token::OPEN_PAR);
      }
#else
      static
      symbol_type
      make_OPEN_PAR ()
      {
        return symbol_type (token::OPEN_PAR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CLOSE_PAR ()
      {
        return symbol_type (token::CLOSE_PAR);
      }
#else
      static
      symbol_type
      make_CLOSE_PAR ()
      {
        return symbol_type (token::CLOSE_PAR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OPEN_BRACKET ()
      {
        return symbol_type (token::OPEN_BRACKET);
      }
#else
      static
      symbol_type
      make_OPEN_BRACKET ()
      {
        return symbol_type (token::OPEN_BRACKET);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CLOSE_BRACKET ()
      {
        return symbol_type (token::CLOSE_BRACKET);
      }
#else
      static
      symbol_type
      make_CLOSE_BRACKET ()
      {
        return symbol_type (token::CLOSE_BRACKET);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMMA ()
      {
        return symbol_type (token::COMMA);
      }
#else
      static
      symbol_type
      make_COMMA ()
      {
        return symbol_type (token::COMMA);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMICOLON ()
      {
        return symbol_type (token::SEMICOLON);
      }
#else
      static
      symbol_type
      make_SEMICOLON ()
      {
        return symbol_type (token::SEMICOLON);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMMENT ()
      {
        return symbol_type (token::COMMENT);
      }
#else
      static
      symbol_type
      make_COMMENT ()
      {
        return symbol_type (token::COMMENT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT_CONST (int v)
      {
        return symbol_type (token::INT_CONST, std::move (v));
      }
#else
      static
      symbol_type
      make_INT_CONST (const int& v)
      {
        return symbol_type (token::INT_CONST, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONSTANT (int v)
      {
        return symbol_type (token::CONSTANT, std::move (v));
      }
#else
      static
      symbol_type
      make_CONSTANT (const int& v)
      {
        return symbol_type (token::CONSTANT, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IDENTIFIER (std::string v)
      {
        return symbol_type (token::IDENTIFIER, std::move (v));
      }
#else
      static
      symbol_type
      make_IDENTIFIER (const std::string& v)
      {
        return symbol_type (token::IDENTIFIER, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRING_LITERAL (std::string v)
      {
        return symbol_type (token::STRING_LITERAL, std::move (v));
      }
#else
      static
      symbol_type
      make_STRING_LITERAL (const std::string& v)
      {
        return symbol_type (token::STRING_LITERAL, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ERROR ()
      {
        return symbol_type (token::ERROR);
      }
#else
      static
      symbol_type
      make_ERROR ()
      {
        return symbol_type (token::ERROR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LOWER_THAN_OPEN_PAR ()
      {
        return symbol_type (token::LOWER_THAN_OPEN_PAR);
      }
#else
      static
      symbol_type
      make_LOWER_THAN_OPEN_PAR ()
      {
        return symbol_type (token::LOWER_THAN_OPEN_PAR);
      }
#endif


    class context
    {
    public:
      context (const Parser& yyparser, const symbol_type& yyla);
      const symbol_type& lookahead () const YY_NOEXCEPT { return yyla_; }
      symbol_kind_type token () const YY_NOEXCEPT { return yyla_.kind (); }
      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      const Parser& yyparser_;
      const symbol_type& yyla_;
    };

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    Parser (const Parser&);
    /// Non copyable.
    Parser& operator= (const Parser&);
#endif


    /// Stored state numbers (used for stacks).
    typedef unsigned char state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT;

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT;

    static const short yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_kind_type enum.
    static symbol_kind_type yytranslate_ (int t) YY_NOEXCEPT;

    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *yystr);

    /// For a symbol, its name in clear.
    static const char* const yytname_[];


    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const signed char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const short yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const unsigned char yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const short yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
    // state STATE-NUM.
    static const signed char yystos_[];

    // YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
    static const signed char yyr1_[];

    // YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
    static const signed char yyr2_[];


#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200) YY_NOEXCEPT
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range) YY_NOEXCEPT
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1) YY_NOEXCEPT;

    /// Constants.
    enum
    {
      yylast_ = 166,     ///< Last index in yytable_.
      yynnts_ = 42,  ///< Number of nonterminal symbols.
      yyfinal_ = 5 ///< Termination state number.
    };


    // User arguments.
    MiniJavaLexer& lexer;
    Ast::Node *&root;

  };


#line 10 "MiniJavaParser.y"
} // Expr
#line 2115 "MiniJavaParser.tab.cc"








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
#line 2195 "MiniJavaParser.tab.cc"

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
      case symbol_kind::S_varmethod_decl_list: // varmethod_decl_list
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
      case symbol_kind::S_varmethod_decl_list: // varmethod_decl_list
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
      case symbol_kind::S_varmethod_decl_list: // varmethod_decl_list
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
      case symbol_kind::S_varmethod_decl_list: // varmethod_decl_list
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
      case symbol_kind::S_varmethod_decl_list: // varmethod_decl_list
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
      case symbol_kind::S_varmethod_decl_list: // varmethod_decl_list
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
      case symbol_kind::S_varmethod_decl_list: // varmethod_decl_list
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
#line 3042 "MiniJavaParser.tab.cc"
    break;

  case 3: // program: KW_CLASS IDENTIFIER OPEN_CURLY varmethod_decl_list method_decl_list CLOSE_CURLY
#line 93 "MiniJavaParser.y"
                                                                                      {
             std::cout << "[Parser] - Programa creado con declaraciones separadas" << std::endl;
             yylhs.value.as < Ast::Node * > () = new Ast::Program(yystack_[4].value.as < std::string > (), yystack_[2].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > ());
      }
#line 3051 "MiniJavaParser.tab.cc"
    break;

  case 4: // varmethod_decl_list: KW_INT IDENTIFIER method_body method_decl_list
#line 102 "MiniJavaParser.y"
                                                     { //Es Metodo entonces se detiene

        std::cout << "[Parser] - MethodDeclList "<< std::endl;

         yylhs.value.as < Ast::Node * > () =  new Ast::VarMethodDeclList(new Ast::MethodDeclList(new Ast::MethodDecl(new Ast::MethodType("INT"), yystack_[2].value.as < std::string > (), yystack_[1].value.as < Ast::Node * > ()) , yystack_[0].value.as < Ast::Node * > ()), nullptr);
      }
#line 3062 "MiniJavaParser.tab.cc"
    break;

  case 5: // varmethod_decl_list: KW_INT IDENTIFIER method_body
#line 109 "MiniJavaParser.y"
                                    { //Es Metodo entonces se detiene

        std::cout << "[Parser] - MethodDeclList "<< std::endl;

         yylhs.value.as < Ast::Node * > () = new Ast::VarMethodDeclList(new Ast::MethodDeclList(new Ast::MethodDecl(new Ast::MethodType("INT"), yystack_[1].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ()) , nullptr), nullptr);     
      }
#line 3073 "MiniJavaParser.tab.cc"
    break;

  case 6: // varmethod_decl_list: variable_decl variable_decl_list varmethod_decl_list
#line 118 "MiniJavaParser.y"
                                                          { 
        std::cout << "[Parser] - variable_decl_list "<< std::endl;

        yylhs.value.as < Ast::Node * > () = new Ast::VarMethodDeclList(new Ast::VariableDeclList(yystack_[2].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > ()),  yystack_[0].value.as < Ast::Node * > ());
      
      }
#line 3084 "MiniJavaParser.tab.cc"
    break;

  case 7: // varmethod_decl_list: variable_decl varmethod_decl_list
#line 124 "MiniJavaParser.y"
                                         { 
        std::cout << "[Parser] - variable_decl_list "<< std::endl;
        yylhs.value.as < Ast::Node * > () = new Ast::VarMethodDeclList( new Ast::VariableDeclList(yystack_[1].value.as < Ast::Node * > (), nullptr), yystack_[0].value.as < Ast::Node * > ());
      }
#line 3093 "MiniJavaParser.tab.cc"
    break;

  case 8: // varmethod_decl_list: variable_decl variable_decl_list
#line 129 "MiniJavaParser.y"
                                       { 
        std::cout << "[Parser] - variable_decl_list "<< std::endl;

        yylhs.value.as < Ast::Node * > () = new Ast::VarMethodDeclList(new Ast::VariableDeclList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()),  nullptr);
      
      }
#line 3104 "MiniJavaParser.tab.cc"
    break;

  case 9: // varmethod_decl_list: variable_decl
#line 136 "MiniJavaParser.y"
                      {
        yylhs.value.as < Ast::Node * > () = new Ast::VarMethodDeclList(new Ast::VariableDeclList(yystack_[0].value.as < Ast::Node * > (), nullptr),  nullptr);
      }
#line 3112 "MiniJavaParser.tab.cc"
    break;

  case 10: // varmethod_decl_list: %empty
#line 141 "MiniJavaParser.y"
               {}
#line 3118 "MiniJavaParser.tab.cc"
    break;

  case 11: // variable_decl_list: variable_decl variable_decl_list
#line 147 "MiniJavaParser.y"
                                       { 
        std::cout << "[Parser] - variable_decl_list "<< std::endl;
        yylhs.value.as < Ast::Node * > () = new Ast::VariableDeclList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
      }
#line 3127 "MiniJavaParser.tab.cc"
    break;

  case 12: // variable_decl_list: variable_decl
#line 151 "MiniJavaParser.y"
                     { 
        std::cout << "[Parser] - variable_decl_list "<< std::endl;
      yylhs.value.as < Ast::Node * > () = new Ast::VariableDeclList(yystack_[0].value.as < Ast::Node * > (), nullptr);
      }
#line 3136 "MiniJavaParser.tab.cc"
    break;

  case 13: // variable_decl_list: %empty
#line 156 "MiniJavaParser.y"
               {}
#line 3142 "MiniJavaParser.tab.cc"
    break;

  case 14: // variable_decl_Body: ident_list SEMICOLON
#line 161 "MiniJavaParser.y"
                       { 

      yylhs.value.as < Ast::Node * > () = new Ast::VariableDecl_Body(yystack_[1].value.as < Ast::Node * > ()); std::cout << "[Parser] - variable_decl_Body" << std::endl;
      }
#line 3151 "MiniJavaParser.tab.cc"
    break;

  case 15: // variable_decl: KW_INT IDENTIFIER OPEN_BRACKET INT_CONST CLOSE_BRACKET variable_decl_Body
#line 169 "MiniJavaParser.y"
                                                                                 {
            std::cout << "[Parser] - variable_decl -ARRAY" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::VariableDecl(new Ast::Type("INT", new Ast::ArrayOptional(yystack_[2].value.as < int > ())), yystack_[4].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - variable_decl" << std::endl;
      }
#line 3160 "MiniJavaParser.tab.cc"
    break;

  case 16: // variable_decl: KW_INT IDENTIFIER variable_decl_Body
#line 173 "MiniJavaParser.y"
                                              {
            std::cout << "[Parser] - variable_decl -NORMAL" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::VariableDecl(new Ast::Type("INT", nullptr), yystack_[1].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - variable_decl" << std::endl;
       }
#line 3169 "MiniJavaParser.tab.cc"
    break;

  case 17: // array_optional: OPEN_BRACKET INT_CONST CLOSE_BRACKET
#line 181 "MiniJavaParser.y"
                                           { 
            std::cout << "[Parser] - array_optional" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ArrayOptional(yystack_[1].value.as < int > ()); 
      }
#line 3178 "MiniJavaParser.tab.cc"
    break;

  case 18: // array_optional: %empty
#line 185 "MiniJavaParser.y"
               {}
#line 3184 "MiniJavaParser.tab.cc"
    break;

  case 19: // ident_list: COMMA IDENTIFIER ident_list
#line 205 "MiniJavaParser.y"
                                  { 
            yylhs.value.as < Ast::Node * > () = new Ast::IdentList(yystack_[1].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ());  std::cout << "[Parser] - ident_list" << std::endl;
      }
#line 3192 "MiniJavaParser.tab.cc"
    break;

  case 20: // ident_list: %empty
#line 208 "MiniJavaParser.y"
               {}
#line 3198 "MiniJavaParser.tab.cc"
    break;

  case 21: // type: KW_INT array_optional
#line 212 "MiniJavaParser.y"
                            { 
            yylhs.value.as < Ast::Node * > () = new Ast::Type("INT", yystack_[0].value.as < Ast::Node * > ()); std::cout << "[Parser] - type" << std::endl;
      }
#line 3206 "MiniJavaParser.tab.cc"
    break;

  case 22: // method_decl_list: method_decl method_decl_list
#line 221 "MiniJavaParser.y"
                                   {
          std::cout << "[Parser] - method_decl_list" << std::endl;  
          yylhs.value.as < Ast::Node * > () = new Ast::MethodDeclList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
       
      }
#line 3216 "MiniJavaParser.tab.cc"
    break;

  case 23: // method_decl_list: %empty
#line 226 "MiniJavaParser.y"
                 {}
#line 3222 "MiniJavaParser.tab.cc"
    break;

  case 24: // method_decl: method_type IDENTIFIER method_body
#line 230 "MiniJavaParser.y"
                                        {
        std::cout << "[Parser] - method_decl" << std::endl;    
        yylhs.value.as < Ast::Node * > () = new Ast::MethodDecl(yystack_[2].value.as < Ast::Node * > (), yystack_[1].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ());
      }
#line 3231 "MiniJavaParser.tab.cc"
    break;

  case 25: // method_body: OPEN_PAR opt_param_decl_list CLOSE_PAR OPEN_CURLY variable_decl_list stmt_list CLOSE_CURLY
#line 237 "MiniJavaParser.y"
                                                                                                 {
      std::cout << "[Parser] - method_body" << std::endl;
      yylhs.value.as < Ast::Node * > () = new Ast::MethodDecl_Body(yystack_[5].value.as < Ast::Node * > (), yystack_[2].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > ()); 
      }
#line 3240 "MiniJavaParser.tab.cc"
    break;

  case 26: // method_type: KW_INT
#line 244 "MiniJavaParser.y"
             { 
            std::cout << "[Parser] - INT method_type" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::MethodType("INT");
      }
#line 3249 "MiniJavaParser.tab.cc"
    break;

  case 27: // method_type: KW_VOID
#line 248 "MiniJavaParser.y"
              { 
       std::cout << "[Parser] - VOID method_type" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::MethodType("VOID"); 
      }
#line 3258 "MiniJavaParser.tab.cc"
    break;

  case 28: // opt_param_decl_list: param_decl param_list
#line 255 "MiniJavaParser.y"
                            { 
         std::cout << "[Parser] - opt_param_decl_list" << std::endl;   
         yylhs.value.as < Ast::Node * > () = new Ast::OptParamDeclList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
      }
#line 3267 "MiniJavaParser.tab.cc"
    break;

  case 29: // opt_param_decl_list: %empty
#line 259 "MiniJavaParser.y"
              {}
#line 3273 "MiniJavaParser.tab.cc"
    break;

  case 30: // param_list: COMMA param_decl param_list
#line 263 "MiniJavaParser.y"
                                  { 
             std::cout << "[Parser] - param_list" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ParamList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
      }
#line 3282 "MiniJavaParser.tab.cc"
    break;

  case 31: // param_list: %empty
#line 267 "MiniJavaParser.y"
                {}
#line 3288 "MiniJavaParser.tab.cc"
    break;

  case 32: // param_decl: ref_optional type IDENTIFIER
#line 271 "MiniJavaParser.y"
                                   { 
             std::cout << "[Parser] - param_decl" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ParamDecl(yystack_[2].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < std::string > ());
      }
#line 3297 "MiniJavaParser.tab.cc"
    break;

  case 33: // ref_optional: KW_REF
#line 278 "MiniJavaParser.y"
             { 
            std::cout << "[Parser] - ref_optional" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::RefOptional(true); 
      }
#line 3306 "MiniJavaParser.tab.cc"
    break;

  case 34: // ref_optional: %empty
#line 282 "MiniJavaParser.y"
               {}
#line 3312 "MiniJavaParser.tab.cc"
    break;

  case 35: // stmt_list: stmt stmt_list
#line 286 "MiniJavaParser.y"
                     { 
        std::cout << "[Parser] - stmt_list" << std::endl;   
         yylhs.value.as < Ast::Node * > () = new Ast::StmtList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
      }
#line 3321 "MiniJavaParser.tab.cc"
    break;

  case 36: // stmt_list: %empty
#line 290 "MiniJavaParser.y"
                 {}
#line 3327 "MiniJavaParser.tab.cc"
    break;

  case 37: // array_access: OPEN_BRACKET expression CLOSE_BRACKET
#line 293 "MiniJavaParser.y"
                                            {
             std::cout << "[Parser] - array_access" << std::endl;
             std::cout << "Array access2: " << yystack_[1].value.as < Ast::Node * > () << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ArrayAccess(yystack_[1].value.as < Ast::Node * > ());
           
      }
#line 3338 "MiniJavaParser.tab.cc"
    break;

  case 38: // array_access_opt: array_access
#line 302 "MiniJavaParser.y"
                   { yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); }
#line 3344 "MiniJavaParser.tab.cc"
    break;

  case 39: // array_access_opt: %empty
#line 303 "MiniJavaParser.y"
             {  }
#line 3350 "MiniJavaParser.tab.cc"
    break;

  case 40: // assign_stmt: IDENTIFIER array_access_opt OP_ASSIGN expression SEMICOLON
#line 308 "MiniJavaParser.y"
                                                                 {
            yylhs.value.as < Ast::Node * > () = new Ast::AssignStmt(yystack_[4].value.as < std::string > (), yystack_[3].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > ());
      }
#line 3358 "MiniJavaParser.tab.cc"
    break;

  case 41: // call_stmt: IDENTIFIER OPEN_PAR call_param_list CLOSE_PAR SEMICOLON
#line 315 "MiniJavaParser.y"
                                                            {
         yylhs.value.as < Ast::Node * > () = new Ast::CallStmt(yystack_[4].value.as < std::string > (), yystack_[2].value.as < Ast::Node * > ());
    }
#line 3366 "MiniJavaParser.tab.cc"
    break;

  case 42: // stmt: call_stmt
#line 320 "MiniJavaParser.y"
                {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 3375 "MiniJavaParser.tab.cc"
    break;

  case 43: // stmt: assign_stmt
#line 325 "MiniJavaParser.y"
                  {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 3384 "MiniJavaParser.tab.cc"
    break;

  case 44: // stmt: return_stmt
#line 330 "MiniJavaParser.y"
                  {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 3393 "MiniJavaParser.tab.cc"
    break;

  case 45: // stmt: if_stmt
#line 334 "MiniJavaParser.y"
              {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 3402 "MiniJavaParser.tab.cc"
    break;

  case 46: // stmt: while_stmt
#line 338 "MiniJavaParser.y"
                 {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 3411 "MiniJavaParser.tab.cc"
    break;

  case 47: // stmt: print_stmt
#line 342 "MiniJavaParser.y"
                 {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 3420 "MiniJavaParser.tab.cc"
    break;

  case 48: // stmt: read_stmt
#line 346 "MiniJavaParser.y"
                {
          std::cout << "[Parser] - stmt" << std::endl;
          yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 3429 "MiniJavaParser.tab.cc"
    break;

  case 49: // return_stmt: KW_RETURN expression SEMICOLON
#line 359 "MiniJavaParser.y"
                                     {
            std::cout << "[Parser] - return_stmt" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ReturnStmt(yystack_[1].value.as < Ast::Node * > ()); 
      }
#line 3438 "MiniJavaParser.tab.cc"
    break;

  case 50: // if_stmt: KW_IF OPEN_PAR expression CLOSE_PAR block else_optional
#line 366 "MiniJavaParser.y"
                                                              {
            std::cout << "[Parser] - if_stmt" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::IfStmt(yystack_[3].value.as < Ast::Node * > (), yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
      }
#line 3447 "MiniJavaParser.tab.cc"
    break;

  case 51: // else_optional: KW_ELSE block
#line 373 "MiniJavaParser.y"
                    {
           std::cout << "[Parser] - else_optional" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ElseOptional(yystack_[0].value.as < Ast::Node * > ());
      }
#line 3456 "MiniJavaParser.tab.cc"
    break;

  case 52: // else_optional: %empty
#line 377 "MiniJavaParser.y"
               {}
#line 3462 "MiniJavaParser.tab.cc"
    break;

  case 53: // block: OPEN_CURLY stmt_list CLOSE_CURLY
#line 381 "MiniJavaParser.y"
                                       {
             std::cout << "[Parser] - block" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::Block(yystack_[1].value.as < Ast::Node * > ());
      }
#line 3471 "MiniJavaParser.tab.cc"
    break;

  case 54: // while_stmt: KW_WHILE OPEN_PAR expression CLOSE_PAR block
#line 388 "MiniJavaParser.y"
                                                   {
         std::cout << "[Parser] - while_stmt" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::WhileStmt(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
      }
#line 3480 "MiniJavaParser.tab.cc"
    break;

  case 55: // call_param_list: expression call_param_rest
#line 397 "MiniJavaParser.y"
                                 {
        std::cout << "[Parser] - call_param_list" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::CallParamList(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
      }
#line 3489 "MiniJavaParser.tab.cc"
    break;

  case 56: // call_param_list: %empty
#line 401 "MiniJavaParser.y"
               {}
#line 3495 "MiniJavaParser.tab.cc"
    break;

  case 57: // call_param_rest: COMMA expression call_param_rest
#line 405 "MiniJavaParser.y"
                                       {
            std::cout << "[Parser] - call_param_rest" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::CallParamRest(yystack_[1].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
      }
#line 3504 "MiniJavaParser.tab.cc"
    break;

  case 58: // call_param_rest: %empty
#line 409 "MiniJavaParser.y"
                {}
#line 3510 "MiniJavaParser.tab.cc"
    break;

  case 59: // print_stmt: KW_PRINT OPEN_PAR print_param CLOSE_PAR SEMICOLON
#line 413 "MiniJavaParser.y"
                                                        {
    //   std::cout << "[Parser] - print_stmt" << std::endl;     $$ = new Ast::PrintStmt($3); std::cout << "[Parser] - print_stmt" << std::endl;
    std::cout << "[Parser] - print_stmt" << std::endl;
     yylhs.value.as < Ast::Node * > () = new Ast::PrintStmt(yystack_[2].value.as < Ast::Node * > ()); 
      }
#line 3520 "MiniJavaParser.tab.cc"
    break;

  case 60: // print_param: expression
#line 421 "MiniJavaParser.y"
                 {
      std::cout << "[Parser] - print_param EXPR" << std::endl;
      yylhs.value.as < Ast::Node * > () = new Ast::PrintParam(yystack_[0].value.as < Ast::Node * > (), ""); 
      }
#line 3529 "MiniJavaParser.tab.cc"
    break;

  case 61: // print_param: STRING_LITERAL
#line 425 "MiniJavaParser.y"
                     {
    std::cout << "[Parser] - print_param LITERAL" << std::endl;
       yylhs.value.as < Ast::Node * > () = new Ast::PrintParam(nullptr, yystack_[0].value.as < std::string > ()); std::cout << "[Parser] - print_param" << std::endl;
   }
#line 3538 "MiniJavaParser.tab.cc"
    break;

  case 62: // read_stmt: KW_READ OPEN_PAR IDENTIFIER CLOSE_PAR SEMICOLON
#line 432 "MiniJavaParser.y"
                                                      {
            std::cout << "[Parser] - read_stmt" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ReadStmt(yystack_[2].value.as < std::string > ()); 
      }
#line 3547 "MiniJavaParser.tab.cc"
    break;

  case 63: // expression: boolean_expression
#line 439 "MiniJavaParser.y"
                         { 
            std::cout << "[Parser] - expression" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); 

      }
#line 3557 "MiniJavaParser.tab.cc"
    break;

  case 64: // boolean_expression: boolean_expression OP_BOOL_OR boolean_term
#line 446 "MiniJavaParser.y"
                                                 { 
             std::cout << "[Parser] - boolean_expression" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::OrBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
        }
#line 3566 "MiniJavaParser.tab.cc"
    break;

  case 65: // boolean_expression: boolean_term
#line 451 "MiniJavaParser.y"
                     { 
             std::cout << "[Parser] - boolean_expression" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
      }
#line 3575 "MiniJavaParser.tab.cc"
    break;

  case 66: // boolean_term: boolean_term OP_BOOL_AND boolean_factor
#line 459 "MiniJavaParser.y"
                                              { 
             std::cout << "[Parser] - boolean_term" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::AndBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
        }
#line 3584 "MiniJavaParser.tab.cc"
    break;

  case 67: // boolean_term: boolean_factor
#line 463 "MiniJavaParser.y"
                       { 
             std::cout << "[Parser] - boolean_term" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
        }
#line 3593 "MiniJavaParser.tab.cc"
    break;

  case 68: // boolean_factor: OP_BOOL_NOT boolean_factor
#line 470 "MiniJavaParser.y"
                                 { 
            std::cout << "[Parser] - boolean_factor" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::UnaryNotBoolean(yystack_[0].value.as < Ast::Node * > ()); 
        }
#line 3602 "MiniJavaParser.tab.cc"
    break;

  case 69: // boolean_factor: OPEN_PAR boolean_expression CLOSE_PAR
#line 474 "MiniJavaParser.y"
                                              { 
             std::cout << "[Parser] - boolean_factor" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[1].value.as < Ast::Node * > ();
        }
#line 3611 "MiniJavaParser.tab.cc"
    break;

  case 70: // boolean_factor: relational_expression
#line 478 "MiniJavaParser.y"
                              { 
            std::cout << "[Parser] - boolean_factor" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); 
        }
#line 3620 "MiniJavaParser.tab.cc"
    break;

  case 71: // arithmetic_expression: arithmetic_expression OP_SUB term
#line 485 "MiniJavaParser.y"
                                     {  
         std::cout << "[Parser] - arithmetic_expression" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::SubExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
        }
#line 3629 "MiniJavaParser.tab.cc"
    break;

  case 72: // arithmetic_expression: arithmetic_expression OP_ADD term
#line 489 "MiniJavaParser.y"
                                            { 
               std::cout << "[Parser] - arithmetic_expression" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::SumExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
        }
#line 3638 "MiniJavaParser.tab.cc"
    break;

  case 73: // arithmetic_expression: term
#line 493 "MiniJavaParser.y"
           { 
            std::cout << "[Parser] - arithmetic_expression term" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); 
        }
#line 3647 "MiniJavaParser.tab.cc"
    break;

  case 74: // relational_expression: arithmetic_expression OP_EQUAL arithmetic_expression
#line 501 "MiniJavaParser.y"
                                                                  { 
                  std::cout << "[Parser] - relational_expression" << std::endl;
                  yylhs.value.as < Ast::Node * > () = new Ast::EqualBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
            }
#line 3656 "MiniJavaParser.tab.cc"
    break;

  case 75: // relational_expression: arithmetic_expression OP_NOT_EQUAL arithmetic_expression
#line 505 "MiniJavaParser.y"
                                                                       { 
                std::cout << "[Parser] - relational_expression" << std::endl;
                  yylhs.value.as < Ast::Node * > () = new Ast::NEqualBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
            }
#line 3665 "MiniJavaParser.tab.cc"
    break;

  case 76: // relational_expression: arithmetic_expression OP_LESS_THAN arithmetic_expression
#line 509 "MiniJavaParser.y"
                                                                       { 
                  std::cout << "[Parser] - relational_expression" << std::endl;
                   yylhs.value.as < Ast::Node * > () = new Ast::Less_ThanBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
            }
#line 3674 "MiniJavaParser.tab.cc"
    break;

  case 77: // relational_expression: arithmetic_expression OP_GREATER_THAN arithmetic_expression
#line 513 "MiniJavaParser.y"
                                                                          { 
                   std::cout << "[Parser] - relational_expression" << std::endl;
                   yylhs.value.as < Ast::Node * > () = new Ast::Greater_ThanBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
            }
#line 3683 "MiniJavaParser.tab.cc"
    break;

  case 78: // relational_expression: arithmetic_expression OP_LESS_EQUAL arithmetic_expression
#line 517 "MiniJavaParser.y"
                                                                        { 
                  std::cout << "[Parser] - relational_expression" << std::endl;
                   yylhs.value.as < Ast::Node * > () = new Ast::LessEqualBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
            }
#line 3692 "MiniJavaParser.tab.cc"
    break;

  case 79: // relational_expression: arithmetic_expression OP_GREATER_EQUAL arithmetic_expression
#line 521 "MiniJavaParser.y"
                                                                           { 
                  std::cout << "[Parser] - relational_expression" << std::endl;
                  yylhs.value.as < Ast::Node * > () = new Ast::GreaterEqualBoolean(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ());
            }
#line 3701 "MiniJavaParser.tab.cc"
    break;

  case 80: // relational_expression: arithmetic_expression
#line 525 "MiniJavaParser.y"
                              { 
                   std::cout << "[Parser] - relational_expression" << std::endl;
                   yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > ();
            }
#line 3710 "MiniJavaParser.tab.cc"
    break;

  case 81: // term: term OP_MUL factor
#line 538 "MiniJavaParser.y"
                         { 
            std::cout << "[Parser] - term" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::MulExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
        }
#line 3719 "MiniJavaParser.tab.cc"
    break;

  case 82: // term: term OP_DIV factor
#line 542 "MiniJavaParser.y"
                         {
      std::cout << "[Parser] - term" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::DivExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
        }
#line 3728 "MiniJavaParser.tab.cc"
    break;

  case 83: // term: term OP_MOD factor
#line 546 "MiniJavaParser.y"
                             {
            std::cout << "[Parser] - term" << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::ModExpr(yystack_[2].value.as < Ast::Node * > (), yystack_[0].value.as < Ast::Node * > ()); 
        }
#line 3737 "MiniJavaParser.tab.cc"
    break;

  case 84: // term: factor
#line 550 "MiniJavaParser.y"
             { 
      std::cout << "[Parser] - term" << std::endl;
            yylhs.value.as < Ast::Node * > () = yystack_[0].value.as < Ast::Node * > (); 
        }
#line 3746 "MiniJavaParser.tab.cc"
    break;

  case 85: // factor: OP_ADD factor
#line 560 "MiniJavaParser.y"
                      {  // Unario positivo
            yylhs.value.as < Ast::Node * > () = new Ast::UnaryAddExpr(yystack_[0].value.as < Ast::Node * > ());
      }
#line 3754 "MiniJavaParser.tab.cc"
    break;

  case 86: // factor: OP_SUB factor
#line 563 "MiniJavaParser.y"
                      {  // Unario negativo
            yylhs.value.as < Ast::Node * > () = new Ast::UnarySubExpr(yystack_[0].value.as < Ast::Node * > ()); 
      }
#line 3762 "MiniJavaParser.tab.cc"
    break;

  case 87: // factor: INT_CONST
#line 567 "MiniJavaParser.y"
                { yylhs.value.as < Ast::Node * > () = new Ast::Number(yystack_[0].value.as < int > ()); std::cout<< "[Parser] - factor" << std::endl; 
      //      Print value
            std::cout << "Value: " << yystack_[0].value.as < int > () << std::endl;
            yylhs.value.as < Ast::Node * > () = new Ast::Number(yystack_[0].value.as < int > ()); std::cout<< "[Parser] - factor" << std::endl;
      }
#line 3772 "MiniJavaParser.tab.cc"
    break;

  case 88: // factor: OPEN_PAR arithmetic_expression CLOSE_PAR
#line 572 "MiniJavaParser.y"
                                               { yylhs.value.as < Ast::Node * > () = yystack_[1].value.as < Ast::Node * > (); std::cout<< "[Parser] - factor" << std::endl; }
#line 3778 "MiniJavaParser.tab.cc"
    break;

  case 89: // factor: IDENTIFIER
#line 573 "MiniJavaParser.y"
                 {
          yylhs.value.as < Ast::Node * > () = new Ast::Identifier(yystack_[0].value.as < std::string > ()); std::cout<< "[Parser] - factor" << std::endl; 
      }
#line 3786 "MiniJavaParser.tab.cc"
    break;

  case 90: // factor: IDENTIFIER OPEN_PAR call_param_list CLOSE_PAR
#line 576 "MiniJavaParser.y"
                                                      { 
            yylhs.value.as < Ast::Node * > () = new Ast::CallStmt(yystack_[3].value.as < std::string > (), yystack_[1].value.as < Ast::Node * > ()); std::cout<< "[Parser] - factor" << std::endl; 
        }
#line 3794 "MiniJavaParser.tab.cc"
    break;

  case 91: // factor: IDENTIFIER array_access
#line 579 "MiniJavaParser.y"
                                { 

            std::cout<< "[Parser] - array access" << std::endl;
            std::cout<< "Array access: " << yystack_[1].value.as < std::string > () << std::endl;
            
            yylhs.value.as < Ast::Node * > () = new Ast::ArrayVariable(yystack_[1].value.as < std::string > (), yystack_[0].value.as < Ast::Node * > ()); std::cout<< "[Parser] - factor" << std::endl; 
        }
#line 3806 "MiniJavaParser.tab.cc"
    break;


#line 3810 "MiniJavaParser.tab.cc"

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


  const short Parser::yypact_ninf_ = -130;

  const signed char Parser::yytable_ninf_ = -35;

  const short
  Parser::yypact_[] =
  {
       0,   -28,    37,  -130,    30,  -130,    61,    33,    57,    61,
      23,  -130,  -130,    40,    57,    41,  -130,    61,    61,     2,
      45,    59,  -130,    64,    57,  -130,  -130,    70,  -130,    61,
    -130,    80,    67,   108,    81,    79,  -130,  -130,  -130,    87,
     110,  -130,    85,    82,    79,  -130,   114,    67,    83,  -130,
    -130,  -130,    84,    12,   114,  -130,    89,   -20,    94,    95,
      47,    96,    97,   -12,    90,  -130,  -130,    12,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,    47,    47,    47,    44,    44,
      47,  -130,    24,    93,   115,   116,  -130,    86,  -130,    13,
    -130,    36,    91,    47,    47,  -130,   119,  -130,  -130,   102,
     103,  -130,    44,  -130,  -130,   -15,    71,    47,  -130,  -130,
      47,    47,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,  -130,   104,  -130,   105,   106,   107,   109,
      47,   111,   111,     6,  -130,  -130,   112,   116,  -130,    55,
      55,    55,    55,    55,    55,    13,    13,  -130,  -130,  -130,
     113,   117,   118,    47,  -130,  -130,   120,    12,   130,  -130,
    -130,  -130,  -130,  -130,   107,  -130,   121,   111,  -130,  -130,
    -130,  -130
  };

  const signed char
  Parser::yydefact_[] =
  {
       0,     0,     0,     2,     0,     1,    10,     0,    23,     9,
      20,    26,    27,     0,    23,     0,     7,     8,     9,    29,
       0,     0,    16,     0,     5,     3,    22,     0,     6,     8,
      33,     0,    31,     0,     0,    20,    14,     4,    24,     0,
      34,    28,    18,     0,    20,    19,    13,    31,     0,    21,
      32,    15,     0,    36,    12,    30,     0,    20,     0,     0,
       0,     0,     0,    39,     0,    43,    42,    36,    44,    45,
      46,    47,    48,    11,    17,     0,     0,     0,     0,     0,
       0,    87,    89,     0,    63,    65,    67,    80,    70,    73,
      84,     0,     0,    56,     0,    38,     0,    25,    35,     0,
       0,    68,     0,    85,    86,     0,    80,    56,    91,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,     0,    60,     0,     0,    58,     0,
       0,     0,     0,     0,    69,    88,     0,    64,    66,    74,
      75,    76,    77,    78,    79,    72,    71,    81,    82,    83,
       0,     0,     0,     0,    55,    37,     0,    36,    52,    54,
      90,    59,    62,    41,    58,    40,     0,     0,    50,    57,
      53,    51
  };

  const short
  Parser::yypgoto_[] =
  {
    -130,  -130,  -130,     4,   -14,   122,    -7,  -130,   125,  -130,
      -1,  -130,   123,  -130,  -130,    99,   124,  -130,   -66,    69,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,  -129,  -130,    46,
      -9,  -130,  -130,  -130,   -60,    72,    52,   -69,   -61,  -130,
     -16,   -72
  };

  const unsigned char
  Parser::yydefgoto_[] =
  {
       0,     2,     3,    16,    17,    22,     9,    49,    23,    43,
      13,    14,    24,    15,    31,    41,    32,    33,    64,    95,
      96,    65,    66,    67,    68,    69,   168,   158,    70,   127,
     154,    71,   124,    72,   128,    84,    85,    86,    87,    88,
      89,    90
  };

  const short
  Parser::yytable_[] =
  {
      83,    98,    18,   159,    29,   110,   103,   104,   101,     1,
       8,    18,   -34,    26,    30,    99,   100,     4,    20,   106,
      21,    28,   134,    37,    93,    58,    94,    59,    60,    61,
      62,   125,    53,    28,   129,   118,   119,     5,   171,    54,
      73,   133,   138,   135,   120,   121,   122,    54,   147,   148,
     149,   139,   140,   141,   142,   143,   144,    63,    77,    19,
     107,    20,    94,    21,     6,    78,    79,    11,    12,    77,
     156,     7,    80,    78,    79,    25,    78,    79,    10,    81,
     102,    82,   123,    80,   118,   119,    27,    81,    34,    82,
      81,   166,    82,   164,   112,   113,   114,   115,   116,   117,
     118,   119,   145,   146,    35,    36,    19,    40,   135,   112,
     113,   114,   115,   116,   117,   118,   119,    39,    42,    21,
      44,    46,    30,    48,    52,    97,    56,    50,    74,    57,
      75,    76,    91,    92,   109,   110,   126,   111,   130,   131,
     132,   150,   151,   152,   167,   157,    55,   153,   155,   160,
      38,   108,   105,   136,   161,   169,   170,     0,   162,   163,
      45,   165,   137,     0,    47,     0,    51
  };

  const short
  Parser::yycheck_[] =
  {
      60,    67,     9,   132,    18,    20,    78,    79,    77,     9,
       6,    18,    10,    14,    12,    75,    76,    45,    38,    80,
      40,    17,    37,    24,    36,    13,    38,    15,    16,    17,
      18,    91,    46,    29,    94,    29,    30,     0,   167,    46,
      54,   102,   111,    37,    31,    32,    33,    54,   120,   121,
     122,   112,   113,   114,   115,   116,   117,    45,    22,    36,
      36,    38,    38,    40,    34,    29,    30,    10,    11,    22,
     130,    10,    36,    29,    30,    35,    29,    30,    45,    43,
      36,    45,    46,    36,    29,    30,    45,    43,    43,    45,
      43,   157,    45,   153,    23,    24,    25,    26,    27,    28,
      29,    30,   118,   119,    45,    41,    36,    40,    37,    23,
      24,    25,    26,    27,    28,    29,    30,    37,    10,    40,
      39,    34,    12,    38,    10,    35,    43,    45,    39,    45,
      36,    36,    36,    36,    41,    20,    45,    21,    19,    37,
      37,    37,    37,    37,    14,    34,    47,    40,    39,    37,
      27,    82,    80,   107,    41,   164,    35,    -1,    41,    41,
      35,    41,   110,    -1,    40,    -1,    44
  };

  const signed char
  Parser::yystos_[] =
  {
       0,     9,    50,    51,    45,     0,    34,    10,    52,    55,
      45,    10,    11,    59,    60,    62,    52,    53,    55,    36,
      38,    40,    54,    57,    61,    35,    59,    45,    52,    53,
      12,    63,    65,    66,    43,    45,    41,    59,    61,    37,
      40,    64,    10,    58,    39,    57,    34,    65,    38,    56,
      45,    54,    10,    53,    55,    64,    43,    45,    13,    15,
      16,    17,    18,    45,    67,    70,    71,    72,    73,    74,
      77,    80,    82,    53,    39,    36,    36,    22,    29,    30,
      36,    43,    45,    83,    84,    85,    86,    87,    88,    89,
      90,    36,    36,    36,    38,    68,    69,    35,    67,    83,
      83,    86,    36,    90,    90,    84,    87,    36,    68,    41,
      20,    21,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    46,    81,    83,    45,    78,    83,    83,
      19,    37,    37,    87,    37,    37,    78,    85,    86,    87,
      87,    87,    87,    87,    87,    89,    89,    90,    90,    90,
      37,    37,    37,    40,    79,    39,    83,    34,    76,    76,
      37,    41,    41,    41,    83,    41,    67,    14,    75,    79,
      35,    76
  };

  const signed char
  Parser::yyr1_[] =
  {
       0,    49,    50,    51,    52,    52,    52,    52,    52,    52,
      52,    53,    53,    53,    54,    55,    55,    56,    56,    57,
      57,    58,    59,    59,    60,    61,    62,    62,    63,    63,
      64,    64,    65,    66,    66,    67,    67,    68,    69,    69,
      70,    71,    72,    72,    72,    72,    72,    72,    72,    73,
      74,    75,    75,    76,    77,    78,    78,    79,    79,    80,
      81,    81,    82,    83,    84,    84,    85,    85,    86,    86,
      86,    87,    87,    87,    88,    88,    88,    88,    88,    88,
      88,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90
  };

  const signed char
  Parser::yyr2_[] =
  {
       0,     2,     1,     6,     4,     3,     3,     2,     2,     1,
       0,     2,     1,     0,     2,     6,     3,     3,     0,     3,
       0,     2,     2,     0,     3,     7,     1,     1,     2,     0,
       3,     0,     3,     1,     0,     2,     0,     3,     1,     0,
       5,     5,     1,     1,     1,     1,     1,     1,     1,     3,
       6,     2,     0,     3,     5,     2,     0,     3,     0,     5,
       1,     1,     5,     1,     3,     1,     3,     1,     2,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     2,     2,     1,     3,     1,
       4,     2
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
  "varmethod_decl_list", "variable_decl_list", "variable_decl_Body",
  "variable_decl", "array_optional", "ident_list", "type",
  "method_decl_list", "method_decl", "method_body", "method_type",
  "opt_param_decl_list", "param_list", "param_decl", "ref_optional",
  "stmt_list", "array_access", "array_access_opt", "assign_stmt",
  "call_stmt", "stmt", "return_stmt", "if_stmt", "else_optional", "block",
  "while_stmt", "call_param_list", "call_param_rest", "print_stmt",
  "print_param", "read_stmt", "expression", "boolean_expression",
  "boolean_term", "boolean_factor", "arithmetic_expression",
  "relational_expression", "term", "factor", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  Parser::yyrline_[] =
  {
       0,    87,    87,    93,   102,   109,   118,   124,   129,   136,
     141,   147,   151,   156,   161,   169,   173,   181,   185,   205,
     208,   212,   221,   226,   230,   237,   244,   248,   255,   259,
     263,   267,   271,   278,   282,   286,   290,   293,   302,   303,
     308,   315,   320,   325,   330,   334,   338,   342,   346,   359,
     366,   373,   377,   381,   388,   397,   401,   405,   409,   413,
     421,   425,   432,   439,   446,   451,   459,   463,   470,   474,
     478,   485,   489,   493,   501,   505,   509,   513,   517,   521,
     525,   538,   542,   546,   550,   560,   563,   567,   572,   573,
     576,   579
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
#line 4453 "MiniJavaParser.tab.cc"

#line 592 "MiniJavaParser.y"


