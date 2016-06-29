#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long ans = n*567/9 + 7492;
		ans *= 5;
		ans -= 498;
		cout << int ((abs(ans)%100)/10) << endl;
	}
}