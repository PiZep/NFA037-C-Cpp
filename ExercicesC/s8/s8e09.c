#include <stdio.h>

void fill(float *arr, int size);
void displaytab(float *arr, int size);

int main() {
	float tab[5];

	printf("Fill a table with 5 real numbers:\t");
	fflush(stdout);
	fill(tab, 5);
	displaytab(tab, 5);

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
