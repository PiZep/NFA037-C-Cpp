#include <cstdio>
#include <cstdlib>
#include <iostream>

int factorial(int);

int main() {

	int nb;

	std::cout << "Enter an integer you want to calculate the factorial: (>0)";
	do {
		std::cin >> nb, std::cout << std::endl;
	} while (nb < 0);

	std::cout << "The factorial of " << nb << " is " << factorial(nb) << std::endl;
	return EXIT_SUCCESS;
}

int factorial(int nb) {
	return nb > 1 ? nb * factorial(nb - 1) : 1;
}
