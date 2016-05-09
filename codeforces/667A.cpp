#include <bits/stdc++.h>
using namespace std;

int main() {
	double d,h,v,e, PI = acos(-1);
	cin >> d >> h >> v >> e;
	double t = h/(((4*v)/(PI*pow(d,2)))-e);
	if (t > 1e4 || t < 0) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl << t;
	}
}
