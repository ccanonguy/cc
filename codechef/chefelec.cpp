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
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string elec;
		cin >> elec;
		ll dist = 0;
		int i = 0;
		std::vector<ll> dis(n);
		forn(i,n)
			cin >> dis[i];
		while(i<n) {
			int j = i;
			if (elec[i] == '1') {
				while (i<n && elec[i] == '1')
					i++;
			}
			else {
				while (i<n && elec[i] == '0')
					i++;
				dist += dis[i-1] - dis[j];
				if (i == n)
					dist += dis[j] - dis[j-1];
				else if (j == 0)
					dist += dis[i] - dis[i-1];
				else
					dist += ((dis[j] - dis[j-1]) > (dis[i] - dis[i-1])) ? dis[i] - dis[i-1] : dis[j] - dis[j-1];
			}
		}
		cout << dist << endl;
	}
}