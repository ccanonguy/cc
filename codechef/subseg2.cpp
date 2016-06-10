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

bool comp(const ii &i, const ii &j) {
	if (i.second == j.second) {
		return i.first > j.first;
	}
	else {
		return i.second > j.second;
	}
}

int main() {
	int n, q;
	cin >> n >> q;
	ii * plan;
	plan = new ii [n];
	forn (i, n) {
		int a, b;
		cin >> a >> b;
		plan[i] = mp(a, b);
	}

	sort(plan, plan+n, comp);

	forn (i, q) {
		int start, end;
		cin >> start >> end;
		int j = 0, ans = 0;
		while (j < n) {
			if (plan[j].second <= end) {
				if (plan[j].first >= start) {
					end = plan[j].first - 1;
					ans++;
				}
				else {
					break;
				}
			}
			j++;
		}
		cout << ans << endl;
	}
}