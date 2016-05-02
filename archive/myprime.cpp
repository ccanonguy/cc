#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int n;
	cin >> n;
	int s[n];
	
	for (int i=0; i<n; i++) cin >> s[i];
	
	int j=1;
	for (int i=0; i<n; i++) {
		bool prime = true;
		for (int k=0; k<n; k++) {
			if (k==i) continue;
			
			if(s[i]%s[k] == 0) {
				prime = false;
				break;
			}
		}
		
		if(prime) {
			if(j==1) {
				cout << s[i];
				j=0;
			}
			else cout << " " << s[i];
		}
	}
}
