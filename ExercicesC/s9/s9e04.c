#include <stdio.h>
#include <string.h>

int main() {
	char word[20];
	char c, buffer;
	char *p = NULL;

	printf("Enter a word:\t");
	fflush(stdout);
	scanf("%s", word);

	printf("Choose a character to search:\t");
	fflush(stdout);
	scanf("%c", &buffer);
	scanf("%c", &c);

	p = strchr(word, c);
	p == NULL ? printf("Character not found.\n") : \
	   printf("Character found at the address %p.\n", p);

	return 0;
}
