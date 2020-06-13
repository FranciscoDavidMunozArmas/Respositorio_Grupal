/***********************************************************************
 * Module:  Menu.h
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Declaration of the class Menu
 ***********************************************************************/

#if !defined(__Controller_Creation_Account)
#define __Controller_Creation_Account

#include <iostream>

#include "../Libraries/Menu.h"

using namespace std;

class Controller_Creation_Account
{
public:
    Controller_Creation_Account();
    void init();
private:
    Menu menu;
    void _set_account();
    int _account_option();
protected:
};

#endif
