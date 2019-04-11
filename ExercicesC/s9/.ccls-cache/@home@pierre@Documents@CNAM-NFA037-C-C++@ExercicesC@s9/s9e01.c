#include <stdio.h>

int main() {
	char symbole;

	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &symbole);

	printf("You entered %c, of ASCII code %d.\n", symbole, symbole);
	return 0;
}
