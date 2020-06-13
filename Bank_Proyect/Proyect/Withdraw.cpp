
/***********************************************************************
 * Module:  Withdraw.h
 * Author:  David Muñoz & Daniela Orellana
 * Modified: lunes, 1 de junio de 2020 14:34:17
 * Purpose: Declaration of the class Withdraw
 ***********************************************************************/

#include "Withdraw.h"
#include "Bank_account.h"

#include <iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Withdraw::Withdraw(const double _amount)
// Purpose:    Implementation of Withdraw::Withdraw()
// Parameters:
// - _amount
// Return:     
////////////////////////////////////////////////////////////////////////

Withdraw::Withdraw(const double _amount)
{
	this->_amount = _amount;
}

////////////////////////////////////////////////////////////////////////
// Name:       Withdraw::bank_method(const Bank_account _account)
// Purpose:    Implementation of Withdraw::bank_method()
// Parameters:
// - _account
// Return:     
////////////////////////////////////////////////////////////////////////

double Withdraw::bank_method(const Bank_account& _account)
{
	double balance = _account->get_bank_balance() - this->_amount;
	_account->set_bank_balance(balance);
}

////////////////////////////////////////////////////////////////////////
// Name:       Withdraw::print_transaction(Person client)
// Purpose:    Implementation of Withdraw::print_transaction()
// Parameters:
// - _account_type
// - _client
// Return:     
////////////////////////////////////////////////////////////////////////

void Withdraw::print_transaction(const Bank_account& client)
{
	cout << "Retiro" << endl;
}