#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	std::vector<long long> arr(n);
	for (int i=0; i<n; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());
	for (int i=0; i<n/2; i++) cout << arr[i] << " " << arr[n-1-i] << " ";
	if (n%2 == 1) cout << arr[n/2];
}