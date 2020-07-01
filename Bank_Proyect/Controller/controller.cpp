/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of controller
*/
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

/**
 * @brief _method
 * @param  
*/
void Controller::_method() {
	screen.hide_cursor();
	bool flag = true;
	do {
		_selection_menu(&flag);
	} while (flag);
}

/**
 * @brief _menu
 * @param  flag
*/
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

/**
 * @brief _set_menu
 * @param  
*/
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
