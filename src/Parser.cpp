#include "Parser.h"

#include <iostream>

void Parser::start() {
    Scanner *scanner = new Scanner("tests/sample.html");
    string lexeme = scanner->get_next_token();

    while (lexeme != "") {
        cout << lexeme << "\n";
        lexeme = scanner->get_next_token();
    }
}
