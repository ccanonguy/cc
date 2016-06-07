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
	forn(i, n) {
		ll temp;
		cin >> temp;
		ll cal = temp;
		int digits = 0;
		while (cal) {
			digits++;
			cal /= 10;
		}
		if (temp == 1 || temp == 4 || temp == 78) {
			cout << "+";
		}
		else if (temp%100 == 35 && digits > 2) {
			cout << "-";
		}
		else if (temp%10 == 4 && int(temp/pow(10, digits-1)) == 9 && digits > 2) {
			cout << "*";
		}
		else {
			cout << "?";
		}
		cout << endl;
	}
}