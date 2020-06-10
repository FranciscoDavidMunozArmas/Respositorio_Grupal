/***********************************************************************
 * Module:  Transaction.h
 * Author:  USUARIO
 * Modified: martes, 2 de junio de 2020 15:34:44
 * Purpose: Declaration of the class Transaction
 ***********************************************************************/

#if !defined(__Bank_Model_Transaction_h)
#define __Bank_Model_Transaction_h

class Date;

#include <Date.h>
#include <Person.h>

class Transaction
{
public:
   Transaction();
   double get_amount(void);
   void set_amount(double new_amount);
   virtual double bank_method(double amount_1, double amount_2)=0;
   virtual void print_transaction(Person client)=0;
   ~Transaction();

   Date** date;

protected:
private:
   double _amount;
   Date _transaction_date;


};

#endif