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

/**
 * @brief get_manager
 * @return char*
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
 * @brief ~Enterprise()
 * @return 
*/
Enterprise::~Enterprise(){}
