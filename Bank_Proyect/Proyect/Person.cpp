/***********************************************************************
 * Module:  Person.cpp
 * Author:  USUARIO
 * Modified: jueves, 4 de junio de 2020 20:30:21
 * Purpose: Implementation of the class Person
 ***********************************************************************/

#include "Person.h"
#include <sstream>
#include <string>

#pragma once

/**
 * @brief Person
 * @return
*/
Person::Person() {}

/**
 * @brief Person
 * @param _id
 * @param _name
 * @param _address
 * @param _phone
 * @return
*/
Person::Person(const char _id[13], const char _name[10], const char _address[10], const char _phone[10])
{
	strcpy(this->_address, _address);
	strcpy(this->_id, _id);
	strcpy(this->_name, _name);
	strcpy(this->_phone, _phone);
}

/**
 * @brief get_id
 * @return char*
*/
char* Person::get_id()
{
	return _id;
}

/**
 * @brief set_id
 * @param _id
*/
void Person::set_id(char* _id)
{
	strcpy(this->_id, _id);
}

/**
 * @brief get_name
 * @return char*
*/
char* Person::get_name()
{
   return _name;
}

/**
 * @brief set_name
 * @param _name
*/
void Person::set_name(char* _name)
{
	strcpy(this->_name, _name);
}

/**
 * @brief get_address
 * @return char*
*/
char* Person::get_address()
{
   return _address;
}

/**
 * @brief set_address
 * @param _address
*/
void Person::set_address(char* _address)
{
	strcpy(this->_address, _address);
}

/**
 * @brief get_phone
 * @return char*
*/
char* Person::get_phone()
{
   return _phone;
}

/**
 * @brief set_phone
 * @param _phone
*/
void Person::set_phone(char* _phone)
{
	strcpy(this->_phone, _phone);
}

/**
 * @brief <<
 * @param o
 * @param p
 * @return ostream&
*/
ostream& operator << (ostream& o, const Person& p) {
	o << p._name << "\t\tID: " << p._id;
	return o;
}

/**
 * @brief ~Person
 * @return
*/
Person::~Person(){}
