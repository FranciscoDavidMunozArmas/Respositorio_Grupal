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
   Enterprise::Enterprise(string _id,string _name, string _address, string _phone, Person _management);
   ~Enterprise();

protected:
private:
   Person _manager;
};

#endif
