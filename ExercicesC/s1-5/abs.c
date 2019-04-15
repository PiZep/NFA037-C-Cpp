#include <stdio.h>

int main()
{
	int val;
	printf("Enter an integer:\n");
	scanf("%d", &val);
	val = (val > 0) ? val : (-val);
	printf("Absolute value: %d", val);
	return 0;
}
