#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int max(vector<int>);
vector<int> input(int);

int main() {
	int nb;
	vector<int> tab;

	cout << "Enter the number of integers of the array:" << endl;
	do {
		cin >> nb;
	} while (nb < 0);

	tab.resize(nb);
	tab = input(nb);
	

	cout << "The biggest is " << max(tab) << endl;
	return 0;
}

int max(vector<int> tab) {
	int max = tab[0];
	for (int i = 1; i < tab.size(); i++) {
		max = max > tab[i] ? max : tab[i];
	}
	return max;
}

vector<int> input(int nb) {
	vector<int> tab(nb);
	int i;

	for (i = 0; i < nb; i++) {
		cout << "input " << i + 1 << "\t";
		cin >> tab[i], cout << endl;
	}
	return tab;
}
