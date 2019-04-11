#include <stdio.h>

float power(int, int);

int main() {
	int a, b;

	printf("Enter two integers:\t");
	fflush(stdout);
	scanf("%d%d", &a, &b);

	printf("%d^%d = %.4f\n", a, b, power(a, b));
	return 0;
}

float power(int x, int y) {
	int result = (y == 0) ? 1 : x;
	int i;

	int negative = y < 0 ? 1 : 0;
	y = negative ? -y : y;

	for (i = 1; i < y; i++) {
		result *= x;
	}

	return negative ? (1 / ((float) result)) : (float) result;
}
