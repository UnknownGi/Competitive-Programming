#include<stdio.h>
#include<algorithm>
using namespace std;

int main ( ) {
	// Array to be Sorted
	int A[] = { 99, 44, 111, 33, 22, 22, 11, 99, 0, 55, 99 };
	
	// Size of Array
	int size = sizeof(A)/sizeof(A[0]);
	int tempSize = size;
	
	// Bubble Sort
	int i=0;
	for ( ; i<tempSize; ++i ) {
		i=0;
		
		for ( int j=i; j<tempSize-1; ++j ) {
			if ( A[j+1]<A[j] ) swap(A[j], A[j+1]);
		}
		
		--tempSize;
	}
	
	
	// Printing ELements in Array
	for ( int i=0; i<size; ++i ) printf("%d ", A[i]);
	printf("\n");
}
