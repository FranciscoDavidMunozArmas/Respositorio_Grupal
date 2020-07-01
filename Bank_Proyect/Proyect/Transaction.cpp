/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Martes, 2 de Junio de 2020 10:07:14
 * @function Implementation of Transaction
*/
#include "Date.h"
#include "Transaction.h"
#include "Bank_account.h"

#include <sstream>

#pragma once

/**
 * @brief get_amount
 * @param  
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
*/
double Transaction::bank_method(const Bank_account& _account)
{
	return 0;
}

/**
 * @brief print_transaction
 * @param  
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

/**
 * @brief Transaction
 * @param  
*/
Transaction::~Transaction()
{
   // TODO : implement
}
