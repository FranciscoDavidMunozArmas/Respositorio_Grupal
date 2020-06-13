/***********************************************************************
 * Module:  Array.cpp
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include "Controller_Creation_Account.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "../Libraries/Menu.h"
#include "../Proyect/Bank_account.cpp"
#include "../Proyect/Natural_person.cpp"

using namespace std;

Controller_Creation_Account::Controller_Creation_Account() {}

void Controller_Creation_Account::init()
{
	_set_account();
}

void Controller_Creation_Account::_set_account()
{
	string _id;
	string _name;
	string _adress;
	string _number;

	cout << "ID: ";
	cin >> _id;
	cout << "Nombre: ";
	cin >> _name;
	cout << "Direccion: ";
	cin >> _adress;
	cout << "Number: ";
	cin >> _number;

	Natural_person person(_id, _name, _adress, _number);

	switch (_account_option()) {
	case 1: {
		Bank_account _new_account(Account_type::_CHECKING_ACCOUNT, person, 1234);
		cout << endl << _new_account.to_string() << endl;
	}break;
	case 2: {
		Bank_account _new_account_2(Account_type::_SAVING_ACCOUNT, person, 1234);
		cout << endl << _new_account_2.to_string() << endl;
	}break;
	}
	
	system("pause");
}

int Controller_Creation_Account::_account_option()
{
	Menu menu;
	char** option = (char**)calloc(2, sizeof(char*));

	*(option + 0) = "CUENTA CORRIENTE";
	*(option + 1) = "CUENTA DE AHORROS";
	return menu.options(option, 2);
}
