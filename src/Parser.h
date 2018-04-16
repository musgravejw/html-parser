#include "string.h"

class Parser {
public:
    void parse();
    Parser();
private:
    Scanner scanner;
    bool check(String production);

};
