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
	int prime[15]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	bool isPrime = true;
	bool canBe = false;
	forn(i, 15) {
		cout << prime[i] << endl;
		fflush(stdout);
		string ans;
		cin >> ans;
		if (ans == "yes") {
			if (canBe) {
				isPrime = false;
				break;
			}
			else canBe = true;
		}
	}

	int check[4] = {4, 9, 25, 49};
	if (isPrime) {
		forn (i, 4) {
			cout << check[i] << endl;
			fflush(stdout);
			string ans;
			cin >> ans;
			if (ans == "yes") {
				isPrime = false;
				break;
			}
		}
	}

	if (isPrime)
		cout << "prime" << endl;
	else
		cout << "composite" << endl;
	fflush(stdin);
}