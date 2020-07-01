/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller
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
 * @brief _method()
 * @param  
*/
void Controller_Creation_Account::_method() {
	_options();
}

/**
 * @brief _options
 * @param  
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
	}

	system("pause");
}

/**
 * @brief _set_menu()
 * @param  
*/
int Controller_Creation_Account::_set_menu() {

	char** option = (char**)calloc(2, sizeof(char*));

	*(option + 0) = "PERSONA NATURAL";
	*(option + 1) = "PERSONA JURIDICA";
	return menu.options(option, 2);
}
