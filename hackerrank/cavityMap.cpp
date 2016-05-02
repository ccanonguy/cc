/*
 * 
 * https://www.hackerrank.com/challenges/cavity-map
 * 
 * */

#include <bits/stdc++.h>
using namespace std;

#define fore(i, l, r) for (int i = int(l); i<r; i++) //macros for accessibility
#define forn(i, n) fore(i, 0, n)

int main() {
	int n;
	cin >> n;
	vector<string> grid(n);
	forn(i, n) cin >> grid[i]; //getting the grid
	
	vector<string> b = grid;
	int dx[] = {0, 0, 1, -1}; //movement directions
	int dy[] = {1, -1, 0, 0};
	fore(row, 1, n-1) {  // iterating all the cells except at the boundaries
		fore(col, 1, n-1) {
			bool cavity = true;
			forn(dr,4) { //checking all the directions
				int ni = row + dx[dr];
				int nj = col + dy[dr];
				
				if (grid[ni][nj] >= grid[row][col]) {
					cavity = false;
					break;
				}
			}
			if (cavity) b[row][col] = 'X';
		}
	}
	forn(i,n) cout << b[i] << endl;
}
