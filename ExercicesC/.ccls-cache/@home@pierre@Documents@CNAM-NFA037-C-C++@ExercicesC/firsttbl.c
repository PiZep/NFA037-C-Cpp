#include <stdio.h>

int main() {
	char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};
	for (int i = 0; i < (sizeof(vowels)/sizeof(char)); i++) {
		printf("%c\t", vowels[i]);
	}
	return 0;
}
