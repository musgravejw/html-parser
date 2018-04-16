
Scanner::Scanner() {
    this->terminals["html-open"] = "<html>";
    this->terminals["html-close"] = "</html>";
    this->terminals["body-open"] = "<body>";
    this->terminals["body-close"] = "</body>";
    this->terminals["b-open"] = "<b>";
    this->terminals["b-close"] = "</b>";
    this->terminals["i-open"] = "<i>";
    this->terminals["i-close"] = "</i>";
}

Token Scanner::get_next_token() {
    Token token = new Token();

    String lexeme = ""; // get next token in the stream

    token.token_class;  // map character from enum
    token.lexeme = lexeme;

    return this->terminals[token_class] != NULL;
}
