/***********************************************************************
 * Module:  Date.h
 * Author:  USUARIO
 * Modified: martes, 2 de junio de 2020 15:36:25
 * Purpose: Declaration of the class Date
 ***********************************************************************/

#if !defined(__Bank_Model_Date_h)
#define __Bank_Model_Date_h

#include <iostream>

using namespace std;

class Date
{
public:

	Date();
	int get_year(void);
	void set_year(int _year);
	int get_day(void);
	void set_day(int _day);
	int get_month(void);
	void set_month(int _month);
	int get_hour(void);
	void set_hour(int _day);
	int get_minute(void);
	void set_minute(int _minute);
	int get_second(void);
	void set_second(int _second);
	string to_string(void);
	~Date();

protected:
private:
	int _year;
	int _month;
	int _day;
	int _hour;
	int _minute;
	int _second;
};
#endif
