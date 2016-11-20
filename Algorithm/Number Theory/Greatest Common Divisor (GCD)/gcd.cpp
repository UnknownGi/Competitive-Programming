#include<stdio.h>
using namespace std;

int gcd ( int a, int b ) {
	return b==0? a : gcd(b, a%b); 
}

int main ( ) {
	int a[5] = { 10, 9, 3, 91, 40 };
	int b[5] = { 12, 21, 201, 23, 300 };
	
	for ( int i=0; i<5; ++i ) {
		printf("gcd: %d\n", gcd(a[i],b[i]));
	}
}
