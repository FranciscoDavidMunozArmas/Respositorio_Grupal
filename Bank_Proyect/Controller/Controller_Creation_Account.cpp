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

#include "Controller_Create_Natural_Person.cpp"
#include "Controller_Create_Enterprise.cpp"
#include "Controller_Parent.cpp"

using namespace std;

void Controller_Creation_Account::_method() {
	_options();
}

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

int Controller_Creation_Account::_set_menu() {

	char** option = (char**)calloc(2, sizeof(char*));

	*(option + 0) = "PERSONA NATURAL";
	*(option + 1) = "PERSONA JURIDICA";
	return menu.options(option, 2);
}