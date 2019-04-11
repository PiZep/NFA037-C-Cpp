#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int nthevennum(int);
char *numsuf(int);

int main() {
	int nth;

	printf("Enter an integer:\t");
	fflush(stdout);
	scanf("%d", &nth);

	printf("The %d%s even number is:\t%d\n", nth, numsuf(nth), nthevennum(nth));

	return 0;
}

int nthevennum(int num) {
	return num == 1 ? 0 : nthevennum(num - 1) + 2;
}

char *numsuf(int size) {
	char *suf = malloc(sizeof(char) * 4);
	switch (size) {
	case 1:
		strncpy(suf, "rst", 4);
		break;
	case 2:
		strncpy(suf, "nd", 4);
		break;
	case 3:
		strncpy(suf, "rd", 4);
	default: 
		strncpy(suf, "th", 4);
	}
	return suf;
}
