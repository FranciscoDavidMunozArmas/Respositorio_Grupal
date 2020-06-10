/***********************************************************************
 * Module:  Transaction.cpp
 * Author:  USUARIO
 * Modified: martes, 2 de junio de 2020 15:34:44
 * Purpose: Implementation of the class Transaction
 ***********************************************************************/

#include "Date.h"
#include "Transaction.h"

////////////////////////////////////////////////////////////////////////
// Name:       Transaction::Transaction()
// Purpose:    Implementation of Transaction::Transaction()
// Return:     
////////////////////////////////////////////////////////////////////////

Transaction::Transaction()
{
   date = NULL;
}

////////////////////////////////////////////////////////////////////////
// Name:       Transaction::get_amount()
// Purpose:    Implementation of Transaction::get_amount()
// Return:     double
////////////////////////////////////////////////////////////////////////

double Transaction::get_amount(void)
{
   return _amount;
}

////////////////////////////////////////////////////////////////////////
// Name:       Transaction::set_amount(double new_amount)
// Purpose:    Implementation of Transaction::set_amount()
// Parameters:
// - new_amount
// Return:     void
////////////////////////////////////////////////////////////////////////

void Transaction::set_amount(double new_amount)
{
   _amount = new_amount;
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