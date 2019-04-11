#include <stdio.h>

float interest(float rate, float capital, int years);

int main() {
	float rate, capital;
	int years;

	printf("Enter the rate of the investment (in %%):\t");
	fflush(stdout);
	scanf("%f", &rate);
	printf("Enter the initial capital:\t");
	fflush(stdout);
	scanf("%f", &capital);
	printf("Enter the number of years:\t");
	fflush(stdout);
	scanf("%d", &years);

	printf("Your capital after %d years will be of %.2f €, for a rate"
			" of %.2f%% and an initial capital of %.2f €\n", years,
			interest(rate, capital, years), rate, capital);
	return 0;
}

float interest(float rate, float capital, int years) {
	return years == 1 ? capital * (1 + rate / 100) :
		     interest(rate, capital * (1 + rate / 100), years - 1);
}
