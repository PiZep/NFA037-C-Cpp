#include <stdio.h>

int main() {
	int a = 44;
	int b;
	int *p = &a;

	b = *p;

	printf("b = %d\nShould be equal to a = %d\n", b, a);
	return 0;
}
