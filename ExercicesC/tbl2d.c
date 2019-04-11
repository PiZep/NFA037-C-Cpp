#include <stdio.h>

int main() {
	int i;
	int sum = 0;
	float mean;
	int tab[][3] = { {1234, 1256, 4578},
			{12,   20,   30  },
	};

	for (i = 0; i < sizeof(tab[1])/sizeof(int); i++) {
		sum += tab[1][i];
	}

	mean = (float)sum / i;
	printf("Mean: %.2f\n", mean);
	return 0;
}
