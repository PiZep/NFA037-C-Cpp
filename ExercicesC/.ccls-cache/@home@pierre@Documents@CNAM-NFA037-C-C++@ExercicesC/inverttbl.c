#include <stdio.h>

int main() {
	float table1[5];
	float table2[5];
	float max;
	int i;

	printf("Enter 5 floats:\n");
	for (i = 0; i < sizeof(table1)/sizeof(int); i++) {
		printf("Value %d: \n", i);
		scanf("%f", &table1[i]);
		table2[4-i] = table1[i];
	}

	printf("First table:\n");
	for (i = 0; i < sizeof(table1)/sizeof(int); i++) {
		printf("%f\t", table1[i]);
	}
	printf("\n");
	printf("Second table:\n");
	for (i = 0; i < sizeof(table2)/sizeof(int); i++) {
		printf("%f\t", table2[i]);
	}
	printf("\n");
	return 0;
}
