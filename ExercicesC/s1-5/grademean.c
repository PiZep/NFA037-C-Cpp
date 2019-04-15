#include <stdio.h>
#include <stdlib.h>

int main() {
	float grades[8];
	float mean;
	int i;

	int *tab = mal
	printf("Enter the 8 grades:\n");
	for (i = 0; i < 8; i++) {
		scanf("%f", &grades[i]);
		mean += grades[i];
	}
	mean /= sizeof(grades)/sizeof(float);
	printf("The average is %.2f\n", mean);
	
	return 0;
}
