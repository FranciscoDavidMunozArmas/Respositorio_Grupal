/***********************************************************************
 * Module:  Date.cpp
 * Author:  USUARIO
 * Modified: martes, 2 de junio de 2020 15:36:25
 * Purpose: Implementation of the class Date
 ***********************************************************************/

#include "Date.h"
#include <ctime>
#include <vector>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Date::Date()
// Purpose:    Implementation of Date::Date()
// Return:     
////////////////////////////////////////////////////////////////////////

Date::Date()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::Date(int _day, int _month, int _year)
// Purpose:    Implementation of Date::Date()
// Parameters:
// - _day
// - _month
// - _year
// Return:     
////////////////////////////////////////////////////////////////////////

Date::Date(int _day, int _month, int _year)
{
   this->_day = _day;
   this->_month = _month;
   this->_year = _year;
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

void Date::set_year(int new_year)
{
   _year = new_year;
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

void Date::set_day(int new_day)
{
   _day = new_day;
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

void Date::set_month(int new_month)
{
   _month = new_month;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::date()
// Purpose:    Implementation of Date::date()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Date::date(void){
   //PARA EL DIA 
   _day = time->tm_mday;
   set_day(_day);
   //PARA EL MES
   _month = 1+time->tm_mon;
   set_month(_month);
   //PARA EL AÑO
   _year = 1900 + time->tm_year;
   set_year(_year);
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::to_string()
// Purpose:    Implementation of Date::to_string()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

string Date::to_string(void)
{
   string msg = "%d",_day,"/%d",_month,"/%d",_year;
   return msg;
}

////////////////////////////////////////////////////////////////////////
// Name:       Date::~Date()
// Purpose:    Implementation of Date::~Date()
// Return:     
////////////////////////////////////////////////////////////////////////

Date::~Date()
{
   // TODO : implement
}
