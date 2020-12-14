#include <stdio.h>
#include <stdlib.h>

void insertionSort(int * arr, int n);
int main() {
	int n = 10;
	srand(1234);
	int arr[n];

	printf("Unsorted List:\n");

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10;
		printf("%d , ", arr[i]);

	}


	insertionSort(arr, n);

	printf("Sorted List:\n");
	for (int i = 0; i < n; i++) printf("%d , ", arr[i]);

	


	return 0;
}



void insertionSort(int * arr, int n) {

	for (int i = 0; i < n; i++) {
		for (int j = i; j > 0; j--) {
			if (arr[j] < arr[j-1]) {
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}

			else break;


	    }


		}

}
