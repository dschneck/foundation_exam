#include <stdio.h>
#include <stdlib.h>

#define N 10

void printList(int * arr, int size);
void mergeSort(int * arr, int left, int right);
void merge(int * arr, int left, middle, right);

int main() {


	return 0;
}


void mergeSort(int * arr, int left, int right) {
	if (left < right) {
		int middle = (left + right -1) / 2;

		mergeSort(arr, left, middle);
		mergeSort(arr, middle + 1, right);

		merge(arr, left, middle, right);
	}
}

void merge(int * arr, int left, middle, right) {
	





}
