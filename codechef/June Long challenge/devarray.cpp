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
	int n,q;
	cin >> n >> q;
	int arr[n];
	int minElem = INF + 1, maxElem = -1;
	forn(i, n) {
		cin >> arr[i];
		if (arr[i] > maxElem) {
			maxElem = arr[i];
		}

		if (arr[i] < minElem) {
			minElem = arr[i];
		}
	}
	forn(i, q) {
		int t;
		cin >> t;
		if (t >= minElem &&  t<=maxElem) {
			cout << "Yes";
		}
		else {
			cout << "No";
		}
		cout << endl;
	}
}