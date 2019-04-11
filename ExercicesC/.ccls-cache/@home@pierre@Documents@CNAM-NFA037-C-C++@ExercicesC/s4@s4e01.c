#include <stdio.h>

int product(int, int, int);

int main() {
	int a, b, c;

	printf("Enter 3 integers: ");
	fflush(stdout);
	scanf("%d%d%d", &a, &b, &c);
	printf("The product of %d * %d * %d = %d\n", a, b, c, product(a, b, c));

	return 0;
}

int product(x, y, z) {
	return x * y * z;
}
