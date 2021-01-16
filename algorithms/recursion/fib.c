#include <stdio.h>

int fib(int n);

int main() {
	printf("%d", fib(10));
	return 0;
}

int fib(int n) {
	if (n <= 1) {
		printf("%d ", n);
		return n;
	}
	printf("%d ", n);

	return fib(n-1) + fib(n-2);
}
