#include <stdio.h>

int recprod(int a, int b);

int main() {
	int x, y;

	printf("Enter two integers to multiply:\t");
	fflush(stdout);

	scanf("%d%d", &x, &y);
	printf("The product of %d by %d is:\t%d\n", x, y, recprod(x, y));
	return 0;
}

int recprod(int a, int b) {

	if (a < b) {
		recprod(b, a);
	}

	return (b == 0) ? 0 : (recprod(a, b - 1) + a);
}
