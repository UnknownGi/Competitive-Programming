#include<math.h>
#include<stdio.h>
#include<algorithm>
using namespace std;

bool isPrime (unsigned long long int N) {
	if ( N==2 ) return true;
	else if ( N%2==0 || N<=1 ) return false;
	for(int i=3; i<=sqrt(N); i+=2) {
		if ( N%i==0 ) return false;
	}
		
	return true;
}

int main ( ) {
	freopen("q1.txt", "r", stdin);
	
	unsigned long long int n;
	while ( scanf("%llu", &n) != EOF ) { 
		if ( n>=3 && !isPrime(n) ) {
			printf("2");
			for(unsigned long long int i=3; i<=n; i+=2 ) {
				if ( isPrime(i) ) printf(",%d", i);	
			} printf("\n");
		} else printf("0\n");
	}
}
