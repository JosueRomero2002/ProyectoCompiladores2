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




%}



// Declaración de tokens
%token EndOfFile Error Hex Oct Dec Bin
%token KW_CLASS KW_INT KW_VOID KW_REF KW_IF KW_ELSE KW_WHILE KW_RETURN KW_PRINT KW_READ
%token OP_ASSIGN OP_BOOL_OR OP_BOOL_AND OP_BOOL_NOT OP_EQUAL OP_NOT_EQUAL OP_LESS_THAN OP_GREATER_THAN OP_LESS_EQUAL OP_GREATER_EQUAL
%token OP_ADD OP_SUB OP_MUL OP_DIV OP_MOD
%token OPEN_CURLY CLOSE_CURLY OPEN_PAR CLOSE_PAR OPEN_BRACKET CLOSE_BRACKET COMMA SEMICOLON COMMENT
%token<int> INT_CONST CONSTANT
%token<std::string> IDENTIFIER STRING_LITERAL 
%token ERROR 

%type <Ast::Node *> program variable_decl_list variable_decl ident_list type array_optional
%type <Ast::Node *> method_decl_list method_decl method_type opt_param_decl_list param_list param_decl ref_optional
%type <Ast::Node *> stmt_list stmt
%type <Ast::Node *> term factor

%type <Ast::Node *> assign_stmt array_access return_stmt if_stmt else_optional block
%type <Ast::Node *> while_stmt call_stmt call_param_list call_param_rest print_stmt print_param read_stmt

%type <Ast::Node *> expression array_access_opt arithmetic_expression


%type <Ast::Node *> method_body variable_decl_Body
%type <Ast::Node *> boolean_term boolean_expression boolean_factor relational_expression


%nonassoc LOWER_THAN_OPEN_PAR
%nonassoc OPEN_PAR
%nonassoc OP_EQUAL OP_NOT_EQUAL OP_LESS_THAN OP_GREATER_THAN OP_LESS_EQUAL OP_GREATER_EQUAL
%left OP_ADD OP_SUB
%left OP_MUL OP_DIV
%left OP_BOOL_OR
%left OP_BOOL_AND
%nonassoc OP_BOOL_NOT

%%


input: program { root = $1; std::cout << "[Parser] - Parseo exitoso" << std::endl; }
;



program:
      KW_CLASS IDENTIFIER OPEN_CURLY variable_decl_list method_decl_list CLOSE_CURLY {
             std::cout << "[Parser] - Programa creado con declaraciones separadas" << std::endl;
             $$ = new Ast::Program($2, $4, $5);
      }
;

variable_decl_list:
      KW_INT IDENTIFIER method_body method_decl_list { //Es Metodo entonces se detiene

        std::cout << "[Parser] - variable_decl_list "<< std::endl;

         $$ = new Ast::MethodDeclList(    new Ast::MethodDecl(new Ast::MethodType("INT"), $2, $3) , $4);
      }
      |
      KW_INT IDENTIFIER method_body { //Es Metodo entonces se detiene

        std::cout << "[Parser] - variable_decl_list "<< std::endl;

         $$ = new Ast::MethodDeclList(  new Ast::MethodDecl(new Ast::MethodType("INT"), $2, $3) , nullptr);     
      }
      |
      
      variable_decl variable_decl_list { 
        std::cout << "[Parser] - variable_decl_list "<< std::endl;
        $$ = new Ast::VariableDeclList($1, $2);
      }
     | variable_decl { 
        std::cout << "[Parser] - variable_decl_list "<< std::endl;
      $$ = new Ast::VariableDeclList($1, nullptr);
      }

      | %empty {}
;


variable_decl_Body:
  ident_list SEMICOLON { 

      $$ = new Ast::VariableDecl_Body($1); std::cout << "[Parser] - variable_decl_Body" << std::endl;
      }    
;

variable_decl:
      
       KW_INT  OPEN_BRACKET INT_CONST CLOSE_BRACKET  IDENTIFIER variable_decl_Body {
            std::cout << "[Parser] - variable_decl -ARRAY" << std::endl;
            $$ = new Ast::VariableDecl(new Ast::Type("INT", new Ast::ArrayOptional($3)), $5, $6); std::cout << "[Parser] - variable_decl" << std::endl;
      }
      |  KW_INT IDENTIFIER variable_decl_Body {
            std::cout << "[Parser] - variable_decl -NORMAL" << std::endl;
            $$ = new Ast::VariableDecl(new Ast::Type("INT", nullptr), $2, $3); std::cout << "[Parser] - variable_decl" << std::endl;
       }
      
