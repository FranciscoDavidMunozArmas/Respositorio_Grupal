/***********************************************************************
 * Module:  Deposit.h
 * Author:  David Muñoz & Daniela Orellana
 * Modified: lunes, 1 de junio de 2020 14:34:26
 * Purpose: Declaration of the class Deposit
 ***********************************************************************/

#if !defined(__Bank_Model_Deposit_h)
#define __Bank_Model_Deposit_h

#include <Transaction.h>
#include <Bank_account.h>

class Deposit : public Transaction
{
public:
	Deposit(const double _amount);
	double bank_method(const Bank_account& _account);
	void print_transaction(const Bank_account& _account);
protected:
private:

};

#endif