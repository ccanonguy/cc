#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        bool okay = true;
        
        auto threes = 0;
        auto fives = 3*(n/3);
        if (fives <= n) {
			if (n%3 == 1){
				fives -= 9;
				threes = 10;
			}
			else if(n%3 == 2) {
				fives -= 3;
				threes = 5;
			}
		}
		else {
			cout << -1;
		}
		
		if (fives >= 0) {
			while (fives--) cout << 5;
			while (threes--) cout << 3;
		}
		else cout << -1;
		cout << endl;
    }
    return 0;
}
