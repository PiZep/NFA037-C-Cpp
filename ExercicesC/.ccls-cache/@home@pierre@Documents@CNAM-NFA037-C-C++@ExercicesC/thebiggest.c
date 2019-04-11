#include <stdio.h>

int main() {
	float numbers[5];
	float max;
	int i;

	printf("Enter 5 floats:\n");
	for (i = 0; i < sizeof(numbers)/sizeof(int); i++) {
		printf("Value %d: \n", i);
		scanf("%f", &numbers[i]);
		max = (i == 0 || max < numbers[i]) ? numbers[i] : max;
	}

	printf("Max value: %f\n", max);
	for (i = 0; i < sizeof(numbers)/sizeof(int); i++) {
		printf("%f\t", numbers[i]);
	}
	return 0;
}
