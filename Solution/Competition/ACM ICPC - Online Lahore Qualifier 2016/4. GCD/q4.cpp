#include<stdio.h>
using namespace std;

unsigned long long int gcd (unsigned long long int a, unsigned long long int b) 
{ return b==0? a : gcd(b, a%b); }

int main ( ) {
	freopen("q4.txt", "r", stdin);
	
	unsigned long long int a, b;
	while ( scanf("%llu, %llu", &a, &b) != EOF ) {
		printf("%llu\n", gcd(a,b));
	}
}
