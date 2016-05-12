#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}

	bool done = false;
	int a=15;
	for (int i=0; i<n; i++) {
		if (a >= arr[i]) {
			a = arr[i] + 15;
		}
		else {
			done = true;
			cout << a;
			break;
		}
	}

	if (!done) {
		if (a > 90) cout << 90;
		else cout << a;
	}

}