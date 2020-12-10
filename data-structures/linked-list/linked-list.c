// Pre-processor directives
#include <stdio.h>
#include <stdlib.h>

// Struct definitions
typedef struct Node Node;

struct Node {
	Node * next;
	int data;
};

// Function prototypes
void printList(Node * head);
Node * newNode(int data);
Node * addToBack(Node * head, int data);
Node * addToFront(Node * head, int data);
void freeList(Node * head);

// Main method
int main() {
	Node * head = NULL;

	for (int i = 0; i < 10; i++) {
		if (i & 1) {
			head = addToBack(head, i);
		}
		else {
			head = addToFront(head, i);
		}

		printList(head);
	}
	
	freeList(head);
	return 0;

}

// Function definitons
void printList(Node * head) {

	// Base case
	if (head ==  NULL) {
		printf("NULL\n");
		return;
	}

	printf("%d-> ", head->data);

	printList(head->next);
}

Node * newNode(int data) {
	Node * ret;

	ret = calloc(1, sizeof(Node));

	ret->data = data;
	ret->next = NULL;

	return ret;
}

Node * addToBack(Node * head, int data) {
	if (head == NULL) {
		head = newNode(data);
		return head;
	}

	head->next = addToBack(head->next, data);

	return head;
}

Node * addToFront(Node * head, int data) {
	Node * newHead = newNode(data);

	newHead->next = head;

	return newHead;
}

void freeList(Node * head) {
	if (head == NULL) {
		printf("NULL\n");
		return;
	}

	Node * tmp = head;
	
	printList(tmp);
	freeList(tmp->next);
	free(tmp);

	return;
}

