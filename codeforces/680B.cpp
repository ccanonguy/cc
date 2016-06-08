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
	int n,a;
	cin >> n >> a;
	a--;
	int t[n];
	forn(i, n) cin >> t[i];

	int leftMax = a;
	int rightMax = n-1-a;
	int count = 0;
	int maxDis = (leftMax > rightMax) ? leftMax : rightMax;
	forn (i, maxDis + 1) {
		if ((a-i) >= 0 && (a+i) < n) {
			if (t[a-i] == 1 && t[a+i]== 1) {
				if (i == 0)
					count++;
				else
					count += 2;
			}
		}
		else if((a-i) >= 0 && (a+i) >= n) {
			if (t[a-i] == 1) count++;
		}
		else if ((a+i) < n) {
			if (t[a+i] == 1) count++;
		}
	}

	cout << count;
}