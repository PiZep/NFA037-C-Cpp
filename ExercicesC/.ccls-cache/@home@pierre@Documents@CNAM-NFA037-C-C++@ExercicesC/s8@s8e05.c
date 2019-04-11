#include <stdio.h>

int sum(int *, int *);

int main() {
	int a, b = 0;

	printf("Enter two integers to sum up:\t");
	fflush(stdout);
	scanf("%d%d", &a, &b);

	printf("%d + %d = %d\n", a, b, sum(&a, &b));
	return 0;
}

int sum(int *x, int *y) {
	return *x + *y;
}
