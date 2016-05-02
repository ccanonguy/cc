#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >>t;
	
	while (t--) {
		string tcase;
		bool yes = true;
		cin >> tcase;
		int length = tcase.length();
		for (int i=0; i<length/2; i++) {
			if (tcase[i] != tcase[length-1-i]) {
				cout << "NO" << endl;
				yes = false;
				break;
			}
			if (tcase[i] != '1' && tcase[i] != '0' && tcase[i] != '8') {
				cout << "NO" << endl;
				yes = false;
				break;
			}
		}
		if (yes){
		if (tcase[length/2] != '1' && tcase[length/2] != '0' && tcase[length/2] != '8') {
			cout << "NO" << endl;
			yes = false;
		}
		}
		if (yes) {
			cout << "YES" << endl;
		}
	}
}
