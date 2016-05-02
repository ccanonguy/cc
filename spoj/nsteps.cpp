#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while (t--) {
		int x,y;
		cin >> x >> y;
		if (y == x) {
			if (y%2 == 1) cout << (y-1)*2 + 1;
			else cout << 2*y;
		}
		else if (y == (x-2)) {
			if (y%2 == 1) cout << 2*(y+1) + 1;
			else cout << 2*(y+1);
		}
		else {
			cout << "No Number";
		}
		cout << endl;
	}
}
