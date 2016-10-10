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

map<char, char> t;

int main() {
	t['A'] = 'A';
	t['b'] = 'd';
	t['d'] = 'b';
	t['H'] = 'H';
	t['I'] = 'I';
	t['M'] = 'M';
	t['O'] = 'O';
	t['o'] = 'o';
	t['T'] = 'T';
	t['U'] = 'U';
	t['V'] = 'V';
	t['v'] = 'v';
	t['W'] = 'W';
	t['w'] = 'w';
	t['X'] = 'X';
	t['x'] = 'x';
	t['Y'] = 'Y';
	t['p'] = 'q';
	t['q'] = 'p';
	string s;
	cin >> s;
	int n = s.length();
	/*if (n == 1) {
		cout << "TAK";
		return 0;
	}*/
	bool palin = true;
	forn (i, n) {
		if (t.find(s[i]) == t.end()) {
			palin = false;
			break;
		}
		else if (s[n-1-i] != t[s[i]]) {
			palin = false;
			break;
		}
	}

	if (palin)
		cout << "TAK";
	else
		cout << "NIE";
}