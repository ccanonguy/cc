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
	vector < pair<ll, char> > des(n);
	forn (i, n) {
		char dir;
		cin >> dir;
		des[i] = mp(0, dir);
	}
	forn (i, n) {
		ll cor;
		cin >> cor;
		des[i] = mp(cor, des[i].second);
	}
	ll min = 1e10;
	ll start, end;
	ll i = 0;
	while (i<n) {
		while (des[i].second == 'R')
			i++;
		if (i<n && (i-1)>=0 && des[i-1].second == 'R') {
			ll trial = (des[i].first - des[i-1].first)/2;
			if (trial < min) 
				min = trial;
		}
		i++;
	}
	if (min == 1e10)
		cout << -1;
	else
		cout << min;
}