/***********************************************************************
 * Module:  Transaction.cpp
 * Author:  David Muñoz & Daniela Orellana
 * Modified: martes, 2 de junio de 2020 15:34:44
 * Purpose: Implementation of the class Transaction
 ***********************************************************************/

#include "Date.h"
#include "Transaction.h"
#include "Bank_account.h"

////////////////////////////////////////////////////////////////////////
// Name:       Transaction::get_amount()
// Purpose:    Implementation of Transaction::get_amount()
// Return:     double
////////////////////////////////////////////////////////////////////////

double Transaction::get_amount()
{
   return _amount;
}

////////////////////////////////////////////////////////////////////////
// Name:       Transaction::set_amount(const double _amount)
// Purpose:    Implementation of Transaction::set_amount()
// Parameters:
// - new_amount
// Return:     void
////////////////////////////////////////////////////////////////////////

void Transaction::set_amount(const double _amount)
{
   this->_amount = _amount;
}


double Transaction::bank_method(const Bank_account& _account)
{
	return 0;
}

void Transaction::print_transaction(const Person& _client)
{
	cout << "Transaccion" << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       Transaction::~Transaction()
// Purpose:    Implementation of Transaction::~Transaction()
// Return:
////////////////////////////////////////////////////////////////////////

Transaction::~Transaction()
{
   // TODO : implement
}
