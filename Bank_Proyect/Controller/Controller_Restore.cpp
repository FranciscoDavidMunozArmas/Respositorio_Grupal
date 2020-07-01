/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller_Restore
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Controller_Restore.h"
#include "../Libraries/File_reader.cpp"

using namespace std;

/**
 * @brief _method
*/
void Controller_Restore::_method() {
	_restore();
}

/**
 * @brief _restore
*/
void Controller_Restore::_restore() {
	FILE* _file;
	File_reader _fr;
	char** _data;
	Array_dynamic _ad;
	_data = _fr._read_txt_file("../back_up.txt", _data);
	strcpy(*(_data + _ad._dynamic_size(_data)- 1), "ATRAS");
	int _index = menu.options("QUE ARCHIVO DESEA RESTAURAR: ", _data, _ad._dynamic_size(_data));

	if (_index < _ad._dynamic_size(_data)) {
		_fr._restore_data("..\\File\\account_record.txt", *(_data + _index - 1));
	}
}
