#include <stdio.h>

void displaytab(int *arr, int size);

int main() {
	int tab[5];
	int i;

	printf("Enter 5 integers to fill the table:\t");
	fflush(stdout);

	for(i = 0; i < 5; i++) {
		scanf("%d", &tab[i]);
	}
	displaytab(tab, 5);
	return 0;
}

void displaytab(int *arr, int size) {
	int i;
	int l;
	
	for (i = 0; i < size; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
