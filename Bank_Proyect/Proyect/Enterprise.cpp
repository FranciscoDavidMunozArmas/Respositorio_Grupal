/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 4 de Junio de 2020 10:07:14
 * @function Implementation of Enterprise
*/
#include "Enterprise.h"
#include "Natural_person.h"
#include <iostream>
#include <sstream>

using namespace std;

/**
 * @brief get_manager
 * @param  
*/
Natural_person Enterprise::get_manager() {
	return _manager;
}

/**
 * @brief set_manager
 * @param  _manager
*/
void Enterprise::set_manager(const Natural_person& _manager)
{
	this->_manager = _manager;
}

/**
 * @brief to_string
 * @param  
*/
string Enterprise::to_string() {
	ostringstream oss;
	oss << "Id:" << _id << "\tEmpresa:" << _name << "\n\tRepresentante legal: \n\tNombre:" << _manager.get_name();
	return oss.str();
}
/**
 * @brief Enterprise
 * @param  
*/
Enterprise::~Enterprise(){}
