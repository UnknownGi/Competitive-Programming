#include<math.h>
#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("q2.txt", "r", stdin);
	
	unsigned long long int n; 
	while ( scanf("%llu", &n) != EOF ) { 
		double a=2, b=4, c=6;
		
		if ( n==1 ) printf("2\n");
		else if ( n==2 ) printf("2\n4\n");
		else if ( n==3 ) printf("2\n4\n6\n");
		else {
			printf("2\n4\n6\n");
			for ( int t=1; t<=n-3; ++t ) {
				double ans = (a+b+c)/3;
				
				a = b;
				b = c;
				c = ans;
				
				double int_part, float_part = modf(ans, &int_part);
				if ( float_part != 0 ) printf("%.2f\n", (int_part+float_part));
				else printf("%.0f\n", int_part);
			} 
		} printf("\n");
	}
}
