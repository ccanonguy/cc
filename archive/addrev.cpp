#include <iostream>
#include <cmath>
using namespace std;

int rev (int number) {
	int image = number, digits = 0, new_num=0;
	while (image) {
		image /= 10;
		digits++;
	}
	if (digits == 1) {
		return number;
	}
	while (number) {
		int next = number%10;
		new_num += next*(pow(10,digits-1));
		number /= 10;
		digits--;
	}
	return new_num;
}

int main() {
	int n;
	cin >> n;
	for (int i=0; i < n; i++) {
		int a,b;
		cin >> a >> b;
		a= rev(a);
		b= rev(b);
		cout << rev(a+b) << endl;
	}
}
