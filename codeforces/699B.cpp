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
	cin >> n >> m;
	set<int> r;
	set<int> c;
	forn (i, n) {
		forn (j, m) {
			char k;
			cin >> k;
			if (k == '*') {
				cout << "hi";
				r.insert(i);
				c.insert(j);
			}
		} 
	}
	cout << r.size();
	if (r.size() == 1 && c.size() == 1) {
		cout << "YES" << endl;
		auto itr = r.begin();
		auto itc = c.begin();
		cout << *itr + 1 << " " << *itc + 1;
	}
	else {
		cout << "NO";
	}
}