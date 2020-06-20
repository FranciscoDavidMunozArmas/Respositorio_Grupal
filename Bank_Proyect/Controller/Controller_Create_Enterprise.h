/***********************************************************************
 * Module:  Menu.h
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Declaration of the class Menu
 ***********************************************************************/

#if !defined(__Controller_Create_Enterprise)
#define __Controller_Create_Enterprise

#include <iostream>

#include "Controller_Client.h"
#include "../Proyect/Person.h"

class Person;

using namespace std;

class Controller_Create_Enterprise : public Controller_Client
{
public:
    Controller_Create_Enterprise(): Controller_Client() {};
private:
    Person _set_data();
    char* _set_person();
    void _method();
    void _account_options();
    int _account_type_option();
protected:
};

#endif
