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

int r, c;
vector < string > mat;

int main() {
	cin >> r >> c;
	bool visited[r][c] = {false};
	mat.resize(r);
	forn (i, r) {
		cin >> mat[i];
	}

	ll count = 0;
	forn (i, r) {
		forn (j, c) {
			if (mat[i][j] == 'B' && !visited[i][j]) {
				count++;
				stack< pair<int, int> > s;
				s.push(make_pair(i, j));
				while (!s.empty()) {
					auto now = s.top();
					s.pop();
					int dirX[] = {1, -1, 0, 0};
					int dirY[] = {0, 0, 1, -1};
					int newI, newJ;
					for (int x=0; x<4; x++) {
						newI = now.first + dirY[x];
						newJ = now.second + dirX[x];
						if (newI >= 0 && newJ >=0 && newI < r && newJ < c) {
							if (mat[newI][newJ] == 'B' && !visited[newI][newJ]) {
								s.push(make_pair(newI, newJ));
							}
							visited[newI][newJ] = true;
						}
					}
				}
			}
			visited[i][j] = true;
		}
	}
	cout << count;
}