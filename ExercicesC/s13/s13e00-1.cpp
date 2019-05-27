#include <iostream>
#include <cstdlib>

using namespace std;

class Point {

	/* Instance variables */
	private:
		int x, y, z;

		/* Class builders */
	public: 
		Point() {
			this->x = 0;
			this->y = 0;
			this->z = 0;
		}

		Point(int a, int b, int c) {
			this->x = a;
			this->y = b;
			this->z = c;
		}

		/* Methods */
		void input() {
			cout << "abscissa:\t",      cin >> this->x, cout << endl;
			cout << "ordinate:\t",      cin >> this->y, cout << endl;
			cout << "side:\t\t",        cin >> this->z, cout << endl;
		}

		void display() {
			cout << "abscissa:\t"   << this->x << endl;
			cout << "ordinate:\t"   << this->y << endl;
			cout << "side:\t\t"     << this->z << endl;
		}
};

int main() {
	Point origin;
	Point testPoint(1, 2, 3);

	cout << "First point: \"origin\"" << endl;
	origin.display();
	cout << "Second point: \"testPoint\"" << endl;
	testPoint.display();


	cout << "testPoint modification:" << endl;
	testPoint.input();
	cout << "Second point: \"testPoint\"" << endl;
	testPoint.display();

	return EXIT_SUCCESS;
}
