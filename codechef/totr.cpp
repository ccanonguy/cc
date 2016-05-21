#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


#define INF 1000000000
#define EPS 1e-9
#define fore(i, l, n) for (int i=int(l); i<n; i++)
#define forn(i, n) fore(i, 0, n)
#define pb push_back
#define	mp make_pair

int main() {
	int t;
	cin >> t;
	std::map<char, char> translation;
	for (char v='a'; v<='z'; v++) {
		char temp;
		cin >> temp;
		translation[tolower(v)] = tolower(temp);
		translation[toupper(v)] = toupper(temp);
	}
	translation['_'] = ' ';
	string s;
	while (getline(cin, s)) {
		for (int i=0; i<s.length(); i++) {
			if (translation.count(s[i]) > 0) {
				cout << translation[s[i]];
			}
			else {
				cout << s[i];
			}
		}
		cout << endl;
	}
}