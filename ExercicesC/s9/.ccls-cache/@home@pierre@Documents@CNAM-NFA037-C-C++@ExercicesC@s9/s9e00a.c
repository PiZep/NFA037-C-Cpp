#include <stdio.h>
#include <string.h>

int main() {
	char word[] = "Try";
	int i = 0;

	printf("%s\n", word);

	while (word[i] != '\0') {
		printf("%c", word[i++]);
	}
	printf("\n");
	return 0;
}
