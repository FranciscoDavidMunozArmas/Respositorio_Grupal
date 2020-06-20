/***********************************************************************
 * Module:  Enterprise.cpp
 * Author:  USUARIO
 * Modified: jueves, 4 de junio de 2020 20:33:40
 * Purpose: Implementation of the class Enterprise
 ***********************************************************************/

#include "Enterprise.h"
#include "Person.h"
#include <iostream>
#include <sstream>

using namespace std;

char* Enterprise::get_manager() {
	return _manager;
}

void Enterprise::set_manager(char* _manager)
{
	strcpy(this->_manager, _manager);
}

////////////////////////////////////////////////////////////////////////
// Name:       Enterprise::~Enterprise()
// Purpose:    Implementation of Enterprise::~Enterprise()
// Return:
////////////////////////////////////////////////////////////////////////

Enterprise::~Enterprise(){}
