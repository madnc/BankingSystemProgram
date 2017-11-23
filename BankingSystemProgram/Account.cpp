#include "Account.h"

Account::Account(int id, string firstName, string lastName, double initialBalance)
{
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
	this->currentBalance = initialBalance;
}

void Account::Deposit(double amount)
{
	this->currentBalance += amount;

}

double Account::Withdraw(double amount)
{
	if (this->currentBalance > 0.0)
	{
		currentBalance -= amount;
		return amount;
	}
	else
	{
		return 0.0;
	}
}

double Account::closeAccount()
{
	return this->currentBalance;

}
