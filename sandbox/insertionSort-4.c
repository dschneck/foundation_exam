#include "sorting_boilerplate.h"

void insertionSort(int * arr);

int main() {
	int * arr = generateList();

	printf("Unsorted list: ");
	printList(arr);

	insertionSort(arr);

	printf("Sorted list: ");
	printList(arr);

	free(arr);
	return 0;

}

void insertionSort(int * arr) {
	for (int i = 1; i < N; i++) {
		for (int j = i; j > 0; j--) {
			if (arr[j] < arr[j-1]) swap(arr, j, j-1);
			else break;
		}
	}
}
