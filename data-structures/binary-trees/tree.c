/* Binary Trees 

	A complete binary tree is one where every level (except for the last) is completely filled,
	and the nodes are as far left as possible.

	Mathematical facts about a complete binary tree:
		-> n = 2 ^ (height + 1) - 1
		-> height = log ((n+1)/2)
		-> has between 1 and 2 ^ h nodes at the last level
		-> the number of internal nodes is n/2
*/

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

// All of the following print methods are 
// examples of depth first traversals
void preorderPrint(node * root);
void inorderPrint(node * root);
void postorderPrint(node * root);

// Main method
int main() {
	node * root = newNode(1);

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

void preorderPrint(node * root) {
	// Base case 
	if (root == NULL) return;

	
	 printf("%d\n", root->val);

	// Recursive calls
	preorderPrint(root->l);
	preorderPrint(root->r);
}

void postorderPrint(node * root) {
	// Base cae
	if (root == NULL) return;

	postorderPrint(root->l);
	postorderPrint(root->r);

	printf("%d\n", root->val);
}

void inorderPrint(node * root) {
	// Base case
	if (root == NULL) return;

	inorderPrint(root->l);
	printf("%d\n", root->val);
	inorderPrint(root->r);



}









