/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller_Create_Enterprise
*/

#include "Controller_Create_Enterprise.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "../Proyect/Enterprise.cpp"
#include "../Proyect/Natural_person.cpp"
#include "../Proyect/Person.h"
#include "../Proyect/Bank_account.cpp"

using namespace std;

/**
 * @brief _method
*/
void Controller_Create_Enterprise::_method() {
	_account_options();
}

/**
 * @brief _account_options
*/
void Controller_Create_Enterprise::_account_options() {
	Bank_account _new_account(Account_type::_CHECKING_ACCOUNT, _set_data(), _set_balance(Account_type::_CHECKING_ACCOUNT));
	cout << _new_account<< endl;
	_fr._write_in_file(file,_path_account, &_new_account);
}

/**
 * @brief _account_type_option
 * @return int
*/
int Controller_Create_Enterprise::_account_type_option() {
	return 0;
}

/**
 * @brief _set_data
 * @return Person
*/
Person Controller_Create_Enterprise::_set_data() {
	char* _name;
	char* _id;
	char* _address;
	char* _phone;

	_name = set_name("EMPRESA: ");
	_id = set_id();
	_address = set_address();
	_phone = set_phone();
	system("cls");

	Enterprise person(_id, _name, _address, _phone, _set_person());

	delete _name;
	delete _id;
	delete _address;
	delete _phone;

	return person;
}

/**
 * @brief _set_person
 * @return char*
*/
char* Controller_Create_Enterprise::_set_person() {
	char* _name;

	screen.gotoxy(15, 5);
	_name = set_name("REPRESENTANTE LEGAL: ");
	system("cls");

	return _name;
}
