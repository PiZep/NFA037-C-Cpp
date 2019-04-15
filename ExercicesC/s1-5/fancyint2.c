#include <stdio.h>

int main()
{
	int val, i, j;
	
	printf("Enter a value for a not so fancy list:\n");
	scanf("%d", &val);

	for (i = 1; i <= val; i++) {
		for (j = 1; j <= val; j++) {
			printf("%d%d\n", i, j);
		}
	}
	return 0;
}
