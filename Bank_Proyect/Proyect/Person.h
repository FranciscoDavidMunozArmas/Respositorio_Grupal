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
	Person(const char _id[13], const char _name[10], const char _address[10], const char _phone[10]);
	char* get_id(void);
	char* get_name(void);
	char* get_address(void);
	char* get_phone(void);

	void set_id(char* _id);
	void set_name(char* _name);
	void set_address(char* _address);
	void set_phone(char* _phone);

	friend ostream& operator << (ostream& o, const Person& p);

	~Person();

protected:
	char _name[10];
	char _id[13];
	char _address[10];
	char _phone[10];
private:
};

#endif