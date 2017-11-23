#pragma once
#include <string>
using namespace std;

class Account
{
public:
	//create an account using this constructor
	Account(int id, string firstName, string lastName, double initialBalance);
	void Deposit(double amount);
	double Withdraw(double amount);
	double closeAccount();


private:
	int id;
	string firstName;
	string lastName;
	double currentBalance;





};