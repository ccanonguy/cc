#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		int min = 101, max = -5;
		for (int i=0; i<n; i++) {
			cin >> arr[i];
			if (arr[i] < min) min = arr[i];
			if (arr[i] > max) max = arr[i];
		}

		cout << 2*(max-min) << endl;
	}
}