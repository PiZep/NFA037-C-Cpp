#include <stdio.h>

int main()
{
	int val, i, j;

	printf("Enter an integer to print a fancy stuff:\n");
	scanf("%d", &val);
	for (i = val; i > 0; i--)
	{
		for (j = 1; j <= val; j++)
		{
			printf("%d.%d\n", i, j);
		}
	}
	return 0;
}
