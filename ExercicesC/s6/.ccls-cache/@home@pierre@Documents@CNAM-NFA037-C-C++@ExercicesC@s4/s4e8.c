#include <stdio.h>

int maxrange(int *arr, int size);

int main() {
	int tab[5];
	int i;

	printf("Enter 5 integers to fill the table:\t");
	fflush(stdout);

	for(i = 0; i < 5; i++) {
		scanf("%d", &tab[i]);
	}
	printf("The range of the maximum of the 5 values is:\t%d\n", maxrange(tab, 5));
	return 0;
}

int maxrange(int *arr, int size) {
	int i;
	int max = arr[0];
	int range = 1;
	
	for (i = 1; i < size; i++) {
		range = arr[i] < max ? range : i + 1;
		max = arr[i] < max ? max : arr[i];
	}
	return range;
}
