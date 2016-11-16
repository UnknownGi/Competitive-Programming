#include<stdio.h>
#define ulli unsigned long long int
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	ulli t, n;
	scanf("%llu", &t);
	while ( t-- ) {
		scanf("%llu", &n);
		
		int o = 0;
		while ( n >= 5 ) {
			o += n/5;
			n /= 5;
		}
		
		printf("%d\n", o);
	}
}
