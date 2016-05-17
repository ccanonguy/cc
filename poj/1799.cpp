#include <iostream>
#include <cmath>
using namespace std;

#define M_PI 3.14159265358979323846


int main () {
	int t;
	cin >> t;
	int i= 1;
	while (t--){
		double r;
		int n;
		cin >> r >> n;

		double ans = r*(sin(M_PI/n)/(1+sin(M_PI/n)));
		ans = round(ans*1000)/1000;
		cout << "Scenario #" << i << ":" << endl;
		cout << ans << endl;
		cout << endl;
		i++;
	}
}