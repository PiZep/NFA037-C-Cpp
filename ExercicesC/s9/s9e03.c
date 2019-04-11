#include <stdio.h>
#include <string.h>

int main() {

	char word[20];

	printf("Enter a word:\t");
	fflush(stdout);
	scanf("%s", word);

	printf("There are %ld letters in the word %s.\n", strlen(word), word); 
}
