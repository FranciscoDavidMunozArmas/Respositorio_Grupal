
/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Martes, 9 de Junio de 2020 10:07:14
 * @function Implementation of Bank_account
*/
#include "Transaction.cpp"
#include "Date.h"
#include "Person.h"
#include "Bank_account.h"
#include "../Libraries/Array_dinamic.cpp"

#include <iostream>

using namespace std;

/**
 * @brief Banck_account
 * @param _account_type, _client
*/
Bank_account::Bank_account(const Account_type _account_type, const Person& _client)
{
	Array_dynamic _ad;
	this->_account_type = _account_type;
	this->_client = _client;
	this->_transaction = _ad._create_array(0, _transaction);
	this->_account_number = "001";
	this->_bank_balance = 0;
}

/**
 * @brief Banck_account
 * @param _account_type, _client, _bank_balance
*/
Bank_account::Bank_account(const Account_type _account_type, const Person& _client, const double _bank_balance)
{
	this->_account_type = _account_type;
	this->_client = _client;
	this->_bank_balance = _bank_balance;
	this->_account_number = "001";
	this->_transaction = _ad._create_array(0, _transaction);
}
/**
 * @brief get_client
 * @param  
*/
Person Bank_account::get_client()
{
   return _client;
}

/**
 * @brief get_account_number
 * @param  
*/
std::string Bank_account::get_account_number()
{
   return _account_number;
}

/**
 * @brief get_bank_balance
 * @param  
*/
double Bank_account::get_bank_balance()
{
   return _bank_balance;
}

/**
 * @brief get_account_type
 * @param  
*/
Account_type Bank_account::get_account_type()
{
   return _account_type;
}
/**
 * @brief get_creation_date
 * @param  
*/
Date Bank_account::get_creation_date()
{
   return _creation_date;
}

/**
 * @brief set_client
 * @param _client
*/
void Bank_account::set_client(const Person _client)
{
	this->_client = _client;
}

/**
 * @brief set_bank_balance
 * @param _bank_balance
*/
void Bank_account::set_bank_balance(const double _bank_balance)
{
	this->_bank_balance = _bank_balance;
}

/**
 * @brief set_creation_date
 * @param _creation_date
*/
void Bank_account::set_creation_date(const Date _creation_date)
{
	this->_creation_date = _creation_date;
}

/**
 * @brief add_transaction
 * @param _operation
*/
void Bank_account::add_transaction(const Transaction _operation)
{
	int _size = _ad._dynamic_size(this->_transaction);
	_transaction = _ad._resize(this->_transaction, _size + 1);
	*(_transaction + _size) = _operation;
}

/**
 * @brief to_string
 * @param  
*/
string Bank_account::to_string() {
	ostringstream oss;
	oss << "Account Number:" << this->_account_number << "\n\t" << _client.to_string();
	return oss.str();

}

/**
 * @brief Bank_account
 * @param  
*/
Bank_account::~Bank_account(){}
