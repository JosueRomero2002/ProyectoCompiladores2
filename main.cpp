#include <iostream>
#include "MiniJavaLexer.hpp"
#include "tokens.hpp"

int main()
{
    MiniJavaLexer lexer;
    Token token;

    while ((token = static_cast<Token>(lexer.lex())) != Token::EndOfFile)
    {
        if (token == Token::Error)
        {
            std::cerr << "Error: Token no reconocido" << std::endl;
            return 1;
        }
    }

    return 0;
}
