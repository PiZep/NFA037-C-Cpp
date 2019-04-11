#include <stdio.h>

float min(float, float);

int main() {
	float a, b;

	printf("Enter two real numbers: ");
	fflush(stdout);

	scanf("%f%f", &a, &b);
	printf("Between %.2f and %.2f, %.2f is the smallest.\n", a, b, min(a, b));
	return 0;
}

float min(float x, float y) {
	return x < y ? x : y;
}
