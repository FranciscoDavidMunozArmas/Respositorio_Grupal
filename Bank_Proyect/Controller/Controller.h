/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller
*/

#if !defined(__Controller)
#define __Controller

#include <iostream>

#include "Controller_Parent.h"

using namespace std;

class Controller: public Controller_Parent
{
public:
    Controller() : Controller_Parent() {};
private:
    void _method();
    void _selection_menu(bool* flag);
    int _set_menu();
protected:
};

#endif
