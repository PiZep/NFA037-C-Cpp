#include <stdio.h>

int main() {
	int mult[11];
	for (int i = 0; i < (sizeof(mult)/sizeof(int)); i++) {
		mult[i] = i * 5;
		printf("%d\t", mult[i]);
	}
	return 0;
}
