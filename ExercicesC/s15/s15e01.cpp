#include <iostream>
#include <string>

using namespace std;

char latinThousands[] = {'M'};
char latinHundreds[] = {'C', 'D', 'M'};
char latinTens[] = {'X', 'L', 'C'};
char latinUnits[] = {'I', 'V', 'X'};


string converted(int nb, int position) {
	char *latinTab;
	char res[5];
	int i;

	switch (position) {
		case 1:
			latinTab = latinUnits;
			break;
		case 2:
			latinTab = latinTens;
			break;
		case 3:
			latinTab = latinHundreds;
			break;
		case 4:
			latinTab = latinThousands;
			break;
	}

	if (nb <= 3) {
		for (i = 0; i < nb; i++) {
			res[i] = latinTab[0];
		}
	} else if (nb == 4) {
		res[0] = latinTab[0];
		res[1] = latinTab[1]; 
	} else if (nb >= 5 && nb <= 8) {
		res[0] = latinTab[0];
		for (i = 1; i <= (nb - 5); i++) {
			res[i] = latinTab[0];
		}
	} else {
		res[0] = latinTab[0];
		res[1] = latinTab[2];
	}
}

int main() {
	int nb, i;
	string nb2string;

	cout << "Enter a integer < 3999 to convert in latin number:\t";
	cin >> nb;

	if (nb > 3999) {
		cout << "Wrong number" << endl;
		return EXIT_FAILURE;
	}

	nb2string = to_string(nb);
	for (i = 0; i < nb2string.length(); i++) {
		cout << converted((int)(nb2string[i]), i); 
	}	
	cout << endl;
	return EXIT_SUCCESS;
}
