/***********************************************************************
 * Module:  Array.cpp
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include "Controller.h"
#include "Controller_Creation_Account.cpp"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "../Libraries/Menu.cpp"
#include "../Libraries/Screen.h"

using namespace std;

Controller::Controller() {}

void Controller::init()
{
	screen.hide_cursor();
	bool flag = true;
	do {
		_selection_menu(&flag);
	} while (flag);
}

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
