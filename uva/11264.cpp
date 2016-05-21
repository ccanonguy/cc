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
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll arr[n];
		ll sum = 0;
		ll ans = 0;
		forn(i,n) cin >> arr[i];

		forn(i,n-1) {
			sum += arr[i];
			if (sum < arr[i+1]) ans++;
			else sum -= arr[i];
		}
		ans++;
		cout << ans << endl;
	}
}