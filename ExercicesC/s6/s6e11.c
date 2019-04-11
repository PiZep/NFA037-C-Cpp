#include <stdio.h>

int even(int);

int main() {
	int a;

	printf("Enter a integer: ");
	fflush(stdout);

	scanf("%d", &a);
	even(a) ? printf("%d is an even number\n", a) : printf("%d is an odd number\n", a);
	return 0;
}

int even(int x) {
	return x % 2 == 0;
}
