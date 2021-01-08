#include "sorting_boilerplate.h"

void mergeSort(int * arr, int l, int r);
void merge(int * arr, int l, int m, int r);

int main() {
	int * arr = generateList();
	
	printf("Unsorted list: ");
	printList(arr);

	mergeSort(arr, 0, N-1);

	printf("Sorted list: ");
	printList(arr);

	free(arr);

	return 0;
}

void mergeSort(int * arr, int l, int r) {
	if (l < r) {
		int m = (r + l - 1)/2;

		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);

		merge(arr, l, m, r);
	}
}

void merge(int * arr, int l, int m, int r) {
	int s1 = m - l + 1;
	int s2 = r - m;

	int L[s1], R[s2];

	for (int i = 0; i < s1; i++) {
		L[i] = arr[l + i];
	}

	for (int i = 0; i < s2; i++) {
		R[i] = arr[m + 1 + i];
	}

	int lptr = 0, rptr = 0, mptr = l;

	while (lptr < s1 && rptr < s2) {
		if (L[lptr] <=  R[rptr]) {
			arr[mptr] = L[lptr];
			lptr++;
		}

		else {
			arr[mptr] = R[rptr];
			rptr++;
		}

		mptr++;

	}

	while (lptr < s1) {
		arr[mptr] = L[lptr];
		lptr++;
		mptr++;
	}

	while (rptr < s2) {
		arr[mptr] = R[rptr];
		rptr++;
		mptr++;
	}
}
