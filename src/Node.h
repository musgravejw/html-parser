#ifndef TEST_HTML_PARSER_NODE_H
#define TEST_HTML_PARSER_NODE_H

#include <unordered_map>

using namespace std;

class Node {
public:
    Node **children;
    Node *parentNode;
    unordered_map<string, string> attributes;
};


#endif //TEST_HTML_PARSER_NODE_H
