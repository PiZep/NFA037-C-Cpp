#include <iostream>

using namespace std;

void permut(double *, double *);

int main() {
	double a, b;
	cout << "Enter two real numbers:\t";
	cin >> a >> b;
	cout << endl << "Before permutation:\t" << "a = " << a << "\tb = " << b << endl;

	permut(&a, &b);
	cout << endl << "After permutation:\t" << "a = " << a << "\tb = " << b << endl;
	return 0;
}

void permut(double *a, double *b) {
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
	return;
}
