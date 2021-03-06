/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller_Delete
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

#include "Controller_Delete_Account.h"
#include "Controller_Look_By_Record.h"

#include "../Libraries/Array_dinamic.cpp"
#include "../Proyect/Bank_account.cpp"
#include "../Libraries/File_reader.cpp"
#include "../Libraries/Input.h"
#include "../Libraries/Look_by.cpp"
#include "../Libraries/List_Circle_Double.cpp"

using namespace std;

/**
 * @brief _method
*/
void Controller_Delete_Account::_method() {
	_delete_record();
}

/**
 * @brief _delete_record
*/
void Controller_Delete_Account::_delete_record()
{
	system("cls");
	Array_dynamic _ad;
	Bank_account* _ba;
	File_reader _fr;
	Controller_Look_By_Record _clbr;

	List_Circle_Double<Bank_account> _list;
	Look_by _lb;
	_ba =_fr._read_file(file, _path_account, _ba);

	_list._array_to_list(_ba);

	char* _key = _get_account_number();
	int _index = _lb.look_by_key(_key, &_list);
	//int _index = _clbr._find_by_account(_key, _ba, _ad._dynamic_size(_ba) - 1);

	try {
		if (_index == -1) {
			throw _index;
		}
	}
	catch (int e) {
		return;
	}

	switch (_set_menu())
	{
	case 1: {
		_fr._delete(file, _path_account, *(_ba + _index));
		//_fr._delete(file, _path_account, _list.get_in(_index));
	}
		break;
	default: {}
		break;
	}

	free(_ba);
}

/**
 * @brief _set_menu
 * @return int
*/
int Controller_Delete_Account::_set_menu() {
	char** option = (char**)calloc(2, sizeof(char*));

	*(option + 0) = (char*)"SI";
	*(option + 1) = (char*)"NO";
	return menu.options((char*)"ESTA SEGURO?",option, 2);
}

/**
 * @brief _get_account_number
 * @return char*
*/
char* Controller_Delete_Account::_get_account_number() {
	Input _input;
	char* _key;
	string _aux = _input.input_int_number("NUMERO DE CUENTA: ").c_str();
	_key = (char*)malloc(_aux.size() * sizeof(char));
	strcpy(_key, _aux.c_str());
	return _key;
}
