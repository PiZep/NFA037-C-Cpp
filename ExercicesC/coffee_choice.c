#include <stdio.h>

int main()
{
	int choice;
	printf("Choose your drink:\n"
			"1) Short coffee, sugar-free\n"
			"2) Short coffee, sweet\n"
			"3) Long coffee, sugar-free\n"
			"4) Long coffee, sweet\n"
		);
	scanf("%d", &choice);

	switch(choice)
	{
	case 1:
		printf("1) Short coffee, sugar-free\n"); 
		break;
	case 2:
		printf("2) Short coffee, sweet\n"); 
		break;
	case 3:
		printf("3) Long coffee, sugar-free\n"); 
		break;
	case 4:
		printf("4) Long coffee, sweet\n"); 
		break;
	default:
		printf("Retarded...\n");
	}
	return 0;
}
