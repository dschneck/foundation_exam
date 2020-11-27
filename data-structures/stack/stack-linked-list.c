// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

// Struct definitons

typedef struct Node Node;

struct Node {
	int val;
	Node * next;
};

// Function prototypes
Node * newNode(int val);
Node * addToFront(Node * head, int val);
void push(Node * head, int val) ;// Stack function

void freeNode(Node * head);
void pop(Node * head); // Stack function

void top(Node * head); // Stack function

void freeList(Node * head);

// Main method
int main() {
	Node * stack;

	for (int i = 0; i < 20; i++) {
		push(stack, i);
		
		if (i & 1) {
			top(stack);
		}
	}
	
	top(stack);

	pop(stack);

	top(stack);


	freeList(stack);

	return 0;
}

// Function definitions
Node * newNode(int val) {
	Node * ret = malloc(sizeof(Node));

	ret->next = NULL;
	ret->val = val;

	return ret;
}


Node * addToFront(Node * head, int val) {
	Node * newHead = newNode(val);

	newHead->next = head;

	return newHead;

}

void push(Node * head, int val) {
	addToFront(head, val);

}

void freeNode(Node * head) {
	if (head == NULL) {
		printf("Node was NULL\n");
		return;
	}

	free(head);
}



void pop(Node * head) {
	if (head->next == NULL) {
		freeNode(head);
		return;
	}

	Node * tmp = head->next;
	free(head);

	head = tmp;
}

void top(Node * head) {
	if (head == NULL) {
		printf("NULL\n");
		return;
	}

	printf("%d\n", head->val);
}

void freeList(Node * head) {
	Node * tmp = head;

	while (tmp->next != NULL) {
		tmp = tmp->next;
		free(head);
		head = tmp;
	}

	free(tmp);
}












