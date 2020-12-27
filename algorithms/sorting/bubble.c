/* Bubble Sort



	Big O Notation:
		Best: O(n) (With some optimizations)
		Average: O(n^2)
		Worst: O(n^2)
*/

// Included libraries
#include <stdio.h>
#include <stdlib.h>

// Pre-processor directives
#define N 1000000

// Function declarations
int * generateList();
void swap(int * arr, int a, int b);
void printList(int * arr);
void bubbleSort(int * arr);

// Main function
int main() {

	int * arr = generateList();

	printf("Unsorted list: ");
	printList(arr);

	bubbleSort(arr);

	printf("Sorted list: ");
	printList(arr);

	free(arr);
	return 0;
}

// Function definitions
int * generateList() {
	int * ret = malloc(N * sizeof(int));

	for (int i = 0; i < N; i++) {
		ret[i] = i;
	}

	for (int i = N - 1; i >= 0; i--) {
		int index = (rand() % (i + 1));
		swap(ret, index, i);
	}

	return ret;

}

void swap(int * arr, int a, int b) {
	if (a == b) return;

	arr[a] ^= arr[b];
	arr[b] ^= arr[a];
	arr[a] ^= arr[b];

}

void printList(int * arr) {
	for (int i = 0; i < N; i++) {
		if (i == N-1) printf("%d.\n", arr[i]);
		else printf("%d, ", arr[i]);
	}
}


void bubbleSort(int * arr) {
	for (int i = 0; i < N - 1; i++) {
		int swapped = 0;

		for (int j = 0; j < N - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
			swap(arr, j, j + 1);
			swapped = 1; // This is an optimization

			}
		}

		if (!swapped) break; // To give this algorithm a best case of O(n)
	}

}


