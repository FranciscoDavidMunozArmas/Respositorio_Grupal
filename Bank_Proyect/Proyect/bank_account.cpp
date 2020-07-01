/***********************************************************************
 * Module:  Bank_account.cpp
 * Author:  David Muñoz & Daniela Orellana
 * Modified: martes, 9 de junio de 2020 16:05:48
 * Purpose: Implementation of the class Bank_account
 ***********************************************************************/

#include "Transaction.cpp"
#include "../Libraries/Date.h"
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

/**
 * @brief Bank_account
 * @param _account_type 
 * @param _client 
 * @return 
*/
Bank_account::Bank_account(const Account_type _account_type, const Person& _client)
{
	Array_dynamic _ad;
	this->_account_type = _account_type;
	this->_client = _client;
	strcpy(_account_number, _create_key().c_str());
	this->_bank_balance = 0;
}

/**
 * @brief Bank_account
 * @param _account_type 
 * @param _client 
 * @param _bank_balance 
 * @return 
*/
Bank_account::Bank_account(const Account_type _account_type, const Person& _client, const double _bank_balance)
{
	this->_account_type = _account_type;
	this->_client = _client;
	this->_bank_balance = _bank_balance;
	strcpy(_account_number, _create_key().c_str());
}

/**
 * @brief get_client
 * @return Person
*/
Person Bank_account::get_client()
{
   return _client;
}

/**
 * @brief get_account_number
 * @return char*
*/
char* Bank_account::get_account_number()
{
   return _account_number;
}

/**
 * @brief get_bank_balance
 * @return double
*/
double Bank_account::get_bank_balance()
{
   return _bank_balance;
}

/**
 * @brief get_account_type
 * @return Account_type
*/
Account_type Bank_account::get_account_type()
{
   return _account_type;
}

/**
 * @brief get_creation_date
 * @return Date
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

/**
 * @brief <<
 * @param o 
 * @param p 
 * @return ostream&
*/
ostream& operator << (ostream& o, const Bank_account& p) {
	o << "Cuenta: " << p._account_number << "\t\tPropietario: " << p._client;
	return o;
}

/**
 * @brief ==
 * @param p 
 * @return bool
*/
bool Bank_account::operator == (const Bank_account& p) {
	return (strcmp(this->_account_number, p._account_number) == 0);
}

/**
 * @brief print_account
*/
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

/**
 * @brief _create_key
 * @return string
*/
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

	if (_creation_date.get_minute() < 10) {
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

/**
 * @brief print_transactions
*/
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

string Bank_account::_get_account() {
	ostringstream oss;
	oss << "NUMERO DE CUENTA: " << _account_number << endl;
	oss << "PROPIETARIO: " << _client.get_name() << endl;
	oss << "FECHA DE CREACION: " << _creation_date.to_string() << endl;
	oss << "TIPO DE CUENTA: ";
	switch (_account_type)
	{
	case Account_type::_CHECKING_ACCOUNT:
		oss << "CORRIENTE" << endl;
		break;
	case Account_type::_SAVING_ACCOUNT:
		oss << "AHORRO" << endl;
		break;
	}
	oss << "\t" << "\tSALDO: $" << _bank_balance << endl << endl;

	return oss.str();
}

string Bank_account::_get_account_all_data() {
	ostringstream oss;
	oss << _get_account() << endl << endl;
	oss << _all_transactions() << endl;

	return oss.str();
}

string Bank_account::_all_transactions() {
	FILE* file;
	File_reader _fr;
	Transaction* _transaction;
	ostringstream oss;

	ostringstream o;
	o << "../File/" << _account_number << ".txt";
	char* _file_path = (char*)malloc(o.str().size() * sizeof(char));
	strcpy(_file_path, o.str().c_str());

	_transaction = _fr._read_file(file, _file_path, _transaction);

	if (_ad._dynamic_size(_transaction) != 0) {
		for (int i = 0; i < _ad._dynamic_size(_transaction); i++) {
			oss << (_transaction + i)->_get_transaction() << endl;;
		}
	}

	return oss.str();
}

/**
 * @brief ~Bank_account
 * @return 
*/
Bank_account::~Bank_account(){}
