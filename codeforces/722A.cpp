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
	int format;
	cin >> format;
	string t;
	cin >> t;
	int hours = std::stoi(t.substr(0, 2));
	int minutes = std::stoi(t.substr(3, 2));
	if (format == 24) {
		if (hours > 23) {
			cout << 0 << hours%10;
		}
		else
			cout << (hours/10)%10 << hours%10;
		cout << ":";
		if (minutes > 59) {
			cout << 0 << minutes%10;
		}
		else
			cout << (minutes/10)%10 << (minutes)%10;
	}
	else {
		if (hours > 12) {
			if (hours%10 == 0) {
				cout << 10;
			}
			else
				cout << 0 << hours%10;
		}
		else if (hours == 0) {
			cout << 0 << 1;
		}
		else
			cout << (hours/10)%10 << hours%10;
		cout << ":";

		if (minutes > 59) {
			cout << 0 << minutes%10;
		}
		else
			cout << (minutes/10)%10 << (minutes)%10;
	}
}