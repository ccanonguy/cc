#include <bits/stdc++.h>
using namespace std;

int main() {
	cout << 1 << endl << flush;
	cout << 2 << " " << 1 << " " << 2 << endl << flush;
	cout << 2 << " " << 3 << " " << 4 << endl << flush;
	int weight1;
	cin >> weight1;
	if (weight1) {
		int weight2;
		if (weight1 > 0) {
			cout << 1 << endl << flush;
			cout << 1 << " " << 1 << endl << flush;
			cout << 1 << " " << 2 << endl << flush;
			cin >> weight2;
			if (weight2 > 0) {
				cout << 2 << endl << flush;
				cout << 1 << endl << flush;
			}
			else {
				cout << 2 << endl << flush;
				cout << 2 << endl << flush;
			}
		}
		else {
			cout << 1 << endl << flush;
			cout << 1 << " " << 3 << endl << flush;
			cout << 1 << " " << 4 << endl << flush;
			cin >> weight2;
			if (weight2 > 0) {
				cout << 2 << endl << flush;
				cout << 3 << endl << flush;
			}
			else {
				cout << 2 << endl << flush;
				cout << 4 << endl << flush;
			}
		}
	}
	else {
		cout << 2 << endl << flush;
		cout << 5 << endl << flush;
	}
	return 0;
}
