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

int n, t;
double glasses[11][11];

int main() {
	cin >> n >> t;
	glasses[1][1] = t;
	int ans = 0;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=i; j++) {
			if (glasses[i][j] >= 1) {
				glasses[i+1][j] += (glasses[i][j]-1)/2;
				glasses[i+1][j+1] += (glasses[i][j]-1)/2;
				ans++;
			}
		}
	}
	cout << ans;
}