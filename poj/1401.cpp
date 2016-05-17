#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		int five = 5;
		int ans = 0;
		while (n/five) {
			ans += n/five;
			five *= 5;
		}
		cout << ans << endl;
	}
}