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
	char s;
	map<char, bool> ss;
	for (char t='a'; t <= 'z'; t++) {
		ss[t] = false;
	}
	int dist = 0;
	while (cin >> s) {
		if (!ss[s]) {
			dist++;
			ss[s] = true;
		}
	}
	if (dist%2)
		cout << "IGNORE HIM!";
	else
		cout << "CHAT WITH HER!";
}