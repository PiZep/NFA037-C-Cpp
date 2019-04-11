#include <stdio.h>

float reboundheight(float, int);

int main() {

	float initialheight;
	int num;

	printf("Enter the initial height of the ball:\t");
	fflush(stdout);
	scanf("%f", &initialheight);
	printf("Enter the number of rebounds:\t");
	fflush(stdout);
	scanf("%d", &num);

	printf("After %d rebounds, the ball's height will be about %.2f cm\n",
			num, 100 * reboundheight(initialheight, num));
	return 0;
}

float reboundheight(float height, int num) {

	return num ? reboundheight(height/2, num - 1) : height;

}
