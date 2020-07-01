/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Lunes, 1 de Junio de 2020 10:07:14
 * @function Implementation of Controller
*/
#include "Withdraw.h"
#include "Bank_account.h"

#include <iostream>

using namespace std;

/**
 * @brief bank_method
 * @param _account
*/
double Withdraw::bank_method(Bank_account* _account)
{
	double balance = _account->get_bank_balance() - _amount;
	_account->set_bank_balance(balance);
}
