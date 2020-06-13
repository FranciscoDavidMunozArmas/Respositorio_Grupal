/***********************************************************************
 * Module:  Deposit.h
 * Author:  David Muñoz & Daniela Orellana
 * Modified: lunes, 1 de junio de 2020 14:34:26
 * Purpose: Declaration of the class Deposit
 ***********************************************************************/

#include "Withdraw.h"
#include "Bank_account.h"

#include <iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Deposit::Deposit(const double _amount)
// Purpose:    Implementation of Deposit::Deposit()
// Parameters:
// - _amount
// Return:     
////////////////////////////////////////////////////////////////////////

Deposit::Deposit(const double _amount)
{
	this->_amount = _amount;
}

////////////////////////////////////////////////////////////////////////
// Name:       Deposit::bank_method(const Bank_account _account)
// Purpose:    Implementation of Deposit::bank_method()
// Parameters:
// - _account
// Return:     
////////////////////////////////////////////////////////////////////////

double Deposit::bank_method(const Bank_account& _account)
{
	double balance = _account->get_bank_balance() + this->_amount;
	_account->set_bank_balance(balance);
}

////////////////////////////////////////////////////////////////////////
// Name:       Deposit::print_transaction(Person client)
// Purpose:    Implementation of Deposit::print_transaction()
// Parameters:
// - _account_type
// - _client
// Return:     
////////////////////////////////////////////////////////////////////////

void Deposit::print_transaction(const Bank_account& client)
{
	cout << "Deposito" << endl;
}