/*
 * 
 * 
 * https://www.hackerrank.com/challenges/larrys-array
 * 
 * 
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i=0; i<n; i++) cin >> arr[i];
		for (int i=1; i<=n-1; i++) {
			int j=0;
			while (arr[j] != i) j++;
			while (j != (i-1)) {
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				j--;
			}
		}
		bool done = false;
		if (arr[n-1] == n) done = true;
		if(done) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

/*
 * 
 * TLE
 * BST
 * 
 * 
 */
