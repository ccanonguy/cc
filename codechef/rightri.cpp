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
	int ans = 0;
	while (n--) {
		double x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		pair<double, double> dr1 = mp(x1-x3, y1-y3);
		pair<double, double> dr2 = mp(x2-x1, y2-y1);
		pair<double, double> dr3 = mp(x3-x2, y3-y2);
		if (!(dr1.first*dr2.first + dr1.second*dr2.second) || !(dr2.first*dr3.first + dr2.second*dr3.second) || !(dr1.first*dr3.first + dr1.second*dr3.second)) ans++;
	}
	cout << ans << endl;
}