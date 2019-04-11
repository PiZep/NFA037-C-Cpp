#include <stdio.h>

int factorial(int);

int main() {
	int a;
	printf("Enter a positive integer:\t");
	fflush(stdout);

	scanf("%d", &a);
	printf("%d! = %d\n", a, factorial(a));

	return 0;
}

int factorial(int x) {
	return x > 1 ? factorial(x - 1) * x : 1;
}
