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
	vi arr(n);
	forn(i, n) {
		cin >> arr[i];
	}
	int money = arr[0], ans = 0, i = 0;
	while (i<n) {
		int j = i+1;
		int ansNow = 1;
		while (j<n && arr[j] >= arr[j-1]) {
			ansNow++;
			j++;
		}
		i = j;
		if (ansNow > ans) ans = ansNow;
	}
	cout << ans;
}