/***********************************************************************
 * Module:  Withdraw.h
 * Author:  David Muñoz & Daniela Orellana
 * Modified: lunes, 1 de junio de 2020 14:34:17
 * Purpose: Declaration of the class Withdraw
 ***********************************************************************/

#if !defined(__Bank_Model_Withdraw_h)
#define __Bank_Model_Withdraw_h

#include "Transaction.h"
#include "Bank_account.h"

class Withdraw : public Transaction
{
public:
	Withdraw() : Transaction(false){};
	double bank_method(Bank_account* _account);
protected:
private:

};

#endif
