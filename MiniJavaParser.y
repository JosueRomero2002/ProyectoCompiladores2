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

// Declaración de tokens
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
    program
    ;

// program -> KW_CLASS IDENTIFIER OPEN_CURLY
//             ( variable_decl )*
//             ( method_decl )*
//           CLOSE_CURLY
program: KW_CLASS IDENTIFIER OPEN_CURLY
            variable_decl_list
            method_decl_list
            CLOSE_CURLY
            ;



// variable_decl -> type IDENTIFIER ( COMMA IDENTIFIER )* SEMICOLON
variable_decl_list:  variable_decl variable_decl_list
                    | %empty
                    ;

variable_decl: type IDENTIFIER ident_list SEMICOLON
            ;

ident_list : COMMA IDENTIFIER ident_list
            | %empty
            ;



// # type -> KW_INT [ OPEN_BRACKET CONSTANT CLOSE_BRACKET ]
type: KW_INT optional_brackets
    ;

optional_brackets: OPEN_BRACKET CONSTANT CLOSE_BRACKET
                | %empty
                ;

// method_decl -> method_type IDENTIFIER OPEN_PAR opt_param_decl_list CLOSE_PAR
//                 OPEN_CURLY
//                 ( variable_decl )*
//                 ( stmt )*
//                 CLOSE_CURLY

method_decl_list: method_decl method_decl_list
                | %empty
                ;

method_decl: method_type IDENTIFIER OPEN_PAR opt_param_decl_list CLOSE_PAR
                OPEN_CURLY
                variable_decl_list
                stmt_list
                CLOSE_CURLY
                ;

// # method_type -> KW_INT | KW_VOID
method_type: KW_INT | KW_VOID
            ;

// opt_param_decl_list -> [ param_decl ( COMMA param_decl )* ]
opt_param_decl_list: param_decl_list param_list
                    | %empty
                    ;

param_list: COMMA param_decl_list
            | %empty
            ;

param_decl_list: param_decl param_decl_list
                | %empty
                ;



// param_decl -> [ KW_REF ] type IDENTIFIER
param_decl: KW_REF type IDENTIFIER
            | type IDENTIFIER
            ;

// stmt -> assign_stmt
//         | if_stmt
//         | while_stmt
//         | call_stmt   !!!!!!
//         | return_stmt
//         | print_stmt
//         | read_stmt
stmt_list: stmt stmt_list
            | %empty
            ;

stmt: assign_stmt
        | if_stmt
        | while_stmt
        | call_stmt
        | return_stmt
        | print_stmt
        | read_stmt
        ;


// !!!!!
// assign_stmt -> IDENTIFIER [ OPEN_BRACKET expression CLOSE_BRACKET ] OP_ASSIGN expression SEMICOLON
assign_stmt: IDENTIFIER arreglo_opcional_2 OP_ASSIGN expression SEMICOLON
            ;

arreglo_opcional_2: OPEN_BRACKET expression CLOSE_BRACKET
                | %empty
                ;

// return_stmt -> KW_RETURN expresion SEMICOLON
return_stmt: KW_RETURN expression SEMICOLON { $$ = $2; }
            ;

// if_stmt -> KW_IF OPEN_PAR expression CLOSE_PAR
//             block
//             [ KW_ELSE
//                 block
//             ]
if_stmt: KW_IF OPEN_PAR expression CLOSE_PAR
            block
           else_opcional { if($3) $$ = $5; else $$ = $7; }
            ;

else_opcional: KW_ELSE block { $$ = $2; }
            | %empty
            ;

// block -> OPEN_CURLY
//             ( stmt )*
//          CLOSE_CURLY
block: OPEN_CURLY stmt_list CLOSE_CURLY
        ;


// while_stmt -> KW_WHILE OPEN_PAR expressionession CLOSE_PAR
//                 block
while_stmt: KW_WHILE OPEN_PAR expression CLOSE_PAR
            block 
            ;



