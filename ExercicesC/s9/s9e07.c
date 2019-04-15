#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(char *word);
void modify(char *word);

int main() {

	char word[20];
	char answer = 'y';
	char buffer;

	printf("Enter a word:\t");
	fflush(stdout);
	scanf("%s", word);
	scanf("%c", &buffer);

	printf("Do you want to change the word ? (Y/n)\n" \
	       "Currently, it's: ");
	display(word);
	scanf("%c", &answer);
	scanf("%c", &buffer);

	if (answer == 'y' || answer == 'Y') {
		modify(word);
	}
	display(word);

	return 0;
}

void display(char *word) {
	while (*word != '\0') {
		printf("%c", *word++);
	}
	printf("\n");
}

void modify(char *word) {
	printf("Enter a new word:\t");
	fflush(stdout);
	scanf("%s", word);
}
