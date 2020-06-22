/***********************************************************************
 * Module:  Deposit.h
 * Author:  David Mu�oz & Daniela Orellana
 * Modified: lunes, 1 de junio de 2020 14:34:26
 * Purpose: Declaration of the class Deposit
 ***********************************************************************/

#include "Deposit.h"
#include "Bank_account.h"

#include <iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Deposit::bank_method(const Bank_account _account)
// Purpose:    Implementation of Deposit::bank_method()
// Parameters:
// - _account
// Return:
////////////////////////////////////////////////////////////////////////

double Deposit::bank_method(Bank_account* _account)
{
	double balance = _account->get_bank_balance() + _amount;
	_account->set_bank_balance(balance);
}