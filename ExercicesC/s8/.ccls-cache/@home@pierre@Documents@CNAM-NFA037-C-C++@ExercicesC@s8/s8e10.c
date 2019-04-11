#include <stdio.h>

#define SIZE 5

void fill(float *, int);
void displaytab(float *, int);
void minmax(float *arr, int size, float *min, float *max);

int main() {

	float min, max;
	float tab[SIZE];

	printf("Enter 5 real numbers to fill the table:\t");
	fflush(stdout);

	fill(tab, SIZE);
	displaytab(tab, SIZE);
	minmax(tab, SIZE, &min, &max);

	printf("Minimum in array:\t%f\nMaximum in array:\t%f\n",min, max);

	return 0;
}

void fill(float *tab, int size) {
	int i;
	float *p = tab;
	for (i = 0; i < size; i++) {
		scanf("%f", p);
		p++;
	}
	return;
}

void displaytab(float *arr, int size) {
	int i;
	float *p = arr;
	
	for (i = 0; i < size; i++) {
		printf("%f\t", *p++);
	}
	printf("\n");
}

void minmax(float *arr, int size, float *min, float *max) {
	int i;
	float *p = arr;
	*min = *p;
	*max = *p;

	for (i = 0; i < size; i++) {
		*min = *p < *min ? *p : *min;
		*max = *p > *max ? *p : *max;
		/* printf("%d: p=%f, min=%f, max=%f\n", i, *p, *min, *max); */
		p++;
	}

	return;
}
