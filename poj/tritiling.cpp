#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int n;
	while (cin >> n) {
		if (n== -1) break;

		long long d[31], a[31];
		d[1] = a[0] = 0;
		a[1] = d[0] = 1;

		for (int i=2; i<=30; i++) {
			d[i] = d[i-2] + 2*a[i-1];
			a[i] = d[i-1] + a[i-2];
		}

		cout << d[n] << endl;
	}
}