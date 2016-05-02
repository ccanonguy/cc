#include <bits/stdc++.h>
using namespace std;

long long int left(long long int n) {
	if (n == 0) return 0;
	if (n/12 == 1) return 1;
	return left(n/2) + left(n/3) + left(n/4);
}

long long int max(long long int n) {
	if (n >= 12) {
		long long int sum = n+(n/12);
		sum += left(n/2) + left(n/3) + left(n/4);
		return sum;
	}
	else {
		return n;
	}
}

int main() {
	long long int n;
	while(cin >> n) {
		cout << max(n) << endl;
	}
}
