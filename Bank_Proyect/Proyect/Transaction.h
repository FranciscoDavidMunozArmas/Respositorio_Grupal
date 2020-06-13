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
	Transaction(const double _amount): _amount(_amount){};
	double get_amount();
	void set_amount(const double _amount);
	virtual double bank_method(const Bank_account& _account);
	virtual void print_transaction(const Person& _client);

   ~Transaction();

protected:
	double _amount;
private:
   Date _transaction_date;
};

#endif
