#pragma once
#include <string>
using namespace std;

class Account
{
public:
	//create an account using this constructor
	Account(int id, string firstName, string lastName, double initialBalance);
	virtual void Deposit(double amount) = 0;
	virtual double Withdraw(double amount) = 0;
	double closeAccount();


protected:
	int id;
	string firstName;
	string lastName;
	double currentBalance;





};