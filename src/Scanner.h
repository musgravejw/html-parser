
#ifndef TEST_HTML_PARSER_SCANNER_H
#define TEST_HTML_PARSER_SCANNER_H

#include <fstream>
#include <iostream>

using namespace std;

class Scanner {
public:
    Scanner(string source);
    ~Scanner();
    string get_next_token();
private:
    int row;
    int column;
    fstream fs;
};


#endif //TEST_HTML_PARSER_SCANNER_H
