#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "s11e00.h"


int main() {
	LinkedList *list;
	Node *first = malloc(sizeof(Node));
	first = NULL;

	list->head = first;
	list->count = 0;

	push(list, 2);
	printf("Count: %d\n", list->count);
	insertNode(list, 0, 0);
	printf("Count: %d\n", list->count);
	insertNode(list, 1, 1);
	printf("Count: %d\n", list->count);
	insertNode(list, 1, 5);
	printf("Count: %d\n", list->count);
	displayList(list);
	/* appendNode(list, 4); */
	/* displayList(list); */
	/* for (i = 0; i < 4; i++) { */ 
	/* 	insertNode(list, i, 4 - i); */
	/* 	displayList(list); */
	/* } */


	/* printf("Choose an action:\n\ta -> add a node,\n\td -> delete a node" */
	/* 	   "\n\ts -> display the list"); */
}

int push(LinkedList *list, int newval){
	Node *new, *head;

	new = malloc(sizeof(Node));
	head = list->head;

	new->value = newval;
	new->next = head;
	list->head = new;
	++list->count;
	return EXIT_SUCCESS;
}

int insertNode(LinkedList *list, int index, int newval) {
	Node *current = list->head;
	Node  *head = list->head;
	Node *prev;
	Node *new;

	int pos = 0;
	new = malloc(sizeof(Node));

	if (index == 0) {
		new->value = newval;
		new->next = head;
		list->head = new;
		++list->count;
		return EXIT_SUCCESS;
	}

	while(pos < index) {

		if (current->next == NULL) {
			return EXIT_FAILURE;
		}

		prev = current;
		current = current->next;
		pos++;
	}

	new->value = newval;
	new->next = current;
	prev->next = new;
	++list->count;
	return EXIT_SUCCESS;
}

int appendNode(LinkedList *list, int value){
	Node *current = list->head;
	Node *new = malloc(sizeof(*new));

	while(current->next != NULL) {
		current = current->next;
	}
	current->next = new;
	new->value = value;
	return EXIT_SUCCESS;
}

Node *delNode(LinkedList *list, int index) {
	Node *current = list->head;
	int pos = 0;
	while (pos < index) {
		if (current->next == NULL) {
			return NULL;
		}
		current = current->next;
		pos++;
	}

	return current;
}

int listCount(Node *list) {
	int count = 0;

	while(list->next != NULL) {
		count++;
	}
	return count;
}

void displayList(LinkedList *list) {

	Node *current = list->head;

	while (current != NULL) {
		printf("%d->", current->value);
		current = current->next;
	}
	printf("NULL\n");
}
