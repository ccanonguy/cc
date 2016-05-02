#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (true) {
		if (n == -1) break;
		
		vector<int> data(n);
		int average =0;
		for (int i=0; i<n; i++) {
			cin >> data[i];
			average += data[i];
		}
		int temp = average;
		average /= n;
		if ((average*n) == temp) {
			int moves = 0;
			for (int i=0; i<n; i++) {
				if (data[i] > average)
					moves += data[i] - average;
			}
			
			cout << moves << endl;
		}
		else cout << -1 <<endl;
		
		cin >> n;
	}
}
