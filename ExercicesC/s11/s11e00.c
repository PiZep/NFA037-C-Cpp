#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "s11e00.h"


int main() {
	Node *list;
	Node *first = malloc(sizeof(*first));
	int i;

	first = NULL;

	insertNode(&list, 0, 0);
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

int insertNode(Node **list, int index, int value2) {
	Node *current = *list;
	Node *prev;
	Node *new = malloc(sizeof(*new));
	int pos = 0;

	if (index == 0) {
		new->value = value2;
		new->next = *list;
		*list = new;
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

	new->value = value2;
	new->next = current;
	prev->next = new;
	return EXIT_SUCCESS;
}

int appendNode(Node **list, int value){
	Node *current = *list;
	Node *new = malloc(sizeof(*new));

	while(current->next != NULL) {
		current = current->next;
	}
	current->next = new;
	new->value = value;
	return EXIT_SUCCESS;
}

Node *delNode(Node *list, int index) {
	Node *current = list;
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

void displayList(Node *list) {

	Node *current = list;

	while (current != NULL) {
		printf("%d->", current->value);
		current = current->next;
	}
	printf("NULL");
}
