#include <stdio.h>

int main() {
	int a = 44;
	int *p = &a;

	printf("a = %d\n", a);
	printf("a's address = %p\n", &a);
	printf("p = %p\n", p);
	printf("p's address = %p\n", &p);
	printf("p points to %d\n", *p);
	return 0;
}
