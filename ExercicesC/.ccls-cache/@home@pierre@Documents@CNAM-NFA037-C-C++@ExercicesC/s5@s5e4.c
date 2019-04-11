#include <stdio.h>

int recpower(int a, int b);

int main() {
	int x, y;

	printf("Enter two integers to empower:\t");
	fflush(stdout);

	scanf("%d%d", &x, &y);
	printf("%d power %d is:\t%d\n", x, y, recpower(x, y));
	return 0;
}

int recpower(int a, int b) {

	return (b == 0) ? 1 : (recpower(a, b - 1) * a);
}
