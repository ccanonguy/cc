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

class DengklekTryingToSleep {
public:
	int minDucks(vector <int> ducks) {
		sort(ducks.begin(), ducks.end());
		int ans = 0;
		forn(i, ducks.size() -1) {
			if (ducks[i] != (ducks[i+1]+1)) {
				ans += ducks[i+1] - ducks[i] -1;
			}
		}
		return ans;
	}
};