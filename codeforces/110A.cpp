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
	ll n;
	cin >> n;
	string ans = "NO";
	int l = 0;
	while (n) {
		if (n%10 == 4 || n%10 == 7) {
			l++;
		}
		n /= 10;
	}

	if (l == 4 || l == 7)
		ans = "YES";
	cout << ans;
}