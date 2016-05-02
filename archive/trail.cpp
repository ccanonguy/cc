#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	int z= 0;
	int five = 5;
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
