#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	int nb;

	do {
		cout << "Which integer do you want to enter?" << endl;
		cin >> nb;
	} while (nb < 0);

	cout << "You entered the integer " << nb << endl;
	return 0;
}
