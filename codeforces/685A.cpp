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
	int n,m;
	cin >> n >> m;
	size_t a = 1, b = 1;
	for (int i = 7; i<n; i *= 7) {
		a++;
	}
	for (int i = 7; i<m; i *= 7) {
		b++;
	}

	int ans = 0;

	if(a+b <= 7) {
		forn(i, n) {
			forn(j, m) {
				std::vector<size_t> v(7, 0);

				for (int k=i, t=0; t<a; k /= 7, t++)
					v[k%7]++;
				for (int k=j, t=0; t<b; k/=7, t++)
					v[k%7]++;

				if (*max_element(v.begin(), v.end()) <= 1)
					ans++;
			}
		}
	}

	cout << ans;
}
