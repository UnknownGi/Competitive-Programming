#include<sstream>
#include<iostream>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

string compare ( string s, string str ) {
	int sval, strval;
	stringstream ss(s), sstr(str);
	ss >> sval; sstr >> strval;
	
	if ( sval > strval ) return s;
	else {
		int x, y;
		if ( s.size()%2==0 ) { x = s.size()/2-1; y = s.size()/2; }
		else { x = s.size()/2; y = s.size()/2; }
		
		while ( s[x]=='9' && s[y]=='9' ) {
			s[x]='0';
			s[y]='0';
			--x;
			++y;	
		}
		
		s[x]++;
		if ( y!=x ) s[y]++;
		
		return s;
	}
}

string normalize ( string str ) {
	int x, y;
	if ( str.size()%2==0 ) { x = str.size()/2-1; y = str.size()/2; }
	else { x = str.size()/2; y = str.size()/2; }
	
	while ( x>=0 ) {
		str[y] = str[x];
		--x;
		++y;
	} return str;
}

bool check_9 ( string s ) {
	REPN(i,0,s.size()) {
		if ( s[i]!='9' ) return false;
	} return true;
}

int main ( ) {
	freopen("input.txt", "r", stdin);	
	
	int t; cin >> t;
	while ( t-- ) {
		string s, str;
		cin >> str;	
		
		if ( !check_9(str) ) {
			s = normalize(str);
			s = compare(s, str);
		} else {
			s += '1';
			REPN(i,0,str.size()-1) s+='0';
			s += '1';
		}
		
		cout << s << endl;
	}
}
