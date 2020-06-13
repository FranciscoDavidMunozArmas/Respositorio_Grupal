/***********************************************************************
 * Module:  Menu.h
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Declaration of the class Menu
 ***********************************************************************/

#if !defined(__Menu)
#define __Menu

#include <iostream>
#include "Screen.h"

using namespace std;

class Menu {
public:
    int options(char** option, int index);
private:
    Screen screen;
protected:
};

#endif
