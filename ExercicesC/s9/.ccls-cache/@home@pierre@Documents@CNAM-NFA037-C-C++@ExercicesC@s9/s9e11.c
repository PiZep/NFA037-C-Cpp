#include <stdio.h>
#include <string.h>
#include <time.h>

typedef  struct {
	int month;
	int day;
	int year;
} Date;

typedef enum {
	single      = 1,
	married     = 2,
	pacsed      = 3,
	divorced    = 4
} Status;

typedef struct {
	char lastname[15];
	char firstname[15];
	Date birth;
	Status status;
} Person;

int main() {

	Person persons[4];
	int i, j;
	char status[9];
	char buffer;

	for (i = 0; i < 4; i++) {
		printf("Enter the informations concerning the person %d:\n"
			   "- Last name,\n" 
			   "- First name,\n" 
			   "- Birth date(mm dd yyyy),\n" 
			   "- Status (single (1), married (2), pasced (3), divorced (4)\n",
			   i + 1);

		scanf("%s%s%d%d%d%d", persons[i].lastname, persons[i].firstname,
			  &persons[i].birth.month, &persons[i].birth.day, &persons[i].birth.year,
			  &persons[i].status);

		scanf("%c", &buffer);
	}

	printf("Press any key to continue:\n");
	scanf("%c", &buffer);


	for (j = 0; j < 4; j++) {
		switch (persons[j].status) { 
			case single:
				strcpy(status, "single");
				break;
			case married:
				strcpy(status, "married");
				break;
			case pacsed:
				strcpy(status, "pacsed");
				break;
			case divorced:
				strcpy(status, "divorced");
				break;
			default:
				strcpy(status, "unknown");
		}
		printf("We are talking about person %d:\t%s, %s, born on %02d/%02d/%04d, %s\n",
			   j + 1, persons[j].lastname, persons[j].firstname,
			   persons[j].birth.month, persons[j].birth.day, persons[j].birth.year,
			   status);
	}
	return 0;
} 
