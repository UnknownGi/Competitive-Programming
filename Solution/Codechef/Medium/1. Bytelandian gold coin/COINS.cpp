#include<map>
#include<stdio.h>
#include<algorithm>
#define LLD long long int
using namespace std;

map<LLD, LLD> mem;

LLD max ( LLD n ) {
	if ( n<2 ) return n;
	else if ( mem.count(n) ) return mem[n];
	else {
		LLD m = max(n, max(n/2)+max(n/3)+max(n/4));
		mem[n] = m;
		return m;
	}
}

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	LLD n;
	while ( scanf("%lld", &n) != EOF ) {
		printf("%lld\n", max(n));		
	}
}
