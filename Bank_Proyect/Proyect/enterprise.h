/***********************************************************************
 * Module:  Enterprise.h
 * Author:  USUARIO
 * Modified: jueves, 4 de junio de 2020 20:33:40
 * Purpose: Declaration of the class Enterprise
 ***********************************************************************/

#if !defined(__Bank_Model_Enterprise_h)
#define __Bank_Model_Enterprise_h

#include <iostream>
#include "Person.h"

using namespace std;

class Enterprise : public Person
{
public:
    Enterprise() :Person() {};
    Enterprise(const char _id[13], const char _name[10], const char _address[10], const char _phone[10], char _manager[10]) :Person(_id, _name, _address, _phone) {
        strcpy(this->_manager, _manager);
    }
    char* get_manager();
    void set_manager(char* _manager);
    ~Enterprise();
private:
    char _manager[10];
};

#endif
