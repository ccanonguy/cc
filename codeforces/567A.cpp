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
	vi cities;
	cin >> n;
	cities.resize(n);
	forn(i, n) cin >> cities[i];
	cout << cities[1] - cities[0] << " " << cities[n-1] - cities[0] << endl;

	fore(i, 1, n-1) {
		int maxNow = abs(cities[n-1] - cities[i]);
		int possibleMax = abs(cities[0] - cities[i]);
		if (possibleMax > maxNow) maxNow = possibleMax;

		int minNow = abs(cities[i+1] - cities[i]);
		int possibleMin = abs(cities[i-1] - cities[i]);
		if (possibleMin < minNow) minNow = possibleMin;

		cout << minNow << " " << maxNow << endl;
	}

	cout << cities[n-1] - cities[n-2] << " " << cities[n-1] - cities[0] << endl;
}