/***********************************************************************
 * Module:  Menu.h
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Declaration of the class Menu
 ***********************************************************************/

#if !defined(__Controller_Delete_Account)
#define __Controller_Delete_Account

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "../Proyect/Bank_account.h"
#include "Controller_Entity.h"

using namespace std;

class Menu;
class File_reader;

class Controller_Delete_Account : public Controller_Entity
{
public:
    Controller_Delete_Account() : Controller_Entity() {};
private:
    void _method();
    void _delete_record();
    int _set_menu();
    char* _get_account_number();
protected:
};

#endif