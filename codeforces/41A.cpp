#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	if (s.length() != t.length()) {
		cout << "NO";
		return 0;
	}
	bool correct = true;
	for (int i=0; i<s.length(); i++) {
		if (s[i] != t[t.length() - 1 -i]) correct = false;
	}
	if(correct) cout << "YES";
	else cout << "NO";
}
