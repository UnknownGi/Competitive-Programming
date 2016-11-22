#include<stdio.h>
#include<algorithm>
#define LLD long long int
#define REPN(i,a,b) for(int i=a; i<b; ++i)
#define REPNRE(i,a,b) for(int i=a; i>=b; --i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		LLD n; scanf("%lld", &n);
		
		LLD a[n], b[n];
		REPN(i,0,n) scanf("%lld", &a[i]);
		sort(a, a+n);
		
		REPNRE(i,n-1,0) {
			if ( i==n-1 ) b[i] = a[i];
			else b[i] = b[i+1]+a[i];
		}
		
		int s=1, max=0;
		REPN(i,0,n) {
			if ( max < s*b[i] ) max = s*b[i];
			++s;
		}
		
		printf("%d\n", max);
	}
	
	fclose(stdin);
}
