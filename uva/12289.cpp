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
	while (n--) {
		string s;
		cin >> s;
		if (s.length() == 5)
			cout << 3;
		else {
			int cnt = 0;
			if (s[0] == 'o') cnt++;
			if (s[1] == 'n') cnt++;
			if (s[2] == 'e') cnt++;

			if (cnt >= 2)
				cout << 1;
			else
				cout << 2;
		}
		cout << endl;
	}
}