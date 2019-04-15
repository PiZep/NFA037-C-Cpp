#include <stdio.h>

enum Boolean {
	false = 0,
	true = 1
};

enum Boolean bol = true;

int main() {
	if (bol) {
		printf("bol value: %d", bol);
	}
	return 0;
}
