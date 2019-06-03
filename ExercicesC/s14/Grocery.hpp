#include <iostream>
#include <string>

typedef struct date_t date_t;

struct date_t date {
	int year;
	int month;
	int day
};


class Grocery {

	protected:

		std::string reference;
		std::string name;
		double price;
		int minimalStock;
		int currentStock;
		date_t date;

	public:

		Grocery(std::string, std::string name, double price, int minimalStock, int currentStock);
		void display();
		int inStock();
		void sell(int number);
		void stock(int number);
		bool isAvailable();
		int order(); 
};

class Food: public Grocery { 

	protected:
		double VATRate;
		date expiration;
		std::string sellSector;

	public:
		Food(std::string ref, std::string name, double price, int minimalStock, int currentStock, double VAT, date expiration, std::string sector): Grocery(ref, name, price, minimalStock, currentStock);
}
