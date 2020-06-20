/***********************************************************************
 * Module:  Array.cpp
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Controller_Record.h"
#include "Controller_All_Record.cpp"
#include "Controller_Look_By_Record.cpp"

using namespace std;

void Controller_Record::_method() {
	_options();
}

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
	}
}


int Controller_Record::_set_menu() {
	char** option = (char**)calloc(2, sizeof(char*));

	*(option + 0) = "MOSTRAR TODAS LAS CUENTAS";
	*(option + 1) = "BUSCAR";
	return menu.options(option, 2);
}
