#include<stdio.h>
#define LLU unsigned long long int
#define REPN(i,a,b) for(LLU i=a; i<b; ++i)
using namespace std;

LLU ncr ( int n, int k ) {
	if ( k>n/2 ) k=n-k;
	
	LLU res = 1;
	REPN(i,0,k) {
		res *= (n-i);
		res /= (i+1);
	}
	
	return res;
}

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		LLU n, k;
		scanf("%llu %llu", &n, &k);
		
		if ( k>n ) printf("0\n");
		else printf("%llu\n", ncr(n-1,k-1));
		
	}
}

