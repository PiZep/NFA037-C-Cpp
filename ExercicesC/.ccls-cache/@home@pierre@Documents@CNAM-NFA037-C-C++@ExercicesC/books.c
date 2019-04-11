#include <stdio.h>

int main()
{
	int books;
	char plural;

	printf("How many books do you have?\n");
	scanf("%d", &books);
	plural = (books > 1) ? 's' : '\0' ;
	printf("You have %d book%c.\n", books, plural);
	return 0;
}
