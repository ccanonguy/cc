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
	int n, m;
	cin >> n;
	int ans = 0;
	int boys[n];
	forn(i, n) cin >> boys[i];
	cin >> m;
	int girls[m];
	forn(i, m) cin >> girls[i];
	sort(boys, boys+n);
	sort(girls, girls+m);
	int a = 0, b = 0;
	while (a<n && b<m) {
		//cout << a << " " << b << endl;
		if (abs(boys[a] - girls[b]) <= 1) {
			ans++;
			a++;
			b++;
			//cout << "hi";
		}
		else if (boys[a] > girls[b])
			b++;
		else if (girls[b] > boys[a])
			a++;
	}
	cout << ans;
}