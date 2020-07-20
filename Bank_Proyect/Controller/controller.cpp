/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Controller.h"
#include "Controller_Creation_Account.cpp"
#include "Controller_Record.cpp"
#include "Controller_Delete_Account.cpp"
#include "Controller_Operation.cpp"

#include "Contribuitors.cpp"
#include "Controller_Restore.cpp"

#include "../Libraries/Menu.cpp"
#include "../Libraries/Screen.h"
#include "../Libraries/File_reader.cpp"

using namespace std;

/**
 * @brief _method
*/
void Controller::_method() {
	bool flag = true;
	do {
		screen.hide_cursor();
		_selection_menu(&flag);
		system("cls");
	} while (flag);

	cout << endl << endl;
}

/**
 * @brief _selection_menu
 * @param flag
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
		Controller_Delete_Account _cda;
		_cda.init();
	}break;
	case 5: {
		Contribuitors _group;
		_group.init();
	}break;
	case 6: {
		File_reader _fr;
		_fr._back_up("..\\File\\account_record.txt");
	}break;
	case 7: {
		Controller_Restore _cr;
		_cr.init();
	}break;
	case 8: {
		*flag = false;
	}break;
	}
}

/**
 * @brief _set_menu
 * @return int
*/
int Controller::_set_menu() {
	char** option = (char**)malloc(8 * sizeof(char*));

	*(option + 0) = "CREAR CUENTA";
	*(option + 1) = "REGISTROS";
	*(option + 2) = "OPERACION BANCARIA";
	*(option + 3) = "BORRAR CUENTA";
	*(option + 4) = "CONTRIBUIDORES";
	*(option + 5) = "COPIA DE SEGURIDAD";
	*(option + 6) = "RESTAURAR";
	*(option + 7) = "SALIR";

	return menu.options(option, 8, screen.YELLOW);
}
