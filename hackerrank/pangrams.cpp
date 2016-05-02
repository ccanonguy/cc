#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	map<char, int> alpha;
	for (int i=0; i<s.length(); i++) {
		if (s[i] == ' ') continue;
		alpha[tolower(s[i])] = 1;
	}
	if (alpha.size() == 26) cout << "pangram";
	else cout << "not pangram";
}
