#include <bits/stdc++.h>
using namespace std;

int main () {
	int k;
	while (cin >> k) {
		if (k == 0) break;
		int n,m;
		cin >> n >> m;

		while (k--) {
			int x,y;
			cin >> x >> y;
			x = x-n;
			y = y-m;

			if (x == 0 || y == 0) {
				cout << "divisa";
			}
			else if (x > 0 && y > 0) {
				cout << "NE";
			}
			else if (x > 0 && y < 0) {
				cout << "SE";
			}
			else if (x < 0 && y > 0) {
				cout << "NO";
			}
			else if (x < 0 && y < 0) {
				cout << "SO";
			}
			cout << endl;
		}
 	}
}