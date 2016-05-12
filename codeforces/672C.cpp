#include <bits/stdc++.h>
using namespace std;

#define ll long long

class node {
	ll x,y;
	bool inStack = false;
};

int main() {
	node a,b,t;
	cin >> a.x >> a.y >> b.x >> b.y >> t.x >> t.y;
	ll n;
	cin >> n;
	node bin[n];
	for (int i=0; i<n; i++) {
		cin >> bin[i].x >> bin[i].y;
	}
	cout << dfs();
}