/*
	Tries is an efficient information reTrieval data 
	structure. Using Trie, search complexities can 
	be brought to optimal limit (key length). If we 
	store keys in binary search tree, a well balanced 
	BST will need time proportional to M * log N, where 
	M is maximum string length and N is number of keys 
	in tree. Using Trie, we can search the key in O(M) 
	time. However the penalty is on Trie storage requirements.

	Every node of Trie consists of multiple branches. Each branch represents a possible character of keys.
	We need to mark the last node of every key as end of word node.

*/

// Pre-processor directives
#include <stdio.h>
#include <stdlib.h>

// Struct definitons
typedef struct Node Node;
struct Node {
	Node * children[26];
	int data;
};

// Function declarations
Node * createNode();
void addString(Node * root, char * word);
void printAll(Node * root, char * word, int index);
void freeTrie(Node * root);

// Main function
int main() {
	Node * root = createNode();

	addString(root, "david");

	// Create a buffer to store and output a word
	char buff[100 + 1];
	buff[0] = 0;

	// Print all the words in the trie using the buffer
	printAll(root, buff, 0);

	freeTrie(root);
	return 0;

}

// Function definitons
Node * createNode() {
	Node * ret = malloc(sizeof(Node));
	ret->data = 0; // might be pointless

	for (int i = 0; i < 26; i++) {
		ret->children[i] = NULL;
	}

	return ret;
}

void addString(Node * root, char * word) {
	if (root == NULL) {
		return;
	}
	if (word[0] == '\0') {
		root->data++;
		return;
	}

	// Get the index in the children array
	// using the current part of the word
	int index = word[0] - 'a';

	// Check if the node has not been created
	if (root->children[index] == NULL) {
		root->children[index] = createNode();
	}

	// Add the next character in the word
	addString(root->children[index], word + 1);

}

void printAll(Node * root, char * word, int index) {
	// Check if we reached a NULL child
	if (root == NULL) return;	

	// Loop and print a number of times wqual to the data for the given node
	// This wouldn't be call if data is 0 (like it is for most nodes)
	for (int i = 0; i < (root->data); i++) {
		// Print the word we built 
		printf("%s\n", word);
	}

	for (int i = 0; i < 26; i++) {
		// Find the current letter
		char edgeLetter = (char) (i+ 'a');

		// Update the buffer and terminate it
		word[index] = edgeLetter;
		word[index+1] = '\0';

		// Print all the words in the child with the updated buffer and index
		printAll(root->children[i], word, index + 1);

	}
}

void freeTrie(Node * root) {
	for (int i = 0; i < 26; i++) {
		if (root->children[i] != NULL)
			freeTrie(root->children[i]);
	}

	free(root);
}






















