#include <iostream>
#include "Grocery.hpp"

using namespace std;

int main() {

	Grocery grocery("AE2456", "Notebook 24", 89, 2, 8);
	Food food("SP2020", "Springles", 4.45, 5, 25, 10.5, 2020, 12, 12, "Fresh");

	grocery.display();
	food.display();

	cout << "Stock before order:\t" << grocery.inStock() << endl;
	grocery.sell(3);
	cout << "Stock after order:\t" << grocery.inStock() << endl;
	cout << "Quantity to order:\t" << grocery.order() << endl;
}
