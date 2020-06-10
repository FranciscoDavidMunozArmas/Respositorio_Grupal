/***********************************************************************
 * Module:  Bank_account.cpp
 * Author:  USUARIO
 * Modified: martes, 9 de junio de 2020 16:05:48
 * Purpose: Implementation of the class Bank_account
 ***********************************************************************/

#include "Transaction.h"
#include "Date.h"
#include "Person.h"
#include "Bank_account.h"

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::Bank_account(Account_Type _account_type, Client _client)
// Purpose:    Implementation of Bank_account::Bank_account()
// Parameters:
// - _account_type
// - _client
// Return:     
////////////////////////////////////////////////////////////////////////

Bank_account::Bank_account(Account_Type _account_type, Client _client)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::Bank_account(Client _client, double _bank_balance, std::string _account_number, Account_Type _account_type)
// Purpose:    Implementation of Bank_account::Bank_account()
// Parameters:
// - _client
// - _bank_balance
// - _account_number
// - _account_type
// Return:     
////////////////////////////////////////////////////////////////////////

Bank_account::Bank_account(Client _client, double _bank_balance, std::string _account_number, Account_Type _account_type)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::get_client()
// Purpose:    Implementation of Bank_account::get_client()
// Return:     Person
////////////////////////////////////////////////////////////////////////

Person Bank_account::get_client(void)
{
   return _client;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::set_client(Person new_client)
// Purpose:    Implementation of Bank_account::set_client()
// Parameters:
// - new_client
// Return:     void
////////////////////////////////////////////////////////////////////////

void Bank_account::set_client(Person new_client)
{
   _client = new_client;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::get_account_number()
// Purpose:    Implementation of Bank_account::get_account_number()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Bank_account::get_account_number(void)
{
   return _account_number;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::set_account_number(std::string new_account_number)
// Purpose:    Implementation of Bank_account::set_account_number()
// Parameters:
// - new_account_number
// Return:     void
////////////////////////////////////////////////////////////////////////

void Bank_account::set_account_number(std::string new_account_number)
{
   _account_number = new_account_number;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::get_bank_balance()
// Purpose:    Implementation of Bank_account::get_bank_balance()
// Return:     double
////////////////////////////////////////////////////////////////////////

double Bank_account::get_bank_balance(void)
{
   return _bank_balance;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::set_bank_balance(double new_bank_balance)
// Purpose:    Implementation of Bank_account::set_bank_balance()
// Parameters:
// - new_bank_balance
// Return:     void
////////////////////////////////////////////////////////////////////////

void Bank_account::set_bank_balance(double new_bank_balance)
{
   _bank_balance = new_bank_balance;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::get_account_type()
// Purpose:    Implementation of Bank_account::get_account_type()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Bank_account::get_account_type(void)
{
   return _account_type;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::set_account_type(std::string new_account_type)
// Purpose:    Implementation of Bank_account::set_account_type()
// Parameters:
// - new_account_type
// Return:     void
////////////////////////////////////////////////////////////////////////

void Bank_account::set_account_type(std::string new_account_type)
{
   _account_type = new_account_type;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::get_creation_date()
// Purpose:    Implementation of Bank_account::get_creation_date()
// Return:     Date
////////////////////////////////////////////////////////////////////////

Date Bank_account::get_creation_date(void)
{
   return _creation_date;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::set_creation_date(Date new_creation_date)
// Purpose:    Implementation of Bank_account::set_creation_date()
// Parameters:
// - new_creation_date
// Return:     void
////////////////////////////////////////////////////////////////////////

void Bank_account::set_creation_date(Date new_creation_date)
{
   _creation_date = new_creation_date;
}

////////////////////////////////////////////////////////////////////////
// Name:       Bank_account::~Bank_account()
// Purpose:    Implementation of Bank_account::~Bank_account()
// Return:     
////////////////////////////////////////////////////////////////////////

Bank_account::~Bank_account()
{
   // TODO : implement
}