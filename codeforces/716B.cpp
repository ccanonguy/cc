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
	string s, ans;
	cin >> s;
	int l = s.length();
	if (l < 26) {
		cout << -1;
		return 0;
	}
	bool found = false;
	forn (i, l) { //get substring at starting at each character and check if all the letters are unique
		map <char, bool> t;
		for(int j=i; i<26; i++) { // substring
			if (j < l) { // condition for checking bound else it just breaks
				if (!t[s[j]]){ // if the letter is not repeated else set ans to empty string and break the
					if (s[j] != '?') { // ignore '?' but preserve the order
						t[s[j]] = true;
					}
					ans += s[j];
				}
				else {
					ans = '';
					break;
				}
			}
			else
				break;
		}

		if (ans.length() == 26){ // found nice substr
			
		}
	}
}