#include <iostream>

class Rocket {
	protected:
		double longitude;
		double latitude;
		double altitude;


	public:
		Rocket(double longitude, double latitude, double altitude);
		void display();

};
