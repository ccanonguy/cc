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
	int arr[5];
	ll sum = 0;
	forn(i, 5) {
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr, arr+5);

	int last = arr[4];
	int count = 1;
	ll min = sum;
	for (int i=3; i>=0; i--) {
		if (arr[i] == last && count <3) {
			count++;
			ll minNow = sum - arr[i]*count;
			if (min > minNow) min = minNow;
		}
		else {
			last = arr[i];
			count = 1;
		}
	}

	cout << min;
}