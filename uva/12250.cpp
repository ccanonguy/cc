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
	int cas = 1;
	while (1) {
		string s;
		cin >> s;
		if (s == "#")
			break;
		cout << "Case " << cas << ": ";
		if (s == "HELLO") {
			cout << "ENGLISH";
		}
		else if(s == "HOLA") {
			cout << "SPANISH";
		}
		else if (s == "HALLO") {
			cout << "GERMAN";
		}
		else if (s == "BONJOUR") {
			cout << "FRENCH";
		}
		else if (s == "CIAO") {
			cout << "ITALIAN";
		}
		else if (s == "ZDRAVSTVUJTE"){
			cout << "RUSSIAN";
		}
		else 
			cout << "UNKNOWN";
		cout << endl;
		cas++;
	}
}