#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void printList(int * arr, int size);
void mergeSort(int * arr, int left, int right);
void merge(int * arr, int left, int middle, int right);

int main() {
	int * arr = malloc(N * sizeof(int));
	srand(time(0));

	for (int i = 0; i < N; i++) {
		arr[i] = rand() % N;
	}

	printList(arr, N);

	mergeSort(arr, 0, N-1);

	printList(arr, N);

	free(arr);
	return 0;
}

void printList(int * arr, int size) {
	for (int i = 0; i < size; i++) {
		if (i < size - 1) printf("%d, ", arr[i]);
		else printf("%d.\n", arr[i]);
	}
}

void mergeSort(int * arr, int left, int right) {
	if (left < right) {
		int middle = (left + right - 1) / 2;

		mergeSort(arr, left, middle);
		mergeSort(arr, middle + 1, right);

		merge(arr, left, middle, right);
	}
}

void merge(int * arr, int left, int middle, int right) {
	// Create the temp arrays	
	int size1 = middle - left + 1;	
	int size2 = right - middle;

	int L[size1], R[size2];

	for (int i = 0; i < size1; i++) L[i] = arr[i + left];

	for (int i = 0; i < size2; i++) R[i] = arr[i + middle + 1];

	int ptr = left, rptr = 0, lptr = 0;

	while (lptr < size1 && rptr < size2) {
		if (L[lptr] < R[rptr]) {
			arr[ptr] = L[lptr];
			lptr++;
		}

		else {
			arr[ptr] = R[rptr];
			rptr++;
		}

		ptr++;
	}

	while (lptr < size1) {
		arr[ptr] = L[lptr];
		ptr++;
		lptr++;
	}

	while (rptr < size2) {
		arr[ptr] = R[rptr];
		ptr++;
		rptr++;
	}

}



