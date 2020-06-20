/***********************************************************************
 * Module:  Person.cpp
 * Author:  USUARIO
 * Modified: jueves, 4 de junio de 2020 20:30:21
 * Purpose: Implementation of the class Person
 ***********************************************************************/

#include "Person.h"
#include <sstream>
#include <string>

////////////////////////////////////////////////////////////////////////
// Name:       Person::Person()
// Purpose:    Implementation of Person::Person()
// Return:
////////////////////////////////////////////////////////////////////////

Person::Person()
{
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

Person::Person(const char _id[13], const char _name[10], const char _address[10], const char _phone[10])
{
	strcpy(this->_address, _address);
	strcpy(this->_id, _id);
	strcpy(this->_name, _name);
	strcpy(this->_phone, _phone);
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::get_id()
// Purpose:    Implementation of Person::get_id()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

char* Person::get_id()
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

void Person::set_id(char* _id)
{
	strcpy(this->_id, _id);
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::get_name()
// Purpose:    Implementation of Person::get_name()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

char* Person::get_name()
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

void Person::set_name(char* _name)
{
	strcpy(this->_name, _name);
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::get_address()
// Purpose:    Implementation of Person::get_address()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

char* Person::get_address()
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

void Person::set_address(char* _address)
{
	strcpy(this->_address, _address);
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::get_phone()
// Purpose:    Implementation of Person::get_phone()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

char* Person::get_phone()
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

void Person::set_phone(char* _phone)
{
	strcpy(this->_phone, _phone);
}

ostream& operator << (ostream& o, const Person& p) {
	o << p._name << "\tID: " << p._id;
	return o;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::~Person()
// Purpose:    Implementation of Person::~Person()
// Return:
////////////////////////////////////////////////////////////////////////

Person::~Person(){}
