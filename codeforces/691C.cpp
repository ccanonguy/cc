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
	string s;
	cin >> s;
	int n = s.length();
	queue <string> nums;
	int start = 0;
	int end = n-1;
	while (s[start] == 0)
		start++;
	while (s[end == 0])
		end--;
	n = end - start + 1;
	ll e = 0;
	for (int i=start; i<=end; i++) {
		e++;
		if (s[i] == ".") {
			e--;
			continue;
		}
		nums.push(s[i]);
	}
	cout << 
}