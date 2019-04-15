#include <stdio.h>

int main()
{
	int table;
	printf("Choose your multiplication table:\n");
	scanf("%d", &table);
	for(int i = 0; i <= 10; ++i)
	{
		printf("%d * %d = %d\n", i, table, table*i);
	}
	return 0;
}
