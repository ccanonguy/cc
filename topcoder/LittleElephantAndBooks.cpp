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

class LittleElephantAndBooks {
public:
	int getNumber(vector <int> pages, int number) {
		sort(pages.begin(), pages.end());
		int sum = 0;
		forn(i, n-1) {
			sum += pages[i];
		}
		sum += pages[n];
		return sum;
	}
};