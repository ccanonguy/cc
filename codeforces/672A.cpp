#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string arr = "";
	for (int i=0; i<1000; i++) {
		arr.append(to_string(i+1));
	}
	cout << arr[n-1];
}