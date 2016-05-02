#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t,z;
	cin >> t;
	int five;
	for (int i=0; i<t; i++) {
		int n;
		z= 0;
		five = 5;
		cin >> n;
		while (true) {
			if (five <= n) {
				z += (n/five);
				five *= 5;
			}
			else break;
		}
		cout << z << endl;
	}
}
