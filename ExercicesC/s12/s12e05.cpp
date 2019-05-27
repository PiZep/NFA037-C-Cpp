#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	int nb;
	int i, j;

	std::cout << "Enter an integer:\t";
	std::cin >> nb, std::cout << std::endl;
	for (i = 0; i < nb; i++) {
		for (j = 0; j < nb; j++) {
			std:cout << (i + 1) << (j + 1) << std::endl;
		}
	} 

	return 0;
}
