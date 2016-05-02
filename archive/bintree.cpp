#include <iostream>
#include <cmath>
using namespace std;

int path = 0;

void findRoute(int a, int b) {
	if (a > b) {
		int temp = b;
		b=a;
		a=temp;
	}
	if (a<b) {
		if (a == 1 && b == 2) {
			path++;
			return;
		}
		if (b%2 !=0) {
			findRoute(a,(b-1)/2);
			path++;
		}
		else {
			findRoute(a,b/2);
			path++;
		}
	}
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		int a,b;
		cin >> a >> b;
		findRoute(a,b);
		cout << path << endl;
		path = 0;
	}
}
