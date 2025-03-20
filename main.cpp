#include <iostream>
#include <fstream>
#include <unordered_map>

#include "ExprAst.hpp"
#include "MiniJavaLexer.hpp"
#include "MiniJavaParser.hpp"

namespace Ast
{
    class Node;
}

int main(int argc, char *argv[])
{
    std::ifstream in;
    in.open(argv[1]);

    if (argc != 2)
    {
        std::cerr << "Error: Bad Arguments" << std::endl;
        return 1;
    }
    
  
    
    
    
    std::unordered_map<std::string , variables > vars;
    vars.insert({"a", variables{"", 1, nullptr}});


    // std::unordered_map<std::string, Ast::Node *> Method_Table;
    std::unordered_map<std::string, methodVariable> Method_Table;
    
    std::unordered_map<
        std::string,
        arrayVariables // Mantener consistencia
        >
        Array_Table;

    std::unordered_map<std::string, std::string> Texts_Table;

    std::vector<std::string> args;

    int paramPos;

    Ast::Node *root;
    MiniJavaLexer lexer(in);
    Expr::Parser parser(lexer, root);

    try
    {
        parser.parse();

        // std::cout << "Eval: " << eval(root, vars, Method_Table, args, Array_Table) << std::endl;
        // std::cout << "Print: " << root->toString() << std::endl;
        CodegenResult r = exprCompile(root, vars, Method_Table, args, Array_Table, "", Texts_Table, paramPos);
        std::cout << r.code << std::endl;

    }
    catch (const std::runtime_error &err)
    {
        std::cerr << err.what() << '\n';
        return 1;
    }
    return 0;
}
