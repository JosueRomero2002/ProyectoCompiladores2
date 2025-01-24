%option lexer="MiniJavaLexer"


%{
#include <iostream>
#include "MiniJavaLexer.hpp"
#include "tokens.hpp"

%}

%class{

enum Token
{
    EndOfFile,
    Error,
    Hex,
    Oct,
    Dec,
    Bin
};


public:
    static const char *tokenToString(Token token) {
        switch (token) {
            case Token::EndOfFile: return "EndOfFile";
            case Token::Error: return "Error";
            case Token::Hex: return "Hex";
            case Token::Oct: return "Oct";
            case Token::Dec: return "Dec";
            case Token::Bin: return "Bin";
            default: return "Unknown";
        }
    }
};



%%

[ \t\r\n]+               { }
#.*                      { }
0[xX][0-9a-fA-F]+        { return Token::Hex; }
0[0-7]+                  { return Token::Oct; }
[1-9][0-9]*              { return Token::Dec; }
0[bB][0-1]+              { return Token::Bin; }
<<EOF>>                  { return Token::EndOfFile; }
.                        { return Token::Error; }


%%
