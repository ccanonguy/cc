#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long d[1001];
    d[0]=1;
    d[1]=2;
    d[2]=5;
    d[3]=13;
    for(int i=4;i<=n;i++)
    {
        d[i] = 2*d[i-1]+d[i-2]+d[i-3];
    }
    cout << d[n] << endl;
}