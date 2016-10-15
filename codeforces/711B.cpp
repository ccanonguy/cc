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

	if (n == 1) {
		cout << 1;
		return 0;
	}
	vector< vector<ll> > data(n);

	int targetI, targetJ;
	forn (i, n) {
		forn(j, n) {
			ll x;
			cin >> x;
			if (x == 0) {
				targetI = i;
				targetJ = j;
			}
			data[i].pb(x);
		}
	}
	ll sum = 0, targetSum = 0;
	forn (j, n) {
		sum += data[(targetI+1)%n][j];
		targetSum += data[targetI][j];
	}

	ll ans = sum - targetSum;

	if (ans <= 0) {
		cout << -1;
		return 0;
	}

	data[targetI][targetJ] = ans;

	forn (i, n) {
		ll cSum = 0;
		forn (j, n) {
			cSum += data[i][j];
		}

		if (cSum != sum) {
			cout << -1;
			return 0;
		}
	}

	forn (i, n) {
		ll cSum = 0;
		forn (j, n) {
			cSum += data[j][i];
		}

		if (cSum != sum) {
			cout << -1;
			return 0;
		}
	}
	ll cSum = 0; 
	forn (i, n) {
		cSum += data[i][i];
	}

	if (cSum != sum) {
		cout << -1;
		return 0;
	}

	cSum = 0;
	forn (i, n) {
		cSum += data[n-1-i][i];
	}

	if (cSum != sum) {
		cout << -1;
		return 0;
	}

	cout << ans;
}