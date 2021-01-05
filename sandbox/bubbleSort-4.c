#include "sorting_boilerplate.h"

void bubbleSort(int * arr);

int main() {
	int * arr = generateList();

	printf("Unsorted List: ");
	printList(arr);

	bubbleSort(arr);

	printf("Sorted List: ");
	printList(arr);
	
	free(arr);
	return 0;
}


void bubbleSort(int * arr) {
	for (int i = 0; i < N-1; i++) {
		int swapped = 0;

		for (int j = 0; j < N - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr, j, j+1);
				swapped = 1;
			}

		}

		if (!swapped) break;
	}
}
