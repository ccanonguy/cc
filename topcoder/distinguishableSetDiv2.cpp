#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

class DistinguishableSetDiv2 {
    int count(vector <string> answer) {
        int ans= 0;
        int m = answer[0].length();
        int n = answer.size();
        unsigned int pow_set_size = pow(2, m);
        //std::pair<std::set<int>::iterator,bool> ret;
            int counter, j;
            for(counter = 0; counter < pow_set_size; counter++)
            {
                set<string> k;
                bool okay = true;
                for (int i=0; i<n; i++) {
                    string s;
                    for(j = 0; j < m; j++)
                    {
                        if(counter & (1<<j))
                            s += answer[i][j];
                    }
                    auto ret = k.insert(s);
                    if (ret.second == false)
                        okay = false;
                }
                if (okay)
                    ans++;
            }
        return ans;
    }
};



int main() {
    DistinguishableSetDiv2 a;
    vector <string> ans;
    cout << a.count(ans) << " " << b;
}