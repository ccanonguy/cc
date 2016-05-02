#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = (n/1), i = 2, next = ((ans/2) - 1);
	
	while (next > 0) {
		i++;
		ans += next;
		next = (ans/(i+1)) - i;
	}
	
	cout << ans << endl;
}
