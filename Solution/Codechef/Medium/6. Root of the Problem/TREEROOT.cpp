#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i) 
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int q; scanf("%d", &q);
		
		int p=0, s=0, a, b;
		REPN(i,0,q) {
			scanf("%d %d", &a, &b);
			
			p += a;
			s += b;
		}
		
		printf("%d\n", (p-s));
	}
}
