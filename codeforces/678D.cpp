#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


#define INF 1000000000
#define EPS 1e-9
#define MOD 1000000007
#define fore(i, l, n) for (int i=int(l); i<n; i++)
#define forn(i, n) fore(i, 0, n)
#define pb push_back
#define	mp make_pair

ll fast_exp(ll a, ll n) {
	if (n == 0) {
		return 1;
	}
	else if ( n == 1) {
		return a;
	}

	if (n%2 == 0) {
		ll expt = fast_exp(a, n/2);
		return ((expt%MOD)*(expt%MOD))%MOD;
	}
	else {
		ll expt = fast_exp(a, (n-1)/2);
		return (a*(expt%MOD)*(expt%MOD))%MOD;
	}
}


int main() {
	ll a, b, x, n;
	cin >> a >> b >> n >> x;
	ll a_n;
	ll ans;
	if (a != 1) {
		a_n = fast_exp(a, n);
		cout << a_n << endl;
		ans = (a_n*x)%MOD + ((b)*(a_n - 1)/(a - 1))%MOD;
	}
	else {
		ans = x%MOD + (n%MOD)*b;
	}
	ans = ans%MOD;
	cout << ans;
}