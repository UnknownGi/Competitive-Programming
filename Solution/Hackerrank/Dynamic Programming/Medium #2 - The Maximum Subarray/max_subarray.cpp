#include<stdio.h>
#include<algorithm>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {	
		int n; scanf("%d", &n);
		
		int a[n], cont[n], sub[n];
		REPN(i,0,n) { cont[i] = 0; sub[i] = 0; }
		
		int max = -10e4;
		REPN(i,0,n) {
			scanf("%d", &a[i]);
			if ( i==0 ) { cont[i] = a[i]; sub[i] = a[i]; }
			else {
				if ( sub[i-1]<0 && a[i]>sub[i-1] ) sub[i] = a[i];
				else sub[i-1]+a[i]>sub[i-1]? sub[i] = sub[i-1]+a[i] : sub[i] = sub[i-1];
				
				if ( cont[i-1]<0 && a[i]>cont[i-1] ) cont[i] = a[i];
				else cont[i-1]+a[i]>a[i]? cont[i] = cont[i-1]+a[i] : cont[i] = a[i];
			}
			
			if ( cont[i]>max ) max = cont[i];
		}
		
		printf("%d %d\n", max, sub[n-1]);
	}
	
	fclose(stdin);
}
