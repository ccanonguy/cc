#include <iostream>
#include <cmath>
using namespace std;

int loser = 0;

int optimalSol(int a, int b) {
	if (((a/2)%2 == 0 && (b/2)%2 != 0) || ((b/2)%2 == 0 && (a/2)%2 != 0) || ((b/2)%2 != 0 && (a/2)%2 != 0)) {
		return 1;
	}
	else {
		return 
	}
}

void split(int a, int b) {
	if (a%2 != 0 && b%2 != 0) return;
	if (a%2 == 0 && b%2 != 0) {
		loser = (loser+1)%2;
		split(a/2, a/2);
	}
	else if (a%2 != 0 && b%2 == 0) {
		loser = (loser+1)%2;
		split(b/2, b/2);
	}
	else {
		int sol = optimalSol(a,b);
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a,b;
		cin >> a >> b;
		split(a,b);
		cout << loser;
	}
}
