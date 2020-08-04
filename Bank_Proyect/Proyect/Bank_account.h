/***********************************************************************
 * Module:  Bank_account.h
 * Author:  David Muñoz & Daniela Orellana
 * Modified: martes, 9 de junio de 2020 16:05:48
 * Purpose: Declaration of the class Bank_account
 ***********************************************************************/

#if !defined(__Bank_Model_Bank_account_h)
#define __Bank_Model_Bank_account_h

class Transaction;
class Date;
class Person;

#include "Person.h"
#include "../Libraries/Date.h"
#include "../Libraries/Date.cpp"
#include "Transaction.h"
#include "../Libraries/Array_dinamic.h"

#include <iostream>

using namespace std;

enum class Account_type {
	_SAVING_ACCOUNT,
	_CHECKING_ACCOUNT
};

class Bank_account
{
public:
	Bank_account() {};
	Bank_account(const Account_type _account_type, const Person& _client);
	Bank_account(const Account_type _account_type, const Person& _client, const double _bank_balance);

	Person get_client();
	char* get_account_number();
	double get_bank_balance();
	Account_type get_account_type();
	Date get_creation_date();

	void set_client(const Person _client);
	void set_bank_balance(const double _bank_balance);
	void set_creation_date(const Date _creation_date);

	void add_transaction(Transaction _operation);

	void temporal(Transaction _operation);

	friend ostream& operator << (ostream& o, const Bank_account& p);

	string _get_account();
	string _get_account_all_data();

	bool operator == (char* _phrase);
	bool operator == (const Bank_account& p);

   ~Bank_account();

protected:
private:
   Person _client;
   char _account_number[14];
   double _bank_balance;
   Account_type _account_type;
   Date _creation_date;
   Array_dynamic _ad;

   string _create_key();
   string _all_transactions();
};

#endif
