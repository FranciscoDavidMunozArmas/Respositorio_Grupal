/***********************************************************************
 * Module:  Array.cpp
 * Author:  USUARIO
 * Modified: jueves, 19 de junio de 2020 21:56:11
 * Purpose: Implementation of the class Controller_Operations_Bank
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Controller_Operation.h"
#include "Controller_Deposit.cpp"
#include "Controller_Withdraw.cpp"

using namespace std;

void Controller_Operation::_method() {
	_options();
}

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

int Controller_Operation::_set_menu() {
	char** option = (char**)calloc(2, sizeof(char*));

	*(option + 0) = "DEPOSITAR";
	*(option + 1) = "RETIRAR";
	return menu.options(option, 2);
}