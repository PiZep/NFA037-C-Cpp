#include <stdio.h>

int main()
{
	int number;
	do {
		printf("Enter a number >= 100:\n");
		scanf("%d", &number);
	} while(number < 100);
	return 0;
}
