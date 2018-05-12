
void Parser::parse() {
    scanner = new Scanner();

    if (check("html-begin")) {
        body();

        if (check("html-end")) {
            return true;
        } else {
            // handle parsing exception
            return false;
        }
    }
}
//
//
//bool check(string production) {
//  return scanner.get_next_token() == production;
//  // is the lexeme in the grammar
//}
//
//bool body() {
//  if (check("body-open")) {
//    div();
//    return check("body-close");
//  }
//}
//
//bool div() {
//  if (check("div-open")) {
//    b();
//    i();
//    return check("div-close");
//  }
//}
//
//bool b() {
//  if (check("b-open")) {
//    return check("b-close");
//  }
//}
//
//bool i() {
//  if (check("i-open")) {
//    return check("i-close");
//  }
//}
