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
	int n,c;
	cin >> n >> c;
	ll t[n];
	forn (i, n)
		cin >> t[i];
	int count = 1;
	fore (i, 1, n) {
		if (t[i] - t[i-1] <= c)
			count++;
		else
			count = 1;
	}
	cout << count;
}