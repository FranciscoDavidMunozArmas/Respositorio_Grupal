/***********************************************************************
 * Module:  Array.cpp
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include "Controller_Bank_Operation.h"

#include "Controller_Look_By_Record.cpp"
#include "../Libraries/File_reader.h"
#include "../Libraries/Input.h"
#include "../Proyect/Bank_account.h"

#include "../Libraries/To_number.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#pragma once

using namespace std;

void Controller_Bank_Operation::_method() {
	_operation();
}

int Controller_Bank_Operation::_get_account(Bank_account* _ba) {
	Controller_Look_By_Record _clbr;
	Input _input;

	system("cls");
	char* _key;
	string _aux = _input.input_int_number("NUMERO DE CUENTA: ").c_str();
	_key = (char*)malloc(_aux.size() * sizeof(char));
	strcpy(_key, _aux.c_str());
	int _index = _clbr._find_by_account(_key, _ba);

	return _index;
}
