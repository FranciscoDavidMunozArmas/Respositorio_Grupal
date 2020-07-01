/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_Deposit
*/

#if !defined(__Controller_Deposit)
#define __Controller_Deposit

#include <iostream>

#include "Controller_Bank_Operation.h"
#include "../Proyect/Deposit.h"

class Person;

using namespace std;

class Controller_Deposit : public Controller_Bank_Operation
{
public:
    Controller_Deposit(): Controller_Bank_Operation() {};
private:
    Deposit _d;
    void _operation();
    double _get_amount(Bank_account& _ba);
protected:
};

#endif
