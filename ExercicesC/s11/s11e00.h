#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
	int value;
	Node *next;
};

int insertNode(Node **list, int index, int value);
int appendNode(Node **list, int value);
Node *delNode(Node *list, int index);
void delList(Node *list);
int listCount(Node *list);
void displayList(Node *list);
void displayNode(Node *list, int index);
