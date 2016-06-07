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
	ll n, h, k;
	cin >> n >> h >> k;
	ll arr[n]; 
	forn(i, n) cin >> arr[i];

	ll height = 0;
	ll ans = 0;
	forn (i, n) {
		if ((height + arr[i]) <= h) {
			height += arr[i];
		}
		else {
			ans++;
			height = arr[i];
		}
		ans += height/k;
		height = height%k;
	}

	if (height) ans++;

	cout << ans;
}