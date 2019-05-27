#include <iostream>
#include <cstdlib>
#include "Account.h"

using namespace std;

int
main() {

	double money;

	Account account1(234567, 490.85);
	cout << "First account:\t" << endl;
	account1.display();
	Account account2;
	cout << "New account:\t" << endl;
	account2.display();
	account2.input();

	cout << "First account:\t" << endl;
	account1.display();
	cout << "New account after input():\t" << endl;
	account2.display();

	cout << "Let's debit some money on the new account. Choose an amount:" << endl;
	cin >> money;
	account1.credit(account2.debit(money));
	account2.display();
	cout << "And we credit it on the first one:" << endl;
	account1.display();
	
	return EXIT_SUCCESS;
}
