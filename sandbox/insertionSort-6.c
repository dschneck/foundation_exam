#include "sorting_boilerplate.h"

void insertion(int * arr);

int main() {
	int * arr = generateList();
		
	printf("Unsorted list: ");
	printList(arr);

	insertion(arr);

	printf("Sorted list: ");
	printList(arr);

	free(arr);
	return 0;
}

void insertion(int * arr) {
	for (int i = 1; i < N; i++) {
		for (int j = i; j > 0 ; j--) {
			if (arr[j] < arr[j-1]) swap(arr, j-1, j);
			else break;

		}

	}
}

