cmake -B build -S .

cmake --build build

./build/MiniJavaLexer test.txt

{DIGIT}+ {
yylval->emplace<int>(std::stol(text(),nullptr, 10));
return token::TK_NUMBER
}
