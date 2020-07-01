/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller_Natural_Person
*/

#include "Controller_Create_Natural_Person.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Controller_Client.cpp"
#include "../Proyect/Natural_person.h"
#include "../Proyect/Person.h"
#include "../Proyect/Bank_account.h"

using namespace std;

/**
 * @brief _method
*/
void Controller_Create_Natural_Person::_method() {
	_account_options();
}

/**
 * @brief _account_options
*/
void Controller_Create_Natural_Person::_account_options() {
	switch (_account_type_option()) {
	case 1:
		{
			system("cls");
			Bank_account _new_account(Account_type::_CHECKING_ACCOUNT, _set_data(), _set_balance(Account_type::_CHECKING_ACCOUNT));
			cout << endl << _new_account << endl;
			_fr._write_in_file(file,_path_account, &_new_account);
		}
		break;
	case 2:
		{
			system("cls");
			Bank_account _new_account_2(Account_type::_SAVING_ACCOUNT, _set_data(), _set_balance(Account_type::_SAVING_ACCOUNT));
			cout << endl << _new_account_2 << endl;
			_fr._write_in_file(file,_path_account, &_new_account_2);
			break;
		}
	}
}

/**
 * @brief _account_type_option
 * @return int
*/
int Controller_Create_Natural_Person::_account_type_option() {
	char** option = (char**)calloc(2, sizeof(char*));

	*(option + 0) = "CUENTA CORRIENTE";
	*(option + 1) = "CUENTA DE AHORRO";
	return menu.options(option, 2);
}

/**
 * @brief _set_data
 * @return Person
*/
Person Controller_Create_Natural_Person::_set_data() {
	char* _name;
	char* _id;
	char* _address;
	char* _phone;

	screen.gotoxy(15,5);
	_name = set_name("CLIENTE: ");
	screen.gotoxy(15, 5);
	_id = set_id(0);
	screen.gotoxy(15, 5);
	_address = set_address();
	screen.gotoxy(15, 5);
	_phone = set_phone();
	system("cls");

	Natural_person person(_id, _name, _address, _phone);

	return person;
}