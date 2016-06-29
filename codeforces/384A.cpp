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
	cin >> n;
	int k = ceil(n/2.0);
	if (n%2) {
		cout << k*k + (k-1)*(k-1);
	}
	else {
		cout << k*n;
	}
	cout << endl;

	forn(i, n) {
		forn (j, n) {
			if (i%2 == 0) {
				if (j%2 == 0)
					cout << "C";
				else 
					cout << ".";
			}
			else {
				if (j%2 == 1)
					cout << "C";
				else 
					cout << ".";
			}
		}
		cout << endl;
	}
}