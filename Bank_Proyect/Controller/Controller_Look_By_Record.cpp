/***********************************************************************
 * Module:  Array.cpp
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

#include "Controller_Look_By_Record.h"
#include "../Libraries/Array_dinamic.cpp"
#include "../Proyect/Bank_account.cpp"
#include "../Proyect/Person.h"
#include "../Libraries/File_reader.cpp"
#include "../Libraries/Input.h"

#include "../Libraries/Look_by.cpp"

#pragma once

using namespace std;

void Controller_Look_By_Record::_method() {
	_show_record();
}

void Controller_Look_By_Record::_show_record()
{
	system("cls");
	Array_dynamic _ad;
	Bank_account* _ba;
	Input _input;
	_ba =_fr._read_file(file, _path_account, _ba);


	Look_by _lb;

	if (_ad._dynamic_size(_ba) == 0) {
		cout << "No hay cuentas disponibles" << endl;
		system("pause");
		free(_ba);
		return;
	}

	switch (_set_menu()) {
	case 1:
	{
		system("cls");
		char* _key;
		string _aux = _input.input_int_number("NUMERO DE CUENTA: ").c_str();
		_key = (char*)malloc(_aux.size() * sizeof(char));
		strcpy(_key, _aux.c_str());
		int _index_1 = _find_by_account(_key, _ba);

		//int _index_1 = _find_by_name(_key, _ba);

		_show_information(_ba, _index_1);
		free(_key);
	}
	break;
	case 2:
	{
		system("cls");
		char* _name;
		string _aux = _input.input("NOMBRE DEL PROPIETARIO: ").c_str();
		_name = (char*)malloc(_aux.size()*sizeof(char));
		strcpy(_name, _aux.c_str());
		int _index_2 = _find_by_name(_name, _ba);

		//int _index_2 = _lb.look_by_key(_name, _get_name_record(_ba));

		_show_information(_ba, _index_2);
		free(_name);
	}
	break;
	}

	free(_ba);
}

void Controller_Look_By_Record::_show_information(Bank_account* _ba, int index) {
	system("cls");
	if (index == -1) {
		cout << "No hay registro" << endl;
	}
	else {
		(_ba + index)->print_account();
	}
	system("pause");
}

int Controller_Look_By_Record::_set_menu() {
	char** option = (char**)calloc(2, sizeof(char*));

	*(option + 0) = "BUSCAR POR NUMERO DE CUENTA";
	*(option + 1) = "BUSCAR POR NOMBRE";
	return menu.options(option, 2);
}

int Controller_Look_By_Record::_find_by_account(char* _key, Bank_account* _ba) {
	Array_dynamic _ad;
	for (int i = 0; i < _ad._dynamic_size(_ba); i++) {
		if (strcmp(_key,(_ba + i)->get_account_number()) == 0) {
			return i;
		}
	}
	return -1;

}

int Controller_Look_By_Record::_find_by_name(char* _name, Bank_account* _ba) {
	Array_dynamic _ad;
	for (int i = 0; i < _ad._dynamic_size(_ba); i++) {
		if (strcmp(_name, (_ba + i)->get_client().get_name()) == 0) {
			return i;
		}
	}
	return -1;

}

/*
char** Controller_Look_By_Record::_get_name_record(Bank_account* _ba) {
	Array_dynamic _ad;
	char** _aux = (char**)malloc(_ad._dynamic_size(_ba)*sizeof(char*));
	for (int i = 0; i < _ad._dynamic_size(_ba); i++) {
		strcpy(*(_aux + i), (_ba + i)->get_client().get_name());
	}
	return _aux;
}

char** Controller_Look_By_Record::_get_account_number_record(Bank_account* _ba) {
	Array_dynamic _ad;
	char** _aux = (char**)malloc(_ad._dynamic_size(_ba)*sizeof(char*));
	for (int i = 0; i < _ad._dynamic_size(_ba); i++) {
		strcpy(*(_aux + i), (_ba + i)->get_account_number());
	}
	return _aux;
}

*/
