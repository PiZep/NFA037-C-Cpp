#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int max(int, int);

int main() {
	int a = 0, b = 0;

	std::cout << "Enter two integers: (at least one not = 0)";
	do {
		std::cin >> a >> b, std::cout << std::endl;
	} while (a == 0 && b == 0);

	cout << "You entered the integers " << a << " and " << b << std::endl;
	if (a == b) { 
		std::cout << a << " = " << b << std::endl;
	} else {
		std::cout << "The biggest is " << max(a, b) << std::endl;
	}
	return EXIT_SUCCESS;
}

int max(int a, int b) {
	return a > b ? a : b;
}
