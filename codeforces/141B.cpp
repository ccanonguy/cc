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

int rows[7];

int main() {
	rows[0] = 1;
	rows[1] = 1;
	rows[2] = 2;
	rows[3] = 1;
	rows[4] = 2;
	rows[5] = 1;
	rows[6] = 2;
	int a, x, y;
	cin >> a >> x >> y;
	int rowNum = y/a;
	if (rowNum*a == y) {
		cout << -1;
		return 0;
	}
	int col;
	if (rowNum == 2 || rowNum == 4 || rowNum == 6) {
		if (x < a && x > -a && x != 0) {
			if (x>a) {
				col = 2;
			}
			else {
				col = 1;
			}
		}
		else {
			cout << -1;
			return 0;
		}
	}
	else {
		if (float(x) < a/2.0 && float(x) > -a/2.0) {
			col = 0;
		}
		else {
			cout << -1;
			return 0;
		}
	}
	int bulk = (rowNum+1)/7;
	bulk *= 10;
	for(int i=0; i<rowNum%7; i++) {
		bulk += rows[i];
	}
	if (col) {
		bulk += col;
	}
	else {
		bulk +=1;
	}
	cout << bulk;
}


//wrong logic