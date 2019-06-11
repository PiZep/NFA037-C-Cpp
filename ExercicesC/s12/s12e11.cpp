#include <iostream>
#include <unistd.h>

using namespace std;

int
main() {

	int i;
	int nb;
	FILE *test = fopen("./Test.txt", "w");

	cout << "Enter five integers:" << endl;
	for (i = 0; i < 5; i++) {
		cin >> nb;
		fprintf(test, "%d\t", nb);
	}
	fprintf(test, "\n");
	fclose(test);
	execl("/usr/bin/cat", "cat", "./Test.txt", NULL);
	return EXIT_SUCCESS;
}