;

array_optional:
      OPEN_BRACKET INT_CONST CLOSE_BRACKET { 
            std::cout << "[Parser] - array_optional" << std::endl;
            $$ = new Ast::ArrayOptional($2); 
      }
      | %empty {}
;

// variable_decl:
//     KW_INT array_optional_opt IDENTIFIER variable_decl_Body {
//          $$ = new Ast::VariableDecl(new Ast::Type("INT", $2), $3, $4);
//          std::cout << "[Parser] - variable_decl" << std::endl;
//     }
// ;



// array_optional_opt:
//     array_optional { $$ = $1; }
//   | %empty { $$ = nullptr; }
// ;



ident_list:
      COMMA IDENTIFIER ident_list { 
            $$ = new Ast::IdentList($2, $3);  std::cout << "[Parser] - ident_list" << std::endl;
      }
      | %empty {}
;

type:
      KW_INT array_optional { 
            $$ = new Ast::Type("INT", $2); std::cout << "[Parser] - type" << std::endl;
      }
      
;



method_decl_list:
      method_decl method_decl_list {
          std::cout << "[Parser] - method_decl_list" << std::endl;  
          $$ = new Ast::MethodDeclList($1, $2); 
       
      }
        | %empty {}
;

method_decl:
      method_type IDENTIFIER method_body{
        std::cout << "[Parser] - method_decl" << std::endl;    
        $$ = new Ast::MethodDecl($1, $2, $3);
      }
;

method_body: 
      OPEN_PAR opt_param_decl_list CLOSE_PAR OPEN_CURLY variable_decl_list stmt_list CLOSE_CURLY {
      std::cout << "[Parser] - method_body" << std::endl;
      $$ = new Ast::MethodDecl_Body($2, $5, $6); 
      }
;

method_type:
      KW_INT { 
            std::cout << "[Parser] - INT method_type" << std::endl;
            $$ = new Ast::MethodType("INT");
      }
    | KW_VOID { 
       std::cout << "[Parser] - VOID method_type" << std::endl;
            $$ = new Ast::MethodType("VOID"); 
      }
;

opt_param_decl_list:
      param_decl param_list { 
         std::cout << "[Parser] - opt_param_decl_list" << std::endl;   
         $$ = new Ast::OptParamDeclList($1, $2); 
      }
     | %empty {}
;

param_list:
      COMMA param_decl param_list { 
             std::cout << "[Parser] - param_list" << std::endl;
            $$ = new Ast::ParamList($2, $3);
      }
       | %empty {}
;

param_decl:
      ref_optional type IDENTIFIER { 
             std::cout << "[Parser] - param_decl" << std::endl;
            $$ = new Ast::ParamDecl($1, $2, $3);
      }
;

ref_optional:
      KW_REF { 
            std::cout << "[Parser] - ref_optional" << std::endl;
            $$ = new Ast::RefOptional(true); 
      }
      | %empty {}
;

stmt_list:
      stmt stmt_list { 
        std::cout << "[Parser] - stmt_list" << std::endl;   
         $$ = new Ast::StmtList($1, $2); 
      }
        | %empty {}
;
array_access:
      OPEN_BRACKET expression CLOSE_BRACKET {
             std::cout << "[Parser] - array_access" << std::endl;
             std::cout << "Array access2: " << $2 << std::endl;
            $$ = new Ast::ArrayAccess($2);
           
      }
;

array_access_opt:
      array_access { $$ = $1; }
    | %empty {  }
;


assign_stmt:
      IDENTIFIER array_access_opt OP_ASSIGN expression SEMICOLON {
            $$ = new Ast::AssignStmt($1, $2, $4);
      }
;


call_stmt:
    IDENTIFIER OPEN_PAR call_param_list CLOSE_PAR SEMICOLON {
         $$ = new Ast::CallStmt($1, $3);
    }
