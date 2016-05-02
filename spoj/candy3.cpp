#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int n;
		cin >> n;
		long long int sum = 0;
		for (int i=0; i<n; i++) {
			long long int candy;
			cin >> candy;
			sum += candy%n;
			if (sum > n) sum %= n;
		}
		sum %= n;
		
		if (sum != 0) {
			cout << "NO";
		}
		else {
			cout << "YES";
		}
		cout << endl;
	}
}
