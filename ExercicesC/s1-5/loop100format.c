#include <stdio.h>

int main()
{
	for(int i = 0; i <= 100; ++i)
	{
		if (i < 100)
		{
			printf("%d-", i); 
		} else {
			printf("%d\n", i); 
		}
	}
	return 0;
}
