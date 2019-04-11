#include <stdio.h>

void modify(int *arr, int size);
void displaytab(int *arr, int size);

int main() {
	int tab[5];

	modify(tab, 5);
	displaytab(tab, 5);

	modify(tab, 5);
	displaytab(tab, 5);

	return 0;
}

void modify(int *tab, int size) {
	int i;
	printf("Enter 5 integers to fill the table:\t");
	fflush(stdout);
	for (i = 0; i < size; i++) {
		scanf("%d", &tab[i]);
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
