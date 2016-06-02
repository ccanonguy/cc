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
	int n, k, h;
	cin >> n >> h >> k;
	vi arr(n);
	forn (i, n) cin >> arr[i];

	int i=0, time = 0;
	int pot = 0;
	/*while (i < n) {
		int j= i+1;
		while (j<n && (pot+arr[j]) <= h) {
			pot += arr[j];
			j++;
		}
		if (pot >= k) pot -= k;
		else pot = 0;
		time++;
		cout << i << endl;
		i = j;
	}*/

	while (true) {
		//if ((pot + arr[i]) <= h && i<n) {
		while (i < n && (pot + arr[i]) <= h) {
			pot += arr[i];
			i++;
		}
		//}
		//cout << pot << endl;
		if (pot >= k) pot -= k;
		else pot = 0;
		//cout << i << endl;
		time++;
		if (i > n-1 && pot == 0) break;
	}

	cout << time;
}	