// !!!!!!!!!!!!
// call_stmt -> IDENTIFIER OPEN_PAR [ expresion ( COMMA expression )* ] CLOSE_PAR SEMICOLON
call_stmt: IDENTIFIER OPEN_PAR call_param_list CLOSE_PAR SEMICOLON
            ;
call_param_list: expression call_param_rest
                | %empty
                ;
call_param_rest: COMMA expression call_param_rest
                | %empty
                ;


// print_stmt -> KW_PRINT OPEN_PAR (expression | STRING_LITERAL) CLOSE_PAR SEMICOLON
print_stmt: KW_PRINT OPEN_PAR print_param CLOSE_PAR SEMICOLON
            ;
print_param: expression
            | STRING_LITERAL
            ;

// read_stmt -> KW_READ OPEN_PAR IDENTIFIER CLOSE_PAR  SEMICOLON ???
read_stmt: KW_READ OPEN_PAR IDENTIFIER CLOSE_PAR SEMICOLON
            ;

// expression -> boolean_expression
expression: boolean_expression
            ;

// boolean_expression -> boolean_term ( OP_BOOL_OR boolean_term )*
boolean_expression: boolean_term bool_or_rest
                    ;
// boolean_term -> boolean_factor ( OP_BOOL_AND boolean_factor )*
boolean_term: boolean_factor bool_and_rest
            ;

bool_and_rest: OP_BOOL_AND boolean_factor bool_and_rest
            | %empty
            ;

bool_or_rest: OP_BOOL_OR boolean_term bool_or_rest
            | %empty
            ;            
// boolean_factor -> relational_expression | OP_BOOL_NOT boolean_factor
boolean_factor: relational_expression
                | OP_BOOL_NOT boolean_factor
                ;

// relational_expression -> arithmetic_expression OP_EQUAL arithmetic_expression
//                         | arithmetic_expression OP_NOT_EQUAL arithmetic_expression
//                         | arithmetic_expression OP_LESS_THAN arithmetic_expression
//                         | arithmetic_expression OP_GREATHER_THAN arithmetic_expression
//                         | arithmetic_expression OP_LESS_EQUAL arithmetic_expression
//                         | arithmetic_expression OP_GREATHER_EQUAL arithmetic_expression
//                         | arithmetic_expression
relational_expression: arithmetic_expression OP_EQUAL arithmetic_expression
                        | arithmetic_expression OP_NOT_EQUAL arithmetic_expression
                        | arithmetic_expression OP_LESS_THAN arithmetic_expression
                        | arithmetic_expression OP_GREATER_THAN arithmetic_expression
                        | arithmetic_expression OP_LESS_EQUAL arithmetic_expression
                        | arithmetic_expression OP_GREATER_EQUAL arithmetic_expression
                        | arithmetic_expression
                        ;

// arithmetic_expression -> term ( (OP_ADD | OP_SUB) term )*
arithmetic_expression: term arith_expr_rest
                    ;

arith_expr_rest: OP_ADD term arith_expr_rest { $$ = $1 + $3; }
            | OP_SUB term arith_expr_rest { $$ = $1 - $3; }
                | %empty
                ;

// expr:
//       expr OP_ADD term { $$ = $1 + $3; }
//     | expr OP_SUB term { $$ = $1 - $3; }
//     | term            { $$ = $1; }
//     ;

// term -> factor ( ( OP_MUL | OP_DIV | OP_MOD ) factor )*
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

// factor -> [OP_ADD | OP_SUB] primary



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



// primary ->  CONSTANT
//           | IDENTIFIER
//           | IDENTIFIER OPEN_BRACKET expression CLOSE_BRACKET
//           | IDENTIFIER OPEN_PAR [ expresion ( COMMA expression )* ] CLOSE_PAR
//           | OPEN_PAR expression CLOSE_PAR


// CONSTANT -> INT_CONST | HEX_CONST | BINARIO




%%

