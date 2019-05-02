#include <stdio.h>
int lookfor(char *str, char *substr); int identical(char *str, char *substr);
int strlen2(char *str);

int main() {
	char str[200];
	char substr[200];
	int ind;
	char buffer;

	printf("Enter a string:\t");
	scanf("%s", str);
	/* scanf("%c", &buffer); */
	printf("Enter a string you want to look for into the first one:\t");
	scanf("%s", substr);

	ind = lookfor(str, substr);
	if (ind) {
		printf("The substring \"%s\" is located at range %d in \"%s\".\n",
		       substr, ind, str);
	} else {
		printf("No substring \"%s\" found in string \"%s\".\n", substr, str);
	}
	return 0;
}

int lookfor(char *str, char *substr) {
	int pos = 0;
	char *newstr = str;
	int minlen = strlen2(substr);

	while (strlen2(newstr) >= minlen) {
		pos++;
		if (identical(newstr, substr)) { 
			return pos;
		}
		*newstr++;
	}
	return 0;
}

int identical(char *str, char *substr) {
	while (*str++ == *substr++) {
		if (*substr == '\0') return 1;
	}
	return 0;
}

int strlen2(char *str) {
	int len = 0;
	while (*str++ != '\0') {
		++len;
	}
	return len;
} 
