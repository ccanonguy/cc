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
	string s, a = "", b = "", d = "";
	cin >> s;
	int i = 0;
	int n = s.length();
	while (i < n && s[i] != '.') {
		a += s[i];
		cout << s[i];
		i++;
	}
	//cout << a;
	i++;
	int j = n - 1;
	while (j >= 0 && s[j] != 'e') {
		b = s[j] + b;
		j--; 
	}
	//cout << b;
	int shift = stoi(b);
	while (i < j && shift) {
		//d += s[i];
		cout << s[i];
		i++;
		shift--;
	}

	while (shift) {
		cout << "0";
		shift--;
	}
	while (i < j) {
		d += s[i];
		//cout << s[i];
		i++;
	}
	//cout << "hi"<< d << "hi" << endl; 
		if (d != "0" && d != "") {
			cout << ".";
			cout << d;
		}
}