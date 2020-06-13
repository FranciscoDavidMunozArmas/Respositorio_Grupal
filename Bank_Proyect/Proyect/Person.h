/***********************************************************************
 * Module:  Person.h
 * Author:  USUARIO
 * Modified: jueves, 4 de junio de 2020 20:30:21
 * Purpose: Declaration of the class Person
 ***********************************************************************/

#if !defined(__Bank_Model_Person_h)
#define __Bank_Model_Person_h

#include <iostream>

using namespace std;

class Person
{
public:
	Person();
	Person(const string _id,const string _name,const string _address,const string _phone);
	string get_id(void);
	void set_id(const string _id);
	string get_name(void);
	void set_name(const string _name);
	string get_address(void);
	void set_address(const string _address);
	string get_phone(void);
	void set_phone(const string _phone);
	virtual string to_string(void);
	~Person();

protected:
	string _name;
	string _id;
	string _address;
	string _phone;
private:
};

#endif