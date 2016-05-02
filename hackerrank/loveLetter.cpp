#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int ans = 0;
		int n = s.length();
		for (int i=0; i<n/2; i++) {
			if (s[i] != s[n-1-i]) ans += abs(s[i] - s[n-1-i]);
		}
		cout << ans << endl;
	}
}
