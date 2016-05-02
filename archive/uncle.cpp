#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int test;
	cin >> test;
	for (int i=0; i<test; i++) {
		int n;
		int *play;
		int special;
		cin >> n;
		play = new int[n];
		for (int j = 0; j<n; j++) {
			cin >> play[j];
		}
		cin >> special;
		
		//sorting starts
		for (int j=0; j<n-1; j++) {
			for (int l=j+1; l<n; l++) {
				if (play[l] < play[j]) {
					int temp = play[j];
					play[j] = play[l];
					play[l] = temp;
					if (l == (special -1)) {
						special = j+1;
					}
					else if (j== (special -1)) {
						special = l+1;
					}
				}
			}
		}
		cout << special << endl;
	}
}
