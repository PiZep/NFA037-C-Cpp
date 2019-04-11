#include <stdio.h>

void permute(int *, int *);

int main() {
	int a, b = 0;

	printf("Enter two integers to permute:\t");
	fflush(stdout);
	scanf("%d%d", &a, &b);
	permute(&a, &b);

	printf("After permutation: %d - %d\n", a, b);
	return 0;
}

void permute(int *x, int *y) {
	int *tmp;

	tmp = x;
	x = y;
	y = tmp;
}
