/***********************************************************************
 * Module:  Menu.h
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Declaration of the class Menu
 ***********************************************************************/

#if !defined(__Controller)
#define __Controller

#include <iostream>

#include "../Libraries/Menu.h"
#include "../Libraries/Screen.h"

using namespace std;

class Controller
{
public:
    Controller();
    void init();
private:
    Menu menu;
    Screen screen;
    void _selection_menu(bool* flag);
protected:
};

#endif
