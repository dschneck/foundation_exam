/*
Binary Left Shift Operator:
	The left operands value is
	moved left by the number of bits specified by the right operand.

	A = 60
	A << 2 = 240 i.e, 1111 0000 

*/
#include <stdio.h>

#define SIZE 20

int score(int * preferences, int applicant); 

int main() {
	int preferences[SIZE] = {8,10,1,0,2,3,4,5,6,7,9,11,12,13,14,15,16,17,18,19};
	int applicant = 1325;

	printf("%d\n", score(preferences, applicant));

	printf("%d\n", (1<<8));
	
	return 0;
}

int score(int * preferences, int applicant) {
	int res;

	// we check if the applicant has preferences[i]
	for (res = 0; res < SIZE; res++) {
		if ((applicant & (preferences[res])) == 0)
			break;
	}

	return res;

}
