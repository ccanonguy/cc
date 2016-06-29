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
	int n;
	int rA = n/1234567;
	int rB = n/123456;
	cin >> n;
	bool found1 = false;
	forn(i, rA+1) {
		forn(j, rB+1) {
			int check = n - i*1234567 - j*123456;
			if (check%1234 == 0 && check >= 0) {
				found1 = true;
				break;
			}
		}
		if (found1)
			break;
	}

	if (found1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}