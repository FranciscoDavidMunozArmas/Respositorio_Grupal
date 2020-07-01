/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_Withdraw
*/

#if !defined(__Controller_Withdraw)
#define __Controller_Withdraw

#include <iostream>

#include "Controller_Bank_Operation.h"
#include "../Proyect/Withdraw.h"

class Person;

using namespace std;

class Controller_Withdraw : public Controller_Bank_Operation
{
public:
    Controller_Withdraw() : Controller_Bank_Operation() {};
private:
    Withdraw _wd;
    void _operation();
    double _get_amount(Bank_account& _ba);
protected:
};

#endif
