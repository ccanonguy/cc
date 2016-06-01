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

struct node
{
	int x,y;
};

int main() {
	int n;
	cin >> n;
	node point[n];
	forn(i, n) { 
		cin >> point[i].x >> point[i].y;
	}

	if (n == 1)
		cout << -1;
	else {
		if (n == 2 && (point[0].x == point[1].x || point[0].y == point[1].y)) {
			cout << -1;
		}
		else {
			int ans = 0;
			if (n == 2) {
				ans = abs(point[0].x - point[1].x)*abs(point[0].y - point[1].y);
				cout << ans;
			}
			else {
				int x, y;
				//node now = point[0];
				fore(i, 1, n) {
					if (point[0].x != point[i].x) {
						x = abs(point[0].x - point[i].x);
					}
					if (point[0].y != point[i].y) {
						y = abs(point[0].y - point[i].y);
					}
				}
				ans = x*y;
				cout << ans;
			}
		}
	}
}