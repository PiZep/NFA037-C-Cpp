#include <stdio.h>

int main()
{
	int number = 101;
	while(number > 100)
	{
		printf("Enter a number <= 100:\n");
		scanf("%d", &number);
	}
	return 0;
}
