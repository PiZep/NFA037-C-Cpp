#include <stdio.h>

int max(int *arr, int size);

int main() {
	int tab[5];
	int i;

	printf("Enter 5 integers to fill the table:\t");
	fflush(stdout);

	for(i = 0; i < 5; i++) {
		scanf("%d", &tab[i]);
	}
	printf("The max of the 5 values is:\t%d\n", max(tab, 5));
	return 0;
}

int max(int *arr, int size) {
	int i;
	int max = arr[0];
	
	for (i = 1; i < size; i++) {
		max = arr[i] < max ? max : arr[i];
	}
	return max;
}
