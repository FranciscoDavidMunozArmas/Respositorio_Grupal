
/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayp de 2020 19:07:11
 * @function Declaration of the class Controller
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
