#include <stdio.h>

void fill(int *arr, int size);
void displaytab(int *arr, int size);

int main() {
	int tab[5];

	fill(tab, 5);
	displaytab(tab, 5);

	return 0;
}

void fill(int *tab, int size) {
	int i;
	for (i = 0; i < size; i++) {
		tab[i] = 1;
	}
	return;
}

void displaytab(int *arr, int size) {
	int i;
	int l;
	
	for (i = 0; i < size; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
