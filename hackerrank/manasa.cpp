/*
 * 
 * https://www.hackerrank.com/challenges/manasa-and-stones
 * 
 * */


#include <bits/stdc++.h>
using namespace std;

#define fore(i,l,n) for (int i= int(l); i<n;i++) //macros for accessibility
#define forn(i,n) fore(i,0,n)

int main() {
	int t;
	 cin >> t;
	 while (t--) {
		int n,a,b;
		cin >> n >> a >> b;
		if (a > b) { //a should be the min as the logic requires it
			int temp = a;
			a = b;
			b = temp;
		}
		else if( a == b) { //edge case
			cout << a*(n-1) <<endl;
			continue;
		}
		forn(i,n) { //iterating
			cout << a*(n-1-i) + b*i << " "; 
		}
		cout << endl;
	 }
}
