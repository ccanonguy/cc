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
	forn (i, n) cin >> arr[i];
	sort(arr.begin(), arr.end());
	int i = 0;
	arr[i] = 1;
	while (i<n) {
		int j = i;
		while (i+1<n && arr[i+1] == arr[i])
			i++;
		if (i+1 < n)
		arr[i+1] = arr[i] + 1;
		i++;
	}
	cout << arr[n-1] +1;
}