#include <bits/stdc++.h>
using namespace std;

int main () {
	while (true) {
		int n;
		cin >> n;
		int ans = 0;
		if (n == 0) break;
		
		ans = n*(n+1)*(2*n+1)/6;
		
		cout << ans << endl;
	}
}
