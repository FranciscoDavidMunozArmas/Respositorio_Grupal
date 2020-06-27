
/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 28 de mayo de 2020 19:07:11
 * @function Implementation of Controller_Client
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "Controller_Client.h"
#include "../Proyect/Bank_account.h"
#include "../Proyect/Person.h"
#include "../Proyect/Bank_account.h"
#include "../Libraries/Input.h"
#include "../Libraries/RUC_verificator.cpp"
#include "../Libraries/ID_verificator.cpp"
#include "../Libraries/To_number.cpp"
#include "../Libraries/Phone_verificator.cpp"

#pragma once

using namespace std;

/**
 * @brief _set_balance
 * @param _type 
*/
double Controller_Client::_set_balance(Account_type _type) {
	double _balance;

	switch (_type)
	{
	case Account_type::_SAVING_ACCOUNT:
		do {
			system("cls");
			_balance = to_double(input.input_number("INGRESE EL SALDO INICIAL: "));
		} while (_balance < 0);
		break;
	case Account_type::_CHECKING_ACCOUNT:
		do {
			system("cls");
			_balance = to_double(input.input_number("INGRESE EL SALDO INICIAL ($500 min): $"));
		} while (_balance < 500);
		break;
	}

	return _balance;
}

/**
 * @brief set_name
 * @param _phrase 
*/

char* Controller_Client::set_name(char* _phrase) {
	string _name;
	do {
		system("cls");
		_name = input.input(_phrase);
	} while (_name.size() > 10);
	char* _aux = (char*)calloc(_name.size(), sizeof(char));
	strcpy(_aux, _name.c_str());
	return _aux;
}

/**
 * @brief set_id
 * @param i 
*/
char* Controller_Client::set_id(int i) {
	string _id_;
	char* _aux;
	switch (i)
	{
	case 0:
		do {
			system("cls");
			_id_ = input.input_int_number("INGRESE EL RUC: ");
			_aux = (char*)calloc(_id_.size(), sizeof(char));
			strcpy(_aux, _id_.c_str());
		} while (!_ruc.RUC_verify(_aux));
		break;
	case 1:
		do {
			system("cls");
			_id_ = input.input_int_number("INGRESE LA CEDULA: ");
			_aux = (char*)calloc(_id_.size(), sizeof(char));
			strcpy(_aux, _id_.c_str());
		} while (!_id.ID_verify(_aux));
		break;
	}

	_aux = (char*)calloc(_id_.size(), sizeof(char));
	strcpy(_aux, _id_.c_str());
	return _aux;
}

/**
 * @brief set_phone
 * @param 
*/
char* Controller_Client::set_phone() {
	Phone_verificator _p;
	string _phone;
	do {
		system("cls");
		_phone = input.input("TELEFONO: ");
	} while (!_p.Phone_verify((char*)_phone.c_str()));
	char* _aux = (char*)malloc(_phone.size()*sizeof(char));
	strcpy(_aux, _phone.c_str());
	return _aux;
}

/**
 * @brief set_address
 * @param 
*/
char* Controller_Client::set_address() {
	string _address;
	do {
		system("cls");
		_address = input.input("DIRECCION: ");
	} while (_address.size()>10);
	char* _aux = (char*)calloc(_address.size(), sizeof(char));
	strcpy(_aux, _address.c_str());
	return _aux;
}
