#include <stdio.h>
#include <string.h>

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

	Person person;
	char status[8];

	printf("Enter the informations conerning the person:\n"
	       "- Last name,\n" 
	       "- First name,\n" 
	       "- Birth date(mm dd yyyy),\n" 
	       "- Status (single (1), married (2), pasced (3), divorced (4)\n" 
		  );

	scanf("%s%s%d%d%d%d", person.lastname, person.firstname,
	      &person.birth.month, &person.birth.day, &person.birth.year, &person.status
	      );

	switch (person.status){ 
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
	printf("We are talking about:\t%s, %s, born on %02d/%02d/%4d, %s\n",
	       person.lastname, person.firstname,
	       person.birth.month, person.birth.day, person.birth.year, status
	       );
	return 0;
}

