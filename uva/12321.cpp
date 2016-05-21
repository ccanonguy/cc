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

/*struct Interval
{
	int left, right, pos;
	Interval() {}
	Interval(int x, int r) {
		this->pos = x;
		this->left = x-r;
		this->right = x+r;
	}

	bool operator < (const Interval &a) const {
		return (left == a.left) ? right > a.right : left < a.left ;
	}
};*/

bool comp(ii &a, ii &b) {
	if (a.first != b.first) return a.first < b.first;
	return a.second > b.second;
}

int main() {
	int l,g;
	ii inter[10000];
	while (cin >> l >> g) {
		if (l == 0 && g == 0) break;
		//Interval *inter[g];
		forn(i,g) {
			int x,r;
			cin >> x >> r;
			inter[i] = mp(x-r, x+r);
		}

		sort(inter, inter+g, comp);
		int pos=0, i=0, ans = g;
		while (pos < l) {
			int newPos = pos;

			while (i<g && inter[i].first <= pos) {
				newPos = max(newPos, inter[i].second);
				i++;
			}

			if (newPos == pos) break;

			pos = newPos;
			--ans;
		}
		
		if (pos < l)
			cout << -1;
		else 
			cout << ans;

		cout << endl;
	}
}