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
	int ans = 8;
	if (s == "a1" || s == "h1" || s == "a8" || s == "h8") {
		ans = 3;
	}
	else if (s[1] == '1' || s[1] == '8' || s[0] == 'a' || s[0] == 'h') {
		ans = 5;
	}

	cout << ans;
}