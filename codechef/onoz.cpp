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
	int t;
	cin >> t;
	while(t--) {
		int h, m;
		cin >> h >> m;
		int ans = 1;

		fore(i, 1, h) {
			if (i<10) {
				int checkMin = i;
				while (checkMin < m) {
					//cout << i << " " << checkMin << endl;
					checkMin = 10*checkMin + i;
					ans++;
				}
			}
			else if(i%11 == 0) {
				int checkMin = i%10;
				while (checkMin < m) {
					//cout << i << " " << checkMin << endl;
					checkMin = 10*checkMin + i%10;
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
}