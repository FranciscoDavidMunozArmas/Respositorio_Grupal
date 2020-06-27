  
/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller
*/

#include "Controller.h"
#include "Controller_Creation_Account.cpp"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "../Libraries/Menu.cpp"
#include "../Libraries/Screen.h"

using namespace std;

Controller::Controller() {}

/**
 * @brief init
 * @param  
*/
void Controller::init()
{
	screen.hide_cursor();
	bool flag = true;
	do {
		_selection_menu(&flag);
	} while (flag);
}

/**
 * @brief _selection_menu
 * @param flag
*/
void Controller::_selection_menu(bool* flag)
{
	char** option = (char**)calloc(3, sizeof(char*));

	*(option + 0) = "Crear cuenta";
	*(option + 1) = "Ver registros";
	*(option + 2) = "Salir";

	switch (menu.options(option, 3)) {
	case 1: {
		system("cls");
		Controller_Creation_Account _cca;
		_cca.init();
	}break;
	case 2: {
		cout << "Option 2" << endl;
	}break;
	case 3: {
		*flag = false;
	}break;
	}
}
