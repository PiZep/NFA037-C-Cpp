#ifndef DEF_ACCOUNT
#define DEF_ACCOUNT

#include <iostream>

#define OVERDRAFT -500

class Account {

	private:

	int id;
	double amount;

	public: 

	static int accountNumber;

	Account();
	Account(int newId, double newAmount);
	void display();
	void input();
	double credit(double money);
	double debit(double money);
	bool isRed();
	static double max(double money, Account account);
	~Account();
};

#endif
