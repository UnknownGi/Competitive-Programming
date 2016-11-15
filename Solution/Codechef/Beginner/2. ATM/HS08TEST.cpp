#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("inputC.txt", "r", stdin);
	
	int x; float y;
	scanf("%d %f", &x, &y);
	
	if ( x%5 == 0 ) {
		if ( x+0.5 > y ) printf("%.2f", y);
		else printf("%.2f", y-x-0.5);
	} else printf("%.2f", y);
}
