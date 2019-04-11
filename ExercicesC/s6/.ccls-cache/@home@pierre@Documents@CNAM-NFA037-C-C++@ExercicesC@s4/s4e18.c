#include <stdio.h>

int modify();

int n;

int main() {

	printf("Enter an integer:\t");
	fflush(stdout);
	scanf("%d", &n);
	
	printf("New value returned by modify():\t%d\n", modify());
	printf("Value after modify():\t%d\n", n);
	return 0;
}

int modify() {
	return ++n;
}
