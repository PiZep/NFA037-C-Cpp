#include <stdio.h>

int main() {
	float numbers[5];
	float min;
	int i;

	printf("Enter 5 floats:\n");
	for (i = 0; i < sizeof(numbers)/sizeof(int); i++) {
		printf("Value %d: \n", i);
		scanf("%f", &numbers[i]);
		min = (i == 0 || min > numbers[i]) ? numbers[i] : min;
	}

	printf("Min value: %f\n", min);
	for (i = 0; i < sizeof(numbers)/sizeof(int); i++) {
		printf("%f\t", numbers[i]);
	}
	return 0;
}
