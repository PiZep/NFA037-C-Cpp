#ifndef DEF_ACCOUNT
#define DEF_ACCOUNT

#include <iostream>

#define OVERDRAFT -500

class Account {

	private:

	int id;
	double amount;

	static const int accountNumber = 0;

	public: 

	Account();
	Account(int newId, double newAmount);
	void display();
	void input();
	double credit(double money);
	double debit(double money);
	bool red();
};

#endif
