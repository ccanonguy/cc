#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		int ans = 0;
		for (int i=1; i<s.length(); i++) {
			if (s[i] == s[i-1]) ans++;
		}
		cout << ans << endl;
	}
}
