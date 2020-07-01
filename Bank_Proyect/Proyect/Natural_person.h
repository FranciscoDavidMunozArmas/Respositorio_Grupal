/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Miercoles, 3 de Junio de 2020
 * @function Declaration of the class Natural_person
*/
#if !defined(__Bank_Model_Natural_person_h)
#define __Bank_Model_Natural_person_h

#include <iostream>

#include "Person.h"
#include "Person.cpp"

using namespace std;

class Natural_person : public Person
{
public:
	Natural_person(const char _id[13], const char _name[10], const char _address[10], const char _phone[10]) :Person(_id, _name, _address, _phone) {};
	Natural_person() :Person() {};
	~Natural_person();

protected:
private:

};

#endif
