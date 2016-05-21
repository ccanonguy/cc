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
	int t, x, y;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		int start = x+y+1;

		while (true) {
			bool isPrime = true;
			fore(i, 2, ceil(sqrt(start)) + 1) {
				if (start%i == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime) {
				cout << start -x-y << endl;
				break;
			}
			start++;
		}
	}
}