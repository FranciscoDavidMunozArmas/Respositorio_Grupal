/***********************************************************************
 * Module:  Date.h
 * Author:  USUARIO
 * Modified: martes, 2 de junio de 2020 15:36:25
 * Purpose: Declaration of the class Date
 ***********************************************************************/

#if !defined(__Bank_Model_Date_h)
#define __Bank_Model_Date_h

class Date
{
public:
   Date();
   Date(int _day, int _month, int _year);
   int get_year(void);
   void set_year(int new_year);
   int get_day(void);
   void set_day(int new_day);
   int get_month(void);
   void set_month(int new_month);
   std::string to_string(void);
   ~Date();

protected:
private:
   int _day;
   int _month;
   int _year;


};

#endif