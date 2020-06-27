
/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 19:07:11
 * @function Implementation of Controller_All_Record
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

#include "Controller_All_Record.h"
#include "../Libraries/Array_dinamic.cpp"
#include "../Proyect/Bank_account.cpp"
#include "../Proyect/Person.h"
#include "../Libraries/File_reader.cpp"

using namespace std;
/**
 * @brief _method
 * @param 
*/
void Controller_All_Record::_method() {
	_show_records();
}
/**
 * @brief _show_records
 * @param  
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
		cout << "No hay cuentas disponibles" << endl;
		system("pause");
	}

	//free(_p);
	free(_ba);
}

/**
 * @brief _show_information
 * @param _ba
*/
void Controller_All_Record::_show_information(Bank_account _ba) {
	system("cls");
	_ba.print_account();
	system("pause");
}
