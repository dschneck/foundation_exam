/* Insertion Sort 
		Insertion sort is a simple sorting algorithm that works similar to the way
		you sort playing cards in your hands. The array is virtually split into 
		a sorted and an unsorted part. Values from the unsorted part are picked 
		and placed at the correct position in the sorted part.
   Algorithm:
   		To sort an array of size n in ascending order:
			1. Iterate from ar[1] to arr[n]
			2. Compare the current element (key) to the previous element
			3. If the key element is smaller than the previous element, compare
			it to the elements before. Move the greater elements one position up
			to make space for the swapped element.

	Big O Runtime:
		Best: O(n)
		Average: O(n^2)
		Worst: O(n^2)

*/

// Pre-processor directives
#include <stdio.h> 
#include <stdlib.h>

#define N 30

// Struct definitons/declarations

// Function declarations
void printList(int * arr);
void insertionSort(int * arr);

// Main function
int main() {
	int nums[N];
	srand(1234);

	for (int i = 0; i < N; i++) {
		nums[i] = rand() % 20;
	}

	printf("Unsorted List: ");
	printList(nums);

	insertionSort(nums);

	printf("Sorted list: ");
	printList(nums);
		
	return 0;

}


// Function definitons

void printList(int * arr) {

	for (int i = 0 ; i < N; i++) {
		printf("%d, ", arr[i]);
	}
	
	printf("\n");

	return;
}


void insertionSort(int * arr) {
	for (int i = 1; i < N; i++) {
		for (int j = i; j > 0; j--) {
			
			if (arr[j] < arr[j - 1]) {
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}

			else break;
		}
	}
}



