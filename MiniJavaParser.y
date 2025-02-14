%require "3.0"
%language "c++"
%parse-param {MiniJavaLexer& lexer}
%parse-param {Ast::Node *&root}
%define parse.trace

%define parse.error verbose
%define api.value.type variant
%define api.parser.class {Parser}
%define api.namespace {Expr}

%code requires {
    #include <unordered_map>
    #include "ExprAst.hpp"
    class MiniJavaLexer;
}

%{
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

%}



// Declaración de tokens
%token EndOfFile Error Hex Oct Dec Bin
%token KW_CLASS KW_INT KW_VOID KW_REF KW_IF KW_ELSE KW_WHILE KW_RETURN KW_PRINT KW_READ
%token OP_ASSIGN OP_BOOL_OR OP_BOOL_AND OP_BOOL_NOT OP_EQUAL OP_NOT_EQUAL OP_LESS_THAN OP_GREATER_THAN OP_LESS_EQUAL OP_GREATER_EQUAL
%token OP_ADD OP_SUB OP_MUL OP_DIV OP_MOD
%token OPEN_CURLY CLOSE_CURLY OPEN_PAR CLOSE_PAR OPEN_BRACKET CLOSE_BRACKET COMMA SEMICOLON COMMENT
%token<int> INT_CONST 
%token<std::string> IDENTIFIER STRING_LITERAL CONSTANT
%token ERROR 

%type <Ast::Node *> statement_list statement expr term factor

%%

input:
      KW_CLASS IDENTIFIER OPEN_CURLY statement_list CLOSE_CURLY{
            root = new Ast::Program($4);
      }
;


    
variable_decl: 
      KW_INT IDENTIFIER SEMICOLON { 
           // $$ = new Ast::VariableDecl($2, Ast::Type::INT); 
           std::cout << "VariableDecl" << std::endl;
        }
    | KW_INT IDENTIFIER OPEN_BRACKET INT_CONST CLOSE_BRACKET SEMICOLON { 
           // $$ = new Ast::VariableDecl($2, Ast::Type::INT, $4); 
        }
    | KW_INT KW_REF IDENTIFIER SEMICOLON { 
           // $$ = new Ast::VariableDecl($3, Ast::Type::INT, true); 
        }
    | KW_INT KW_REF IDENTIFIER OPEN_BRACKET INT_CONST CLOSE_BRACKET SEMICOLON { 
           // $$ = new Ast::VariableDecl($3, Ast::Type::INT, $5, true); 
        }


//type -> KW_INT [ OPEN_BRACKET CONSTANT CLOSE_BRACKET ]

type:
      KW_INT { 
         //   $$ = Ast::Type::INT; 
        }
    | KW_INT OPEN_BRACKET CONSTANT CLOSE_BRACKET { 
           //   $$ = new Ast::ArrayType(Ast::Type::INT, $3); 
        }
    | KW_INT KW_REF { 
           //   $$ = Ast::Type::INT; 
        }
    | KW_INT KW_REF OPEN_BRACKET CONSTANT CLOSE_BRACKET { 
          //    $$ = new Ast::ArrayType(Ast::Type::INT, $4);
    }

statement:
      expr { $$ = $1; }
;

statement_list:
      statement_list statement SEMICOLON{

       
            $$ = new Ast::LineSeq($1, $2);
        }
    | statement SEMICOLON{ 
            $$ = new Ast::LineSeq($1, nullptr); 
        }
;


expr:
      expr OP_ADD term { 
            $$ = new Ast::AddExpr($1, $3); 
        }
    | expr OP_SUB term { 
            $$ = new Ast::SubExpr($1, $3); 
        }
    | term             { 
            $$ = $1; 
        }
;

term:
      term OP_MUL factor { 
            $$ = new Ast::MulExpr($1, $3); 
        }
    | term OP_DIV factor {
            $$ = new Ast::DivExpr($1, $3);
        } 
    | factor { 
            $$ = $1; 
        }
;

factor:
      INT_CONST { $$ = new Ast::Number($1); }
    | OPEN_PAR expr CLOSE_PAR { $$ = $2; }
    | IDENTIFIER {
          $$ = new Ast::Identifier($1);
      }
;




%%

