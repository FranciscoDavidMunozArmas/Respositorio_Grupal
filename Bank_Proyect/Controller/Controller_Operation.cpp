/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller_Operation
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Controller_Operation.h"
#include "Controller_Deposit.cpp"
#include "Controller_Withdraw.cpp"

using namespace std;

/**
 * @brief _method
 * @param  
*/
void Controller_Operation::_method() {
	_options();
}

/**
 * @brief _options()
 * @param  
*/
void Controller_Operation::_options() {
	switch (_set_menu())
	{
	case 1: {
		Controller_Deposit _cd;
		_cd.init();
	}
		break;
	case 2: {
		Controller_Withdraw _wd;
		_wd.init();
	}
		break;
	}
}

/**
 * @brief _set_menu()
 * @param  
*/
int Controller_Operation::_set_menu() {
	char** option = (char**)calloc(2, sizeof(char*));

	*(option + 0) = "DEPOSITAR";
	*(option + 1) = "RETIRAR";
	return menu.options(option, 2);
}
