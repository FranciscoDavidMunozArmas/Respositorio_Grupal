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
	char** option = (char**)calloc(5, sizeof(char*));

	*(option + 0) = "Crear cuenta";
	*(option + 1) = "Registros";
	*(option + 2) = "Operacion Bancaria";
	*(option + 3) = "Informacion";
	*(option + 4) = "Salir";

	switch (menu.options(option, 5)) {
	case 1: {
		system("cls");
		Controller_Creation_Account _cca;
		_cca.init();
	}break;
	case 2: {
		Controller_Record _cr;
		_cr.init();
	}break;
	case 3: {
	}break;
	case 4: {
	}break;
	case 5: {
		*flag = false;
	}break;
	}
}
