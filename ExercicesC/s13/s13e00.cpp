#include <iostream>
#include <cstdlib>

using namespace std;

double prod(int, int);
double prod(double, double);

int main() {
	cout << "Product:\t" << prod(2, 5) << endl;
	cout << "Product:\t" << prod(2.5, 4.0) << endl;
	return EXIT_SUCCESS;
}

double prod(int a, int b) {
	return (double) a * b;
}

double prod(double a, double b) {
	return a * b;
}
