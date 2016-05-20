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
	std::vector<long long> arr(n);
	forn(i,n) cin >> arr[i];
	sort(arr.begin(), arr.end());
	int left = 0;
	int right = n-1;
	int count = 0;
	while (left < right) {
		if (arr[left] == 0) {
			left++;
			continue;
		}
		int debt = arr[left];
		while (left < right) {
			count++;
			if (abs(right) > abs(left)) {
				arr[right] += debt;
				arr[left] = 0;
				break;
			}
			else {
				arr[right] = 0;
				arr[left] += arr[right];
				right--;
			}
		}
		left++;
		//cout << "Hi";
	}

	cout << count;
}