#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a,b;
		cin >> a >> b;
		if (b == 0 || a == 1) {
			cout << 1 <<endl;
			continue;
		}
		a = a%10;
		int ans;
		if (a== 0) {
			cout << 0 << endl;
			continue;
		}
		else if (a == 1) {
			cout << 1 <<endl;
			continue;
		}
		else if (a == 2 || a == 3 || a == 7 || a == 8) {
			b = b%4;
			if (b == 0) {
				ans = pow(a,4);
				cout << ans%10 <<endl;
				continue;
			}
			else {
				ans = pow(a,b);
				cout << ans%10 <<endl;
				continue;
			}
		}
		else if (a == 5 || a == 6) {
			cout << a << endl;
			continue;
		}
		else if (a == 4 || 9) {
			b = b%2;
			if (b == 0) {
				ans = pow(a,2);
				cout << ans%10 <<endl;
				continue;
			}
			else {
				ans = pow(a,b);
				cout << ans%10 <<endl;
				continue;
			}
		}
		
	}
}
