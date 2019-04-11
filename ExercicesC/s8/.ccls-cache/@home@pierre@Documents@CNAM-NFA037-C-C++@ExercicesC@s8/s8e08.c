#include <stdio.h>

void changevalue(int *);

int main() {

	int x = 10;

	printf("x' address is: %p\n", &x);
	printf("x' content before changevalue: %d\n", x);

	changevalue(&x);

	printf("x' value in main() and after changevalue() call: %d\n", x);
	printf("x' address after changevalue() call: %p\n", &x);
	return 0;
}

void changevalue(int *x) {
	int *p = x;
	printf("Value at the address p points to before change inside function: %d\n", *p);

	*p = 5;
	printf("Value at the address p points to after change inside function: %d\n", *p);
}
