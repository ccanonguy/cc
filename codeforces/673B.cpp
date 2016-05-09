#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	int max = 0, min = 100001;
	for (int i=0; i<m; i++) {
		int u,v;
		cin >> u >> v;
		if (u > v) {
			int temp = u;
			u = v;
			v = temp;
		}
		
		if (u > max) max = u;
		if (v < min) min = v;
	}
	if (m==0) {
		cout << n-1 << endl;
	}
	else {
		if (max < min) {
			int left = min-1 - max;
			cout << left + 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
}
