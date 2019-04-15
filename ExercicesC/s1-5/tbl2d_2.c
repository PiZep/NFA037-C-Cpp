#include <stdio.h>

int main() {
	int i;
	int tmp;
	int tab[][3] = { {1234, 1256, 4578},
			{12,   20,   30  },
	};

	for (i = 0; i < sizeof(tab[1])/sizeof(int); i++) {
		tmp = tab[1][i];
		tab[1][i] = tab[0][i];
		tab[0][i] = tmp;
	}

	printf("Age\tRef\n");
	for (i = 0; i < sizeof(tab[1])/sizeof(int); i++) {
		printf("%d\t%d\n", tab[0][i], tab[1][i]);
	}
	return 0;
}
