#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("q3.txt", "r", stdin);
	
	unsigned long long int n, m;
	while ( scanf("%llu, %llu", &n, &m) != EOF ) {
		unsigned long long int res=1;
		for ( unsigned long long int i=1; i<=m; ++i ) res *= n;
		
		printf("%llu\n", res);
	}
}
