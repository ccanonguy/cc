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
	int t, x, s;
	cin >> t >> s >> x;
	bool isOkay = true;
	if (x >= t) {
		if ((x - t)%s == 0)
			isOkay = false;
	}
	if (x >= (t+1+s)) {
		if ((x - (t+1+s))%s == 0)
			isOkay = false;
	}

	if (isOkay)
		cout << "NO";
	else
		cout << "YES";
}