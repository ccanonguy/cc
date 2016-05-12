#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string a;
	cin >> n >> a;
	if (n > 26) {
		cout << "-1";
		return 0;
	}
	else {
		int ans = 0;
		map<char, int> arr;
		for (int i=0; i < n; i++) {
			if (arr.count(a[i]) > 0) ans++;
			else {
				arr[a[i]] = 1;
			}
		}
		cout << ans;
	}
}