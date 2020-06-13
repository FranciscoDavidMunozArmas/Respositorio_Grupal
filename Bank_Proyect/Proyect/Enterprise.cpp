/***********************************************************************
 * Module:  Enterprise.cpp
 * Author:  USUARIO
 * Modified: jueves, 4 de junio de 2020 20:33:40
 * Purpose: Implementation of the class Enterprise
 ***********************************************************************/

#include "Enterprise.h"
#include "Natural_person.h"
#include <iostream>
#include <sstream>

using namespace std;

Natural_person Enterprise::get_manager() {
	return _manager;
}

void Enterprise::set_manager(const Natural_person& _manager)
{
	this->_manager = _manager;
}

////////////////////////////////////////////////////////////////////////
// Name:       Enterprise::to_string()
// Purpose:    Implementation of Enterprise::to_string()
// Return:     string
////////////////////////////////////////////////////////////////////////

string Enterprise::to_string() {
	ostringstream oss;
	oss << "Id:" << _id << "\tEmpresa:" << _name << "\n\tRepresentante legal: \n\tNombre:" << _manager.get_name();
	return oss.str();
}

////////////////////////////////////////////////////////////////////////
// Name:       Enterprise::~Enterprise()
// Purpose:    Implementation of Enterprise::~Enterprise()
// Return:
////////////////////////////////////////////////////////////////////////

Enterprise::~Enterprise(){}
