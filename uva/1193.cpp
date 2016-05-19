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

struct Interval {
	double left, right;
	Interval(double left, double right) {
		this->left = left;
		this->right = right;
	}

	bool operator < (const Interval &i) const {
		return (if ())
	}
};

int main() {
	int n,d;
	int case = 1;
	while (cin >> n >> d) {
		if (n == 0 && d == 0) break;
		int x[n], y[n];
		forn(i, n) cin >> x[i] >> y[i];

		int count = 0;
		int okay = true;
		forn(i, n) {
			if (d < y[i]) {
				cout << "Case " << case << ": " << -1 << endl;
				okay = false;
				break;
			}
			else {

			}
		}
		if (!okay) continue;


		case++;
	}
}