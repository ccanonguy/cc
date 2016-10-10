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

int n;
int *shor;
int main() {
	cin >> n;
	shor = new int[n];
	for (int i=0; i<n; i++) {
		cin >> shor[i];
	}
	cerr << 0 << " ";
	for (int j = 2; j<=n; j++) {
		int curPos = 1;
		int energy = 0, curEnergy = 0;
	}
}