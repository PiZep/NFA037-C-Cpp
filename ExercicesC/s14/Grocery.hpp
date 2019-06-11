#include <iostream>
#include <string>

struct Date {
	int year;
	int month;
	int day;
};


class Grocery {

	protected:

		std::string reference;
		std::string name;
		double price;
		int minimalStock;
		int currentStock;

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
		Date expiration;
		std::string sellSector;

	public:
		Food(std::string ref, std::string name, double price, int minimalStock,
				int currentStock, double VAT, int expYear, int expMonth, int expDay, std::string sector);
			/* Grocery(ref, name, price, minimalStock, currentStock); */
		void display();
};
