#include <stdio.h>
#include <time.h>
#include <string.h>

typedef struct tm instant;

instant getnow(void);

int main(int argc, char *argv[]) {

	FILE *file = NULL;
	char currenttime[30];
	instant now;
	if (argc > 1) {
		file = fopen(argv[1], "a+");
	} else {
		fprintf(stderr, "No file provided.");
		return 1;
	}

	now = getnow();
	strftime(currenttime, 30, "%c", &now);
	fprintf(file, "%s\n", currenttime);
	fclose(file);
	return 0;
}

instant getnow() {
	time_t seconds = time(&seconds);
	return *localtime(&seconds);
}
