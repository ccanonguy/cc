#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		bool funny = true;
		int n = s.length();
		for (int i=1; i<n; i++) {
			if (abs(s[i] - s[i-1]) != abs(s[n-i] - s[n-1-i])) {
				funny = false;
				break;
			}
		}
		if (funny) cout << "Funny";
		else cout << "Not Funny";
		cout << endl;
 	}
}
