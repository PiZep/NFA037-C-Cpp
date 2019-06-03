#include <iostream>
#include <cstdlib>
#include "Account.hpp"

using namespace std;

int
main() {

	Account bank[6];
	int i;

	for (i = 0; i < 6; i++) {
		bank[i] = Account(i + 1, (i + 1) * 1000);
		bank[i].display();
	}

	return EXIT_SUCCESS;
}
