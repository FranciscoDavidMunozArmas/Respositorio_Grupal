/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_Bank_Operation
*/

#include "Controller_Bank_Operation.h"

#include "Controller_Look_By_Record.cpp"
#include "../Libraries/File_reader.h"
#include "../Libraries/Input.h"
#include "../Libraries/Array_dinamic.h"
#include "../Proyect/Bank_account.h"

#include "../Libraries/To_number.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#pragma once

using namespace std;

/**
 * @brief _method
*/
void Controller_Bank_Operation::_method() {
	_operation();
}

/**
 * @brief _get_account
 * @param _ba 
 * @return int
*/
int Controller_Bank_Operation::_get_account(Bank_account* _ba) {
	Array_dynamic _ad;
	Controller_Look_By_Record _clbr;
	Input _input;

	system("cls");
	char* _key;
	string _aux = _input.input_int_number("NUMERO DE CUENTA: ").c_str();
	_key = (char*)malloc(_aux.size() * sizeof(char));
	strcpy(_key, _aux.c_str());
	int _index = _clbr._find_by_account(_key, _ba, _ad._dynamic_size(_ba) - 1);

	return _index;
}