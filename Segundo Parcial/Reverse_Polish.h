#ifndef REVERSE_POLISH_H
#define REVERSE_POLISH_H

#include <iostream>

using namespace std;

class Reverse_Polish
{
public:
    Reverse_Polish();

    string _postfix(string _expression);
    string _prefix(string _expression);
    string _invert(string _str);

    int _priotity(char _operator);

    bool is_infix(string _expression);

    virtual ~Reverse_Polish();
protected:
private:
    bool is_operator(char _operator);
};

#endif
