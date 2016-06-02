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
	cout << std::fixed;
	cout.precision(2);
	int n;
	while (cin >> n) {
		if (n == 0) break;
		std::vector<double> v(n);
		double avg = 0;
		forn (i, n) {
			cin >> v[i];
			avg += v[i];
		}

		avg /= n;

		avg = round(avg*100)/100;
		double ans1 = 0, ans2 = 0;
		forn (i, n) {
			if (v[i] > avg) {
				ans1 += v[i] - avg;
			}
			else {
				ans2 += avg - v[i];
			}
		}

		cout << "$";
		if (ans2 < ans1)
			cout << ans2;
		else
			cout << ans1;

		cout << endl;
	}
}