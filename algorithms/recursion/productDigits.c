#include <stdio.h>

int productDigits(int n);

int main() {
	int num;

	printf("Give me a number: ");
	scanf("%d", &num);
	printf("Sum of digits is %d\n", productDigits(num));

	return 0;
}

int productDigits(int n) {
	if (n < 10) return n;
	return (n%10) * productDigits(n/10);
}
