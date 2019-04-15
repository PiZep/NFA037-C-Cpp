#include <stdio.h>

int main() {
	char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};
	int ans;

	printf("Choose a vowel to display (between 0 and 5):\n");
	scanf("%d", &ans);
	printf("%c\n", vowels[ans]);
	return 0;
}
