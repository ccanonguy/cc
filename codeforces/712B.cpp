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
	string s;
	cin >> s;
	if (s.length()%2 == 1) {
		cout << -1;
		return 0;
	}

	int x=0, y=0;

	int ans = 0;
	forn (i, s.length()) {
		if (s[i] == 'U')y++;
		if (s[i] == 'D')y--;
		if (s[i] == 'R')x++;
		if (s[i] == 'L')x--;
	}

	cout << (abs(x) + abs(y))/2;
}