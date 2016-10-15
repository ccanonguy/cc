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
	ll l1, r1, l2, r2, k;
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	ll l = max(l1, l2);
	ll r = min(r1, r2);

	if (l <= r) {
		ll ans = r-l+1;
		ans += (k >=l && k <= r) ? -1 : 0;
		cout << ans;
	}
	else
		cout << 0;
}