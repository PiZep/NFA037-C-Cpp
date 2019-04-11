#include <stdio.h>

int isprime(int);

int main() {
	int num;

	printf("Enter a integer:\t");
	fflush(stdout);

	scanf("%d", &num);
	isprime(num) ? printf("%d is prime\n", num) : printf("%d is not prime\n", num);
	return 0;
}

int isprime(int num) {

	int i;

	if (num >= 1 && num <=3) {
		return 1;
	}

	if (num <= 0) return 0;

	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}

	return 1;
}
