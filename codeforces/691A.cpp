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
	int but[n];
	int ans = 0;
	forn (i, n) {
		cin >> but[i];	
		if (but[i] == 0){
			ans++;
		}
	}
	if (n == 1) {
		if (ans == 0) {
			cout << "YES";
		}
		else 
			cout << "NO";
	}
	else if (ans == 1) {
		cout << "YES";
	}
	else
		cout << "NO";
}