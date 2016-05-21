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

class TheSquareDivTwo {
public:
	vector<string> solve (std::vector<string> board) {
		int n = board.size();
		vi r(n);
		std::vector<string> c(n);
		//forn (i, n) c[i] = '';
		forn(i, n) {
			//r[i] = 0;
			int dotMarker = 0;
			int cMarker = n-1;
			forn(j, n) {
				if (board[i][j] == 'C') {
					c[cMarker] += 'C';
					cMarker--;
					//cout << "Hi"; 
				} //r[i]++;
				else {
					c[dotMarker] += '.';
					dotMarker++;
				}
			}
		}
		//forn(i, n) cout << c[i] << endl;
		return c;
	}
};
