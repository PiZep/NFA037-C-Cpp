#include <stdio.h>
#include <unistd.h>

int main() {
	int size;
	int width;
	int i, j;
	char star;

	printf("Enter the size of your V:\n");
	scanf("%d", &size);
	width = size * 2 - 1;
	/* printf("%d\n", width); */

	for (i = 0; i < size; i++) {
		for (j = 0; j < width; j++) {
			/* printf("%d, %d\n", i, j); */
			/* sleep(1); */
			star = ((j == i) || (i + j == width - 1)) ? '*' : ' ';
			printf("%c", star);
		}
		printf("\n");
	}
}
