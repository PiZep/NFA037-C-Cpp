#include <stdio.h>

struct Date {
	int month;
	int day;
	int year;
};

int main() {
	struct Date date1; 

	printf("Enter a date (MM DD YYYY):\t");
	fflush(stdout);

	scanf("%d%d%d", &date1.month, &date1.day, &date1.year);
	printf("The date is:\t%d/%d/%d\n",date1.month, date1.day, date1.year);
}
