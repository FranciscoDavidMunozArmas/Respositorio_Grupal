/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 4 de Junio de 2020 10:07:14
 * @function Implementation of Person
*/
#include "Person.h"
#include <sstream>
#include <string>
/**
 * @brief Person
 * @param  
*/
Person::Person()
{
}

/**
 * @brief Person
 * @param _id, _name, _address, _phone
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
 * @param  
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
 * @param  
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
 * @param  
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
 * @param  
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
 * @brief ostream
 * @param o, p
*/
ostream& operator << (ostream& o, const Person& p) {
	o << p._name << "\tID: " << p._id;
	return o;
}

/**
 * @brief Person
 * @param  
*/
Person::~Person(){}
