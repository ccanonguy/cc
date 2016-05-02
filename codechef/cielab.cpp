#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	int ans = a-b;
	ans /= 10;
	if (ans != 0) cout << ans;
	cout << "2" << endl;
}
