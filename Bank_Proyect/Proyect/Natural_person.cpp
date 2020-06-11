/***********************************************************************
 * Module:  Natural_person.cpp
 * Author:  USUARIO
 * Modified: miércoles, 3 de junio de 2020 15:35:31
 * Purpose: Implementation of the class Natural_person
 ***********************************************************************/

#include "Natural_person.h"

////////////////////////////////////////////////////////////////////////
// Name:       Natural_person::Natural_person(std::string _id, std::string _name, std::string _address, std::string _phone)
// Purpose:    Implementation of Natural_person::Natural_person()
// Parameters:
// - _id
// - _name
// - _address
// - _phone
// Return:     
////////////////////////////////////////////////////////////////////////

Natural_person::Natural_person(std::string _id, std::string _name, std::string _address, std::string _phone)
{
   this->_id = _id;
   this->_name = _name;
   this->_address = _address;
   this->_phone = _id; 
}

////////////////////////////////////////////////////////////////////////
// Name:       Natural_person::Natural_person()
// Purpose:    Implementation of Natural_person::Natural_person()
// Return:     
////////////////////////////////////////////////////////////////////////

Natural_person::Natural_person()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Natural_person::~Natural_person()
// Purpose:    Implementation of Natural_person::~Natural_person()
// Return:     
////////////////////////////////////////////////////////////////////////

Natural_person::~Natural_person()
{
   // TODO : implement
}
