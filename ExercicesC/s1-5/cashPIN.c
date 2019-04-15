#include <stdio.h>

int main()
{
	int pin;
	int attempt = 0;
	int cash;

	do {
		printf("Enter your PIN code:\n");
		scanf("%d", &pin);
	} while(pin != 4700 && ++attempt < 3);

	if (attempt == 3) {
		printf("I swallowed your card. Say goodbye to your money!\n");
		return 1;
	}
	
	do {
		printf("Now you may have your cash. How much? (max: 350 €)\n");
		scanf("%d", &cash);
	} while(cash > 350);

	printf("Do not forget your %d €.\n", cash);

	return 0;
}
