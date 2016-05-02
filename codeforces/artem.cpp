/*
 * 
 * http://codeforces.com/problemset/problem/669/A
 * 
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main () {
	long int n, ans = 0;
	cin >> n;
	ans = 2*(n/3);
	if (n%3 != 0) ans++;
	cout << ans;
}
