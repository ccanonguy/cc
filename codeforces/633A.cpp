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
	int a, b, c;
	cin >> a >> b >> c;
	string breaks = "No";
	int i = 0;
	while (c-a*i >= 0) {
		if ((c - a*i)%b == 0) {
			breaks = "Yes";
			break;
		}
		i++;
	}

	cout << breaks;
}