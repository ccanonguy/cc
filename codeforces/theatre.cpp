/*
 * 
 * http://codeforces.com/problemset/problem/1/A
 * 
 * 
 * */

#include <bits/stdc++.h>
using namespace std;

#define fore(i,l,n) for(int i = int(l); i<n; i++)
#define forn(i,n) fore(i,0,n)

int main() {
	long int side[] = {0, 0}, a = 0, v[] = {0, 0};
	cin >> side[0] >> side[1] >> a;
	forn(i,2) {
		v[i] = side[i]/a;
		if (v[i]*a != side[i]) v[i]++;
	}
	cout << v[0]*v[1];
}


/*
 * getting WA for big integers but works fine on my laptop
 * 
 * */
