#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector< ii > vii;


#define INF 1000000000
#define EPS 1e-9
#define fore(i, l, n) for (int i=int(l); i<n; i++)
#define forn(i, n) fore(i, 0, n)
#define pb push_back
#define	mp make_pair

#define MAX 100000

struct Interval {
	int left, right;
	Interval() {}
	Interval(int l, int r) {
		this->left = l;
		this->right = r;
	}

	bool operator < (const Interval &i) const {
		return (i.left == left) ? (right > i.right) : (left < i.left);
	}
};

Interval inter[MAX];

int main() {
	int t;
	cin >> t;
	while (t--) {
		int m;
		cin >> m;
		int total = 0;
		while (true) {
			int temp_l, temp_r;
			cin >> temp_l >> temp_r;
			if (temp_l || temp_r) {
				inter[total] = Interval(temp_l, temp_r);
				total++;
			}
			else break;
		}
		sort(inter, inter + total);
		int count = 0;
		int leftEnd = -50001;
		int rightEnd = 50001;
		int j = -1, ans = 0;
		bool found = false;
		vii an;
		while (j < total) {
			if (inter[j+1].right > 0) {
				if (inter[j+1].left <= 0) {
					leftEnd = inter[j+1].left;
					rightEnd = inter[j+1].right;
					while (j < total && inter[j+1].left <= 0) {
						if (inter[j+1].right > rightEnd) {
							leftEnd = inter[j+1].left;
							rightEnd = inter[j+1].right;
						}
						j++;
					}
					found = true;
				}
				else if (found) {
					found = false;
					int initRightEnd = rightEnd;
					while (j < total && inter[j+1].left <= initRightEnd) {
						if (inter[j+1].right > rightEnd) {
							leftEnd = inter[j + 1].left;
							rightEnd = inter[j + 1].right;
							found = true;
						}
						j++;
					}
				}
				else {
					break;
				}
				if (found) {
					count++;
					an.pb(mp(leftEnd, rightEnd));
				}
				else break;
				if ( rightEnd >= m) break;
			}
			else j++;
		}
		if (rightEnd < m) found = false;
		if (found) {
			cout << count << endl;
			for (int i=0; i<an.size(); i++) {
				cout << an[i].first << " " << an[i].second << endl;
			}
		}
		else {
			cout << 0 << endl;
		}
		cout << endl;
	}
}