#include <stdio.h>

int fact(int n);

int main() {

	printf("5 factorial is %d\n", fact(5));
	printf("4 factorial is %d\n", fact(4));
	printf("3 factorial is %d\n", fact(3));
	printf("2 factorial is %d\n", fact(2));
	printf("1 factorial is %d\n", fact(1));
	printf("0 factorial is %d\n", fact(0));

	return 0;

}

int fact(int n) {
	if (!n) return 1; // Base case	

	return n * fact(n-1); // The calculation we want to do
}

/*

The total number of operations needed to execute
this fact() function for any given input, n, can be expressed
	1. the sum of the two operations "*" and "-"
	2. plus the number of operations needed to execute the function for n - 1

Let  T(n) represent the number of operations of this function,
T(N) can be expressed as a sum of 
	- T(n-1)
	- and the two arithmetic operations

T(n) = T(n-1) + 2
T(1) = 1

This, however, does not tell us the number of operations T(n)
The problem is only solved after the T's are gone from the LHS of the equation
Then the problem would be in its "closed form" and is solved

T(n)	 = T(n-1) + 2

T(n-1)	 = T((n-1) - 1) + 2
		 = T(n-2) + 2

T(n)	 = T(n-2) + 2 + 2
		 = T(n-2) + 2*2 

T(n-2)	 = T(n - 1 - 2) + 2
		 = T(n-3) + 2

T(n) 	 = T(n-3) + 2 + 2*2
		 = T(n-3) + 2*3

At this point, ask yourself: Is there pattern developing?

The generalized recurrence relation is (based on the pattern):
	T(n) = T(n-k) + 2*k
Now we can use the fact that T(1) = 1.

Let n-k = 1
	n-1 = k
T(n) = T(n - n + 1) + 2*(n-1)
	 = T(1) + 2n -2
	 = 1 + 2n -2
	 = 2n -1

So this algorithm runs in O(n) time








*/
