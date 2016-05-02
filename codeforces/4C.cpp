#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, int> requests;
	for (int i=0; i<n; i++) {
		string r;
		cin >> r;
		if (requests.count(r) == 0) {
			requests[r] = 1;
			cout << "OK";
		}
		else {
			cout << r + to_string(requests[r]);
			requests[r]++;
		}
		cout << endl;
	}
}
