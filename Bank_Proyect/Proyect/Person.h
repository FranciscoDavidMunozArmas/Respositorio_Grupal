/***********************************************************************
 * Module:  Person.h
 * Author:  USUARIO
 * Modified: jueves, 4 de junio de 2020 20:30:21
 * Purpose: Declaration of the class Person
 ***********************************************************************/

#if !defined(__Bank_Model_Person_h)
#define __Bank_Model_Person_h
class Person
{
public:
   Person();
   Person(std::string _id, std::string _name, std::string _address, std::string _phone);
   std::string get_id(void);
   void set_id(std::string new_id);
   std::string get_name(void);
   void set_name(std::string new_name);
   std::string get_address(void);
   void set_address(std::string new_address);
   std::string get_phone(void);
   void set_phone(std::string new_phone);
   virtual std::string to_string(void)=0;
   ~Person();

protected:
   
private:
   std::string _name;
   std::string _id;
   std::string _address;
   std::string _phone;
};

#endif
