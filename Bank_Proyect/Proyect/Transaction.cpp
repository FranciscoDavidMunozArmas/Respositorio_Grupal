/***********************************************************************
 * Module:  Transaction.cpp
 * Author:  David Muñoz & Daniela Orellana
 * Modified: martes, 2 de junio de 2020 15:34:44
 * Purpose: Implementation of the class Transaction
 ***********************************************************************/

#include "../Libraries/Date.h"
#include "Transaction.h"
#include "Bank_account.h"

#include <sstream>

#pragma once

/**
 * @brief get_amount
 * @return double
*/
double Transaction::get_amount()
{
   return _amount;
}

/**
 * @brief set_amount
 * @param _amount 
*/
void Transaction::set_amount(const double _amount)
{
   this->_amount = _amount;
}

/**
 * @brief bank_method
 * @param _account 
 * @return double
*/
double Transaction::bank_method(const Bank_account& _account)
{
	return 0;
}

/**
 * @brief print_transaction
*/
void Transaction::print_transaction() {
	if (_type) {
		cout << "Deposito: $";
	}
	else {
		cout << "Retiro: $";
	}

	cout << _amount << "\t\t" << _transaction_date.to_string() << endl;
}

string Transaction::_get_transaction() {
	ostringstream oss;
	if (_type) {
		oss << "Deposito: $";
	}
	else {
		oss << "Retiro: $";
	}

	oss << _amount << "\t\t" << _transaction_date.to_string() << endl;
	return oss.str();
}

/**
 * @brief ~Transaction
 * @return 
*/
Transaction::~Transaction() {}
