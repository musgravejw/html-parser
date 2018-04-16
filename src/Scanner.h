#include "Scanner.cc"
#include "Token.h"

#include <string>
#include <map>

class Scanner {
public:
    Scanner();
    Token get_next_token();
private:
    std::unordered_map<string, string> terminals;
};
