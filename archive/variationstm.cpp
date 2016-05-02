#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i=0; i<t; i++) {
		int perm = 1;
		string c;
		cin >> c;
		for (int j=0; j<c.size(); j++) {
			if (c[j] == 'A' || c[j] == 'a' || c[j] == 'E' || c[j] == 'e' || c[j] == 'I' || c[j] == 'i' || c[j] == 'O' || c[j] == 'o' || c[j] == 'S' || c[j] == 's') {
				perm *= 3;
			}
			else {
				perm *= 2;
			}
		}
		cout << perm <<endl;
	}
}
