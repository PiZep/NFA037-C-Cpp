#include <stdio.h>

int main() {

	int size;
	int width;
	int i, j;

	printf("Choose the size of your T:\n");
	scanf("%d", &size);
	width = (size%2) ? (size) : (size - 1);

	for (i = 0; i < size; i++) {
		for (j = 0; j < width; j++) {
			if (i == 0) {
				printf("*");
			} else {
				(j == width/2) ? printf("*") : printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
