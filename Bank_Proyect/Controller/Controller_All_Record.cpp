/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller_All_Record
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

#include "Controller_All_Record.h"
#include "../Libraries/PDF_Creator.cpp"
#include "../Libraries/Array_dinamic.cpp"
#include "../Proyect/Bank_account.cpp"
#include "../Proyect/Person.h"
#include "../Libraries/File_reader.cpp"
#include "../Libraries/Printer.cpp"

using namespace std;

/**
 * @brief _method
*/
void Controller_All_Record::_method() {
	_show_records();
}

/**
 * @brief _show_records
*/
void Controller_All_Record::_show_records()
{
	system("cls");
	Array_dynamic _ad;
	Bank_account* _ba;
	_ba =_fr._read_file(file, _path_account, _ba);

	try {
		if (_ad._dynamic_size(_ba) == 0) {
			throw _ad._dynamic_size(_ba);
		}

		int i = menu.options(_ba, _ad._dynamic_size(_ba));

		_show_information(*(_ba + i - 1));

	}
	catch (int e) {
		cout << "NO HAY CUENTAS DISPONIBLES" << endl;
		system("pause");
	}

	free(_ba);
}

/**
 * @brief _show_information
 * @param _ba
*/
void Controller_All_Record::_show_information(Bank_account _ba) {

	ostringstream oss;
	ostringstream o;

	o << _ba.get_account_number() << "_historial.pdf";
	PDF_Creator _pdf(o.str().c_str());

	system("cls");
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

void Controller_All_Record::_get_temporal(Bank_account _ba) {
	Array_dynamic _ad;
	ostringstream o;
	ostringstream oss;
	ostringstream _aux;
	Printer _printer;

	char** _text;

	o << _ba.get_account_number() << "_temporal.pdf";
	oss << "../Auxiliar/" << _ba.get_account_number() << ".txt";

	if (_fr._file_exists(file, (char*)oss.str().c_str())) {

		PDF_Creator _pdf(o.str().c_str());

		basic_ifstream<TCHAR> _temporal_file(TEXT(oss.str().c_str()));

		_text = _fr._read_txt_file((char*)oss.str().c_str(), _text);

		for (int i = 0; i < _ad._dynamic_size(_text); i++) {
			_aux << *(_text + i) << endl;
		}

		_pdf._set_text(_aux.str().c_str());
		_pdf._save_pdf();

		_printer.print_file(_temporal_file);
		_temporal_file.close();

		_fr._delete_all((char*)oss.str().c_str());
	}
	free(_text);
}
