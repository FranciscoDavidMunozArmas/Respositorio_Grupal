/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_Bank_Operation
*/

#if !defined(__Controller_Bank_Operation)
#define __Controller_Bank_Operation

#include <iostream>

#include "Controller_Entity.h"
#include "../Proyect/Bank_account.h"

using namespace std;

class Controller_Bank_Operation : public Controller_Entity
{
public:
    Controller_Bank_Operation() : Controller_Entity() {};
private:
    void _method();
protected:
    int _get_account(Bank_account* _ba);
    virtual double _get_amount(Bank_account& _ba) = 0;
    virtual void _operation() = 0;
};

#endif
