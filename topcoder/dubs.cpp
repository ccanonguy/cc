#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
class Dubs {
    public:
    long long count(long long L, long long R) {
    ll dif = R-L;
        ll count = dif/10;
        ll remaining = dif%10;
        for (int i=1; i<=remaining; i++) {
          ll check = R-remaining + i;
            check = check%100;
            if (check%10 == (check/10)) {
              count++;
            }
        }
        ll check = L%100;
        if (check%10 == check/10) count++;
        check = R%100;
        if (check%10 == check/10 && L != R && remaining == 0) count++;
        return count;
    }
};