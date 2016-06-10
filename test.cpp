#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int totalChars = 2*n -1;
	for (int i=1; i<=n; i++) {
		int spaces = totalChars - 2*i +1;
		spaces /= 2;
		for (int j=1; j<=spaces; j++) {
			cout << " ";
		}
		for (int j=1; j<=(2*i-1); j++) {
			if (j%2 == 1)
				cout << "*";
			else
				cout << " ";
		}
		for (int j=1; j<=spaces; j++) {
			cout << " ";
		}
		cout << endl;
	}
}