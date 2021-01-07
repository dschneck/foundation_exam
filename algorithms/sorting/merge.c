/* Merge Sort
	Merge sort is a Divide and Conquer algorithm that
	divides the input array into two halves, calls itself for 
	the two halves, and then merges the two sorted halves.

	Algorithm:
		If r > 1
			1. Find the middle point to divide the array into two two halves:
			2. Call mergeSort for the first half
			3. Call mergeSort for the second half
			4. Merge the two halves sorted in step 2 and 3.

	Big O Runtime: 
		Best: O(nlog(n))
		Average: O(nlog(n))
		Worst: O(nlog(n))

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

// Function declarations
void printList(int * arr, int size);
void mergeSort(int * arr, int l, int r);
void merge(int * arr, int l, int m, int r);

// Main function
int main() {
	int arr[N];

	srand(time(0));

	for (int i = 0; i < N; i++) {
		arr[i] = rand() % N;
	}

	printf("Unsorted list: ");
	printList(arr, N);

	mergeSort(arr, 0, N-1);

	printf("\nSorted list: ");
	printList(arr, N);

	return 0;
}

// Function definitions
void printList(int * arr, int size) {
	for (int i = 0; i < size; i++) {
		if (i < size - 1) printf("%d, ", arr[i]);
		else printf("%d.\n", arr[i]);
	}
}

void mergeSort(int * arr, int l, int r) {
//	printf("Got to mergeSort with l = %d and r = %d", l, r);

	if (l < r) {
		int m = (l + r - 1) / 2; 

		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);

		merge(arr, l, m, r);
	}
}

// Merges two subarrays of arr[]
// First subarray is arr[l...m]
// Second subarray is arr[m+1...r]
void merge(int * arr, int l, int m, int r) {
//	printf("Got to merge with l = %d, m = %d, and r = %d", l, m, r);
	int n1 = m - l + 1;
	int n2 = r - m;

	/*create temp arrays */
	int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (int i = 0; i < n1; i++) 
		L[i] = arr[l + i];
//	printList(L, n1);
	
	for (int i = 0; i < n2; i++)
		R[i] = arr[m + 1 + i];
//	printList(R, n2);

	/* Merge the temp arrays back into arr[l...r] */
	int i = 0; // Initialize index of first subarray
	int j = 0; // Initialize index of second subarray
	int k = l; // Initialize index of merged subarray
//	printf("Copied the temp arrays\n");
	
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}

		else {
			arr[k] = R[j];
			j++;
		}
	
		k++;

	}

	/* Only one of the following while loops will go
	 because to break the previous while loop, either
	 j or i has grown too large*/ 

	/* Copy the remaining elements of L[], if there are any */
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there are any */
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}