;
stmt:
      call_stmt {
          std::cout << "[Parser] - stmt" << std::endl;
          $$ = $1;
      }
      |
      assign_stmt {
          std::cout << "[Parser] - stmt" << std::endl;
          $$ = $1;
      }
  
    | return_stmt {
          std::cout << "[Parser] - stmt" << std::endl;
          $$ = $1;
      }
    | if_stmt {
          std::cout << "[Parser] - stmt" << std::endl;
          $$ = $1;
      }
    | while_stmt {
          std::cout << "[Parser] - stmt" << std::endl;
          $$ = $1;
      }
    | print_stmt {
          std::cout << "[Parser] - stmt" << std::endl;
          $$ = $1;
      }
    | read_stmt {
          std::cout << "[Parser] - stmt" << std::endl;
          $$ = $1;
      }
  
   
;





return_stmt:
      KW_RETURN expression SEMICOLON {
            std::cout << "[Parser] - return_stmt" << std::endl;
            $$ = new Ast::ReturnStmt($2); 
      }
;

if_stmt:
      KW_IF OPEN_PAR expression CLOSE_PAR block else_optional {
            std::cout << "[Parser] - if_stmt" << std::endl;
            $$ = new Ast::IfStmt($3, $5, $6); 
      }
;

else_optional:
      KW_ELSE block {
           std::cout << "[Parser] - else_optional" << std::endl;
            $$ = new Ast::ElseOptional($2);
      }
      | %empty {}
;

block:
      OPEN_CURLY stmt_list CLOSE_CURLY {
             std::cout << "[Parser] - block" << std::endl;
            $$ = new Ast::Block($2);
      }
;

while_stmt:
      KW_WHILE OPEN_PAR expression CLOSE_PAR block {
         std::cout << "[Parser] - while_stmt" << std::endl;
            $$ = new Ast::WhileStmt($3, $5);
      }
;



call_param_list:
      expression call_param_rest {
        std::cout << "[Parser] - call_param_list" << std::endl;
            $$ = new Ast::CallParamList($1, $2);
      }
      | %empty {}
;

call_param_rest:
      COMMA expression call_param_rest {
            std::cout << "[Parser] - call_param_rest" << std::endl;
            $$ = new Ast::CallParamRest($2, $3);
      }
       | %empty {}
;

print_stmt:
      KW_PRINT OPEN_PAR print_param CLOSE_PAR SEMICOLON {
    //   std::cout << "[Parser] - print_stmt" << std::endl;     $$ = new Ast::PrintStmt($3); std::cout << "[Parser] - print_stmt" << std::endl;
    std::cout << "[Parser] - print_stmt" << std::endl;
     $$ = new Ast::PrintStmt($3); 
      }
;

print_param:
      expression {
      std::cout << "[Parser] - print_param EXPR" << std::endl;
      $$ = new Ast::PrintParam($1, ""); 
      }
    | STRING_LITERAL {
    std::cout << "[Parser] - print_param LITERAL" << std::endl;
       $$ = new Ast::PrintParam(nullptr, $1); std::cout << "[Parser] - print_param" << std::endl;
   }
;

read_stmt:
      KW_READ OPEN_PAR IDENTIFIER CLOSE_PAR SEMICOLON {
            std::cout << "[Parser] - read_stmt" << std::endl;
            $$ = new Ast::ReadStmt($3); 
      }
;

expression:
      boolean_expression { 
            std::cout << "[Parser] - expression" << std::endl;
            $$ = $1; 

      }

boolean_expression:
      boolean_expression OP_BOOL_OR boolean_term { 
             std::cout << "[Parser] - boolean_expression" << std::endl;
            $$ = new Ast::OrBoolean($1, $3);
        }
   
      | boolean_term { 
             std::cout << "[Parser] - boolean_expression" << std::endl;
            $$ = $1;
      }
;


boolean_term: 
      boolean_term OP_BOOL_AND boolean_factor { 
             std::cout << "[Parser] - boolean_term" << std::endl;
            $$ = new Ast::AndBoolean($1, $3);
        }
      | boolean_factor { 
             std::cout << "[Parser] - boolean_term" << std::endl;
            $$ = $1;
        }
;

