/*Sadly was not able to get this fully working without
checking the old one. However, the mistake was effectively a typo,
not a misunderstanding */

#include "sorting_boilerplate.h"


void selectionSort(int * arr);

int main() {
	int * arr = generateList();

	printf("Unsorted list: ");
	printList(arr);

	selectionSort(arr);
	
	printf("Sorted list: ");
	printList(arr);

	return 0;
}

void selectionSort(int * arr) {
	for (int i = 0; i < N-1; i++) {
		int minIndex = i;

		for (int j = i + 1; j < N; j++) {
			if (arr[j] < arr[minIndex]) minIndex = j;

		}

		swap(arr, minIndex, i);

	}

}


