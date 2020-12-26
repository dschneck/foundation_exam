/* AVL Tree
	An AVL tree is a BST in which the heights of the subtrees, of any given node, differ by no more than 1.
	For EVERY node in a BST, you must check the height of the left and right subtree of that node.
	If the height of those subtrees differ by no more than 1, then that BST is an AVL tree.
	Thus, an AVL tree is a balanced BST.

	Rotations:
		1. LL
		2. LR
		3. RL
		4. RR
	
	Other facts:
		1. All empty trees are also, by definition, AVL trees
		2. If T is a non-empty BST with TL and TR as its left and right subtrees, respectively, then T is an AVL tree if and only if:
			a. TL and TR are also AVL trees
			b. |hL – hR|<=1

		3. Balance factor = height of left subtree - height of right subtree
			a. Can only have BF of -1, 0, 1 at  every node.
		4. For every node in a BST, the height of the left and right subtrees can differ by no more than 1
		5. Searching this tree takes log(n) operations

*/

#include <stdio.h>
#include <stdlib.h>

#define N 10
#define BF(l,r) (l - r)


typedef struct AVLNode AVLNode;

struct AVLNode {
	int val, bf;
	AVLNode *r, *l, *p; // Right, left, parent
}

// Function declarations
AVLNode * newNode(int val);
void insertNode(AVLNode * root, int val);
void printTree(AVLNode * root); 
 
int main() {
	AVLNode * root;
	int val; // used to scan in values from the user

	printf("Insert %d numbers, one on each line:\n", N);

	for (int i = 0; i < N; i++) {
		scanf("%d", val);
		insertNode(root, val);
	}	

	return 0;
}

// Function defintions
AVLNode * newNode(int val) {
	AVlNode * ret = malloc(sizeof(AVLNode));

	ret->val = val;
	ret->r = ret->l = ret->p = NULL;

	return ret;


}

void * insertNode(AVLNode * root, int val) {



}

// Inorder print
void printTree(AVLNode * root) {
	// Base case 
	if (root == NULL) { 
		printf("\n");
		return;
	}
	
	printTree(root->l);
	printf("%d ", root->val);
	printTree(root->r);

}






























