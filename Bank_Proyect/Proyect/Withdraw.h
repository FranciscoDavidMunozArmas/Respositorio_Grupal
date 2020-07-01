/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Lunes, 1 de Junio de 2020
 * @function Declaration of the class Withdraw
*/
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
