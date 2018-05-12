#include "Scanner.h"

using namespace std;

Scanner::Scanner(string source) {
    this->row = 0;
    this->column = 0;
    this->fs.open(source);
}

Scanner::~Scanner() {
    this->fs.close();
    this->fs.clear();
}

string Scanner::get_next_token() {
    string line;
    string lexeme;

    if (getline(this->fs, line) && !this->fs.eof())
        this->row++;

    for (int i = 0; i < line.length(); i++) {
        char c = line[i];

        if (c == '<') {
            i++;
            lexeme = "";

            c = line[i++];
            if (c == '/') {
                // pop from stack
                while (c != '>') c = line[i++];
            } else {
                // push to stack
                while (c != '>') {
                    lexeme += c;
                    c = line[i++];
                }

            }

            this->column += i;

            return lexeme;
        }
    }

    return "";
}
