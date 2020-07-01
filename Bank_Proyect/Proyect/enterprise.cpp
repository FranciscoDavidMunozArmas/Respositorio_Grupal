/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 4 de Junio de 2020 10:07:14
 * @function Implementation of Controller
*/
#include "Enterprise.h"
#include "Person.h"
#include <iostream>
#include <sstream>

using namespace std;

/**
 * @brief get_manager
 * @param  
*/
char* Enterprise::get_manager() {
	return _manager;
}

/**
 * @brief set_manager
 * @param _manager
*/
void Enterprise::set_manager(char* _manager)
{
	strcpy(this->_manager, _manager);
}

/**
 * @brief Enterprise
 * @param  
*/
Enterprise::~Enterprise(){}
