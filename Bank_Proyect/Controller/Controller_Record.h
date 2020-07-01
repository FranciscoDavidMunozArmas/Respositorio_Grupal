/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller_Record
*/
#if !defined(__Controller_Record)
#define __Controller_Record

#include <iostream>
#include "Controller_Main_Option.h"

#include "../Libraries/Menu.h"

using namespace std;

class Controller_Record: public Controller_Main_Option
{
public:
    Controller_Record() :Controller_Main_Option() {};
private:
    void _method();
    void _options();
    int _set_menu();
protected:
};

#endif
