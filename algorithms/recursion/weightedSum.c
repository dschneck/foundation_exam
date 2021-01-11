// I think summations that are represented through recursive 
// functions are added from the top bound to the bottom, unless
// the both the upperbound and lowerbound are taken as parameters
#include <stdio.h>

int weightedSum(int * numbers, int n);

int main() {
	int numbers[3] = {7, 5, 8};
	
	printf("%d\n", weightedSum(numbers, 3));

	return 0;
}

// Weighted sum of an intenger array a[0], a[1], a[2], ... a[n-1]
// to be the summation from i = 1 to n of ia[i-1]
int weightedSum(int * numbers, int n) {
	if (n == 0) return 0;	

	return n * numbers[n-1] + weightedSum(numbers, n-1); 
}
