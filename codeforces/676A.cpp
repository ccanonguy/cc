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
	int maxPos = n;
	int minPos = 1;
	int arr[n];
	forn(i, n) {
		cin >> arr[i];

		if (arr[i] == 1) minPos = i+1;
		else if (arr[i] == n) maxPos = i+1;
	}

	int maxDistance = max(minPos - 1, n - minPos);
	maxDistance = max(maxDistance, n - maxPos);
	maxDistance = max(maxDistance, maxPos - 1);

	cout << maxDistance;
}