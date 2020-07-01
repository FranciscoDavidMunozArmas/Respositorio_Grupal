/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_Create_Natural_Person
*/

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
