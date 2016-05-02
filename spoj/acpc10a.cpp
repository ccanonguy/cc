#include <bits/stdc++.h>
using namespace std;

int main() {
	while (true) {
		int a,b,c;
		cin >> a >> b >> c;
		
		if (a == 0 &&  b == 0 && c == 0) break;
		
		if(2*b == (a+c)) cout << "AP" << " " << c + (b-a);
		else cout << "GP" << " " << c*(b/a);
		cout << endl;
	}
}
