#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	unsigned long long int n, k, num;
	scanf("%llu %llu", &n, &k);
	
	static int count;
	while ( n-- ) {
		scanf("%llu", &num);
		if ( num%k == 0 ) ++count; 
	}
	
	printf("%d", count);
}
