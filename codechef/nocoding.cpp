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

ll mod(ll a, ll b) {
	return (a%b +b)%b;
}

int main() {
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int buffer = mod(s[0] - 'a' - 1, 26);
		int instructions =0;
		//	cout << instructions << " " << buffer << endl;

		fore(i, 1, s.length()) {
			instructions += mod((ll)(s[i] - 'a' - buffer - 1),26);
			buffer = mod((ll)(s[i] - 'a' - 1),26);
		//	cout << instructions << " " << buffer << endl;
		}
		instructions += 1 + s.length();
		if (instructions <= 11*s.length()) {
			cout << "YES";
		}
		else cout << "NO";
		cout << endl;
	}
}