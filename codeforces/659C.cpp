#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int m;
	cin >> m;
	int j = 2*pow(10,5);
	bool arr[j] = {false};
	for (int i=0; i<n; i++) {
		int temp;
		cin >> temp;
		if (temp < 2*pow(10,5))
			arr[temp] = true;
	}
	vector<int> result;
	long long ans = 0;
	for (int i=1; i<2*pow(10,5); i++) {
		if (i>m) break;
		if (ans + i <= m) {
			if (!arr[i]) {
				result.push_back(i);
				ans += i;
			}
		}
		else break;
	}
	cout << result.size() << endl;
	for (int i=0; i<result.size(); i++) cout << result[i] << " ";
}
