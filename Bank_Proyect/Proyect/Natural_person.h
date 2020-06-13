/***********************************************************************
 * Module:  Natural_person.h
 * Author:  USUARIO
 * Modified: mi�rcoles, 3 de junio de 2020 15:35:31
 * Purpose: Declaration of the class Natural_person
 ***********************************************************************/

#if !defined(__Bank_Model_Natural_person_h)
#define __Bank_Model_Natural_person_h

#include <iostream>

#include "Person.h"
#include "Person.cpp"

using namespace std;

class Natural_person : public Person
{
public:
	Natural_person(const string _id, const string _name, const string _address, const string _phone) :Person(_id, _name, _address, _phone) {};
	Natural_person() :Person() {};
	~Natural_person();

protected:
private:

};

#endif
