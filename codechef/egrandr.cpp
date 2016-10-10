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
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		double sum = 0;
		bool fail = false;
		bool full = false;
		int score;
		forn(i, n) {
			cin >> score;
			if (score == 5)
				full = true;
			if (score == 2) {
				fail = true;
			}
			sum += score;
		}
		sum /= n;
		if (full && sum >= 4 && !fail) {
			cout << "Yes";
		}
		else
			cout << "No";
		cout << endl;
	}
}