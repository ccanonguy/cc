#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	long long dp[1001];
	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 5;
	dp[3] = 13;
	for (int i=4; i<=1000; i++) {
		dp[i] = 2*dp[i-1] + dp[i-2] + dp[i-3];
	}
	while (cin >> n) {
		cout << dp[n] << endl;
	}
}