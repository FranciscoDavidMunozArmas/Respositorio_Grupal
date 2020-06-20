/***********************************************************************
 * Module:  Menu.h
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Declaration of the class Menu
 ***********************************************************************/

#if !defined(__Controller_Main_Option)
#define __Controller_Main_Option

#include <iostream>
#include "Controller_Parent.h"

using namespace std;

class Controller_Main_Option : public Controller_Parent
{
public:
    Controller_Main_Option() : Controller_Parent() {};
private:
protected:
    virtual void _method() = 0;
    virtual void _options() = 0;
    virtual int _set_menu() = 0;
};

#endif
