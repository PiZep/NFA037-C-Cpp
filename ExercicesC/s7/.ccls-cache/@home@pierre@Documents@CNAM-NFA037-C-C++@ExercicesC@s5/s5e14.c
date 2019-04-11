#include <stdio.h>

int fibonacci(int n);

int main() {

	int duration;

	printf("There is a couple of rabbits. They're going to fibonacci for"
			" a given time, your choice in month:\t");
	fflush(stdout);
	scanf("%d", &duration);

	printf("Hmmm... They really fibonaccied. Now, there are %d couples of"
			" rabbits.\n", fibonacci(duration));
	return 0;
}

int fibonacci(int n) {
/* U_0 = 0, U_1 = 1, U_n = U_(n-1) + U_(n-2)
 * n:   0, 1, 2, 3, 4, 5, 6,  7...
 * U_n: 0, 1, 1, 2, 3, 5, 8, 13... */
	int result, r1, r2 = 0;
	int i;

	for (i = 0; i <= n; i++) {
		result = (i == 1) ? 1 : r1 + r2;
		r2 = r1;
		r1 = result;
	}
	return result;
}
