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
	long long x;
	cin >> x;
	long long tens = 1, ans = 0;
	int now = 0;
	while(x) {
		now = x%10;
		if (now >=5) {
			now = 9-now;
		}
		ans += tens*now;
		x /= 10;
		tens *= 10;
	}
	//cout << now;
	if (!now) {
		ans += tens*9/10;
	}
	cout << ans;
}