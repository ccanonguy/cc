#include <bits/stdc++.h>
using namespace std;

#define fore(i,l,n) for(int i = int(l); i<n; i++)
#define forn(i,n) fore(i,0,n)

int main() {
	long long int p,q;
	cin >> p >> q;
	long long int digit = 0;
	bool notwritten = false;
	fore(r, p, q+1) {
		digit = 0;
		long long int n=r;
		long long int imgN = pow(r,2);
		while(n!=0) {
			n /= 10;
			digit++;
		}
		if ((long long int)((imgN/pow(10,digit))) + (long long int)((imgN%((long long int)pow(10,digit)))) == r) {
			cout << r << " ";
			notwritten = true;
		}
	}
	if(!notwritten) cout << "INVALID RANGE";
}
