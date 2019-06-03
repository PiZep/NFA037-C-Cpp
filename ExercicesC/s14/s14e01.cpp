#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Parent {
	private:

	int age;
	string name;

	public:

	Parent() {
		this->age;
		this->name;
	}
	Parent(int age, string name) {
		this->age = age;
		this->name = name;
	}

	void display() {
		cout << this->name << ", " << this->age << " years old.\n";
	}
};

class Child: public Parent {
	public:

	Child(int age, string name): Parent(age, name) {};
	Child(): Parent() {};

};

int main() {
	Parent Eric(32, "Eric");
	Child Fanny(2, "Fanny");
	Child Toto;

	Eric.display();
	Fanny.display();
	Toto.display();
	return EXIT_SUCCESS;
}
