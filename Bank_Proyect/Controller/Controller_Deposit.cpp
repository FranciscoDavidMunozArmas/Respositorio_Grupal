/***********************************************************************
 * Module:  Array.cpp
 * Author:  USUARIO
 * Modified: jueves, 28 de mayo de 2020 19:07:11
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include "Controller_Deposit.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "../Libraries/Input.h"
#include "../Libraries/To_number.h"
#include "Controller_Bank_Operation.cpp"
#include "../Proyect/Deposit.cpp"
#include "../Proyect/Bank_account.cpp"

void Controller_Deposit::_operation() {

	Bank_account* _ba;
	File_reader _fr;

	_ba = _fr._read_file(file, _path_account, _ba);

	int _index = _get_account(_ba);

	try {
		if (_index <= -1) {
			throw _index;
		}

		double _amount = _get_amount(*(_ba + _index));
		_d.set_amount(_amount);
		_d.bank_method((_ba + _index));
		(_ba + _index)->add_transaction(_d);

		_fr._update(file,_path_account, (_ba + _index));

		system("cls");
		_d.print_transaction();
	}
	catch (int e) {
		system("cls");
		cout << "NO EXISTE LA CUENTA" << endl;
	}

	free(_ba);
	system("pause");
}


double Controller_Deposit::_get_amount(Bank_account& _ba) {
	Input _input;
	double _amount;
	do {
		system("cls");
		_amount = to_double(_input.input_int_number("MONTO A DEPOSITAR: $"));
	} while (_amount < 1);

	return _amount;
}
