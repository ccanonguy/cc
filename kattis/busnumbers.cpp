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
	int arr[n];
	forn (i,n) cin >> arr[i];
	sort(arr, arr+n);
	string s;
	int i = 0;
	while(i<n) {
		int next = arr[i]+1;
		int j = i+1;
		int count = 1;
		while(j<n) {
			if (arr[j] == next) {
				next++;
				count++;
				//cout << arr[j];
				j++;
			}
			else
				break;
		}
		//cout << j << endl;
		if (count > 2) {
			s += to_string(arr[i]) + '-' + to_string(arr[j-1]) + ' ';
		}
		else if (count == 2) {
			s += to_string(arr[i]) + ' ' + to_string(arr[i+1]) + ' ';
		}
		else {
			s += to_string(arr[i]) + ' ';
		}
		i = j;
	}
	cout << s;
}