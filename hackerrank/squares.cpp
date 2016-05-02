#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >>t;
    
    while(t--) {
        int a,b;
        cin >> a >> b;
        
        int start = sqrt(a), finish = sqrt(b);
        if (pow(start, 2) != a) start++;
        
        cout << finish-start+1 <<endl;
    }
    return 0;
}
