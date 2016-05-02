#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i=0; i<n; i++) cin >> arr[i];
	if (arr[0] == 0) {
		cout << 0;
		return 0;
	}
	int score = arr[k-1];
	int j = k;
	if (score) {
		while(arr[j] == score) j++;
	}
	else {
		j = j-2;
		while (arr[j] == 0) j--;
		j++;
	}
	cout << j;
}
