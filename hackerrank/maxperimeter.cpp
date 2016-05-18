#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;
	std::vector<long long> v(n);
	for (int i=0; i<n; i++) {
		cin >> v[i];
	}

	int max = -999;
	sort(v.begin(), v.end());
	long long ans[3];
	for (int i=0; i<n-2; i++) {
		for (int ii=i+1; ii<n-1; ii++) {
			for (int iii=ii+1; iii<n; iii++) {
				if ((v[i] + v[ii]) > v[iii] && (v[ii] + v[iii]) > v[i] && (v[i] + v[iii]) > v[ii]) {
					int temp = v[i] +v[ii] + v[iii];
					if (temp > max) {
						ans[0] = v[i];
						ans[1] = v[ii];
						ans[2] = v[iii];
						max = temp;
					}
				}
			}
		}
	}
	sort(ans, ans+3);
	if (max != -999) {
		int i=3;
		while (i--) {
			cout << ans[2-i] << " ";
		}
	}
	else cout << -1;
}