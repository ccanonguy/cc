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
	ll arr[n];
	forn (i, n) cin >> arr[i];
	bool swapped = false;
	while (1) {
		swapped = false;
		forn (i, n-1) {
			if (arr[i+1] < arr[i]) {
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				cout << i +1 << " " << i+2 << endl;
				swapped = true;
			}
		}

		if (!swapped) 
			break;
	}
}