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
#define max(a, b) ((a > b) ? (a) : (b))

unordered_map<ll, ll> t;
inline ll lca (ll v, ll u, ll w = -1) {
	ll ans = 0;
	while (v!=u) {
		if (v < u)
			swap(v, u);
		if (t.find(v) != t.end())
			ans += t[v];
		if (w != -1)
			t[v] += w;
		v >>= 1;
	}
	return ans;
}

int main() {
	int q;
	cin >> q;
	while (q--) {
		int c;
		ll v, u, weight;
		cin >> c >> v >> u;
		if (c == 1) {
			cin >> weight;
			lca (v, u, weight);
		}
		else {
			cout << lca(v, u) << endl;
		}
	}
	return 0;
}