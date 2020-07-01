/***********************************************************************
 * Module:  Deposit.h
 * Author:  David Muñoz & Daniela Orellana
 * Modified: lunes, 1 de junio de 2020 14:34:26
 * Purpose: Declaration of the class Deposit
 ***********************************************************************/

#if !defined(__Bank_Model_Deposit_h)
#define __Bank_Model_Deposit_h

#include "Transaction.h"
#include "Bank_account.h"

class Deposit : public Transaction
{
public:
	Deposit() : Transaction(true) {};
	double bank_method(Bank_account* _account);
protected:
private:

};

#endif
