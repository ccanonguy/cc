#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	std::vector<int> v(n);
	for (int i=0; i<n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	int count = 0 ;
	bool found = false;
	for (int i=0; i<n; i++) {
		count = 0;
		for (int j=i+1; j<n; j++) {
			if (v[j] == v[j-1]) continue;
			if ((v[j] - v[i]) > 2) break;
			if ((v[j] - v[i]) <=2) count++;
		}
		if (count == 2) {
			cout << "YES" << endl;
			found = true;
			break;
		}
	}

	if (!found) cout << "NO";
}