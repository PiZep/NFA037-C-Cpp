#include <iostream>
#include <cstdlib>
#include "Account.h"

using namespace std;

int
main() {
	Account account1(234567, 490.85);
	Account account2;
	cout << "New account:\t" << endl;
	account2.display();
	account2.input();

	cout << "First account:\t" << endl;
	account1.display();
	cout << "New account after input():\t" << endl;
	account2.display();
	
	return EXIT_SUCCESS;
}
