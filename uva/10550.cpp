#include <bits/stdc++.h>
using namespace std;

int main () {
	while (true) {
		int init, a, b, c;
		cin >> init >> a >> b >> c;
		if (a == 0 && init == 0 && b == 0 && c == 0) {
			break;
		}
		double ans = 1080;
		double steps = 9;

		a = a - init;
		if (a < 0) a = 40+a;
		b = b - init;
		if (b < 0) b = 40+b;
		c = c - init;
		if (c < 0) c = 40+c;
		ans += (40-a)*steps;
		b = b - a;
		if (b < 0) b = 40+b;
		c = c - a;
		if (c < 0) c = 40+c;
		ans += b * steps;
		c = c - b;
		if (c < 0) c = 40+c;
		ans += (40-c)*steps;

		cout << ans << endl;
	}
}