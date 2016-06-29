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
	int n, m;
	cin >> n >> m;
	int k[5];
	for (int i=0; i<5; i++) {
		k[i] = ((m-5-i) >= 0) ? int((m-5+i)/5) + 1 : 0;
	}
	ll ans = 0;
	fore(i, 1, n+1) {
		ans += k[i%5];
	}
	cout << ans;
}