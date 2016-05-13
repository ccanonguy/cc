#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll n;
	cin >> n;

	ll fixed = n/7;
	ll vari = n%7;

	ll mini = fixed*2;
	ll maxi = fixed*2;

	if (vari >= 1 ) {
		if (vari == 1) maxi++;
		else {
			maxi += 2;
			if (vari == 6) mini++;
		}
	}

	cout << mini << " " << maxi;
}