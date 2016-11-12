#include<stdio.h>
#include<iostream>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int n, q;
	scanf("%d %d", &n, &q);
	
	bool arr[n];
	REPN(i,0,n) arr[i] = false;
	
	string op;
	int index, count=0;
	REPN(i,0,q) {
		cin >> op;
		
		if ( op=="CLICK" ) {
			scanf("%d", &index);
			if ( !arr[index-1] ) {
				count++;
				arr[index-1] = true;
			} else {
				count--;
				arr[index-1] = false;
			}
		} else {
			count = 0;
			REPN(j,0,n) arr[j] = false;
		}
		
		printf("%d\n", count);
	}
}
