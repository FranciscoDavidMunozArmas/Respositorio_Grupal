/***********************************************************************
 * Module:  Person.cpp
 * Author:  USUARIO
 * Modified: jueves, 4 de junio de 2020 20:30:21
 * Purpose: Implementation of the class Person
 ***********************************************************************/

#include "Person.h"
#include <sstream>

////////////////////////////////////////////////////////////////////////
// Name:       Person::Person()
// Purpose:    Implementation of Person::Person()
// Return:
////////////////////////////////////////////////////////////////////////

Person::Person()
{
	this->_address = "";
	this->_id = "";
	this->_name = "";
	this->_phone = "";
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

Person::Person(const string _id, const string _name, const string _address, const string _phone)
{
	this->_address = _address;
	this->_id = _id;
	this->_name = _name;
	this->_phone = _phone;
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

void Person::set_id(const string _id)
{
   this->_id = _id;
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

void Person::set_name(const string new_name)
{
   this->_name = new_name;
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

void Person::set_address(const string _address)
{
   this->_address = _address;
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

void Person::set_phone(const string _phone)
{
   this->_phone = _phone;
}

string Person::to_string()
{
	ostringstream oss;
	oss << "Id:" << _id << "\tNombre:" << this->_name;
	return oss.str();
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::~Person()
// Purpose:    Implementation of Person::~Person()
// Return:
////////////////////////////////////////////////////////////////////////

Person::~Person(){}
