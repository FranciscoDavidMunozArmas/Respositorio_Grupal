/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 10:07:14
 * @function Implementation of Controller_Client
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <exception>

#include "Controller_Client.h"
#include "../Proyect/Bank_account.h"
#include "../Proyect/Person.h"
#include "../Proyect/Bank_account.h"
#include "../Libraries/Input.h"
#include "../Libraries/RUC_verificator.cpp"
#include "../Libraries/ID_verificator.cpp"
#include "../Libraries/To_number.cpp"
#include "../Libraries/Phone_verificator.cpp"
#include "../Libraries/Banner.cpp"
#include "../Libraries/Verify_number.cpp"

#pragma once

using namespace std;

/**
 * @brief _set_balance
 * @param _type
 * @return double
*/
double Controller_Client::_set_balance(Account_type _type) {
	Banner _banner;
	double _balance;

	switch (_type)
	{
	case Account_type::_SAVING_ACCOUNT:
		do {
			system("cls");
			_banner._banner_right_left("INGRESE EL SALDO INICIAL: ", 0, 0);
			if (_kbhit()) {
				screen.gotoxy(0, 1);
				_balance = to_double(input.input_number("$"));
				if (_balance > 0) {
					break;
				}
			}
		} while (true);
		break;
	case Account_type::_CHECKING_ACCOUNT:
		do {
			system("cls");
			_banner._banner_right_left("INGRESE EL SALDO INICIAL ($500 min): ", 0, 0);
			if (_kbhit()) {
				screen.gotoxy(0, 1);
				fflush(stdin);
				_balance = to_double(input.input_number("$"));
				if (_balance >= 500) {
					break;
				}
			}
		} while (true);
		break;
	}

	return _balance;
}

/**
 * @brief set_name
 * @param _phrase
 * @return char*
*/
char* Controller_Client::set_name(char* _phrase) {
	string _name;
	Banner _banner;
	char* _aux;
	do {
		system("cls");
		_banner._banner_right_left_left_right(_phrase, 0, 0);
		if (_kbhit()) {
			screen.gotoxy(0, 1);
			fflush(stdin);
			_name = input.input("");
			_aux = (char*)calloc(_name.size(), sizeof(char));
			strcpy(_aux, _name.c_str());
			if (_name.size() <= 10 && _name.size() != 0 && is_alpha(_aux)) {
				break;
			}
		}
	} while (true);
	delete _phrase;
	return _aux;
}

/**
 * @brief set_id
 * @param i
 * @return char*
*/
char* Controller_Client::set_id(int _option) {
	Banner _banner;
	string _id_;
	char* _aux;
	bool flag = true;
	do {
		system("cls");
		_banner._banner_right_left("INGRESE EL ID: ", 0, 0);
		switch (_option) {
		case 1:
			if (_kbhit()) {
				screen.gotoxy(0, 1);
				_id_ = input.input_int_number("");
				_aux = (char*)calloc(_id_.size(), sizeof(char));
				strcpy(_aux, _id_.c_str());
				if (_ruc.ID_verify(_aux)) {
					flag = false;
				}
			}
			break;
		case 2:
			if (_kbhit()) {
				screen.gotoxy(0, 1);
				_id_ = input.input_int_number("");
				if (_id_.length() == 10) {
					_id_ += "001";
				}
				_aux = (char*)calloc(_id_.size(), sizeof(char));
				strcpy(_aux, _id_.c_str());
				if (_ruc.RUC_verify(_aux)) {
					flag = false;
				}
			}
			break;
		}
	} while (flag);
	
	/*do {
		system("cls");
		//_banner._banner_right_left("INGRESE EL RUC: ", 0, 0);
		if (_kbhit()) {
			screen.gotoxy(0, 1);
			_id_ = input.input_int_number("Hola");
			_aux = (char*)calloc(_id_.size(), sizeof(char));
			strcpy(_aux, _id_.c_str());
			if (_ruc.RUC_verify(_aux)) {
				break;
			}
		}
	} while (true);*/
	return _aux;
}

/**
 * @brief set_phone
 * @return char*
*/
char* Controller_Client::set_phone() {
	Banner _banner;
	Phone_verificator _p;
	string _phone = " ";
	while (true){
		system("cls");
		_banner._banner_right_left("TELEFONO: ", 0, 0);
		if (_kbhit()) {
			screen.gotoxy(0, 1);
			_phone = input.input("");
			if (_p.Phone_verify((char*)_phone.c_str())) {
				break;
			}
		}
	}
	char* _aux = (char*)malloc(_phone.size()*sizeof(char));
	strcpy(_aux, _phone.c_str());
	return _aux;
}

/**
 * @brief set_address
 * @return char*
*/
char* Controller_Client::set_address() {
	Banner _banner;
	string _address;
	do {
		system("cls");
		_banner._banner_right_left_left_right("DIRECCION: ", 0, 0);
		if (_kbhit()) {
			screen.gotoxy(0, 1);
			_address = input.input("");
			if (_address.size() <= 10) {
				break;
			}
		}
	} while (10);
	char* _aux = (char*)calloc(_address.size(), sizeof(char));
	strcpy(_aux, _address.c_str());
	return _aux;
}
