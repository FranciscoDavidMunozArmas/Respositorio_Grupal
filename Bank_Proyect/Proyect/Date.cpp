/***********************************************************************
 * Module:  Date.cpp
 * Author:  USUARIO
 * Modified: martes, 2 de junio de 2020 15:36:25
 * Purpose: Implementation of the class Date
 ***********************************************************************/

#include "Date.h"
#include <ctime>
#include <vector>
#include <sstream>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Date::Date()
// Purpose:    Implementation of Date::Date()
// Return:
////////////////////////////////////////////////////////////////////////

Date::Date()
{
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);

	this->_year = timePtr->tm_year + 1900;
	this->_month = timePtr->tm_mon + 1;
	this->_day = timePtr->tm_mday;
	this->_hour = timePtr->tm_hour;
	this->_minute = timePtr->tm_min;
	this->_second = timePtr->tm_sec;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::get_year()
// Purpose:    Implementation of Date::get_year()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Date::get_year(void)
{
	return _year;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::set_year(int new_year)
// Purpose:    Implementation of Date::set_year()
// Parameters:
// - new_year
// Return:     void
////////////////////////////////////////////////////////////////////////

void Date::set_year(int _year)
{
	this->_year = _year;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::get_day()
// Purpose:    Implementation of Date::get_day()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Date::get_day(void)
{
	return _day;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::set_day(int new_day)
// Purpose:    Implementation of Date::set_day()
// Parameters:
// - new_day
// Return:     void
////////////////////////////////////////////////////////////////////////

void Date::set_day(int _day)
{
	this->_day = _day;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::get_month()
// Purpose:    Implementation of Date::get_month()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Date::get_month(void)
{
	return _month;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::set_month(int new_month)
// Purpose:    Implementation of Date::set_month()
// Parameters:
// - new_month
// Return:     void
////////////////////////////////////////////////////////////////////////

void Date::set_month(int _month)
{
	this->_month = _month;
}

int Date::get_hour()
{
	return _hour;
}

void Date::set_hour(int _hour)
{
	this->_hour = _hour;
}

int Date::get_minute()
{
	return _minute;
}

void Date::set_minute(int _minute)
{
	this->_minute = _minute;
}

int Date::get_second()
{
	return _second;
}

void Date::set_second(int _second)
{
	this->_second = _second;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::to_string()
// Purpose:    Implementation of Date::to_string()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

string Date::to_string(void)
{
	ostringstream oss;
	oss <<_day << "/" << _month << "/" << _year << "\t\t" << _hour << ":" << _minute << ":" << _second;
	return oss.str();
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::~Date()
// Purpose:    Implementation of Date::~Date()
// Return:
////////////////////////////////////////////////////////////////////////

Date::~Date(){}
