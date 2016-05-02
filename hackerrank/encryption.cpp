/*
 * 
 * 
 * https://www.hackerrank.com/challenges/encryption
 * 
 * 
 */


#include <bits/stdc++.h>
using namespace std;

#define fore(i,l,n) for(int i = int(l); i<n; i++)
#define forn(i,n) fore(i,0,n)

void getCol(int *row, int *col, int length, float maxi) {
	if((*row)*(*col) >= length && *col <= maxi) return;  //if everything is okay, get back to work
	if(*col >= maxi) { //handling edge case when I increment col but at a certain stage it shouldn't go past a maximum
		*col = *col - 1;
		*row = *row + 1;
		getCol(row, col, length, maxi);
	}
	else {
		if((*row)*(*col) >= length) return;
		else {
			*col = *col + 1;
			getCol(row, col, length, maxi);
		}
	}
}

int main() {
	string s;
	cin >> s;
	int minimum = floor(sqrt(s.length()));
	int maximum = ceil(sqrt(s.length()));
	int row;
	row = minimum;
	int col;
	col = minimum;
	getCol(&row, &col, s.length(), maximum);
	forn(i, col) { //printing
		for (int k=i; k<s.length(); k+=col) {
			cout << s[k];
		}
		cout << " ";
	}
}
