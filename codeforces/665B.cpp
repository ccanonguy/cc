#include <bits/stdc++.h>
using namespace std;

int n,k,m;
int *p;
int ans = 0;

void update(int i) {
	for (int j=i; j>0; j--) {
		int t = p[j-1];
		p[j-1] = p[j];
		p[j] = t;
	}
}

int pos(int w) {
	int resu;
	int i=0;
	while (p[i] != w) i++;
	resu = i+1;
	update(i);
	return resu;
}

int main () {
	cin >> n >> m >> k;
	p = new int[k];
	for (int i=0; i<k; i++) cin >> p[i];
	//for (int i=0; i<k; i++) cout << p[i];
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			int wan;
			cin >> wan;
			ans += pos(wan);
			//for (int i=0; i<k; i++) cout <<  p[i] << " ";
		}
		//cout << endl;
	}
	cout << ans;
}