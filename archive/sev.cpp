#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		float a,h;
		float theta;
		cin >> a >> h >> theta;
		
		float ans;
		const float pi = 3.141592653589793;
		theta = (pi/180)*theta;
		
		if (h/tan(theta) <= a) {
			ans = ceil(h*h/(2.0*a*tan(theta)));
			//ans = tan(theta);
		}
		else {
			ans = ceil(h - (a/2.0)*tan(theta));
		}
		
		cout << ans << endl;
	}
}
