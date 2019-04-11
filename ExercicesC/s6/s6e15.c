#include <stdio.h>
#include <stdlib.h>

void modify(float *arr, int size);
void displaytab(float *arr, int size);

int main() {

	float *tab;
	int size;

	printf("Enter the size for the real numbers array:\t");
	fflush(stdout);
	scanf("%d", &size);

	tab = malloc(sizeof(float) * size);

	modify(tab, size);
	displaytab(tab, size);
	free(tab);
	return 0;
}

void modify(float *arr, int size) {

	int i;

	printf("Enter the %d reel numbers:\t", size);
	fflush(stdout);
	for (i = 0; i < size; i++) {
		scanf("%f", &arr[i]);
	}
	return;
}

void displaytab(float *arr, int size) {

	int i;

	for (i = 0; i < size; i++) {
		printf("%f\t", arr[i]);
	}
	printf("\n");

	return;
}
