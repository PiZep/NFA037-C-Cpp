#include <iostream>
#include <cstdlib>
#include "Account.h"

using namespace std;

int
main() {
	Account account1(234567, 490.85);
	account1.display();
	return EXIT_SUCCESS;
}
