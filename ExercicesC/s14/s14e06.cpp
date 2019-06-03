#include <iostream>
#include "Grocery.hpp"

using namespace std;

int main() {

	Grocery grocery("AE2456", "Notebook 24", 89, 2, 8);

	grocery.display();

	cout << "Stock before order:\t" << grocery.inStock() << endl;
	grocery.sell(3);
	cout << "Stock after order:\t" << grocery.inStock() << endl;
	cout << "Quantity to order:\t" << grocery.order() << endl;
}
