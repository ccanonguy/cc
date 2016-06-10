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
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int newY1 = y1, newY2 = y2;
	if ((abs(y1)%2 == 1 && abs(x1)%2 == 1) || (abs(y1)%2 == 0 && abs(x1)%2 == 0)) newY1--;
	if ((abs(y2)%2 == 1 && abs(x2)%2 == 1) || (abs(y2)%2 == 0 && abs(x2)%2 == 0)) newY2++;
	ll l = (newY2-newY1)/2;
	//cout << newY2 << newY1;
	ll ans = 0;
	if (newY1 == y1) {
		ans = l*((x2-x1)/2 + 1) + (l+1)*((x2-x1)/2);
	}
	else {
		ans = l*((x2-x1)/2 + 1) + (l-1)*((x2-x1)/2);
	}
	cout << ans;
}