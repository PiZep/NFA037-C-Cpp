#include <stdio.h>

int mathseries(int range);

int main() {
	int range;

	printf("Enter the range to compute the following series: U_n = 2 * U _(n-1) + 3, with U_1 = 1\n");
	scanf("%d", &range);

	printf("The result is:\t%d\n", mathseries(range));
	return 0;
}

int mathseries(int range) {
	return (range == 1 ? 1 : 2 * mathseries(range - 1) + 3);
}
