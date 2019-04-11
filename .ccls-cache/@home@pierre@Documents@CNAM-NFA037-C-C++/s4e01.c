#include <stdio.h>

int product(int, int, int);

int main() {
	int a, b, c;

	scanf("Enter 3 integers:%d%d%d", &a, &b, &c);
	printf("The product %d * %d * %d = %d", a, b, c, product(a, b, c));

	return 0;
}

int product(x, y, z) {
	return x * y * z;
}
