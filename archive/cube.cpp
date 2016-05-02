#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		long long int n;
		cin >> n;
		//cout << n;
		long long int ans;
		if (n == 1) {
			cout << "1" <<endl;
			continue;
		}
		//ans = 2*pow(n,2) + 2*(n-2)*n + 2*pow(n-2,2);
		ans = n*n*n - (n-2)*(n-2)*(n-2);
		cout << ans << endl;
	}
}
