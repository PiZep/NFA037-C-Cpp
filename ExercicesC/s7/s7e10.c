#include <stdio.h>
#include <stdlib.h>

int recsumtab(int *arr, int range, int size);

int main() {
	int *tab;
	int size;
	int i;

	printf("Enter the size of the array:\t");
	fflush(stdout);
	scanf("%d", &size);
	tab = malloc(sizeof(int));

	printf("Enter %d integers to fill the table:\t", size);
	fflush(stdout);

	for(i = 0; i < size; i++) {
		scanf("%d", &tab[i]);
	}
	printf("The sum of the %d elements is:\t%d\n", size,
			recsumtab(tab, 0, size));
	
	free(tab);
	return 0;
}

int recsumtab(int *arr, int range, int size) {
	
	return range < size ? recsumtab(arr, (range + 1), size) + arr[range] :
		0;
}
