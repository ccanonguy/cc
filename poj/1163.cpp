#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n][n];
	for (int i=1; i<=n; i++) {
		for(int j=0; j<i; j++) {
			cin >> arr[n-i][j];
		}
	}

	
}