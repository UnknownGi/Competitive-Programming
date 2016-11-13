#include<map>
#include<math.h>
#include<stdio.h>
#define LLD long long int
#define REPN(i,a,b) for(int i=a; i<b; ++i)
#define REPNE(i,a,b) for(int i=a; i<=b; ++i)
using namespace std;

map<LLD, LLD> mp;
map<LLD, LLD>::iterator it;
		
void factor ( LLD n ) {
	REPNE(i,2,sqrt(n)) {
		while ( n%i==0 ) {
			mp[i]++;
			n /= i;
		}
	}
	
	if ( n!=1 ) mp[n]++;
}

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		LLD n, tmp; scanf("%lld", &n);
		
		REPN(i,0,n) {
			scanf("%lld", &tmp);
			factor(tmp);
		}
		
		LLD fact=1;
		for ( it=mp.begin(); it!=mp.end(); ++it ) fact *= (it->second+1);
		
		mp.clear();
		printf("%lld\n", fact);
	}
}
