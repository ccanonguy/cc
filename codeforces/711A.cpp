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
	int n;
	cin >> n;
	bool found = false;
	string ans[n];
	forn(i, n) {
		string s;
		cin >> s;
		if (!found) {
		if (s[0] == 'O' && s[1] == 'O') {
			s[0] = '+';
			s[1] = '+';
			found = true;
		}
		else if (s[3] == 'O' && s[4] == 'O') {
			s[3] = s[4] = '+';
			found = true;
		}
		}
		ans[i] = s;
	}

	if (found) {
		cout << "YES" << endl;
		forn (i, n) {
			cout << ans[i] << endl;
		}
	}
	else
		cout << "NO";
}