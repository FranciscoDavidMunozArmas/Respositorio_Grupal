/***********************************************************************
 * Module:  Array.cpp
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Controller.h"
#include "Controller_Creation_Account.cpp"
#include "Controller_Record.cpp"
#include "Controller_Delete_Account.cpp"
#include "Controller_Operation.cpp"

#include "../Libraries/Menu.cpp"
#include "../Libraries/Screen.h"

using namespace std;

void Controller::_method() {
	screen.hide_cursor();
	bool flag = true;
	do {
		_selection_menu(&flag);
	} while (flag);
}

void Controller::_selection_menu(bool* flag)
{

	switch (_set_menu()) {
	case 1: {
		Controller_Creation_Account _cca;
		_cca.init();
	}break;
	case 2: {
		Controller_Record _cr;
		_cr.init();
	}break;
	case 3: {
		Controller_Operation _co;
		_co.init();
	}break;
	case 4: {
	}break;
	case 5:{
		Controller_Delete_Account _cda;
		_cda.init();
	}break;
	case 6: {
		*flag = false;
	}break;
	}
}

int Controller::_set_menu() {
	char** option = (char**)malloc(6 * sizeof(char*));

	*(option + 0) = "CREAR CUENTA";
	*(option + 1) = "REGISTROS";
	*(option + 2) = "OPERACION BANCARIA";
	*(option + 3) = "INFORMACION";
	*(option + 4) = "BORRAR CUENTA";
	*(option + 5) = "SALIR";

	return menu.options(option, 6);
}
