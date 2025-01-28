#include <iostream>
#include "MiniJavaLexer.hpp"
#include "tokens.hpp"
#include <fstream>

int main(int argc, char *argv[])

{

    std::ifstream in;

    in.open(argv[1]);

    if (argc != 2)
    {
        std::cerr << "Error: Argumentos invalidos" << std::endl;
        return 1;
    }

    MiniJavaLexer lexer(in);
    Token token = lexer.nextToken();

    while (lexer.nextToken() != Token::EndOfFile)
    {
        if (token == Token::Error)
        {
            std::cerr << "Error: Token no reconocido" << std::endl;
            return 1;
        }

        std::cout << "Token: " << lexer.tokenToString(token) << std::endl;
    }

    return 0;
}