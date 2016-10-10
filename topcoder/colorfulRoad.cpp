#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


//#define INF 1000000000
#define EPS 1e-9
#define fore(i, l, n) for (int i=int(l); i<n; i++)
#define forn(i, n) fore(i, 0, n)
#define pb push_back
#define	mp make_pair

class ColorfulRoad {
public:
	int getMin(string road) {
		map <char, char> next = {{'R', 'G'}, {'G', 'B'}, {'B', 'R'}};
		const int INF = 1000000;
		int n = road.size();
		int f[n];
		f[n-1] = 0;
		for (int i=n-2; i>=0; i--) {
			f[i] = INF;
			for (int j=i+1; j<n; j++) {
				if (road[j] == next[road[i]]) {
					f[i] = std::min(f[i], (j-i)*(j-i) + f[j]);
				}
			}
		}
		return (f[0] >= INF) ? -1 : f[0];
	}
};