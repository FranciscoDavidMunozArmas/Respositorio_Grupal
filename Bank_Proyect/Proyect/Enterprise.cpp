/***********************************************************************
 * Module:  Enterprise.cpp
 * Author:  USUARIO
 * Modified: jueves, 4 de junio de 2020 20:33:40
 * Purpose: Implementation of the class Enterprise
 ***********************************************************************/

#include "Enterprise.h"

////////////////////////////////////////////////////////////////////////
// Name:       Enterprise::Enterprise()
// Purpose:    Implementation of Enterprise::Enterprise()
// Return:     
////////////////////////////////////////////////////////////////////////

Enterprise::Enterprise()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Enterprise::Enterprise(std::string _id, std::string _address, std::string _phone, std::string _name, Person _management)
// Purpose:    Implementation of Enterprise::Enterprise()
// Parameters:
// - _id
// - _address
// - _phone
// - _name
// - _management
// Return:     
////////////////////////////////////////////////////////////////////////

Enterprise::Enterprise(string _id,string _name, string _address, string _phone, Person _management): Person(_id, _name, _address, _phone)
{
   this->_management = _management;
}

////////////////////////////////////////////////////////////////////////
// Name:       Enterprise::~Enterprise()
// Purpose:    Implementation of Enterprise::~Enterprise()
// Return:     
////////////////////////////////////////////////////////////////////////

Enterprise::~Enterprise()
{
   // TODO : implement
}
