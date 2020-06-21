/***********************************************************************
 * Module:  Transaction.h
 * Author:  David Muñoz & Daniela Orellana
 * Modified: martes, 2 de junio de 2020 15:34:44
 * Purpose: Declaration of the class Transaction
 ***********************************************************************/

#if !defined(__Bank_Model_Transaction_h)
#define __Bank_Model_Transaction_h

class Date;

#include "Bank_account.h"

#include "Date.h"
#include "Person.h"

class Bank_account;
class Date;

using namespace std;

class Transaction
{
public:
	Transaction(const bool _type): _type(_type){};
	double get_amount();
	void set_amount(const double _amount);
	void print_transaction();
	virtual double bank_method(const Bank_account& _account);

   ~Transaction();

protected:
	double _amount;
	bool _type;
private:
   Date _transaction_date;
};

#endif
