/***********************************************************************
 * Module:  Array.cpp
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include "Controller_Create_Enterprise.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "../Proyect/Enterprise.cpp"
#include "../Proyect/Natural_person.cpp"
#include "../Proyect/Person.h"
#include "../Proyect/Bank_account.cpp"

using namespace std;

void Controller_Create_Enterprise::_method() {
	_account_options();
}

void Controller_Create_Enterprise::_account_options() {
	Bank_account _new_account(Account_type::_CHECKING_ACCOUNT, _set_data(), _set_balance(Account_type::_CHECKING_ACCOUNT));
	cout << _new_account<< endl;
	_fr._write_in_file(file,_path_account, &_new_account);
}

int Controller_Create_Enterprise::_account_type_option() {
	return 0;
}

Person Controller_Create_Enterprise::_set_data() {
	char* _name;
	char* _id;
	char* _address;
	char* _phone;

	screen.gotoxy(15, 5);
	_name = set_name("EMPRESA: ");
	screen.gotoxy(15, 5);
	_id = set_id(0);
	screen.gotoxy(15, 5);
	_address = set_address();
	screen.gotoxy(15, 5);
	_phone = set_phone();
	system("cls");

	Enterprise person(_id, _name, _address, _phone, _set_person());
	return person;
}

char* Controller_Create_Enterprise::_set_person() {
	char* _name;

	screen.gotoxy(15, 5);
	_name = set_name("REPRESENTANTE LEGAL: ");
	system("cls");

	return _name;
}
