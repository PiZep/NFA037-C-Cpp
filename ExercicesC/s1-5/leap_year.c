#include <stdio.h>

int main()
{
	int year;

	printf("Enter a year:\n");
	scanf("%d", &year);

	if ((!(year%4) && year%100) || !(year%400))
	{
		printf("%d is a leap year.\n", year);
	} else {
		printf("%d is a non leap year.\n", year);
	}

	return 0;
}
