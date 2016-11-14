#include<stdio.h>
#include<algorithm>

using namespace std;

int main ( ) {
	// Array to be Sorted
	int A[] = { 5, 4, 8, 3, 1, 2, 9, 7, 6 };
	
	// Size of Array 
	int size = sizeof(A)/sizeof(A[0]);
	
	// Selection Sort
	for ( int i=0; i<size-1; ++i ) {
		int min_index = i;
		
		for ( int j=i+1; j<size; ++j ) {
			// Find the index with the minimum value
			if ( A[min_index]>A[j] ) min_index = j; 
		}

		// STL swap() function from algorithm library		
		swap(A[min_index], A[i]);
	}
	
	
	// Printing Array 
	for ( int i=0; i<size; ++i ) printf("%d ", A[i]);
	printf("\n");
}
