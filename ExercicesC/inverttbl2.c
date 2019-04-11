#include <stdio.h>

int main() {
	int i;
	int tmp;
	int length;
	int tbl[] = {1, 100, 200, 300, 400};

	length = sizeof(tbl)/ sizeof(int);

	printf("%d\n", length);
	for (i = 0; i < length/2; i++) {
		tmp = tbl[i];
		tbl[i] = tbl[length - 1 - i];
		tbl[length - 1 - i] = tmp;
		printf("%d: %d\n", i, tbl[i]);
		printf("%d: %d\n", i, tbl[length - 1 - i]);
	}
	for (i = 0; i < length; i++) {
		printf("%d\t", tbl[i]);
	}
	printf("\n");

	return 0;
}
