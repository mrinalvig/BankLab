#include "Bank.h"


Bank::Bank(std::string name) : _name(name)
{
}

Bank::~Bank()
{
}

std::string Bank::getName()
{
	return _name;
}

void Bank::CreateAccount(Account newAccount)
{
	_accounts.push_back(newAccount);
}

std::string Bank::ShowAccounts()
{
	std::string output = "Accounts for " + _name + "\n";
	int index = 0;

	for (Account bob : _accounts)
	{
		output += "Account " + std::to_string(index + 1) + ": " + std::to_string(bob.getAccountNumber()) + " - " + bob.getAccountOwner() +" Balance: " 
			+ std::to_string(bob.getBalance()) += " pennies\n";
		index++;
	}
	return output;
}

std::string Bank::ListAccounts()
{
	std::string output = "Accounts for " + _name + "\n";
	int index = 0;

	for (Account bob : _accounts)
	{
		output += "Account " + std::to_string(index + 1) +": " + std::to_string(bob.getAccountNumber()) += "\n";
		index++;
	}
	return output;
}

void Bank::Deposit(int accountNumber, int amount)
{
	for (Account &account : _accounts) {
		if (account.getAccountNumber() == accountNumber)
		{
			account.Deposit(amount);
			return;
		}
	}
	return;
}

void Bank::Withdraw(int accountNumber, int amount)
{
	for (Account &account : _accounts)
	{
		if (account.getAccountNumber() == accountNumber)
		{
			account.Withdraw(amount);
			return;
		}
	}
	return;
}
