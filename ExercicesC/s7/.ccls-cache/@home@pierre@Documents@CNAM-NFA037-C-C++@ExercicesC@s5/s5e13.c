#include <stdio.h>

int fibonacci(int n);

int main() {

	int duration;

	printf("There is a couple of rabbits. They're going to fibonacci for"
			" a given time, your choice in month:\t");
	fflush(stdout);
	scanf("%d", &duration);

	printf("Hmmm... They really fibonaccied. Now, there are couples of"
			" %d rabbits.\n", fibonacci(duration));
	return 0;
}

int fibonacci(int n) {

	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
