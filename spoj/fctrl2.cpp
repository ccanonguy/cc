#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
			long long int n;
			cin >> n;
			unsigned long long int ans=1;
			while (n--) {
				ans *= (n+1);
			}
			cout << ans << endl;
	}
}
