#include <stdio.h>

int main()
{
	int val1, val2;
	printf("Enter two integers:\n");
	scanf("%d%d", &val1, &val2);
	if ((val1 > 0 && val2 < 0) || (val1 < 0 && val2 > 0))
	{
		printf("Bravo!\n");
	} else {
		printf("That's a failure\n");
	}
	return 0;
}
