#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

#include "Libraries/Input.cpp"
#include "Libraries/Menu.cpp"

#include "Controller.h"
#include "Reverse_Polish.cpp"

using namespace std;

Controller::Controller() {}

void Controller::menu() {
	Reverse_Polish _rp;
	Input _input;
	string _data;

	switch (_option()) {
	case 1:
		do {
			system("cls");
			_data = _input.input("Escriba la expresion: ");
		} while (!_rp.is_infix(_data));
		cout << _rp._prefix(_data) << endl;
		break;
	case 2:
		do {
			system("cls");
			_data = _input.input("Escriba la expresion: ");
		} while (!_rp.is_infix(_data));
		cout << _rp._postfix(_data) << endl;
		break;
	case 3:
		do {
			system("cls");
			_data = _input.input("Escriba la expresion: ");
		} while (!_rp.is_infix(_data));
		cout << "Infija: " << _data << endl << endl;
		cout << "Prefija: " << _rp._prefix(_data) << endl;
		cout << "Postfija: " << _rp._postfix(_data) << endl;
		break;
	default:
		cout << endl << endl;
		exit(0);
		break;
	}
	cout << endl << endl;
	system("pause");

}

int Controller::_option() {
	Menu _menu;
	char** _options = (char**)malloc(4*sizeof(char*));
	*(_options + 0) = "Prefija";
	*(_options + 1) = "Posfija";
	*(_options + 2) = "Ambas";
	*(_options + 3) = "Salir";

	return _menu.options(_options, 4);
}

Controller::~Controller() {}

