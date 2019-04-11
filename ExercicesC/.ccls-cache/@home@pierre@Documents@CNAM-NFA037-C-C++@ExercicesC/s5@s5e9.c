#include <stdio.h>
#include <stdlib.h>

void recdisplaytab(int *arr, int range, int size);

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
	recdisplaytab(tab, 0, size);
	return 0;
}

void recdisplaytab(int *arr, int range, int size) {
	int i;
	int l;
	
	if (range < size) {
		printf("%d\t", arr[range]);
		recdisplaytab(arr, ++range, size);
	} else {
		printf("\n");
	}
}
