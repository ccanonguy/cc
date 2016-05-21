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
class GreatFairyWar
{
public:
	int minHP(vector <int> dps, vector <int> hp) {
		int n = dps.size();
		int ans = 0;
		int last = 0;
		for(int i=n-1; i>=0; i--) {
			last += dps[i];
			ans += hp[i]*last;
		}
		return ans;
	}	
};