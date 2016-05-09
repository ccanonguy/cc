#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,k;
	cin >> n >> k;
	vector<long long> iden(n);
	for (int i=0; i<n; i++) {
		cin >> iden[i];
	}
	long long last = floor((sqrt(8*k + 1) - 1)/2);
	long long rem = k - (last*(last+1))/2 - 1;
	if (rem == -1) rem = last - 1;
	cout << iden[rem] << endl;
}
