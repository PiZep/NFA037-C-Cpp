#include <stdio.h>

typedef struct { 
	char lastname[20];
	char firstname[20];
} Person;

int main(){
	Person person;

	printf("Enter the surname and the first name of the person:\t");
	fflush(stdout);

	scanf("%s%s",person.lastname, person.firstname);
	printf("Welcome %s %s\n", person.firstname, person.lastname);
	return 0;
}
