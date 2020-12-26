#include "sorting_boilerplate.h"

void swap(int * arr, int a, int b) {
	if (a == b) return;

	arr[a] ^= arr[b];
	arr[b] ^= arr[a];
	arr[a] ^= arr[b];

}


void printList(int * arr) {
	for (int i = 0; i < N; i++) {
		if (i == N-1) printf("%d.", arr[i]);
		else printf("%d, ", arr[i]);
	}

	printf("\n\n");
}

int * generateList() {
    // Allocate memory
    int * ret = calloc(N, sizeof(int));
 
    // Initialize with the identity permutation
    for (int j = 0; j < N; j++)
    {
       ret[j] = j;
    }
 
    // Move a random unselected element into place
    for (int j = N - 1; j >= 0; j--)
    {
       int index = (rand() % (j + 1));
       swap(ret, index, j);
    }
 
    // Return the array created
    return ret;
}
