#include <iostream>
#include "MiniJavaLexer.hpp"
#include "tokens.hpp"

// extern MiniJavaLexer lexer;

int main()
{

    MiniJavaLexer lexer;
    Token token;

    while ((token = lexer.lex()) != Token::EndOfFile)
    {
        // std::cout << "Token encontrado: " << tokenToString(token) << std::endl;

        if (token == Token::Error)
        {
            std::cerr << "Error: Token no reconocido" << std::endl;
            return 1;
        }
    }

    return 0;
}
