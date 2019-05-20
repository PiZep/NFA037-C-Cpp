#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	int nb;

	std::cout << "Which quotation do you want to give?" << std::endl;
	std::cin >> nb;
	while (nb < 0 || nb > 20) {
		std::cout << "Com'n dude, don't be a dick!" << std::endl;
		std::cin >> nb;
	} 

	std::cout << "You entered the integer " << nb << std::endl;
	return 0;
}
