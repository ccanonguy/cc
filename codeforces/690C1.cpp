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

int n, m;
vector <vector <int> > g;
std::vector<bool> visited;

int main() {
	cin >> n >> m;
	g.resize(n);
	visited.resize(n);
	forn (i, m) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		g[x].pb(y);
		g[y].pb(x);
	}
	bool okay = true;
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n;j ++) {
			fill(visited.begin(), visited.end(), false);
			visited[i] = true;
			
		}
		if (!okay)
			break;
	}

	if (okay)
		cout << "yes";
	else
		cout << "no";
}