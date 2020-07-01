/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Lunes, 1 de Junio de 2020
 * @function Declaration of the class Deposit
*/
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
