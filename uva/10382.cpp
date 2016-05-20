#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


#define INF 1000000000
#define EPS 1e-7
#define fore(i, l, n) for (int i=int(l); i<n; i++)
#define forn(i, n) fore(i, 0, n)
#define pb push_back
#define	mp make_pair	

int n;
double l, w;

struct node {
	int pos;
	double x, y, r;
	bool possible;
	node () {}
	node (int pos, int r) {
		this->pos = pos;
		this->r = r;
		this->possible = true;
		if (w <= 2*r) {
			double d = sqrt(r*r - (w*w)/4);
			this->x = pos - d;
			this->y = pos + d;
		}
		else {
			possible = false;
			this->x = -1;
			this->y = -1;
		}
	}

	bool operator < (const node &i) const {
		return (i.x == x) ? (y > i.y) : (x < i.x) ;
	}
};

std::vector<node> sprink;

int main() {
	std::cout.precision(5);
	int ca = 1;
	while (cin >> n >> l >> w) {
		sprink.resize(n);
		forn(i,n) {
			int p,r;
			cin >> p >> r;
			sprink[i] = node(p, r);
		}

		sort(sprink.begin(), sprink.end());

		/*if (ca == 260) {
			cerr << endl << endl << endl;
			cout << "*******************************";
			cout << n << " " << l << " " << w;
			forn(i, n) {
				cout << sprink[i].pos << " " << sprink[i].r << " " << sprink[i].x << " " << sprink[i].y << endl;
			}
			cout << "*******************************";
		}

		/*forn(i, n) {
			cout << sprink[i].x << " " << sprink[i].y << endl;
		}*/

		int j = 0, count = 0;
		bool found = false;
		double leftEnd = -INF, rightEnd = INF; 
		while (j < n) {
			if (sprink[j].possible) {
				if (sprink[j].x <= 0) {
					leftEnd = sprink[j].x;
					rightEnd = sprink[j].y;
					while (j < n && sprink[j].x <= EPS) {
						if (sprink[j].y > rightEnd) {
							leftEnd = sprink[j].x;
							rightEnd = sprink[j].y;
						}
						j++;
					}
					found = true;
				}
				else if (found) {
					found = false;
					double initRightEnd = rightEnd;
					while (j < n && (sprink[j].x - initRightEnd) <= EPS) {
						if (sprink[j].y > rightEnd) {
							leftEnd = sprink[j].x;
							rightEnd = sprink[j].y;
							found = true;
						}
						j++;
					}
				}
				else break;
			}
			else {
				j++;
				continue;
			}
			if (found) count++;
			else break;

			//if (ca == 260) cout << leftEnd << " " << rightEnd << " " << found;
			if (rightEnd >= l) break;
		}

		if (rightEnd < l) found = false;

		if (found) cout << count << endl;
		else cout << -1 << endl;
		ca++;
	}
}