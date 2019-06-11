#include <iostream>
#include "Rocket.hpp"

using namespace std;

Rocket::Rocket(double p_longitude, double p_latitude, double p_altitude) {
	longitude = p_longitude;
	latitude = p_latitude;
	altitude = p_altitude;
}

void Rocket::display() {
	cout << "Longitude:\t" << longitude << "°" << endl;
	cout << "Latitude:\t" << latitude << "°" << endl;
	cout << "Altitude:\t" << altitude << "m" << endl;
}
