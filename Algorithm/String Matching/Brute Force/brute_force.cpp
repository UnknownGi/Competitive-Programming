#include<stdio.h>
#include<iostream>
#define sz sizeof
using namespace std;

int main ( ) {
	/* String Searching: Knuth Morris Prath */
	string match = "welcome";
	string pattern[] = { "come", "www", "tt", "abc", "ccom", "com", "o" };
	
	int n = sz(pattern)/sz(pattern[0]);
	for ( int t=0; t<n; ++t ) {
		
		int iteration = 1;
		bool found = false;
		
		printf("***********************************************\n");
		printf("Searching %s in String\n\n", pattern[t].c_str());
		for ( int i=0; i<match.length() && !found; ++i ) {
			printf("Iteration #%d\n", iteration++);
			printf("%s\n", match.c_str());
			for ( int x=0; x<i; ++x ) printf(" ");
			printf("%s\n", pattern[t].c_str());
			for ( int x=0; x<i; ++x ) printf(" ");
			
			string substring = match.substr(i, pattern[t].length());
			
			bool end = false;
			for ( int j=0, k=i; j<pattern[t].length() && !end; ++j, ++k ) {
				if ( pattern[t][j] == match[k] ) printf("^");
				else { printf("x"); end = true; }
			} printf("\n\n");
			
			if ( pattern[t] == substring ) {
				found = true;
				printf("\nString matched from index %d to %d\n\n", (i+1), (i+pattern[t].length()));
			}
		}
		
		if ( !found ) printf("\nPattern doesn't exist in String\n\n");
	}
	
	printf("***********************************************");
}
