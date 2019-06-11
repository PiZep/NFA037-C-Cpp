#include <iostream>
#include "Load.hpp"

using namespace std;

Load::Load(double p_load) {
	load = p_load;
}

void Load::display() {
	cout << "Load:\t" << load << "kg" << endl;
}
