/***********************************************************************
 * Module:  Menu.h
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Declaration of the class Menu
 ***********************************************************************/

#if !defined(__Controller_Create_Natural_Person)
#define __Controller_Create_Natural_Person

#include <iostream>

#include "Controller_Client.h"
#include "../Proyect/Person.h"

class Person;

using namespace std;

class Controller_Create_Natural_Person : public Controller_Client
{
public:
    Controller_Create_Natural_Person() : Controller_Client() {};
private:
    Person _set_data();
    void _method();
    void _account_options();
    int _account_type_option();
protected:
};

#endif
