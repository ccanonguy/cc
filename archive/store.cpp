#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n; // number of test cases
	cin >> n;
	
	while(n--) {
		int c,l; // c= credit given, l = number of items
		cin >> c >> l;
		
		int p[l]; // price array
		for (int i=0; i<l; i++) {
			cin >> p[i];
		}
		
		
		//sorting: bubble sort
		for (int i=0; i<l; i++) {
			for (int j=i+1; j<l; j++) {
				if (p[i] > p[j]) {
					int temp = p[j];
					p[j] = p[i];
					p[i] = temp;
				}
			}
		}
		
		for (int i=0; i<l; i++) cout << p[i] << " " << endl;
		
		int ans1 = 1, ans2 = l;
		bool found = false;
		//finding index
		for (int i=l-1; i>=0; i--) {
			if(p[i] < c) {
				for (int j=0; j<i; j++) {
					if ((p[i] + p[j]) > c) break;
					else if ((p[i] + p[j]) == c) {
						ans1 = j +1;
						ans2 = i +1;
						found = true;
						break;
					}
				}
			}
			
			if (found) break;
		}
		
		cout << "Case #" << n+1 << ": " << ans1 << " " << ans2 << endl;
	}
}
