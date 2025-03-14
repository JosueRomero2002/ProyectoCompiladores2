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

    std::unordered_map<std::string, int> vars;
    vars.insert({{"a", 1}});

    std::unordered_map<std::string, Ast::Node *> Method_Table;

    std::unordered_map<
        std::string,
        std::shared_ptr<std::vector<std::optional<int>>> // Mantener consistencia
        >
        Array_Table;

    std::vector<int> args;

    Ast::Node *root;
    MiniJavaLexer lexer(in);
    Expr::Parser parser(lexer, root);

    try
    {
        parser.parse();

        // std::cout << "Eval: " << eval(root, vars, Method_Table, args, Array_Table) << std::endl;
        // std::cout << "Print: " << root->toString() << std::endl;
        CodegenResult r = exprCompile(root, vars);
        std::cout << r.code << std::endl;

    }
    catch (const std::runtime_error &err)
    {
        std::cerr << err.what() << '\n';
        return 1;
    }
    return 0;
}
