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
#include "../Libraries/File_reader.cpp"

#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

#pragma once

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
	strcpy(_account_number, _create_key().c_str());
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
	strcpy(_account_number, _create_key().c_str());
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

char* Bank_account::get_account_number()
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

void Bank_account::add_transaction(Transaction _operation)
{
	FILE* file;
	File_reader _fr;
	ostringstream o;
	o << "../File/" << _account_number << ".txt";
	char* _file_path = (char*)malloc(o.str().size() * sizeof(char));
	strcpy(_file_path, o.str().c_str());
	_fr._write_in_file(file, _file_path, &_operation);

}

ostream& operator << (ostream& o, const Bank_account& p) {
	o << "Cuenta: " << p._account_number << "\t\tPropietario: " << p._client;
	return o;
}

bool Bank_account::operator == (const Bank_account& p) {
	return (strcmp(this->_account_number, p._account_number) == 0);
}

void Bank_account::print_account() {
	cout << "NUMERO DE CUENTA: " << _account_number << endl;
	cout << "PROPIETARIO: " << _client.get_name() << endl;
	cout << "FECHA DE CREACION: " << _creation_date.to_string() << endl;
	cout << "TIPO DE CUENTA: ";
	switch (_account_type)
	{
	case Account_type::_CHECKING_ACCOUNT:
		cout << "CORRIENTE" << endl;
		break;
	case Account_type::_SAVING_ACCOUNT:
		cout << "AHORRO" << endl;
		break;
	}
	cout << "\t" << "\tSALDO: $" << _bank_balance << endl << endl;

	print_transactions();
}

string Bank_account::_create_key() {
	ostringstream oss;
	oss << _creation_date.get_year();
	if (_creation_date.get_month() < 10) {
		oss << "0" << _creation_date.get_month();
	}
	else {
		oss << _creation_date.get_month();
	}

	if (_creation_date.get_day() < 10) {
		oss << "0" << _creation_date.get_day();
	}
	else {
		oss << _creation_date.get_day();
	}

	if (_creation_date.get_hour() < 10) {
		oss << "0" << _creation_date.get_hour();
	}
	else {
		oss << _creation_date.get_hour();
	}

	if (_creation_date.get_hour() < 10) {
		oss << "0" << _creation_date.get_minute();
	}
	else {
		oss << _creation_date.get_minute();
	}

	if (_creation_date.get_second() < 10) {
		oss << "0" << _creation_date.get_second();
	}
	else {
		oss << _creation_date.get_second();
	}

	return oss.str();
}

void Bank_account::print_transactions() {
	FILE* file;
	File_reader _fr;
	Transaction* _transaction;

	ostringstream o;
	o << "../File/" << _account_number << ".txt";
	char* _file_path = (char*)malloc(o.str().size()*sizeof(char));
	strcpy(_file_path, o.str().c_str());

	_transaction = _fr._read_file(file, _file_path, _transaction);

	if (_ad._dynamic_size(_transaction) != 0) {
		for (int i = 0; i < _ad._dynamic_size(_transaction); i++) {
			(_transaction + i)->print_transaction();
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::~Bank_account()
// Purpose:    Implementation of Bank_account::~Bank_account()
// Return:
////////////////////////////////////////////////////////////////////////

Bank_account::~Bank_account(){}
