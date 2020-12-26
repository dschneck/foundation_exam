// I was succesfully able to recreate this without looking at any extra resources!
#include "sorting_boilerplate.h"

void  selectionSort(int * arr);

int main() {
	int * arr = generateList();

	printf("Unsorted list: ");
	printList(arr);

	selectionSort(arr);
	
	printf("Sorted list: ");
	printList(arr);

	free(arr);
	return 0;

}

void  selectionSort(int * arr) {
	for (int i = 0; i < N-1; i++) {
		int minIndex = i;

		for (int j = i + 1; j < N; j++) {
			if (arr[j] < arr[minIndex]) minIndex = j;
		}

		swap(arr, i, minIndex);

	}

}


