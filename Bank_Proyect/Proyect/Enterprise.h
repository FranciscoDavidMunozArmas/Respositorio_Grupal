/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Jueves, 4 de Junio de 2020
 * @function Declaration of the class Enterprise
*/
#if !defined(__Bank_Model_Enterprise_h)
#define __Bank_Model_Enterprise_h

#include <iostream>
#include "Person.h"
#include "Natural_person.h"

using namespace std;

class Enterprise : public Person
{
public:
    Enterprise():Person(){};
    Enterprise(const string _id, const string _address, const string _phone, const string _name, const Natural_person& _manager) :Person(_id, _name, _address, _phone), _manager(_manager) {}
    Natural_person get_manager(void);
    void set_manager(const Natural_person& _manager);
    string to_string();
    ~Enterprise();
private:
    Natural_person _manager;
};

#endif
