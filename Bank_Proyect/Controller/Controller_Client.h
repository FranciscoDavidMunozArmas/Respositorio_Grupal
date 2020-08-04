/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_Client
*/

#if !defined(__Controller_Client)
#define __Controller_Client

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "../Proyect/Person.h"
#include "Controller_Entity.h"
#include "../Libraries/Input.h"
#include "../Libraries/RUC_verificator.h"
#include "../Libraries/ID_verificator.h"
#include "../Proyect/Bank_account.h"


using namespace std;

class Input;

class Controller_Client: public Controller_Entity
{
public:
    Controller_Client() : Controller_Entity() {};
private:
    Input input;
    RUC_verificator _ruc;
    ID_verificator _id;
protected:
    double _set_balance(Account_type _type);
    char* set_name(char* _phrase);
    char* set_id(int _option);
    char* set_phone();
    char* set_address();
    virtual void _method() = 0;
    virtual void _account_options() = 0;
    virtual int _account_type_option() = 0;
};

#endif
