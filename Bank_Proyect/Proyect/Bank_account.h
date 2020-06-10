/***********************************************************************
 * Module:  Bank_account.h
 * Author:  USUARIO
 * Modified: martes, 9 de junio de 2020 16:05:48
 * Purpose: Declaration of the class Bank_account
 ***********************************************************************/

#if !defined(__Bank_Model_Bank_account_h)
#define __Bank_Model_Bank_account_h

class Transaction;
class Date;
class Person;

#include <Person.h>
#include <Date.h>

class Bank_account
{
public:
   Bank_account(Account_Type _account_type, Client _client);
   Bank_account(Client _client, double _bank_balance, std::string _account_number, Account_Type _account_type);
   Person get_client(void);
   void set_client(Person new_client);
   std::string get_account_number(void);
   void set_account_number(std::string new_account_number);
   double get_bank_balance(void);
   void set_bank_balance(double new_bank_balance);
   std::string get_account_type(void);
   void set_account_type(std::string new_account_type);
   Date get_creation_date(void);
   void set_creation_date(Date new_creation_date);
   ~Bank_account();

   int _SAVING_ACCOUNT;
   int _CHECKING_ACCOUNT;
   
   Transaction** transaction;
   Date** date;
   Person** person;

protected:
private:
   Person _client;
   std::string _account_number;
   double _bank_balance;
   std::string _account_type;
   Date _creation_date;


};

#endif