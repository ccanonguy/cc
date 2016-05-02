#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int p, k;
		cin >> p >> k;
		for (int i=0; i<p; i++) {
			cout << (i+1)*(k+1) << " ";
		}
		cout << endl;
	}
}
