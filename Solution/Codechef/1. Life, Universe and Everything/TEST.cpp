#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	static int num;
	while ( scanf("%d", &num) ) {
		if ( num == 42 ) break;
		else printf("%d\n", num);
	}
}
