#include <stdio.h>

#define FIRST_LOWCASE   97
#define FIRST_UPPERCASE 65
#define LETTER_NUM      26

void encrypt(char *);

int main() {
	char word[30];
	printf("Enter a word to encrypt:\t");
	scanf("%s", word);

	encrypt(word);
	printf("The encrypted word is:\t%s\n", word);

	return 0;
}

void encrypt(char *word) {

	char *c = word; /* Pointer to first char in word[] */

	while (*c != '\0') {
		if (*c >= FIRST_LOWCASE) {
			*c = *c + 1 >= FIRST_LOWCASE + LETTER_NUM ? FIRST_LOWCASE : *c + 1;
		} else {
			*c = *c + 1 >= FIRST_UPPERCASE + LETTER_NUM ? FIRST_UPPERCASE : *c + 1; 
		}
		c++;
	}
	return;
}
