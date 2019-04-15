#include <stdio.h>

int vovels(char *);

int main() {
	char str[30];

	printf("Enter a word from which you want to count vovels of:\n");
	/* fflush(stdout); */
	scanf("%s", str);

	printf("The word %s contains %d vovels.\n", str, vovels(str));
	return 0;
}

int vovels(char *word) {
	int nb = 0;
	char *c = word;

	printf("%s\t%c\n", word, *c);
	while (*c != '\0') {
		if (*c == 'a' || *c == 'e' || *c == 'i' || *c == 'o' || *c == 'u' || *c == 'y') {
			nb++;
		}
		c++;
	}
	return nb;
}
