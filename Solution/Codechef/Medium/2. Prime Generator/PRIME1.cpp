#include<math.h>
#include<stdio.h>
#define LLD long long int
#define REPNE(i,a,b) for(LLD i=a; i<=b; ++i)
using namespace std;

bool ifPrime ( int n ) {
	if ( n==2 ) return true;
	else if ( n%2==0 || n==1 ) return false;
	for ( int i=3; i<=sqrt(n); i+=2 ) {
		if ( n%i==0 ) return false;
	}
	
	return true;
}

int main ( ) {
	// freopen("input.txt", "r", stdin);
		
	int t; scanf("%d", &t);
	REPNE(test, 1, t) {
		LLD a, b;
		scanf("%lld %lld", &a, &b);
		
		REPNE(i,a,b) {
			if ( ifPrime(i) ) printf("%lld\n", i);	
		} printf("\n");
	}
}
