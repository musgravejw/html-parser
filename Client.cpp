#include <fstream>
#include <iostream>

int main() {
    std::fstream in;
    in.open("tests/sample.html");
    std::string token;

    while (in >> token && !in.eof()) {
        std::cout << token << "\n";
    }

    in.close();
    in.clear();

    return 0;
}
