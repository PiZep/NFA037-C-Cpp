#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Parent {

	protected:

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

	private:

		string level;

	public:

		Child(int age, string name): Parent(age, name) {};

		Child(int age, string name, string level): Parent(age, name) {
			this->level = level;
		};

		Child(): Parent() {};

		void display() {
			if (this->level == "") {
				cout << this->name << ", " << this->age << " years old.\n";
			} else {
				cout << this->name << ", " << this->age << " years old, " << this->level << " grade.\n";
			}
		}

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
