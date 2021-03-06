/*
 * Universidad la Fuerzas Armadas ESPE
 *
 * @autor David Munoz & Daniela Orellana
 * @date Martes, 2 de Junio de 2020
 * @function Declaration of the class Date
*/
#if !defined(__Bank_Model_Date_h)
#define __Bank_Model_Date_h

#include <iostream>

using namespace std;

class Date
{
public:

	Date();
	int get_year(void);
	int get_day(void);
	int get_month(void);
	int get_hour(void);
	int get_minute(void);
	int get_second(void);

	void set_year(int _year);
	void set_day(int _day);
	void set_month(int _month);
	void set_hour(int _day);
	void set_minute(int _minute);
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
