#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int nb, i;

	std::cout << "Enter an integer to draw a funny line: ";
	do {
		std::cin >> nb, std::cout << std::endl;
	} while (nb <= 0);

	for (i = 0; i < nb; i++) {
		std::cout << std::string(i, ' ') << '*' << std::string(nb - 1, ' ') << std::endl;
	}
	std::cout << "Hohoho !" << std::endl;
	return 0;
}
