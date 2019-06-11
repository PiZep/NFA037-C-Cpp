#include <iostream>
#include <string>
#include "Grocery.hpp"

using namespace std;

Grocery::Grocery(string p_reference, string p_name, double p_price, int p_minimalStock, int p_currentStock) {
	reference = p_reference;
	name = p_name;
	price = p_price;
	minimalStock = p_minimalStock;
	currentStock = p_currentStock;
}

void Grocery::display() {
	cout << "Ref:\t\t" << reference << endl;
	cout << "Name:\t\t" << name << endl;
	cout << "Price:\t\t" << price << endl;
	cout << "Minimal stock:\t" << minimalStock << endl;
	cout << "Current stock:\t" << currentStock << endl;
}

int Grocery::inStock() {
	return currentStock;
}

void Grocery::sell(int number) {
	currentStock -= number;
}

void Grocery::stock(int number) {
	currentStock += number;
}

bool Grocery::isAvailable() {
	return (currentStock > 0);
}

int Grocery::order() {
	return (currentStock < minimalStock ? minimalStock : 0);
}

Food::Food(string p_reference, string p_name, double p_price, int p_minimalStock, int p_currentStock,
		double p_VAT, int p_year, int p_month, int p_day, string p_sector):
	Grocery(p_reference, p_name, p_price, p_minimalStock, p_currentStock) {
		VATRate = p_VAT;
		expiration.year = p_year;
		expiration.month = p_month;
		expiration.day = p_day;
		sellSector = p_sector;
}

void Food::display() {
	cout << "Ref:\t\t\t" << reference << endl;
	cout << "Name:\t\t\t" << name << endl;
	cout << "Price:\t\t\t" << price << endl;
	cout << "VAT rate:\t\t" << VATRate << endl;
	cout << "Minimal stock:\t" << minimalStock << endl;
	cout << "Current stock:\t" << currentStock << endl;
	cout << "Expiration date:\t" << expiration.month << "/" << expiration.day << "/" << expiration.year << "/" << endl;
}
