#include <stdio.h>

int power(int base, int pow);
int power2(int base, int pow);

int main() {
	printf("2^3 = %d\n", power(2, 3));
	printf("1^0 = %d\n", power(1, 0));
	printf("3^3 = %d\n", power(3, 3));

	printf("2^3 = %d\n", power2(2, 3));
	printf("1^0 = %d\n", power2(1, 0));
	printf("3^3 = %d\n", power2(3, 3));


	return 0;
}

int power(int base, int pow) {
	// Base Case
	if (pow == 0) return 1;

	return base * power(base, pow-1);
}

// This is the version used for the recurrence relation
int power2(int base, int pow) {
	if (pow == 0) return 1;
	
	if (pow  == 1) return base;

	if (pow  % 2 == 0) return power2(base * base, pow/2);

	else return power2(base * base, pow/2)  * base;

}

/*

When computing time complexity, we assume the worst case.

T(n) 	= T(n/2) + 3
T(1) 	= 1




























*/
