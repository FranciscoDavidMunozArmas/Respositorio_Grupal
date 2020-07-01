/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller_Creation_Account
*/

#include "Controller_Creation_Account.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Controller_Create_Natural_Person.cpp"
#include "Controller_Create_Enterprise.cpp"
#include "Controller_Parent.cpp"

using namespace std;

/**
 * @brief _method
*/
void Controller_Creation_Account::_method() {
	_options();
}

/**
 * @brief _options
*/
void Controller_Creation_Account::_options() {
	switch (_set_menu()) {
	case 1:
	    {
	        Controller_Create_Natural_Person _ccnp;
            _ccnp.init();
		}
		break;
	case 2:
	    {
	        Controller_Create_Enterprise _cce;
            _cce.init();
	    }
		break;
	default:
		cout << endl << endl;
		break;
	}

	system("pause");
}

/**
 * @brief _set_menu
 * @return int
*/
int Controller_Creation_Account::_set_menu() {

	char** option = (char**)calloc(3, sizeof(char*));

	*(option + 0) = "PERSONA NATURAL";
	*(option + 1) = "PERSONA JURIDICA";
	*(option + 2) = "ATRAS";
	return menu.options(option, 3);
}
