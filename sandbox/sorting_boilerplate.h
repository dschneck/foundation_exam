/* 	This code is to be imported in every sorting algo to speed
	up the time it takes to test an implementation.
*/

#ifndef SORTING_BOILERPLATE
	#define SORTING_BOILERPLATE
	
	// Included libraries
	#include <stdio.h>
	#include <stdlib.h>
	
	// N
	#define N 30

	// Function prototypes
	int * generateList(); 
	void swap(int * arr, int a, int b);
	void printList(int * arr);

#endif

