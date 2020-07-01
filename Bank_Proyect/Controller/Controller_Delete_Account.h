/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_Delete_Account
*/

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