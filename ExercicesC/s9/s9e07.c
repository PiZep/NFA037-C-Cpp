#include <stdio.h>

typedef struct {
	int minute;
	int hour;
	int day;
	int month;
	int year;
} Date;

typedef struct {
	int number;
	float price;
	int train; 
	int wagon;
	int seat;
	char arrStation[20];
	char depStation[20];
	Date departure;
	Date arrival;
} Ticket;


int traveltime(Ticket ticket);

int main() {

	Ticket ticket;
	char buffer;

	printf("Enter the city of departure: \n");
	scanf("%s", ticket.depStation);
	scanf("%c", &buffer);
	printf("Enter the city of arrival: \n");
	scanf("%s", ticket.arrStation);
	scanf("%c", &buffer);
	printf("Enter the hour of departure: (mm:hh, mm/dd/yyyy)\n");
	scanf("%d%d%d%d%d",
	      &ticket.departure.hour,
		  &ticket.departure.minute,
		  &ticket.departure.month,
		  &ticket.departure.day,
	      &ticket.departure.year);
	scanf("%c", &buffer);
	printf("Enter the hour of arrival: (mm:hh, mm/dd/yyyy)\n");
	scanf("%d%d%d%d%d",
	      &ticket.arrival.hour,
		  &ticket.arrival.minute,
		  &ticket.arrival.month,
		  &ticket.arrival.day,
	      &ticket.arrival.year);
	scanf("%c", &buffer);

	printf("%d min\n", traveltime(ticket));

	return 0;
}

int traveltime(Ticket ticket) {
	int time = 0;

	time += ticket.arrival.minute - ticket.departure.minute;
	time += (ticket.arrival.hour - ticket.departure.hour) * 60;
	time += (ticket.arrival.day - ticket.departure.day) * 24 * 60;
	time += (ticket.arrival.month - ticket.departure.month) * 30 * 24 * 60;
	time += (ticket.arrival.minute - ticket.departure.minute) * 12 * 30 * 24 * 60;
	return time;
}
