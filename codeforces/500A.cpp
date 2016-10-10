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

int n, t;

int main() {
	cin >> n >> t;
	vi con(n-1);
	forn(i, n-1) {
		int x;
		cin >> x;
		con[i] = i+x;
	}
	int start = 0;
	t--;
	bool found = false;
	forn (i, n) {
		if (start == t)
			found = true;
		else if (start > t)
			break;
		start = con[start];
	}
	if (found)
		cout << "YES";
	else
		cout << "NO";
}