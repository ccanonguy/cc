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
	int field = 1;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) break;
		if (field != 1) cout << endl;
		char mine[n][m];

		forn (i, n) {
			forn(j, m) {
				cin >> mine[i][j];
			}
		}

		char ans[n][m];
		int dirX[8] = {1, -1, 0, 0, -1, -1, 1, 1};
		int dirY[8] = {0, 0, 1, -1, 1, -1, 1, -1};
		forn(i, n) {
			forn(j, m) {
				if (mine[i][j] == '*') {
					ans[i][j] = '*';
				}
				else {
					ans[i][j] = '0';
					forn(k, 8) {
						int newI = i+dirX[k];
						int newJ = j+dirY[k];
						if (newI >=0 && newI < n && newJ >=0 && newJ < m) {
							if (mine[newI][newJ] == '*')
								ans[i][j] = int(ans[i][j]) + 1;
						}
					}
				}
			}
		}

		cout << "Field #" << field << ":" << endl;
		forn(i, n) {
			forn(j, m) {
				cout << ans[i][j];
			}
			cout << endl;
		}
		//cout << endl;
		field++;
	}
}