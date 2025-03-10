cmake -B build -S .

cmake --build build

./build/MiniJavaLexer test.txt

=====================================
./build/MiniJavaLexer tests/example_1.java
./build/MiniJavaLexer tests/example_2.java
./build/MiniJavaLexer tests/example_3.java
./build/MiniJavaLexer tests/example_4.java
./build/MiniJavaLexer tests/example_5.java

./build/MiniJavaLexer tests/example_6.java
./build/MiniJavaLexer tests/example_7.java
./build/MiniJavaLexer tests/example_8.java
./build/MiniJavaLexer tests/example_9.java
./build/MiniJavaLexer tests/example_10.java

=====================================

funciones que usan los arrays o relacionados

eval(VariableDecl)
eval(AssignStmt)
eval(ParamDecl)

eval(ArrayVariable)

eval()

1
4
7
10

{DIGIT}+ {
yylval->emplace<int>(std::stol(text(),nullptr, 10));
return token::TK_NUMBER
}

treecc -o EsprAst.cpp -h ExprAst.hpp ExprAst.t

Va al hpp
%decls %{
using string_t = std::string;
%}

va al cpp

%{
#include <iostream>
#include <string>
#include "ExprAst.hpp"

%}

%code requires {
#include <unordered_map>
class MiniJavaLexer;

    %include "ExprAst.hpp"

}

%type <Ast::Node\*> statemaent_list expr

$$ = new Ast:Identifier($1)

$$ = new Ast:MulExpr($1, $3)
