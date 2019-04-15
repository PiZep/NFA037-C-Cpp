#include <stdio.h>
#include <stdlib.h>

int main() {
	int tabsize, i;
	float *tab;

	printf("Size of the table:\n");
	scanf("%d", &tabsize);

	tab = malloc(sizeof(float) * tabsize);

	for (i = 0; i < tabsize; i++) {
		scanf("Value: %f", &tab[i]);
	}

	for (i = 0; i < tabsize; i++) {
		printf("Value %d: %f\n", i, &tab[i]);
	}

	free(tab);

	return 0;
}
