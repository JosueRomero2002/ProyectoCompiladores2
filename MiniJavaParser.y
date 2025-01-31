%require "3.0"
%language "c++"
%parse-param {MiniJavaLexer& lexer}
%parse-param {std::unordered_map<std::string, int>& vars}

%define parse.error verbose
%define api.value.type variant
%define api.parser.class {Parser}
%define api.namespace {Expr}

%code requires {
   #include <unordered_map>
   class MiniJavaLexer;
}

%{
#include <iostream>
#include <stdexcept>
#include "MiniJavaLexer.hpp"
#include "error.h"


#define yylex(arg) lexer.nextToken(arg)

namespace Expr {
    void Parser::error (const std::string& msg)
    {
        std::cerr << "Error: " << msg << '\n';
    }
}

%}

%token OP_ADD "+"
%token OP_SUB "-"
%token OP_MUL "*"
%token OP_DIV "/"
%token TK_OPEN_PAR TK_CLOSE_PAR TK_SEMICOLON
%token<int> TK_NUMBER "number"

%token<std::string> TK_IDENTIFIER "identifier"
%token TK_ERROR "unknown token"


%type <int> expr term factor

%%

input: statement_list opt_semicolon;

opt_semicolon: TK_SEMICOLON
             | %empty;

statement_list: statement_list TK_SEMICOLON statement
              | statement;

statement: expr { std::cout << "Resultado: " << $1 << '\n'; };

expr: expr OP_ADD term { $$ = $1 + $3; }
    | expr OP_SUB term { $$ = $1 - $3; }
    | term { $$ = $1; };

term: term OP_MUL factor { $$ = $1 * $3; }
    | term OP_DIV factor { 
        if ($3 == 0) {
            error("Division by zero");
       
        } else {
            $$ = $1 / $3;
        }
    }
    | factor { $$ = $1; };

factor: TK_NUMBER { $$ = $1; }
      | TK_OPEN_PAR expr TK_CLOSE_PAR { $$ = $2; };
      | TK_IDENTIFIER { 
         auto it = vars.find($1);
         if(it == vars.end()){
            error("Unknown Variable "+$1);
         
         } else {
            $$ = it->second;
         }
      }
;

%%
