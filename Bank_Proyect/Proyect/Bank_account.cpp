/***********************************************************************
 * Module:  Bank_account.cpp
 * Author:  David Muñoz & Daniela Orellana
 * Modified: martes, 9 de junio de 2020 16:05:48
 * Purpose: Implementation of the class Bank_account
 ***********************************************************************/

#include "Transaction.cpp"
#include "Date.h"
#include "Person.h"
#include "Bank_account.h"
#include "../Libraries/Array_dinamic.cpp"

#include <iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::Bank_account(Account_type _account_type, const Person& _client)
// Purpose:    Implementation of Bank_account::Bank_account()
// Parameters:
// - _account_type
// - _client
// Return:
////////////////////////////////////////////////////////////////////////

Bank_account::Bank_account(const Account_type _account_type, const Person& _client)
{
	Array_dynamic _ad;
	this->_account_type = _account_type;
	this->_client = _client;
	this->_transaction = _ad._create_array(0, _transaction);
	this->_account_number = "001";
	this->_bank_balance = 0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::Bank_account(Account_type _account_type, const Person _client, const double _bank_balance);
// Purpose:    Implementation of Bank_account::Bank_account()
// Parameters:
// - _client
// - _bank_balance
// - _account_number
// - _account_type
// Return:
////////////////////////////////////////////////////////////////////////

Bank_account::Bank_account(const Account_type _account_type, const Person& _client, const double _bank_balance)
{
	this->_account_type = _account_type;
	this->_client = _client;
	this->_bank_balance = _bank_balance;
	this->_account_number = "001";
	this->_transaction = _ad._create_array(0, _transaction);
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::get_client()
// Purpose:    Implementation of Bank_account::get_client()
// Return:     Person
////////////////////////////////////////////////////////////////////////

Person Bank_account::get_client()
{
   return _client;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::get_account_number()
// Purpose:    Implementation of Bank_account::get_account_number()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Bank_account::get_account_number()
{
   return _account_number;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::get_bank_balance()
// Purpose:    Implementation of Bank_account::get_bank_balance()
// Return:     double
////////////////////////////////////////////////////////////////////////

double Bank_account::get_bank_balance()
{
   return _bank_balance;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::get_account_type()
// Purpose:    Implementation of Bank_account::get_account_type()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

Account_type Bank_account::get_account_type()
{
   return _account_type;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::get_creation_date()
// Purpose:    Implementation of Bank_account::get_creation_date()
// Return:     Date
////////////////////////////////////////////////////////////////////////

Date Bank_account::get_creation_date()
{
   return _creation_date;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::set_client(const Person _client)
// Purpose:    Implementation of Bank_account::set_client()
// Parameters:
// - new_client
// Return:     void
////////////////////////////////////////////////////////////////////////

void Bank_account::set_client(const Person _client)
{
	this->_client = _client;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::set_bank_balance(const double _bank_balance)
// Purpose:    Implementation of Bank_account::set_bank_balance()
// Parameters:
// - new_bank_balance
// Return:     void
////////////////////////////////////////////////////////////////////////

void Bank_account::set_bank_balance(const double _bank_balance)
{
	this->_bank_balance = _bank_balance;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::set_creation_date(const Date _creation_date)
// Purpose:    Implementation of Bank_account::set_creation_date()
// Parameters:
// - new_creation_date
// Return:     void
////////////////////////////////////////////////////////////////////////

void Bank_account::set_creation_date(const Date _creation_date)
{
	this->_creation_date = _creation_date;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::add_transaction(const Transaction _transaction)
// Purpose:    Implementation of Bank_account::add_transaction()
// Parameters:
// - new_creation_date
// Return:     void
////////////////////////////////////////////////////////////////////////

void Bank_account::add_transaction(const Transaction _operation)
{
	int _size = _ad._dynamic_size(this->_transaction);
	_transaction = _ad._resize(this->_transaction, _size + 1);
	*(_transaction + _size) = _operation;
}

string Bank_account::to_string() {
	ostringstream oss;
	oss << "Account Number:" << this->_account_number << "\n\t" << _client.to_string();
	return oss.str();

}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::~Bank_account()
// Purpose:    Implementation of Bank_account::~Bank_account()
// Return:
////////////////////////////////////////////////////////////////////////

Bank_account::~Bank_account(){}
