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
	setprecision(6);
	cout.precision(6);
	cout << fixed;
	int t;
	cin >> t;
	while (t--) {
		int n,m;
		cin >> n >> m;
		double prob = 1.0;
		double matrix[n+1][m+1];
		matrix[1][1] = 1;
		fore (i, 2, m+1) {
			if (n > 1) {
				matrix[1][i] = matrix[1][i-1]/2.0;
			}
			else {
				matrix[1][i] = matrix[1][i-1];
			}
			prob += matrix[1][i];
		}

		fore (i, 2, n+1) {
			if (m > 1) {
				matrix[i][1] = matrix[i-1][1]/2.0;
			}
			else
				matrix[i][1] = matrix[i-1][1];
			prob += matrix[i][1];
		}

		fore(i, 2, n+1) {
			fore(j, 2, m+1) {
				if (j == m && i == n) {
					matrix[i][j] = matrix[i-1][j] + matrix[i][j-1];
				}
				else if (j == m) {
					matrix[i][j] = matrix[i-1][j] + matrix[i][j-1]/2.0;
				}
				else if(i == n) {
					matrix[i][j] = matrix[i-1][j]/2.0 + matrix[i][j-1];
				}
				else {
					matrix[i][j] = matrix[i-1][j]/2.0 + matrix[i][j-1]/2.0;
				}
				//cout << i << " " << j << " " << matrix[i][j] << endl;
				prob += matrix[i][j];
			}
		}

		/*fore(i, 1, n+1) {
			fore(j, 1, m+1) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}*/
		//cout << matrix[1][2] + matrix[2][1];
		cout << prob << endl;
	}
}

//tle