#include "sorting_boilerplate.h"

int main() {
	int * arr = generateList();

	printf("Unsorted List: ");
	printList(arr);
	
	free(arr);

	return 0;
}
