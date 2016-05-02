#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i=0; i<n; i++) {
			cin >> arr[i];
		}
		int streak = 0, wrong = 0;
		for (int i=1; i<n+1; i++) {
			if (i != n) {
				if (arr[i] != arr[i-1]) {
					streak++;
				}
				else {
					if (streak) wrong = wrong +streak +1;
					streak = 0;
				}
			}
			else {
				if (streak) wrong = wrong +streak +1;
				streak = 0;
			}
		}
		cout << wrong << endl;
	}
}
