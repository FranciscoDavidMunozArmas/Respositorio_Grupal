#pragma once
/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller_Operation
*/
#if !defined(__Controller_Operation)
#define __Controller_Operation

#include <iostream>

#include "Controller_Main_Option.h"

using namespace std;

class Controller_Operation : public Controller_Main_Option
{
public:
    Controller_Operation() : Controller_Main_Option() {};
private:
    void _method();
    void _options();
    int _set_menu();
protected:
};

#endif
