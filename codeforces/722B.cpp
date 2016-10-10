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
	vi pattern(n);
	forn (i, n) {
		cin >> pattern[i];
	}

	int i=0;
	string t;
	bool match = true;
	getline(cin, t);
	while (getline(std::cin, t)) {
		istringstream ss(t);
		string check;
		int count = 0;
		while (ss >> check) {
			for (int j=0; j<check.length(); j++) {
				if (check[j] == 'a' || check[j] == 'e' || check[j] == 'i' || check[j] == 'o' || check[j] == 'u' || check[j] == 'y')
					count++;
			}
		}
		if (count != pattern[i]) {
			match = false;
		}
		i++;
		if (i == n)
			break;
	}

	if (match) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}