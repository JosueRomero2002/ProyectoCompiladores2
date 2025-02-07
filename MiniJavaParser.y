%require "3.0"
%language "c++"

%parse-param {MiniJavaLexer& lexer}
%parse-param {std::unordered_map<std::string, int>& vars}

%define parse.trace
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


// Declaramos la función de análisis léxico.
// int yylex();
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

%}

// Declaración de tokens sin asignación numérica explícita
%token EndOfFile Error Hex Oct Dec Bin
%token KW_CLASS KW_INT KW_VOID KW_REF KW_IF KW_ELSE KW_WHILE KW_RETURN KW_PRINT KW_READ
%token OP_ASSIGN OP_BOOL_OR OP_BOOL_AND OP_BOOL_NOT OP_EQUAL OP_NOT_EQUAL OP_LESS_THAN OP_GREATER_THAN OP_LESS_EQUAL OP_GREATER_EQUAL
%token OP_ADD OP_SUB OP_MUL OP_DIV OP_MOD
%token OPEN_CURLY CLOSE_CURLY OPEN_PAR CLOSE_PAR OPEN_BRACKET CLOSE_BRACKET COMMA SEMICOLON COMMENT
%token<int> INT_CONST 
%token<std::string> IDENTIFIER STRING_LITERAL CONSTANT
%token ERROR 

%type <int> expr term factor

%%

input:
      statement_list
    ;


statement:
      expr { std::cout << "Resultado: " << $1 << '\n'; }
    ;

statement_list:
      statement_list statement SEMICOLON
    | statement SEMICOLON
    ;


expr:
      expr OP_ADD term { $$ = $1 + $3; }
    | expr OP_SUB term { $$ = $1 - $3; }
    | term            { $$ = $1; }
    ;

term:
      term OP_MUL factor { $$ = $1 * $3; }
    | term OP_DIV factor {
          if ($3 == 0) {
              yyerror("Division by zero");
              YYABORT;
          } else {
              $$ = $1 / $3;
          }
      }
    | factor { $$ = $1; }
    ;

factor:
      INT_CONST { $$ = $1; }
    | OPEN_PAR expr CLOSE_PAR { $$ = $2; }
    | IDENTIFIER {
          auto it = vars.find($1);
          if(it == vars.end()){
              yyerror(("Unknown Variable " + $1).c_str());
              YYABORT;
          } else {
              $$ = it->second;
          }
      }
    ;

%%

