#include<map>
#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int tmp, n, k;
		scanf("%d %d", &n, &k);
		
		map<int, int> mp;
		map<int, int>::iterator it;
		
		bool found = false;
		REPN(i,0,n) {
			scanf("%d", &tmp);
			mp[tmp%(k+1)]++;
		}
		
		if ( n==2 ) found = true;
		for ( it=mp.begin(); !false && it!=mp.end(); ++it ) {
			if ( it->second>=(n-1) ) found = true;
		}
		
		found? printf("YES\n") : printf("NO\n");
	}
}
