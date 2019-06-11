#include <iostream>
#include "Load.hpp"
#include "Rocket.hpp"

using namespace std;

class LoadedRocket: public Rocket, public Load {
	public:
		LoadedRocket(double longitude, double latitude, double altitude, double load);
		void display();
};

LoadedRocket::LoadedRocket(double longitude, double latitude, double altitude, double load):
	Rocket(longitude, latitude, altitude), Load(load) { }

void LoadedRocket::display() {
	Rocket::display();
	Load::display();
}

int
main() {
	LoadedRocket myRocket(1999.88, 192904.99, 2900, 12450);

	myRocket.display();
} 
