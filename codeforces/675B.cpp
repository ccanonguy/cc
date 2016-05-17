#include <bits/stdc++.h>
using namespace std;


int main () {
	int n,a,b,c,d;
	cin >> n >> a >> b >> c >> d;
	int ans;

	if ((b-c+1) > n || (a+b-c-d+1) > n || (a-d+1) > n) {
		cout << 0;
		return 0;
	}
	ans = min((min(min(n, n+b-c) -b +c, min(n,n+a+b-c-d) -a-b+c+d), min(n, a-d+n)- a +d),n);
	//ans = n*(min(n, n+b-c) -b +c)*(min(n,n+a+b-c-d) -a-b+c+d)*(min(n, a-d+n)- a +d);

	cout << ans;
}