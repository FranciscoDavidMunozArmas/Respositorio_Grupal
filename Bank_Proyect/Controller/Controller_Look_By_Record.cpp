/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller_Look_By_Record
*/

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
#include "../Libraries/PDF_Creator.cpp"
#include "../Libraries/Look_by.cpp"
#include "../Libraries/Printer.cpp"
#include "../Libraries/List_Circle_Double.cpp"
#include "../Libraries/Look_by.cpp"

#pragma once

using namespace std;

/**
 * @brief _method
*/
void Controller_Look_By_Record::_method() {
	_show_record();
}

/**
 * @brief _show_record
*/
void Controller_Look_By_Record::_show_record()
{
	system("cls");
	Array_dynamic _ad;
	Bank_account* _ba;
	Input _input;
	_ba =_fr._read_file(file, _path_account, _ba);

	List_Circle_Double<Bank_account> _list;
	_list._array_to_list(_ba);

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
		int _index_1 = _lb.look_by_key(_key, &_list);
		//int _index_1 = _find_by_account(_key, _ba, _ad._dynamic_size(_ba)-1);

		//int _index_1 = _find_by_name(_key, _ba);

		//_show_information(_ba, _index_1);
		if (_index_1 > -1) {
			_show_information(_list.get_in(_index_1));
		}
		else {
			cout << "NO HAY REGISTRO" << endl;
			system("pause");
		}
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
		int _index_2 = _lb.look_by_key(_name, &_list);
		//int _index_2 = _find_by_name(_name, _ba, _ad._dynamic_size(_ba) - 1);

		//int _index_2 = _lb.look_by_key(_name, _get_name_record(_ba));

		//_show_information(_ba, _index_2);
		if (_index_2 > -1) {
			_show_information(_list.get_in(_index_2));
		}
		else {
			cout << "NO HAY REGISTRO" << endl;
			system("pause");
		}
		free(_name);
	}
	break;
	}

	free(_ba);
}

/**
 * @brief _show_information
 * @param _ba
 * @param index
*/
/*void Controller_Look_By_Record::_show_information(Bank_account* _ba, int index) {
	ostringstream oss;
	ostringstream o;

	system("cls");
	o << (_ba + index)->get_account_number() << "_historial.pdf";
	PDF_Creator _pdf(o.str().c_str());
	if (index == -1) {
		cout << "No hay registro" << endl;
	}
	else {
		cout << (_ba + index)->_get_account_all_data() << endl;
		system("pause");
		system("cls");
		if (menu.yes_no_option("DESEA IMPRIMIR EL HISTORIAL?") == 1) {
			oss << (_ba + index)->_get_account_all_data() << endl << endl;
			_pdf._set_text((oss.str().c_str()));
			_pdf._save_pdf();
			cout << endl << endl;
			_get_temporal(*(_ba + index));
		}

		cout << endl << endl;
	}
	system("pause");
}*/
void Controller_Look_By_Record::_show_information(Bank_account _ba) {
	ostringstream oss;
	ostringstream o;

	system("cls");
	o << _ba.get_account_number() << "_historial.pdf";
	PDF_Creator _pdf(o.str().c_str());
	/*if (index == -1) {
		cout << "No hay registro" << endl;
	}
	else {
		cout << _ba._get_account_all_data() << endl;
		system("pause");
		system("cls");
		if (menu.yes_no_option("DESEA IMPRIMIR EL HISTORIAL?") == 1) {
			oss << _ba._get_account_all_data() << endl << endl;
			_pdf._set_text((oss.str().c_str()));
			_pdf._save_pdf();
			cout << endl << endl;
			_get_temporal(_ba);
		}

		cout << endl << endl;
	}*/
	cout << _ba._get_account_all_data() << endl;
	system("pause");
	system("cls");
	if (menu.yes_no_option("DESEA IMPRIMIR EL HISTORIAL?") == 1) {
		oss << _ba._get_account_all_data() << endl << endl;
		_pdf._set_text((oss.str().c_str()));
		_pdf._save_pdf();
		cout << endl << endl;
		_get_temporal(_ba);
	}

	cout << endl << endl;
	system("pause");
}

/**
 * @brief _set_menu
 * @return int
*/
int Controller_Look_By_Record::_set_menu() {
	char** option = (char**)calloc(2, sizeof(char*));

	*(option + 0) = "BUSCAR POR NUMERO DE CUENTA";
	*(option + 1) = "BUSCAR POR NOMBRE";
	return menu.options(option, 2);
}

/**
 * @brief _find_by_account
 * @param _key
 * @param _ba
 * @param _index
 * @return int
*/
/*int Controller_Look_By_Record::_find_by_account(char* _key, Bank_account* _ba, int _index) {
	if (_index <= -1) {
		return -1;
	}
	else if (strcmp(_key, (_ba + _index)->get_account_number()) == 0) {
		return _index;
	}
	else {
		_find_by_account(_key, _ba, _index - 1);
	}
	Look_by _lb;
	List_Circle_Double<Bank_account> _list;
	_list = _list._array_to_list(_ba);
	return _lb.look_by_key(_key, &_list);

}*/

void Controller_Look_By_Record::_get_temporal(Bank_account _ba) {
	Array_dynamic _ad;
	ostringstream o;
	ostringstream oss;
	ostringstream _aux;
	Printer _printer;

	char** _text;

	o << _ba.get_account_number() << "_temporal.pdf";
	oss << "../Auxiliar/Auxiliar_" << _ba.get_account_number() << ".txt";

	if (_fr._file_exists(file, (char*)oss.str().c_str())) {

		PDF_Creator _pdf(o.str().c_str());

		_text = _fr._read_txt_file((char*)oss.str().c_str(), _text);
		for (int i = 0; i < _ad._dynamic_size(_text); i++) {
			_aux << *(_text + i) << endl;
		}
		_pdf._set_text(_aux.str().c_str());
		_pdf._save_pdf();

		basic_ifstream<TCHAR> _temporal_file(TEXT(oss.str().c_str()));
		_printer.print_file(_temporal_file);
		_temporal_file.close();

		_fr._delete_all((char*)oss.str().c_str());

	}
	free(_text);
}

/**
 * @brief _find_by_name
 * @param _name
 * @param _ba
 * @param _index
 * @return int
*/
/*int Controller_Look_By_Record::_find_by_name(char* _name, Bank_account* _ba, int _index) {
	if (_index <= -1) {
		return -1;
	}
	else if (strcmp(_name, (_ba + _index)->get_client().get_name()) == 0) {
		return _index;
	}
	else {
		_find_by_name(_name, _ba, _index - 1);
	}
	Look_by _lb;
	List_Circle_Double<Bank_account> _list;
	_list = _list._array_to_list(_ba);
	return _lb.look_by_key(_name, &_list);
}*/

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
