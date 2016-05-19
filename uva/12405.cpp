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
	int cas = 1;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;

		int ans = 0;
		for (int i=0; i<s.length();) {
			if (s[i] == '#') i++;
			else {
				ans++;
				i += 3;
			}
		}
		cout << "Case " << cas << ": " << ans << endl;
		cas++;
	}
}