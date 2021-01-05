#include <stdio.h>
#define N 23

int naive(int n);
int kernighans(int n);

int main() {
	printf("(Naive) The number of set bits in %d is %d.\n", N, naive(N));
	printf("(Kernighans) The number of set bits in %d is %d.\n", N, kernighans(N));

	return 0;
}

// Naive algorithm for counting set bits
int naive(int n) {
	int count = 0;

	for (; n; n >>= 1) {
        count += (n & 1);
		printf("	Count is %d ", count);	
		printf("n is %d\n", n);
	}
	
	return count;
}

/*
Subtracting 1 from a decimal number flips all the bits after the rightmost set bit(which is 1) including the rightmost set bit.
for example:

	10 in binary is 0000 1010
	9 in binary is	0000 1001
	8 in binary is	0000 1000
	7 in binary is 	0000 0111
*/

int kernighans(int n) {
	int count = 0; // Stores the total number of set bits in n

	for (; n; count++) {
		printf("	Count is %d ", count);	
		n = n & (n - 1); // clear the least significant bit	
		printf("n is %d\n", n);
	}
	return count;
}

