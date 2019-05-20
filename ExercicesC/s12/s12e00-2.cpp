#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int max(int, int);

int main() {
	int a, b;

	cout << "Enter two integers:" << endl;
	do {
		cin >> a >> b;
	} while (a == b);

	cout << "You entered the integers " << a << " and " << b << endl;
	cout << "The biggest is " << max(a, b) << endl;
	return 0;
}

int max(int a, int b) {
	return a > b ? a : b;
}
