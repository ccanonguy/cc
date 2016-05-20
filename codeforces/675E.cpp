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
	int n;
	cin >> n;
	int arr[n];
	int sum = 0;
	int rho[n][n+1];
	forn(i,n) {
		forn(j,n+1) {
			rho[i][j] = 0;
		}
	}
	//bool visited[n][n+1] = {false};
	fore(i, 1, n) {
		cin >> arr[i];
		for (int j=i+1; j<=arr[i]; j++) {
			rho[i][j] = 1;
	//		visited[i][j] = true;
			sum++;
		}
	}
	//cout << sum;

	for (int j=n; j>=3; j--) {
		for (int i=j-2; i>=1; i--) {
			if (!rho[i][j]) {
				int mini = rho[arr[i]][j];
				for (int k=i+1; k<arr[i]; k++) {
					mini = min(mini, rho[k][j]);
				}
				rho[i][j] = 1 + mini;
				//cout << i << " " << j << " " << rho[i][j] << endl;
				sum += rho[i][j];
				//visited[i][j] = true;
			}
		}
	}

	cout << sum;
}


//memory limit exceeded