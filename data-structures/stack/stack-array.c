/*
	This is a stack implemented with an array.

	Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out)

*/

// Pre-processor directives
#include <stdio.h>

#define TRUE 1
#define FALSE 0

// Global variables
int stack[100];
int myIndex;

// Function delcarations
void push(int val);
int pop();
int top();
int isEmpty();
void clearStack();

int main() {
	myIndex = -1;
	push(1);
	push(2);
	printf("The current top is %d\n",top());
	push(34);
	
	clearStack();
	return 0;
}


// Function definitons 

void push(int val) {	
	stack[++myIndex] = val;
}

int pop() {
	if (isEmpty()) {
		printf("\nThe stack is empty\n");
		return 0;
	}

	return stack[myIndex--];

}

int top() {
	if (isEmpty()) {
		printf("\nThe stack is empty\n");
		return 0;
	}
	return stack[myIndex];

}

int isEmpty() {
	return myIndex == -1 ? TRUE : FALSE;
}

void clearStack() {
	while (myIndex != -1) {
		printf("%d\n", stack[myIndex]);
		myIndex--;
	}
}
