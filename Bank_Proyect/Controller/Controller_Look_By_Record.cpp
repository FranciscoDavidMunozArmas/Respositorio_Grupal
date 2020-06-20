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
		system("cls");
		if (_index_1 == -1) {
			cout << "NO EXISTE LA CUENTA" << endl;
			system("pause");
		}
		else {
			_show_information(*(_ba + _index_1));
		}
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
		system("cls");
		if (_index_2 == -1) {
			cout << "NO EXISTE EL USUARIO" << endl;
			system("pause");
		}
		else {
			_show_information(*(_ba + _index_2));
		}
		free(_name);
	}
	break;
	}

	free(_ba);
}

void Controller_Look_By_Record::_show_information(Bank_account _ba) {
	system("cls");
	_ba.print_account();
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
