#include <bits/stdc++.h>
using namespace std;

int main () {
	int h1, h2, a, b;
	cin >> h1 >> h2 >> a >> b;
	if ((h1 + a*8) >= h2) {
		cout << 0;
		return 0;
	}

	if(a<=b) {
		cout << -1;
		return 0;
	}

	int height = h1 + a*8;
	int days = (h2 - height)/(12*(a-b));
	days += ((h2 - height)%(12*(a-b)) == 0) ? 0 : 1;

	cout << days;
}