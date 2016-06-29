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

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}


int main() {
	ll n,a,b,p,q;
	cin >> n >> a >> b >> p >> q;
	ll ans = 0;
	ll lcm = a*b/gcd(a, b);
	ll gcdvale = n/lcm;
	ans += p*((n/a) - gcdvale);
	ans += q*((n/b) - gcdvale);
	ans += (p > q) ? p*gcdvale : q*gcdvale;
	cout << ans;
}