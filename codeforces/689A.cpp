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

int cel[4][3] = {{1, 2, 3}, {4, 5, 6}, {7,8,9}, {-1, 0, -1}};

ii find(int n) {
	ii ans;
	forn(i, 4) {
		forn (j, 3) {
			if (n == cel[i][j]) {
				ans = mp(i, j);
				break;
			}
		}
	}
	return ans;
}

int main() {
	int n, d;
	cin >> n >> d;
	int dirx[] = {1, -1, 0, 0, 1, -1, 1, -1};
	int diry[] = {0, 0, 1, -1, 1, 1, -1, -1};
	bool similar = false;
	for (int dd=0; dd<8; dd++) {
		int x = dirx[dd];
		int y = diry[dd];
		bool allTrue = true;
		int num = d;
		forn(ii, n) {
			int curNum = num%10;
			auto index = find(curNum);
			index.first += y;
			index.second += x;
			int i = index.first, j = index.second;
			if (i > 3 || i < 0 || j > 2 || j < 0 || cel[i][j] == -1)
				allTrue = false;
			num /= 10;
		}
		if (allTrue) {
			similar = true;
		}
	}
	if (similar)
		cout << "NO";
	else
		cout << "YES";
}