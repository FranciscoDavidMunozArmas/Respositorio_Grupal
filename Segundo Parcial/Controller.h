#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>

using namespace std;

class Controller
{
public:
    Controller();
    void menu();
    int _option();
    virtual ~Controller();
protected:
private:
};

#endif
