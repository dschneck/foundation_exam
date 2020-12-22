/* Selection Sort
	The selection sort algorithm sorts an array by repeatedly
	finding the minimum element (considering ascending order)
	from unsorted part and putting it at the beginning.

	Algorithm: 
		Maintains two subarrays in a given array.

		1) The subarray which is already sorted.
		2) Remaining subarray which is unsorted.

	In every iteration of selection sort, the minimum element 
	(considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.

	Big O Runtime:
		Best: O(n^2)
		Average: O(n^2)
		Worst: O(n^2)

*/

// Pre-processor directives
#include <stdio.h> 
#include <stdlib.h>
#define N 20

// Function declarations
void swap(int * arr, int a , int b);
void selectionSort(int * arr);
void printList(int * arr);


// Main function
int main() {
	int arr[N];

	srand(1234);
	
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % N;
	}

	printf("Unsorted list: ");
	printList(arr);
	
	selectionSort(arr);

	printf("Sorted list: ");
	printList(arr);

	return 0;

}


// Function definitions
void swap(int * arr, int  a , int b) {

	/* Cool swap */
	if (a == b) return;

	arr[a] ^= arr[b];
	arr[b] ^= arr[a];
	arr[a] ^= arr[b];

}


void selectionSort(int * arr) {
	int min = 0;

	for (int i = 0; i < N-1; i++) {
		int min_index = i;
		for (int j = i + 1; j < N; j++) {
			if (arr[j] < arr[min_index]) {
				min_index = j;
			}
		}

		swap(arr, min_index, i);

	}

}

void printList(int * arr) {
	for (int i = 0; i < N; i++) {
		printf("%d, ", arr[i]);
	}

	printf("\n");

}


