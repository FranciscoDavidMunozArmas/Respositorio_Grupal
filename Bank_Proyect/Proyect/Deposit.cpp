/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Lunes, 1 de junio de 2020 10:07:14
 * @function Implementation of Deposit
*/
#include "Deposit.h"
#include "Bank_account.h"

#include <iostream>

using namespace std;

/**
 * @brief bank_method
 * @param _account
*/
double Deposit::bank_method(Bank_account* _account)
{
	double balance = _account->get_bank_balance() + _amount;
	_account->set_bank_balance(balance);
}
