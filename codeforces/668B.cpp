/*
 * 
 * 
 * http://www.codeforces.com/problemset/problem/668/B
 * 
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q;
	cin >> n >> q;
	int sum=0;
	int swap=0;
	bool willSwap = false;
	/*while (q--) {
		int temp;
		cin >> temp;
		if (temp == 1) {
			int s;
			cin >> s;
			sum += s;
		}
		else {
			swap++;
		}
	}
	if (swap%2 == 1) willSwap = true;
	sum %= n;
	if (sum < 0) sum = n + sum;
	cout << sum << endl;
	if (willSwap) {
		if (sum == 0) {
			for (int i=1; i<=n; i++) {
				if(i%2 == 0) cout << i-1 << " ";
				else cout << i+1 << " ";
			}
		}
		else {
			for (int i=1; i<=sum; i++) {
				if(i%2 == 0) cout << n-sum + i -1<< " ";
				else cout << n - sum + 1 + i<< " ";
			}
			for (int i=sum+1; i<=n; i++) {
				if(i%2 == 0) cout << i-sum - 1 << " ";
				else cout << i-sum + 1 << " ";
			}
		}
	}
	else {
		if (sum==0) {
			for (int i=0; i<n; i++) cout << i+1 << " ";
		}
		else {
			for (int i=n-sum+1; i<=n; i++) {
				cout << i << " ";
			}
			for (int i=1; i<n-sum+1; i++) {
				cout << i << " ";
			}
		}
	}*/
	
	//wrong logic
	//breaks symmetry
	//test case 3
}