boolean_factor: 
      OP_BOOL_NOT boolean_factor { 
            std::cout << "[Parser] - boolean_factor" << std::endl;
            $$ = new Ast::UnaryNotBoolean($2); 
        }
      | OPEN_PAR boolean_expression CLOSE_PAR { 
             std::cout << "[Parser] - boolean_factor" << std::endl;
            $$ = $2;
        }
      | relational_expression { 
            std::cout << "[Parser] - boolean_factor" << std::endl;
            $$ = $1; 
        }
;

arithmetic_expression:
   arithmetic_expression OP_SUB term {  
         std::cout << "[Parser] - arithmetic_expression" << std::endl;
            $$ = new Ast::SubExpr($1, $3); 
        }
        | arithmetic_expression OP_ADD term { 
               std::cout << "[Parser] - arithmetic_expression" << std::endl;
            $$ = new Ast::SumExpr($1, $3); 
        }
    | term { 
            std::cout << "[Parser] - arithmetic_expression term" << std::endl;
            $$ = $1; 
        }
;


relational_expression: 
             arithmetic_expression OP_EQUAL arithmetic_expression { 
                  std::cout << "[Parser] - relational_expression" << std::endl;
                  $$ = new Ast::EqualBoolean($1, $3);
            }
            | arithmetic_expression OP_NOT_EQUAL arithmetic_expression { 
                std::cout << "[Parser] - relational_expression" << std::endl;
                  $$ = new Ast::NEqualBoolean($1, $3);
            }
            | arithmetic_expression OP_LESS_THAN arithmetic_expression { 
                  std::cout << "[Parser] - relational_expression" << std::endl;
                   $$ = new Ast::Less_ThanBoolean($1, $3);
            }
            | arithmetic_expression OP_GREATER_THAN arithmetic_expression { 
                   std::cout << "[Parser] - relational_expression" << std::endl;
                   $$ = new Ast::Greater_ThanBoolean($1, $3);
            }
            | arithmetic_expression OP_LESS_EQUAL arithmetic_expression { 
                  std::cout << "[Parser] - relational_expression" << std::endl;
                   $$ = new Ast::LessEqualBoolean($1, $3);
            }
            | arithmetic_expression OP_GREATER_EQUAL arithmetic_expression { 
                  std::cout << "[Parser] - relational_expression" << std::endl;
                  $$ = new Ast::GreaterEqualBoolean($1, $3);
            }
      | arithmetic_expression { 
                   std::cout << "[Parser] - relational_expression" << std::endl;
                   $$ = $1;
            }
;







term:
      term OP_MUL factor { 
            std::cout << "[Parser] - term" << std::endl;
            $$ = new Ast::MulExpr($1, $3); 
        }
    | term OP_DIV factor {
      std::cout << "[Parser] - term" << std::endl;
            $$ = new Ast::DivExpr($1, $3); 
        } 
        | term OP_MOD factor {
            std::cout << "[Parser] - term" << std::endl;
            $$ = new Ast::ModExpr($1, $3); 
        } 
    | factor { 
      std::cout << "[Parser] - term" << std::endl;
            $$ = $1; 
        }
;



factor:

        OP_ADD factor {  // Unario positivo
            $$ = new Ast::UnaryAddExpr($2);
      }
      | OP_SUB factor {  // Unario negativo
            $$ = new Ast::UnarySubExpr($2); 
      }
      |
      INT_CONST { $$ = new Ast::Number($1); std::cout<< "[Parser] - factor" << std::endl; 
      //      Print value
            std::cout << "Value: " << $1 << std::endl;
            $$ = new Ast::Number($1); std::cout<< "[Parser] - factor" << std::endl;
      } 
    | OPEN_PAR arithmetic_expression CLOSE_PAR { $$ = $2; std::cout<< "[Parser] - factor" << std::endl; }
    | IDENTIFIER {
          $$ = new Ast::Identifier($1); std::cout<< "[Parser] - factor" << std::endl; 
      }
      | IDENTIFIER OPEN_PAR call_param_list CLOSE_PAR { 
            $$ = new Ast::CallStmt($1, $3); std::cout<< "[Parser] - factor" << std::endl; 
        }
      | IDENTIFIER array_access { 

            std::cout<< "[Parser] - array access" << std::endl;
            std::cout<< "Array access: " << $1 << std::endl;
            
            $$ = new Ast::ArrayVariable($1, $2); std::cout<< "[Parser] - factor" << std::endl; 
        }
      
;




%%

