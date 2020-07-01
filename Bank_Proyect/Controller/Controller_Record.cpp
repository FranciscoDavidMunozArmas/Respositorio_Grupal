/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller_Record
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Controller_Record.h"
#include "Controller_All_Record.cpp"
#include "Controller_Look_By_Record.cpp"

using namespace std;

/**
 * @brief _method
*/
void Controller_Record::_method() {
	_options();
}

/**
 * @brief _options
*/
void Controller_Record::_options() {
	switch (_set_menu()) {
	case 1:
	    {
	        Controller_All_Record _car;
            _car.init();
	    }
		break;
	case 2:
	    {
			Controller_Look_By_Record _clbr;
			_clbr.init();
	    }
		break;
	default:
		cout << endl << endl;
		break;
	}
}

/**
 * @brief _set_menu
 * @return int
*/
int Controller_Record::_set_menu() {
	char** option = (char**)calloc(3, sizeof(char*));

	*(option + 0) = "MOSTRAR TODAS LAS CUENTAS";
	*(option + 1) = "BUSCAR";
	*(option + 2) = "ATRAS";
	return menu.options(option, 3);
}