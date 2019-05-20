#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
typedef struct LinkedList LinkedList;

struct Node {
	int value;
	Node *next;
};

struct LinkedList {
	int count;
	Node *head;
};

int push(LinkedList *, int);
int insertNode(LinkedList *, int index, int value);
int appendNode(LinkedList *, int value);
Node *delNode(LinkedList *, int index);
void delList(LinkedList *);
int listCount(Node *list);
void displayList(LinkedList *);
void displayNode(LinkedList *, int index);
