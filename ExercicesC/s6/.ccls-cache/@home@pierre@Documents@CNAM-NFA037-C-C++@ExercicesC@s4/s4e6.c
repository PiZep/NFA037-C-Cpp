#include <stdio.h>

float mean(int *arr, int size);

int main() {
	int tab[5];
	int i;

	printf("Enter 5 integers to fill the table:\t");
	fflush(stdout);

	for(i = 0; i < 5; i++) {
		scanf("%d", &tab[i]);
	}
	printf("The mean of the 5 values is:\t%.4f\n", mean(tab, 5));
	return 0;
}

float mean(int *arr, int size) {
	int i;
	float sum;
	
	for (i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}
