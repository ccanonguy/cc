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
	int n, d;
	cin >> n >> d;
	int maxCount = 0;
	int count = maxCount;
	while (d--) {
		string s;
		cin >> s;
		bool isAbsent = false;
		forn (i, n) {
			if (s[i] == '0') {
				isAbsent = true;
				break;
			}
		}

		if (isAbsent)
			count++;
		else
			count=0;

		if (count > maxCount)
			maxCount = count;
	}
	cout << maxCount;
}