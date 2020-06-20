/***********************************************************************
 * Module:  Menu.h
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Declaration of the class Menu
 ***********************************************************************/

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
protected:
};

#endif
