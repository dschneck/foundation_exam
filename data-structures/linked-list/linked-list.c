/* This is a standard, singly linked list */
// Pre-processor directives
#include <stdio.h> 
#include <stdlib.h>

// Struct definitons
typedef struct node node;

struct node {
	int val;
	node * next;
};

// Prototypes
void insertNodeFront(node * head, int val);
void insertNodeBack(node * head, int val);
void deleteNode(node * node);
void deleteList(node * head);

//findNode()
//countNodes()
//editNode()

void printList(node * head);


// Main function
int main() {
	node * head;
	insertNodeFront(head, 20);

	deleteList(head);

	return 0;
}


// Function definitons
void insertNodeFront(node * head, int val) {
	node * newNode = malloc(sizeof(node));
	
	if (head == NULL) {
		head = newNode;
		head->next = NULL;
		head->val = val;
		return;
	}

	newNode->next = head;
	newNode->val = val;

	head->next = NULL;
	
}

void insertNodeBack(node * head, int val) {	
	node * newNode = malloc(sizeof(node));

	if (head == NULL) {
		head = newNode;
		head->next = NULL;
		head->val = val;
		return;
	}

	if (head->next == NULL) {
		head->next = newNode;
		newNode->val = val;
		newNode->next = NULL;
		return;
	}

	node * tmp = head;

	while(tmp->next != NULL) {
		tmp = tmp->next;	
	}	

	tmp->next = newNode;
	newNode->next = NULL;
	newNode->val = val;
}


 
void deleteList(node * head) {
	node * tmp = head;
	
	while (tmp->next != NULL) {
		tmp = tmp->next;
		free(head);
		head = tmp;
	}

	free(tmp);

}











