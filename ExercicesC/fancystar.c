#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dim, i, j;
	char star;
	malloc(sizeof(int));


	printf("Choose your square dimension:\n");
	scanf("%d", &dim);
	for(i = 0; i < dim; i++) {
		for(j = 0; j < dim; j++) {
			star = (i == j) ? '*' : ' ';
			printf("%c", star);
		}
		printf("\n");
	}
	return 0;
}
