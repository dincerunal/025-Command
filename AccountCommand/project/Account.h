#pragma once
#include <string>

class Account {
public:
	Account(const char *name, int balance) : m_name(name), m_balance(balance) {}
	int GetBalance() const { return m_balance; }
	void Deposit(int amount);
	void Withdraw(int amount);
private:
	std::string m_name;
	int m_balance;
};

