#include <iostream>
#include "Account.h"

using namespace std;


Account::Account() {
	/* accountNumber++; */
	id = 0;
	amount = 0.0;
}

Account::Account(int newId, double newAmount) {
	id = newId;
	amount = newAmount;
}

void Account::display() {
	cout << "Account #" << id << "\t" << "amount: " << amount << endl;
	if (red()) cout << "Bad bad bad!" << endl;
};

void Account::input() {
	cout << "Account #?\t", cin >> id, cout << endl;
	id < 0 ? id = 0 : id;
	cout << "Amount ?\t", cin >> amount, cout << endl;
}

double Account::credit(double money) {
	amount += money;
	return (amount);
}

double Account::debit(double money) {
	if ((amount - money) > OVERDRAFT) {
		amount -= money;
	} else {
		cout << "Witdrawal refused: max overdraft riched" << endl;
	}
	return (amount);
}

bool Account::red() {
	return (amount < 0);
}
