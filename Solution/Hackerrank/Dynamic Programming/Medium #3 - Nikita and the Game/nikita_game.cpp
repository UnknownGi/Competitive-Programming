#include<stdio.h>
#include<algorithm>
#define LLD long long int
#define REPN(i,a,b) for(int i=a; i<b; ++i)
#define REPNE(i,a,b) for(int i=a; i<=b; ++i)
using namespace std;

LLD a[17000], n;
LLD count ( int L, int R ) {
	if ( L==R ) return 0;
	
	LLD current=0, total=0;
	REPNE(i,L,R) total+=a[i];
	if ( total%2==1 ) return 0;
	
	REPNE(i,L,R) {
		current+=a[i];
		if ( current==total/2 ) return 1+max(count(L,i), count(i+1,R));
	}
	
	return 0;
}
	
int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		scanf("%lld", &n);
		
		REPN(i,0,n) scanf("%lld", &a[i]);
		LLD c = count(0, n-1);
		
		printf("%lld\n", c);
	}
	
	fclose(stdin);
}
