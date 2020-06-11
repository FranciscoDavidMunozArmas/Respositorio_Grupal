/***********************************************************************
 * Module:  Person.cpp
 * Author:  USUARIO
 * Modified: jueves, 4 de junio de 2020 20:30:21
 * Purpose: Implementation of the class Person
 ***********************************************************************/

#include "Person.h"

////////////////////////////////////////////////////////////////////////
// Name:       Person::Person()
// Purpose:    Implementation of Person::Person()
// Return:     
////////////////////////////////////////////////////////////////////////

Person::Person()
{
   //TODO: implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::Person(std::string _id, std::string _name, std::string _address, std::string _phone)
// Purpose:    Implementation of Person::Person()
// Parameters:
// - _id
// - _name
// - _address
// - _phone
// Return:     
////////////////////////////////////////////////////////////////////////

Person::Person(std::string _id, std::string _name, std::string _address, std::string _phone)
{
   this->_id = _id;
   this->_name = _name;
   this->_address = _address;
   this ->_phone = _phone;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::get_id()
// Purpose:    Implementation of Person::get_id()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Person::get_id(void)
{
   return _id;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::set_id(std::string new_id)
// Purpose:    Implementation of Person::set_id()
// Parameters:
// - new_id
// Return:     void
////////////////////////////////////////////////////////////////////////

void Person::set_id(std::string new_id)
{
   _id = new_id;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::get_name()
// Purpose:    Implementation of Person::get_name()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Person::get_name(void)
{
   return _name;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::set_name(std::string new_name)
// Purpose:    Implementation of Person::set_name()
// Parameters:
// - new_name
// Return:     void
////////////////////////////////////////////////////////////////////////

void Person::set_name(std::string new_name)
{
   _name = new_name;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::get_address()
// Purpose:    Implementation of Person::get_address()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Person::get_address(void)
{
   return _address;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::set_address(std::string new_address)
// Purpose:    Implementation of Person::set_address()
// Parameters:
// - new_address
// Return:     void
////////////////////////////////////////////////////////////////////////

void Person::set_address(std::string new_address)
{
   _address = new_address;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::get_phone()
// Purpose:    Implementation of Person::get_phone()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Person::get_phone(void)
{
   return _phone;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::set_phone(std::string new_phone)
// Purpose:    Implementation of Person::set_phone()
// Parameters:
// - new_phone
// Return:     void
////////////////////////////////////////////////////////////////////////

void Person::set_phone(std::string new_phone)
{
   _phone = new_phone;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::~Person()
// Purpose:    Implementation of Person::~Person()
// Return:     
////////////////////////////////////////////////////////////////////////

Person::~Person()
{
   // TODO : implement
}
