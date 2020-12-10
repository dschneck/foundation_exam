// Im going to be implementing the same idea with
// three different methods

#include <stdio.h>

//#define ITERATIVE 0
 #define RECURSIVE 0
//#define MATH 0

#define N 20

void math();
void iterative();
int  call();
void recursive();


int main() {
	#ifdef ITERATIVE
		iterative();
	#endif

	#ifdef RECURSIVE
		recursive();
	#endif

	#ifdef MATH
		math();
	#endif

	return 0;

}


void iterative() {
	int sum = 0;

	for (int i = 0; i < N; i++) {
		sum += i;
		printf("Current sum: %d, added %d\n", sum, i); 
	}

}


void math() {
	int sum = 0;
	
	printf("The sum is %d", N * (N + 1) / 2);
}

void recursive() {
	printf("The sum is %d\n", call(N));
}

int call(int n) {
	// Base case 
	if (n == 1) return 1;

	// Recursive call
	return n + call(n-1);
}













