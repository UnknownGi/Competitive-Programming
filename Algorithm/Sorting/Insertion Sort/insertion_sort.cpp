#include<stdio.h>
using namespace std;

int main ( ) {
	// Array to be sorted in ascending order..
	int A[] = { 1, 10, 4, 9, 10, 14, 5, 3, 13, 10 };
	
	// Calculating size of Array
	int size = sizeof(A)/sizeof(A[0]);
	
	// Insertion Sort
	for ( int i=1; i<size; ++i ) {
		int j=i-1;
		int value=A[i];
		
		while ( j>=0 && value<A[j] ) {
			A[j+1] = A[j];
			--j;
		}
		
		// Condition for checking if the value belongs to its existing place or someother place in the array
		if ( j!=i-1 ) A[j+1] = value; 
	}
	
	// Printing Array Content
	for ( int i=0; i<size; ++i ) printf("%d ", A[i]);
	printf("\n");
}
