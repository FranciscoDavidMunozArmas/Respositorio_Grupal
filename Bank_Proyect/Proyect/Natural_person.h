/***********************************************************************
 * Module:  Natural_person.h
 * Author:  USUARIO
 * Modified: miércoles, 3 de junio de 2020 15:35:31
 * Purpose: Declaration of the class Natural_person
 ***********************************************************************/

#if !defined(__Bank_Model_Natural_person_h)
#define __Bank_Model_Natural_person_h

#include <Person.h>

class Natural_person : public Person
{
public:
   Natural_person(std::string _id, std::string _name, std::string _address, std::string _phone);
   Natural_person();
   ~Natural_person();

protected:
private:

};

#endif