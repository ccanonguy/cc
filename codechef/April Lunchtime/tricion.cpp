#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	//while (true) {
		long long n;
		cout << n<< endl;
		cin >> n;
		if (n == 1 || n==2) {
			cout << 1 << endl;
		}
		else if(n == 3) {
			cout << 2 << endl;
		}
		else {
			//long long ans = ceil((sqrt(8*n - 3) - 3)/2);
			long long ans = (sqrt(1+ 8*n) -1)/2;
			cout << (int) ans << endl;
		}
	}
}
