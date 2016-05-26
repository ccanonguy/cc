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

double glasses[56] = {0};

void updateGlasses(int lastIndex, int row, double last) {
	if (glasses[lastIndex] >= 1) {
		//cout << lastIndex+row << " ";
		updateGlasses(lastIndex+row, row+1, last/2.0);
		//updateGlasses(lastIndex+row + 1, row+1, last/2.0);
	}
	else {
		//cout << lastIndex << " ";
		glasses[lastIndex] += last;
		glasses[lastIndex + 1] += last;
	}
}

int main() {
	glasses[1] = 1;
	int n, t;
	cin >> n >> t;

	if (t == 0) {
		cout << 0;
		return 0;
	}
	else if (t==1) {
		cout << 1;
		return 0;
	}
	int row = log2(t);
	int full = (row*(row+1)/2);

	if (row >= n) {
		cout << n*(n+1)/2;
		return 0;
	}
	t--;
	int start = full+1;
	while (t--) {
		updateGlasses(1, 1, 1.0);
	}

	fore(i, 1, 56) cout << glasses[i] << " "; 
}