#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	for (int i=0; i<m; i++) {
		int a = 2*n + 1 +i;
		if (a <= m) cout << a << " ";
		if (i <= 2*n-1) cout << i+ 1 << " ";
	}
}
