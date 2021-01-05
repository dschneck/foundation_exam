/* Hash Tables
	A hash table uses a hash function to populate an
	array in a uniform and random way. A value is inputed into the function
	and it returns a index in the array.

	A full hash table is one that only has one empty index

	Collision resolution policy - the method used to deal with the same 
	index given to different input values. 
	Examples:
		- Linear probing: checking contiguous indexes to find an empty one
		- Quadratic probing: checking indexes with squares (1, 4, 9, 16, ...) to find an empty one
		- Double hasing: use to different hashing functions


*/

// Pre-processor directives
#include <stdio.h>
#include <stdlib.h>

#define N 10 // Size of array
#define HASH(x) (x % N) // Hash function

#define LINEAR_PROBING
//#define QUAD_PROBING
//#define DOUB_HASH

// Function delcarations
void printTable(int * arr, int size);
void insert(int val, int * arr);

int main() {
	int * table = calloc(N, sizeof(int));
	int tmp;

	printf("This will take in %d values (only positive integers).\n", N);
	for (int i = 0; i < N-1; i++) {
		printf("Input value: ");
		scanf("%d", &tmp);
		
		insert(tmp, table);

		printf("\n");
		printTable(table, N);
	}

	printTable(table, N);

	free(table);
	return 0;
}

// Function definitons
void printTable(int * arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("|%d| ", arr[i]);
	}

	printf("\n");
}

void insert(int val, int * arr) {
	int hash = HASH(val), i = 0;
	
	while (1) {
		if (arr[hash] != 0) { // Collision detected
#ifdef LINEAR_PROBING
			if (hash + i > N - 1 || hash == N - 1) {
				i = 0 - HASH(val);
				hash = HASH(val) + i;	
			}

			else {
				i++;
				hash = HASH(val) + i;	
			}

			printf("Hash is: %d. i is : %d\n", hash, i);
#endif

		}

		else {
			arr[hash] = val;
			break;

		}

		printf("Got here dawg ");
		printf("Hash is: %d. i is : %d\n", hash, i);
	}
}







