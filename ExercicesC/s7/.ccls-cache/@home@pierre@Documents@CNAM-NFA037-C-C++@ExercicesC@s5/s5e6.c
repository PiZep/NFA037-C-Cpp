#include <stdio.h>

int isprime(int);
int recsum(int);

int main() {
	int num;

	printf("Enter a integer:\t");
	fflush(stdout);

	scanf("%d", &num);
	printf("Sum of first integers to %d:\t%d\n", num, recsum(num));
	return 0;
}


int recsum(int num) {
	return num == 1 ? 0 : recsum(num - 1) + num - 1;
}
