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

class SkiResortsEasy {
public:
	int minCost(vector <int> altitude) {
		int sum = 0;
		fore(i, 1, altitude.size()) {
			if (altitude[i] > altitude[i-1]) {
				sum += altitude[i] - altitude[i-1];
				altitude[i] = altitude[i-1];
			}
		}
		return sum;
	}
};

int main () {
	SkiResortsEasy a;
	cout << a.minCost({749, 560, 921, 166, 757, 818, 228, 584, 366, 88});
}