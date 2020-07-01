/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Declaration of Controller_Withdraw
*/

#include "Controller_Withdraw.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>

#include "../Proyect/Bank_account.cpp"
#include "../Libraries/Input.h"
#include "../Libraries/To_number.h"
#include "Controller_Bank_Operation.cpp"
#include "../Proyect/Withdraw.cpp"
#include "../Libraries/PDF_Creator.cpp"

/**
 * @brief _operation
*/
void Controller_Withdraw::_operation() {

	Bank_account* _ba;
	File_reader _fr;
	PDF_Creator _pdf("Comprobante_Retiro.pdf");
	ostringstream oss;

	_ba = _fr._read_file(file, _path_account, _ba);

	int _index = _get_account(_ba);

	try {
		if (_index <= -1) {
			throw _index;
		}

		double _amount = _get_amount(*(_ba + _index));
		_wd.set_amount(_amount);
		_wd.bank_method((_ba + _index));
		(_ba + _index)->add_transaction(_wd);

		_fr._update(file, _path_account, (_ba + _index));

		system("cls");
		_wd.print_transaction();
		system("pause");
		system("cls");
		if (menu.yes_no_option("DESEA IMPRIMIR EL COMPROBANTE?") == 1) {
			oss << (_ba + _index)->_get_account() << endl << _wd._get_transaction() << endl << endl;
			_pdf._set_text((oss.str().c_str()));
			_pdf._save_pdf();
		}
		cout << endl << endl;
	}
	catch (int e) {
		system("cls");
		cout << "NO EXISTE LA CUENTA" << endl;
	}

	free(_ba);
	system("pause");
}

/**
 * @brief _get_amount
 * @param _ba
 * @return double
*/
double Controller_Withdraw::_get_amount(Bank_account& _ba) {
	Input _input;
	double _amount;
	do {
		system("cls");
		_amount = to_double(_input.input_int_number("MONTO A RETIRAR: $"));
	} while (_amount  < 1 || _ba.get_bank_balance() < _amount);

	return _amount;
}
