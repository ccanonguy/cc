#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


#define INF 1000000000
#define EPS 1e-9
#define fore(i, l, n) for (int i=int(l); i<n; i++)
#define forn(i, n) fore(i, 0, n)
#define pb push_back
#define	mp make_pair

int main() {
	int a,b;
	cin >> a >> b;
	if (b > a) {
		int temp;
		temp = a;
		a=b;
		b=temp;
	}
	int n=ceil(abs(a-b)/3.0);
	int ans = n;
	while (n && a && b) {
		a = a-2*n;
		b = b+n;
		if (b > a) {
			int temp;
			temp = a;
			a=b;
			b=temp;
		}
		int n=ceil(abs(a-b)/3.0);
		cout << a << b << endl;
		ans += n;
	}

	cout << ans;
}


//wrong logic