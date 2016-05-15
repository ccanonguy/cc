#include <bits/stdc++.h>
using namespace std;

class ShorterSuperSum {
public:
	int calculate(int k, int n) {
		std::map<pair<int, int>, int> dp;
		for (int i=1; i<=n; i++) {
			dp[make_pair(0, i)] = i;
		}

		for (int i=1; i<=k; i++) {
			for (int j=1; j<=n; j++) {
				dp[make_pair(i,j)] = 0;
				for (int ii=1; ii<=j; ii++) {
					dp[make_pair(i,j)] += dp[make_pair(i-1, ii)];
					//cout << i-1 << " " << ii << " " <<  dp[make_pair(i-1, ii)] << endl ;
				}
				//cout << i << " " << j << " " <<  dp[make_pair(i, j)] << endl ;
			}
		}

		return (int)dp[make_pair(k,n)];
	}
};

int main() {
	ShorterSuperSum a;
	int k,n;
	while (cin >> k >> n)
	cout << a.calculate(k,n) << endl;
}