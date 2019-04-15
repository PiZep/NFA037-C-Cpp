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
void fillticket(Ticket *);
void mostexpensive(Ticket *tickets, int size, Ticket *theticket);

int main() {

	int i;
	Ticket tickets[3];
	Ticket expticket;

	for (i = 0; i < 3; i++) {
		printf("Enter data for ticket %d:\n", i);
		fillticket(&tickets[i]);
	}

	/* printf("Enter the hour of departure: (hh:mm, mm/dd/yyyy)\n"); */
	/* scanf("%d%d%d%d%d", */
	/*       &ticket.departure.hour, */
	/* 	  &ticket.departure.minute, */
	/* 	  &ticket.departure.month, */
	/* 	  &ticket.departure.day, */
	/*       &ticket.departure.year); */
	/* printf("Enter the hour of arrival: (hh:mm, mm/dd/yyyy)\n"); */
	/* scanf("%d%d%d%d%d", */
	/*       &ticket.arrival.hour, */
	/* 	  &ticket.arrival.minute, */
	/* 	  &ticket.arrival.month, */
	/* 	  &ticket.arrival.day, */
	/*       &ticket.arrival.year); */

	/* printf("%s ==> %s: %d min\n", ticket.depStation, */
	/*        ticket.arrStation, traveltime(ticket)); */

	mostexpensive(tickets, 3, &expticket);
	printf("The most expensive ticket is about %.2f €.\n"
	       "It is the train going to %s from %s.\n",
		   expticket.price, expticket.arrStation, expticket.depStation);
	return 0;
}

int traveltime(Ticket ticket) {
	int time = 0;

	time += ticket.arrival.minute - ticket.departure.minute;
	time += (ticket.arrival.hour - ticket.departure.hour) * 60;
	time += (ticket.arrival.day - ticket.departure.day) * 24 * 60;
	time += (ticket.arrival.month - ticket.departure.month) * 30 * 24 * 60;
	time += (ticket.arrival.year - ticket.departure.year) * 12 * 30 * 24 * 60;
	return time;
}

void fillticket(Ticket *ticket) {
	printf("Enter the city of departure: \n");
	scanf("%s", ticket->depStation);
	printf("Enter the city of arrival: \n");
	scanf("%s", ticket->arrStation);
	printf("Enter the ticket price: \n");
	scanf("%f", &ticket->price);
	return;
}

void mostexpensive(Ticket *tickets, int size, Ticket *theticket) {
	float max = 0.0;
	int i;
	for (i = 0; i < size; i++) {
		if (max < tickets[i].price) {
			max = tickets[i].price;
			*theticket = tickets[i];
			/* printf("%d)\t%p\n", i, &tickets[i]); */
		}
	}
	return;
}
