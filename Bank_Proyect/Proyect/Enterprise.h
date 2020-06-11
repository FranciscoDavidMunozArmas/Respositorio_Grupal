/***********************************************************************
 * Module:  Enterprise.h
 * Author:  USUARIO
 * Modified: jueves, 4 de junio de 2020 20:33:40
 * Purpose: Declaration of the class Enterprise
 ***********************************************************************/

#if !defined(__Bank_Model_Enterprise_h)
#define __Bank_Model_Enterprise_h

#include <Person.h>

class Enterprise : public Person
{
public:
   Enterprise();
   Enterprise(std::string _id, std::string _address, std::string _phone, std::string _name, Person _management);
   ~Enterprise();

protected:
private:
   Person _manager;
};

#endif
