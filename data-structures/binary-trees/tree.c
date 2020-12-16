/* This is a binary tree */

// Pre-processor directives and libraries
#include <stdio.h>
#include <stdlib.h>

// Struct definitions
typedef struct node node;

struct node {
	int val;
	node * l, * r;
};

// Function declaration
node * newNode(int val);
void printTree(node * root);

// Main method
int main() {
	node * root;

	return 0;
}

// Function definitions

node * newNode(int val) {
	node * ret = malloc(sizeof(node));

	ret->l = NULL;
	ret->r = NULL;

	ret->val = val;

	return ret;


}

void printTree(node * root) {

}
