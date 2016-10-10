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
	int r, c;
	cin >> r >> c;
	string s;
	forn (i, r)
		cin >> s;

	int a=0;
	int count = 0;
	forn(i, c) {
		if (s[i] == 'B') {
			if (a == 0) {
				count++;
				a = 1;
			}
		}
		else
			a = 0;
	}	
	cout << count;
}